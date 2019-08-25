#pragma once
#include <iostream>
#include "Aplicacion.h"
#include <msclr\marshal_cppstd.h>
using namespace msclr::interop;
using namespace std;

namespace COLASS {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	/// </summary>

	Aplicacion a,b;
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  tamano;
	protected: 

	protected: 
	private: System::Windows::Forms::DataGridView^  Grillax;
	private: System::Windows::Forms::DataGridView^  Grillay;
	private: System::Windows::Forms::Button^  insertar;

	private: System::Windows::Forms::TextBox^  ttamano;
	private: System::Windows::Forms::Button^  mostrar;
	private: System::Windows::Forms::Button^  bORDENAR;
	private: System::Windows::Forms::Button^  bELIMINAR1;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->tamano = (gcnew System::Windows::Forms::Button());
			this->Grillax = (gcnew System::Windows::Forms::DataGridView());
			this->Grillay = (gcnew System::Windows::Forms::DataGridView());
			this->insertar = (gcnew System::Windows::Forms::Button());
			this->ttamano = (gcnew System::Windows::Forms::TextBox());
			this->mostrar = (gcnew System::Windows::Forms::Button());
			this->bORDENAR = (gcnew System::Windows::Forms::Button());
			this->bELIMINAR1 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->Grillax))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->Grillay))->BeginInit();
			this->SuspendLayout();
			// 
			// tamano
			// 
			this->tamano->Location = System::Drawing::Point(427, 42);
			this->tamano->Margin = System::Windows::Forms::Padding(2);
			this->tamano->Name = L"tamano";
			this->tamano->Size = System::Drawing::Size(92, 35);
			this->tamano->TabIndex = 0;
			this->tamano->Text = L"TAMANO";
			this->tamano->UseVisualStyleBackColor = true;
			this->tamano->Click += gcnew System::EventHandler(this, &Form1::tamano_Click);
			// 
			// Grillax
			// 
			this->Grillax->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->Grillax->Location = System::Drawing::Point(21, 8);
			this->Grillax->Margin = System::Windows::Forms::Padding(2);
			this->Grillax->Name = L"Grillax";
			this->Grillax->RowTemplate->Height = 28;
			this->Grillax->Size = System::Drawing::Size(315, 97);
			this->Grillax->TabIndex = 1;
			this->Grillax->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Form1::Grillax_CellContentClick);
			// 
			// Grillay
			// 
			this->Grillay->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->Grillay->Location = System::Drawing::Point(21, 109);
			this->Grillay->Margin = System::Windows::Forms::Padding(2);
			this->Grillay->Name = L"Grillay";
			this->Grillay->Size = System::Drawing::Size(315, 97);
			this->Grillay->TabIndex = 2;
			// 
			// insertar
			// 
			this->insertar->Location = System::Drawing::Point(427, 93);
			this->insertar->Margin = System::Windows::Forms::Padding(2);
			this->insertar->Name = L"insertar";
			this->insertar->Size = System::Drawing::Size(93, 35);
			this->insertar->TabIndex = 3;
			this->insertar->Text = L"INSERTAR";
			this->insertar->UseVisualStyleBackColor = true;
			this->insertar->Click += gcnew System::EventHandler(this, &Form1::insertar_Click);
			// 
			// ttamano
			// 
			this->ttamano->Location = System::Drawing::Point(427, 10);
			this->ttamano->Margin = System::Windows::Forms::Padding(2);
			this->ttamano->Name = L"ttamano";
			this->ttamano->Size = System::Drawing::Size(77, 20);
			this->ttamano->TabIndex = 4;
			// 
			// mostrar
			// 
			this->mostrar->Location = System::Drawing::Point(426, 146);
			this->mostrar->Margin = System::Windows::Forms::Padding(2);
			this->mostrar->Name = L"mostrar";
			this->mostrar->Size = System::Drawing::Size(93, 35);
			this->mostrar->TabIndex = 5;
			this->mostrar->Text = L"MOSTRAR";
			this->mostrar->UseVisualStyleBackColor = true;
			this->mostrar->Click += gcnew System::EventHandler(this, &Form1::mostrar_Click);
			// 
			// bORDENAR
			// 
			this->bORDENAR->Location = System::Drawing::Point(427, 200);
			this->bORDENAR->Margin = System::Windows::Forms::Padding(2);
			this->bORDENAR->Name = L"bORDENAR";
			this->bORDENAR->Size = System::Drawing::Size(93, 35);
			this->bORDENAR->TabIndex = 6;
			this->bORDENAR->Text = L"ORDNAR POR EDAD";
			this->bORDENAR->UseVisualStyleBackColor = true;
			this->bORDENAR->Click += gcnew System::EventHandler(this, &Form1::bORDENAR_Click);
			// 
			// bELIMINAR1
			// 
			this->bELIMINAR1->Location = System::Drawing::Point(427, 244);
			this->bELIMINAR1->Margin = System::Windows::Forms::Padding(2);
			this->bELIMINAR1->Name = L"bELIMINAR1";
			this->bELIMINAR1->Size = System::Drawing::Size(93, 35);
			this->bELIMINAR1->TabIndex = 7;
			this->bELIMINAR1->Text = L"ELIMINAR NOMBRES LONG IMPAR";
			this->bELIMINAR1->UseVisualStyleBackColor = true;
			this->bELIMINAR1->Click += gcnew System::EventHandler(this, &Form1::bELIMINAR1_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(678, 290);
			this->Controls->Add(this->bELIMINAR1);
			this->Controls->Add(this->bORDENAR);
			this->Controls->Add(this->mostrar);
			this->Controls->Add(this->ttamano);
			this->Controls->Add(this->insertar);
			this->Controls->Add(this->Grillay);
			this->Controls->Add(this->Grillax);
			this->Controls->Add(this->tamano);
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"Form1";
			this->Text = L"Form1";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->Grillax))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->Grillay))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Grillax_CellContentClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
			 
			 }
private: System::Void tamano_Click(System::Object^  sender, System::EventArgs^  e) {
			 a.Tamano(Grillax,  ttamano);
		 }
private: System::Void insertar_Click(System::Object^  sender, System::EventArgs^  e) {
		 a.Guardar(Grillax, ttamano);
		 
		 }
private: System::Void mostrar_Click(System::Object^  sender, System::EventArgs^  e) {
			 a.Mostrar(Grillay);
		 }
private: System::Void bORDENAR_Click(System::Object^  sender, System::EventArgs^  e) {
			 b.OrdenarCola(a);
			 b.Mostrar(Grillay);
		 }
private: System::Void bELIMINAR1_Click(System::Object^  sender, System::EventArgs^  e) {
			 b.EliminarNombresDeLongitudImpar(a);
			 b.Mostrar(Grillay);
		 }
};
}

