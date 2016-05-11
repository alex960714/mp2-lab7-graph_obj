#pragma once
#include "THeadList.h"
#include "T_Stack.h"

namespace Graph_obj
{
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	class TObject
	{
	protected:
		bool Visible, Active;
	public:
		virtual void Draw(Graphics^ gr) = 0;
		virtual void Hide(Graphics^ gr) = 0;
		virtual void MoveTo(Graphics^ gr, int x1, int y1) = 0;
		virtual void Move(Graphics^ gr, int dx, int dy) = 0;

		virtual int GetX(Graphics^ gr) = 0;
		virtual int GetY(Graphics^ gr) = 0;
	};

	class TPoint :public TObject
	{
	protected:
		int x, y;
	public:
		TPoint(int _x, int _y)
		{
			x = _x;
			y = _y;
			Active = false;
			Visible = false;
		}
		TPoint() {};

		virtual ~TPoint() {}

		virtual void Draw(Graphics^ gr)
		{
			gr->DrawEllipse(Pens::Black, x - 1, y - 1, 3, 3);
			Active = true;
			Visible = true;
		}

		virtual void Hide(Graphics^ gr)
		{
			gr->DrawEllipse(Pens::White, x - 1, y - 1, 3, 3);
			Visible = false;
		}

		virtual void MoveTo(Graphics^ gr, int x1, int y1)
		{
			Hide(gr);
			x = x1;
			y = y1;
			Draw(gr);
		}

		virtual void Move(Graphics^ gr, int dx, int dy)
		{
			Hide(gr);
			x += dx;
			y += dy;
			Draw(gr);
		}

		virtual int GetX(Graphics^ gr) { return x; }
		virtual int GetY(Graphics^ gr) { return y; }
	};

	class TCircle :public TPoint
	{
	protected:
		int R;
	public:
		TCircle(int _x, int _y, int r)
		{
			x = _x;
			y = _y;
			R = r;
			Active = false;
			Visible = false;
		}

		virtual ~TCircle() {}

		virtual void Draw(Graphics^ gr)
		{
			gr->DrawEllipse(Pens::Black, x - R, y - R, 2*R, 2*R);
			Active = true;
			Visible = true;
		}

		virtual void Hide(Graphics^ gr)
		{
			gr->DrawEllipse(Pens::White, x - R, y - R, 2*R, 2*R);
			Visible = false;
		}

		virtual void MoveTo(Graphics^ gr, int x1, int y1)
		{
			Hide(gr);
			x = x1;
			y = y1;
			Draw(gr);
		}

		virtual void Move(Graphics^ gr, int dx, int dy)
		{
			Hide(gr);
			x += dx;
			y += dy;
			Draw(gr);
		}

		virtual int GetX(Graphics^ gr) { return x; }
		virtual int GetY(Graphics^ gr) { return y; }
	};

	class TLine : public TPoint
	{
	protected:
		int x1, y1;
	public:
		TLine(int _x, int _y, int _x1, int _y1)
		{
			x = _x;
			y = _y;
			x1 = _x1;
			y1 = _y1;
			Active = false;
			Visible = false;
		}

		virtual ~TLine() {}

		virtual void Draw(Graphics^ gr)
		{
			gr->DrawLine(Pens::Black, x, y, x1, y1);
			Active = true;
			Visible = true;
		}

		virtual void Hide(Graphics^ gr)
		{
			if (Active)
			{
				gr->DrawLine(Pens::White, x, y, x1, y1);
				Visible = false;
			}
		}

		virtual void MoveTo(Graphics^ gr, int x2, int y2)
		{
			Hide(gr);
			x = x2;
			y = y2;
			x1 += (x2 - x);
			y1 += (y2 - y);
			Draw(gr);
		}

		virtual void Move(Graphics^ gr, int dx, int dy)
		{
			Hide(gr);
			x += dx;
			y += dy;
			x1 += dx;
			y1 += dy;
			Draw(gr);
		}

		virtual int GetX(Graphics^ gr) { return (x+x1)/2; }
		virtual int GetY(Graphics^ gr) { return (y+y1)/2; }
	};

	class TRectangle : public TPoint
	{
	protected:
		int x1, y1;
	public:
		TRectangle(int _x, int _y, int _x1, int _y1)
		{
			x = _x;
			y = _y;
			x1 = _x1;
			y1 = _y1;
			Active = false;
			Visible = false;
		}

		virtual ~TRectangle() {}

		virtual void Draw(Graphics^ gr)
		{
			if (x1 > x)
			{
				if (y1 > y)
					gr->DrawRectangle(Pens::Black, x, y, x1 - x, y1 - y);
				else
					gr->DrawRectangle(Pens::Black, x, y1, x1 - x, y - y1);
			}
			else
			{
				if (y1 > y)
					gr->DrawRectangle(Pens::Black, x1, y, x - x1, y1 - y);
				else
					gr->DrawRectangle(Pens::Black, x1, y1, x - x1, y - y1);
			}
			Active = true;
			Visible = true;
		}

		virtual void Hide(Graphics^ gr)
		{
			if (Active)
			{
				if (x1 > x)
				{
					if (y1 > y)
						gr->DrawRectangle(Pens::White, x, y, x1 - x, y1 - y);
					else
						gr->DrawRectangle(Pens::White, x, y1, x1 - x, y - y1);
				}
				else
				{
					if (y1 > y)
						gr->DrawRectangle(Pens::White, x1, y, x - x1, y1 - y);
					else
						gr->DrawRectangle(Pens::White, x1, y1, x - x1, y - y1);
				}
			}
			Visible = false;
		}

		virtual void MoveTo(Graphics^ gr, int x2, int y2)
		{
			Hide(gr);
			x = x2;
			y = y2;
			x1 += (x2 - x);
			y1 += (y2 - y);
			Draw(gr);
		}

		virtual void Move(Graphics^ gr, int dx, int dy)
		{
			Hide(gr);
			x += dx;
			y += dy;
			x1 += dx;
			y1 += dy;
			Draw(gr);
		}

		virtual int GetX(Graphics^ gr) { return Math::Min(x,x1); }
		virtual int GetY(Graphics^ gr) { return Math::Min(y,y1); }
	};

	class TGroup : public TObject
	{
	protected:
		THeadList <TObject*> list;
	public:
		TGroup() : list()
		{}

		virtual ~TGroup() {}

		virtual void Draw(Graphics^ gr)
		{
			for (list.Reset(); !list.IsEnd(); list.GoNext())
			{
				list.GetCurrVal()->Draw(gr);
			}
		}

		virtual void Hide(Graphics^ gr)
		{
			for (list.Reset(); !list.IsEnd(); list.GoNext())
			{
				list.GetCurrVal()->Hide(gr);
			}
		}

		virtual void Move(Graphics^ gr, int dx, int dy)
		{
			for (list.Reset(); !list.IsEnd(); list.GoNext())
			{
				list.GetCurrVal()->Move(gr, dx, dy);
			}
		}
		virtual void MoveTo(Graphics^ gr, int x1, int y1) {}

		void Insert(TObject *p)
		{
			list.InsFirst(p);
		}

		virtual int GetX(Graphics^ gr)
		{
			int x = 0, i = 0;
			for (list.Reset(); !list.IsEnd(); list.GoNext())
			{
				x += list.GetCurrVal()->GetX(gr);
				i++;
			}
			if (i)
				return x / i;
			else
				return 0;
		}
		virtual int GetY(Graphics^ gr)
		{
			int y = 0, i = 0;
			for (list.Reset(); !list.IsEnd(); list.GoNext())
			{
				y += list.GetCurrVal()->GetX(gr);
				i++;
			}
			if (i)
				return y / i;
			else
				return 0;
		}
	};

	class TChart : public TObject
	{
	protected:
		TObject *begin, *end;
		struct TChartLine
		{
			TChart *pLine;
			TPoint *pFp, *pLp;
			bool IsVisited;
			bool IsReturned;
		};
		T_Stack <TChartLine> st;
	public:
		TChart(int x1, int y1, int x2, int y2) : st(100)
		{
			TObject *p1 = new TPoint(x1, y1);
			TObject *p2 = new TPoint(x2, y2);
			SetFirst(p1);
			SetLast(p2);
		}

		TChart(TObject *p, TObject *p3) : st(100)
		{
			TObject *p1 = (TPoint*)p;
			TObject *p2 = (TPoint*)p3;
			SetFirst(p1);
			SetLast(p2);
		}
		~TChart() {}

		TObject* GetFirst() { return begin; }
		TObject* GetLast() { return end; }
		void SetFirst(TObject *p) { begin = p; }
		void SetLast(TObject *p) { end = p; }

		virtual void Draw(Graphics^ gr)
		{
			TChartLine CurrLine;
			TPoint *q;
			TObject *t;
			st.Clear();
			CurrLine.pLine = this;
			CurrLine.pFp = CurrLine.pLp = NULL;
			CurrLine.IsVisited = false;
			st.Push(CurrLine);
			while (!st.IsEmpty())
			{
				CurrLine = st.Pop();
				while (CurrLine.pFp == NULL )
				{
					t = this->GetFirst();
					q = dynamic_cast <TPoint*>(t);
					if (q != NULL)
					{
						CurrLine.pFp = q;
					}
					else
					{
						st.Push(CurrLine);
						CurrLine.pLine = dynamic_cast <TChart*>(t);
					}
				}
				if (CurrLine.pLp == NULL)
				{
					t = this->GetLast();
					q = dynamic_cast <TPoint*>(t);
					if (q != NULL)
					{
						CurrLine.pLp = q;
					}
					else
					{
						st.Push(CurrLine);
						CurrLine.pLine = dynamic_cast <TChart*>(t);
						CurrLine.pFp = NULL;
						st.Push(CurrLine);
					}
				}
				if ((CurrLine.pFp != NULL) && (CurrLine.pLp != NULL))
				{
					gr->DrawLine(Pens::Black, CurrLine.pFp->GetX(gr), CurrLine.pFp->GetY(gr), CurrLine.pLp->GetX(gr), CurrLine.pLp->GetY(gr));
					if (!st.IsEmpty())
					{
						q = CurrLine.pLp;
						CurrLine = st.Pop();
						if (CurrLine.pFp == NULL)
							CurrLine.pFp = q;
						else
							CurrLine.pLp = q;
						st.Push(CurrLine);
					}
				}
			}
		}

		TObject* DrawRec(Graphics^ gr, TObject *t)
		{
			TPoint *pFp, *pLp;
			TChart *currLine;
			if (dynamic_cast<TPoint*>(t))
				return t;
			currLine = dynamic_cast<TChart*>(t);
			pFp = dynamic_cast<TPoint*>(DrawRec(gr, currLine->GetFirst()));
			pLp = dynamic_cast<TPoint*>(DrawRec(gr, currLine->GetLast()));
			if ((pFp != NULL) && (pLp != NULL))
				gr->DrawLine(Pens::Black, pFp->GetX(gr), pFp->GetY(gr), pLp->GetX(gr), pLp->GetY(gr));
			return pLp;
		}

		TObject* Search(Graphics^ gr, int x2, int y2)
		{
			double dist, distMin=20;
			TChartLine CurrLine;
			TPoint *q;
			TObject *curr = NULL;
			TObject *t;
			st.Clear();
			CurrLine.pLine = this;
			CurrLine.pFp = CurrLine.pLp = NULL;
			CurrLine.IsVisited = false;
			CurrLine.IsReturned = false;
			st.Push(CurrLine);
			while (!st.IsEmpty())
			{
				CurrLine = st.Pop();
				while (CurrLine.pFp == NULL && !CurrLine.IsVisited)
				{
					t = CurrLine.pLine->GetFirst();
					q = dynamic_cast <TPoint*>(t);
					if (q != NULL)
					{
						CurrLine.pFp = q;
						dist = Math::Sqrt(Math::Pow(q->GetX(gr)-x2, 2) + Math::Pow(q->GetY(gr)-y2, 2));
						if (distMin > dist)
						{
							distMin = dist;
							curr = CurrLine.pLine;
						}
					}
					else
					{
						CurrLine.IsVisited = true;
						st.Push(CurrLine);
						CurrLine.pLine = dynamic_cast <TChart*>(t);
						CurrLine.IsVisited = false;
						CurrLine.IsReturned = false;
					}
				}
				if (CurrLine.pLp == NULL && !CurrLine.IsReturned)
				{
					t = CurrLine.pLine->GetLast();
					q = dynamic_cast <TPoint*>(t);
					if (q != NULL)
					{
						CurrLine.pLp = q;
						dist = Math::Sqrt(Math::Pow(q->GetX(gr) - x2, 2) + Math::Pow(q->GetY(gr) - y2, 2));
						if (distMin > dist)
						{
							distMin = dist;
							curr = CurrLine.pLine;
						}
					}
					else
					{
						CurrLine.IsReturned = true;
						st.Push(CurrLine);
						CurrLine.pLine = dynamic_cast <TChart*>(t);
						CurrLine.pFp = NULL;
						CurrLine.IsReturned = false;
						CurrLine.IsVisited = false;
						st.Push(CurrLine);
					}
				}
			}
			if (curr != NULL)
				return curr;
			TObject* p = new TPoint(x2, y2);
			return p;
		}

		virtual void Hide(Graphics^ gr)
		{}

		virtual void MoveTo(Graphics^ gr, int x1, int y1) {}

		virtual void Move(Graphics^ gr, int dx, int dy) {}

		virtual int GetX(Graphics^ gr) { return 0; }

		virtual int GetY(Graphics^ gr) { return 0; }
	};

}