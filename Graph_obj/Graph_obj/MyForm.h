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
		TObject *p;
		bool IsPoint;
		bool IsLine;
		bool IsCircle;
		bool IsRectangle;
		int x1, y1, x2, y2;
		bool IsPush = false;
		TGroup *g;
		bool IsGroup;

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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
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
			this->pictureBox1->DragDrop += gcnew System::Windows::Forms::DragEventHandler(this, &MyForm::pictureBox1_DragDrop);
			this->pictureBox1->DragEnter += gcnew System::Windows::Forms::DragEventHandler(this, &MyForm::pictureBox1_DragEnter);
			this->pictureBox1->DragOver += gcnew System::Windows::Forms::DragEventHandler(this, &MyForm::pictureBox1_DragOver);
			this->pictureBox1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::pictureBox1_Paint);
			this->pictureBox1->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::pictureBox1_MouseDown);
			this->pictureBox1->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::pictureBox1_MouseUp);
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->ôàéëToolStripMenuItem,
					this->îòğèñîâêàToolStripMenuItem, this->ãğóïïàÎáúåêòîâToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(551, 24);
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
			this->íàğèñîâàòüToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->íàğèñîâàòüToolStripMenuItem->Text = L"Íàğèñîâàòü";
			this->íàğèñîâàòüToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::íàğèñîâàòüToolStripMenuItem_Click);
			// 
			// äâèæåíèåToolStripMenuItem
			// 
			this->äâèæåíèåToolStripMenuItem->Name = L"äâèæåíèåToolStripMenuItem";
			this->äâèæåíèåToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->äâèæåíèåToolStripMenuItem->Text = L"Äâèæåíèå";
			this->äâèæåíèåToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::äâèæåíèåToolStripMenuItem_Click);
			// 
			// button1
			// 
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->Location = System::Drawing::Point(473, 36);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
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
			this->button2->Size = System::Drawing::Size(75, 23);
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
			this->button3->Size = System::Drawing::Size(75, 23);
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
			this->button4->Size = System::Drawing::Size(75, 23);
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
			this->button5->Size = System::Drawing::Size(75, 23);
			this->button5->TabIndex = 6;
			this->button5->Text = L"Ïğÿìîóãîëüíèê";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::ïğÿìîóãîëüíèêToolStripMenuItem_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(551, 313);
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
}

private: System::Void pictureBox1_MouseUp(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
	x2 = e->X;
	y2 = e->Y;
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
			//e->Graphics->DrawLine(Pens::Black, x1, y1, x2, y2);
		}
		else if (IsCircle)
		{
			p = new TCircle(x1, y1, (int)(Math::Sqrt((x1 - x2)*(x1 - x2) + (y1 - y2)*(y1 - y2))));
			p->Draw(gr);
		}
	}
	//pictureBox1->Refresh();
}
private: System::Void òî÷êàToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	IsPoint = true;
	IsCircle = false;
	IsLine = false;
	IsRectangle = false;
}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	IsPoint = false;
	IsCircle = false;
	IsLine = false;
	IsRectangle = false;
	IsGroup = false;
}
private: System::Void ïğÿìîóãîëüíèêToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	IsPoint = false;
	IsCircle = false;
	IsLine = false;
	IsRectangle = true;
}

private: System::Void pictureBox1_DragEnter(System::Object^  sender, System::Windows::Forms::DragEventArgs^  e) {
	Graphics^ gr = this->pictureBox1->CreateGraphics();
	p->Hide(gr);
	x2 = e->X;
	y2 = e->Y;

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
}

private: System::Void pictureBox1_DragOver(System::Object^  sender, System::Windows::Forms::DragEventArgs^  e) {
	Graphics^ gr = this->pictureBox1->CreateGraphics();
	p->Hide(gr);
	x2 = e->X;
	y2 = e->Y;

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
}
private: System::Void pictureBox1_DragDrop(System::Object^  sender, System::Windows::Forms::DragEventArgs^  e) {
	Graphics^ gr = this->pictureBox1->CreateGraphics();
	p->Hide(gr);
	x2 = e->X;
	y2 = e->Y;

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
}
private: System::Void íàğèñîâàòüToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	g = new TGroup();
	IsGroup = true;
}
private: System::Void äâèæåíèåToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	Graphics^ gr = this->pictureBox1->CreateGraphics();
	IsGroup = false;
	while ((g->GetX(gr))<(this->pictureBox1->Width)*2)
	{
		g->Move(gr, 1, 0);
	}
}
};
};

