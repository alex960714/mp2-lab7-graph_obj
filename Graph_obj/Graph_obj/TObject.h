#pragma once

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
	};

	class TPoint :public TObject
	{
	protected:
		int x, y;
	public:
		virtual void Draw(Graphics^ gr)
		{
			gr->DrawEllipse(Pens::Black, x - 1, y - 1, 3, 3);
		}

		virtual void Hide(Graphics^ gr)
		{
			gr->DrawEllipse(Pens::White, x - 1, y - 1, 3, 3);
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
	};

	class TCircle :public TPoint
	{
	protected:
		int R;
	public:
		virtual void Draw(Graphics^ gr)
		{
			gr->DrawEllipse(Pens::Black, x - R, y - R, 2*R, 2*R);
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
	};

}