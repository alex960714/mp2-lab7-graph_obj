#pragma once
#include "TObject.h"

namespace Graph_obj {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Ñâîäêà äëÿ MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: äîáàâüòå êîä êîíñòğóêòîğà
			//
		}

	protected:
		/// <summary>
		/// Îñâîáîäèòü âñå èñïîëüçóåìûå ğåñóğñû.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  ôàéëToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ñîõğàíèòüToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  îòğèñîâêàToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ëèíèÿToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  îêğóæíîñòüToolStripMenuItem;
	protected:
		int x1, y1, x2, y2;
		TObject *p;
		TGroup *g;
		TChart *ch;
		TChart *line;
		bool IsPoint;
		bool IsLine;
		bool IsCircle;
		bool IsRectangle;
		bool IsPush = false;
		bool IsGroup;
		bool IsPlex;
		bool IsEmp;

	private: System::Windows::Forms::ToolStripMenuItem^  òî÷êàToolStripMenuItem;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::ToolStripMenuItem^  ïğÿìîóãîëüíèêToolStripMenuItem;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::ToolStripMenuItem^  ãğóïïàÎáúåêòîâToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  íàğèñîâàòüToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  äâèæåíèåToolStripMenuItem;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::ToolStripMenuItem^  ÷åğò¸æToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  íàğèñîâàòüToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^  òåñòToolStripMenuItem;

	protected:
	private:
		/// <summary>
		/// Îáÿçàòåëüíàÿ ïåğåìåííàÿ êîíñòğóêòîğà.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Òğåáóåìûé ìåòîä äëÿ ïîääåğæêè êîíñòğóêòîğà — íå èçìåíÿéòå 
		/// ñîäåğæèìîå ıòîãî ìåòîäà ñ ïîìîùüş ğåäàêòîğà êîäà.
		/// </summary>
		void InitializeComponent(void)
		{
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->ôàéëToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ñîõğàíèòüToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->îòğèñîâêàToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ëèíèÿToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->îêğóæíîñòüToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->òî÷êàToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ïğÿìîóãîëüíèêToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ãğóïïàÎáúåêòîâToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->íàğèñîâàòüToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->äâèæåíèåToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->÷åğò¸æToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->íàğèñîâàòüToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->òåñòToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::White;
			this->pictureBox1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pictureBox1->Location = System::Drawing::Point(2, 26);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(465, 287);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::pictureBox1_Paint);
			this->pictureBox1->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::pictureBox1_MouseDown);
			this->pictureBox1->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::pictureBox1_MouseMove);
			this->pictureBox1->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::pictureBox1_MouseUp);
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->ôàéëToolStripMenuItem,
					this->îòğèñîâêàToolStripMenuItem, this->ãğóïïàÎáúåêòîâToolStripMenuItem, this->÷åğò¸æToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(583, 24);
			this->menuStrip1->TabIndex = 1;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// ôàéëToolStripMenuItem
			// 
			this->ôàéëToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->ñîõğàíèòüToolStripMenuItem });
			this->ôàéëToolStripMenuItem->Name = L"ôàéëToolStripMenuItem";
			this->ôàéëToolStripMenuItem->Size = System::Drawing::Size(48, 20);
			this->ôàéëToolStripMenuItem->Text = L"Ôàéë";
			// 
			// ñîõğàíèòüToolStripMenuItem
			// 
			this->ñîõğàíèòüToolStripMenuItem->Name = L"ñîõğàíèòüToolStripMenuItem";
			this->ñîõğàíèòüToolStripMenuItem->Size = System::Drawing::Size(132, 22);
			this->ñîõğàíèòüToolStripMenuItem->Text = L"Ñîõğàíèòü";
			// 
			// îòğèñîâêàToolStripMenuItem
			// 
			this->îòğèñîâêàToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->ëèíèÿToolStripMenuItem,
					this->îêğóæíîñòüToolStripMenuItem, this->òî÷êàToolStripMenuItem, this->ïğÿìîóãîëüíèêToolStripMenuItem
			});
			this->îòğèñîâêàToolStripMenuItem->Name = L"îòğèñîâêàToolStripMenuItem";
			this->îòğèñîâêàToolStripMenuItem->Size = System::Drawing::Size(78, 20);
			this->îòğèñîâêàToolStripMenuItem->Text = L"Îòğèñîâêà";
			// 
			// ëèíèÿToolStripMenuItem
			// 
			this->ëèíèÿToolStripMenuItem->Name = L"ëèíèÿToolStripMenuItem";
			this->ëèíèÿToolStripMenuItem->Size = System::Drawing::Size(163, 22);
			this->ëèíèÿToolStripMenuItem->Text = L"Ëèíèÿ";
			this->ëèíèÿToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::ëèíèÿToolStripMenuItem_Click);
			// 
			// îêğóæíîñòüToolStripMenuItem
			// 
			this->îêğóæíîñòüToolStripMenuItem->Name = L"îêğóæíîñòüToolStripMenuItem";
			this->îêğóæíîñòüToolStripMenuItem->Size = System::Drawing::Size(163, 22);
			this->îêğóæíîñòüToolStripMenuItem->Text = L"Îêğóæíîñòü";
			this->îêğóæíîñòüToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::îêğóæíîñòüToolStripMenuItem_Click);
			// 
			// òî÷êàToolStripMenuItem
			// 
			this->òî÷êàToolStripMenuItem->Name = L"òî÷êàToolStripMenuItem";
			this->òî÷êàToolStripMenuItem->Size = System::Drawing::Size(163, 22);
			this->òî÷êàToolStripMenuItem->Text = L"Òî÷êà";
			this->òî÷êàToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::òî÷êàToolStripMenuItem_Click);
			// 
			// ïğÿìîóãîëüíèêToolStripMenuItem
			// 
			this->ïğÿìîóãîëüíèêToolStripMenuItem->Name = L"ïğÿìîóãîëüíèêToolStripMenuItem";
			this->ïğÿìîóãîëüíèêToolStripMenuItem->Size = System::Drawing::Size(163, 22);
			this->ïğÿìîóãîëüíèêToolStripMenuItem->Text = L"Ïğÿìîóãîëüíèê";
			this->ïğÿìîóãîëüíèêToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::ïğÿìîóãîëüíèêToolStripMenuItem_Click);
			// 
			// ãğóïïàÎáúåêòîâToolStripMenuItem
			// 
			this->ãğóïïàÎáúåêòîâToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->íàğèñîâàòüToolStripMenuItem,
					this->äâèæåíèåToolStripMenuItem
			});
			this->ãğóïïàÎáúåêòîâToolStripMenuItem->Name = L"ãğóïïàÎáúåêòîâToolStripMenuItem";
			this->ãğóïïàÎáúåêòîâToolStripMenuItem->Size = System::Drawing::Size(112, 20);
			this->ãğóïïàÎáúåêòîâToolStripMenuItem->Text = L"Ãğóïïà îáúåêòîâ";
			// 
			// íàğèñîâàòüToolStripMenuItem
			// 
			this->íàğèñîâàòüToolStripMenuItem->Name = L"íàğèñîâàòüToolStripMenuItem";
			this->íàğèñîâàòüToolStripMenuItem->Size = System::Drawing::Size(139, 22);
			this->íàğèñîâàòüToolStripMenuItem->Text = L"Íàğèñîâàòü";
			this->íàğèñîâàòüToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::íàğèñîâàòüToolStripMenuItem_Click);
			// 
			// äâèæåíèåToolStripMenuItem
			// 
			this->äâèæåíèåToolStripMenuItem->Name = L"äâèæåíèåToolStripMenuItem";
			this->äâèæåíèåToolStripMenuItem->Size = System::Drawing::Size(139, 22);
			this->äâèæåíèåToolStripMenuItem->Text = L"Äâèæåíèå";
			this->äâèæåíèåToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::äâèæåíèåToolStripMenuItem_Click);
			// 
			// ÷åğò¸æToolStripMenuItem
			// 
			this->÷åğò¸æToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->íàğèñîâàòüToolStripMenuItem1,
					this->òåñòToolStripMenuItem
			});
			this->÷åğò¸æToolStripMenuItem->Name = L"÷åğò¸æToolStripMenuItem";
			this->÷åğò¸æToolStripMenuItem->Size = System::Drawing::Size(60, 20);
			this->÷åğò¸æToolStripMenuItem->Text = L"×åğò¸æ";
			// 
			// íàğèñîâàòüToolStripMenuItem1
			// 
			this->íàğèñîâàòüToolStripMenuItem1->Name = L"íàğèñîâàòüToolStripMenuItem1";
			this->íàğèñîâàòüToolStripMenuItem1->Size = System::Drawing::Size(152, 22);
			this->íàğèñîâàòüToolStripMenuItem1->Text = L"Íàğèñîâàòü";
			this->íàğèñîâàòüToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// òåñòToolStripMenuItem
			// 
			this->òåñòToolStripMenuItem->Name = L"òåñòToolStripMenuItem";
			this->òåñòToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->òåñòToolStripMenuItem->Text = L"Òåñò";
			this->òåñòToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::òåñòToolStripMenuItem_Click);
			// 
			// button1
			// 
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->Location = System::Drawing::Point(473, 36);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(98, 23);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Ìûøü";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button2->Location = System::Drawing::Point(473, 66);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(98, 23);
			this->button2->TabIndex = 3;
			this->button2->Text = L"Òî÷êà";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::òî÷êàToolStripMenuItem_Click);
			// 
			// button3
			// 
			this->button3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button3->Location = System::Drawing::Point(473, 96);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(98, 23);
			this->button3->TabIndex = 4;
			this->button3->Text = L"Ëèíèÿ";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::ëèíèÿToolStripMenuItem_Click);
			// 
			// button4
			// 
			this->button4->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button4->Location = System::Drawing::Point(473, 126);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(98, 23);
			this->button4->TabIndex = 5;
			this->button4->Text = L"Îêğóæíîñòü";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::îêğóæíîñòüToolStripMenuItem_Click);
			// 
			// button5
			// 
			this->button5->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button5->Location = System::Drawing::Point(473, 156);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(98, 23);
			this->button5->TabIndex = 6;
			this->button5->Text = L"Ïğÿìîóãîëüíèê";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::ïğÿìîóãîëüíèêToolStripMenuItem_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(473, 186);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(98, 23);
			this->button6->TabIndex = 7;
			this->button6->Text = L"×åğò¸æ";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(583, 313);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::MyForm_MouseDown);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void ëèíèÿToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		IsPoint = false;
		IsLine = true;
		IsCircle = false;
		IsRectangle = false;
	}
private: System::Void MyForm_MouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
	/*x1 = e->X;
	y1 = e->Y;*/
}
private: System::Void pictureBox1_MouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
	x1 = e->X;
	y1 = e->Y;
		x2 = e->X;
		y2 = e->Y;
		IsPush = true;
		Graphics^ gr = this->pictureBox1->CreateGraphics();
		if (IsLine)
		{
			p = new TLine(x1, y1, x2, y2);
			p->Draw(gr);
			//e->Graphics->DrawLine(Pens::Black, x1, y1, x2, y2);
		}
		else if (IsCircle)
		{
			p = new TCircle(x1, y1, (int)(Math::Sqrt((x1 - x2)*(x1 - x2) + (y1 - y2)*(y1 - y2))));
			p->Draw(gr);
		}
		else if (IsPoint)
		{
			p = new TPoint(x2, y2);
			p->Draw(gr);
		}
		else if (IsRectangle)
		{
			p = new TRectangle(x1, y1, x2, y2);
			p->Draw(gr);
		}
		else
			IsPush = false;
}

private: System::Void pictureBox1_MouseUp(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
	x2 = e->X;
	y2 = e->Y;
	Graphics^ gr = this->pictureBox1->CreateGraphics();
	if (IsLine)
	{
		if (IsPlex)
		{
			p->Hide(gr);
			if (IsEmp)
			{
				ch = new TChart(x1, y1, x2, y2);
				IsEmp = false;
			}
			else
			{
				int dist1 = 21, dist2 =21, dist3 = 21, dist4 = 21, distMin = 20;
				TObject *p1 = ch->Search(gr, x1, y1);
				TObject *p2 = ch->Search(gr, x2, y2);
				TChart *pp1 = dynamic_cast <TChart*>(p1);
				if (pp1 != NULL)
				{
					dist1 = Math::Sqrt(Math::Pow(pp1->GetFirst()->GetX(gr) - x1, 2) + Math::Pow(pp1->GetFirst()->GetY(gr) - y1, 2));
					dist2 = Math::Sqrt(Math::Pow(pp1->GetLast()->GetX(gr) - x1, 2) + Math::Pow(pp1->GetLast()->GetY(gr) - y1, 2));
					if (dist1 <= dist2 && dist1 < distMin)
						p1 = pp1->GetFirst();
					else if (dist2<dist1 && dist2 < distMin)
						p1 = pp1->GetLast();
				}

				TChart *pp2 = dynamic_cast <TChart*>(p2);
				if (pp2 != NULL)
				{
					
					dist3 = Math::Sqrt(Math::Pow(pp2->GetFirst()->GetX(gr) - x2, 2) + Math::Pow(pp2->GetFirst()->GetY(gr) - y2, 2));
					dist4 = Math::Sqrt(Math::Pow(pp2->GetLast()->GetX(gr) - x2, 2) + Math::Pow(pp2->GetLast()->GetY(gr) - y2, 2));
					if (dist3 <= dist4 && dist3 < distMin)
						p2 = pp2->GetFirst();
					else if (dist4<dist3 && dist4 < distMin)
						p2 = pp2->GetLast();
				}

				if (pp1 != NULL)
				{
					line = new TChart(p2, p1);
					if (dist1 <= dist2)
						pp1->SetFirst(line);
					else
						pp1->SetLast(line);
				}
				if (pp2 != NULL)
				{
					line = new TChart(p1, p2);
					if (dist3 <= dist4)
						pp2->SetFirst(line);
					else 
						pp2->SetLast(line);
				}
				if (pp1 == NULL && pp2 == NULL)
				{
					line = new TChart(p1, p2);
					line->DrawRec(gr, line);
				}
			}
			ch->DrawRec(gr,ch);
		}
		else
		{
			p = new TLine(x1, y1, x2, y2);
			p->Draw(gr);
		}
		//e->Graphics->DrawLine(Pens::Black, x1, y1, x2, y2);
	}
	else if (IsCircle)
	{
		p = new TCircle(x1, y1, (int)(Math::Sqrt((x1 - x2)*(x1 - x2) + (y1 - y2)*(y1 - y2))));
		p->Draw(gr);
	}
	else if (IsPoint)
	{
		p = new TPoint(x2, y2);
		p->Draw(gr);
	}
	else if (IsRectangle)
	{
		p = new TRectangle(x1, y1, x2, y2);
		p->Draw(gr);
	}
	IsPush = false;
	if (IsGroup)
		g->Insert(p);
	//pictureBox1->Refresh();
}
private: System::Void pictureBox1_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
	/*Graphics^ gr = this->pictureBox1->CreateGraphics();
	if (IsLine)
	{
		TLine *p1 = new TLine(x1, y1, x2, y2);
		p1->Draw(gr);
		//e->Graphics->DrawLine(Pens::Black, x1, y1, x2, y2);
	}
	else if (IsCircle)
	{
		p = new TCircle(x1, y1, (int)(Math::Sqrt((x1 - x2)*(x1 - x2) + (y1 - y2)*(y1 - y2))));
	}*/
}
private: System::Void îêğóæíîñòüToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	IsPoint = false;
	IsLine = false;
	IsCircle = true;
	IsRectangle = false;
	IsPlex = false;
}
private: System::Void pictureBox1_MouseMove(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
	if (IsPush)
	{
		Graphics^ gr = this->pictureBox1->CreateGraphics();
		p->Hide(gr);
		x2 = e->X;
		y2 = e->Y;
		
		if (IsLine)
		{
			p = new TLine(x1, y1, x2, y2);
			p->Draw(gr);
		}
		else if (IsCircle)
		{
			p = new TCircle(x1, y1, (int)(Math::Sqrt((x1 - x2)*(x1 - x2) + (y1 - y2)*(y1 - y2))));
			p->Draw(gr);
		}
		else if (IsPoint)
		{
			p = new TPoint(x2, y2);
			p->Draw(gr);
		}
		else if (IsRectangle)
		{
			p = new TRectangle(x1, y1, x2, y2);
			p->Draw(gr);
		}
	}
}
private: System::Void òî÷êàToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	IsPoint = true;
	IsCircle = false;
	IsLine = false;
	IsRectangle = false;
	IsPlex = false;
}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	IsPoint = false;
	IsCircle = false;
	IsLine = false;
	IsRectangle = false;
	IsGroup = false;
	IsPlex = false;
}
private: System::Void ïğÿìîóãîëüíèêToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	IsPoint = false;
	IsCircle = false;
	IsLine = false;
	IsRectangle = true;
	IsPlex = false;
}


private: System::Void íàğèñîâàòüToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	g = new TGroup();
	IsGroup = true;
	IsPlex = false;
}
private: System::Void äâèæåíèåToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	if (IsGroup)
	{
		Graphics^ gr = this->pictureBox1->CreateGraphics();
		IsGroup = false;
		while ((g->GetX(gr)) < (this->pictureBox1->Width) * 2)
		{
			g->Move(gr, 1, 0);
		}
	}
}
private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
	IsPoint = false;
	IsCircle = false;
	IsLine = true;
	IsRectangle = false;
	IsGroup = false;
	IsPlex = true;
	IsEmp = true;
}
private: System::Void òåñòToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	Graphics^ gr = this->pictureBox1->CreateGraphics();
	ch = new TChart(50,50,100,50);
	line = new TChart(100,100,50,50);
	ch->SetFirst(line);

	ch->DrawRec(gr, ch);
}
};
};

