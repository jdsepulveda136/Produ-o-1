#pragma once

namespace ProjCLR {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	/// </summary>
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
	private: System::Windows::Forms::Label^ lbl_quantidade;
	protected:
	private: System::Windows::Forms::TextBox^ txt_quantidade;
	private: System::Windows::Forms::Label^ lbl_preco;
	private: System::Windows::Forms::TextBox^ txt_preco;
	private: System::Windows::Forms::Button^ bt_calcular;
	private: System::Windows::Forms::TextBox^ txt_total;
	private: System::Windows::Forms::Label^ lbl_total;
	private: System::Windows::Forms::Label^ lbl_escalão;
	private: System::Windows::Forms::ComboBox^ comboBox1;

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
			this->lbl_quantidade = (gcnew System::Windows::Forms::Label());
			this->txt_quantidade = (gcnew System::Windows::Forms::TextBox());
			this->lbl_preco = (gcnew System::Windows::Forms::Label());
			this->txt_preco = (gcnew System::Windows::Forms::TextBox());
			this->bt_calcular = (gcnew System::Windows::Forms::Button());
			this->txt_total = (gcnew System::Windows::Forms::TextBox());
			this->lbl_total = (gcnew System::Windows::Forms::Label());
			this->lbl_escalão = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->SuspendLayout();
			// 
			// lbl_quantidade
			// 
			this->lbl_quantidade->AutoSize = true;
			this->lbl_quantidade->Location = System::Drawing::Point(13, 13);
			this->lbl_quantidade->Name = L"lbl_quantidade";
			this->lbl_quantidade->Size = System::Drawing::Size(62, 13);
			this->lbl_quantidade->TabIndex = 0;
			this->lbl_quantidade->Text = L"Quantidade";
			// 
			// txt_quantidade
			// 
			this->txt_quantidade->Location = System::Drawing::Point(13, 30);
			this->txt_quantidade->Name = L"txt_quantidade";
			this->txt_quantidade->Size = System::Drawing::Size(100, 20);
			this->txt_quantidade->TabIndex = 1;
			// 
			// lbl_preco
			// 
			this->lbl_preco->AutoSize = true;
			this->lbl_preco->Location = System::Drawing::Point(119, 12);
			this->lbl_preco->Name = L"lbl_preco";
			this->lbl_preco->Size = System::Drawing::Size(35, 13);
			this->lbl_preco->TabIndex = 2;
			this->lbl_preco->Text = L"Preço";
			// 
			// txt_preco
			// 
			this->txt_preco->Location = System::Drawing::Point(122, 30);
			this->txt_preco->Name = L"txt_preco";
			this->txt_preco->Size = System::Drawing::Size(100, 20);
			this->txt_preco->TabIndex = 3;
			// 
			// bt_calcular
			// 
			this->bt_calcular->Location = System::Drawing::Point(228, 28);
			this->bt_calcular->Name = L"bt_calcular";
			this->bt_calcular->Size = System::Drawing::Size(75, 23);
			this->bt_calcular->TabIndex = 4;
			this->bt_calcular->Text = L"Calcular";
			this->bt_calcular->UseVisualStyleBackColor = true;
			this->bt_calcular->Click += gcnew System::EventHandler(this, &Form1::Bt_calcular_Click);
			// 
			// txt_total
			// 
			this->txt_total->Location = System::Drawing::Point(203, 392);
			this->txt_total->Name = L"txt_total";
			this->txt_total->Size = System::Drawing::Size(100, 20);
			this->txt_total->TabIndex = 5;
			// 
			// lbl_total
			// 
			this->lbl_total->AutoSize = true;
			this->lbl_total->Location = System::Drawing::Point(157, 395);
			this->lbl_total->Name = L"lbl_total";
			this->lbl_total->Size = System::Drawing::Size(40, 13);
			this->lbl_total->TabIndex = 6;
			this->lbl_total->Text = L"Total =";
			// 
			// lbl_escalão
			// 
			this->lbl_escalão->AutoSize = true;
			this->lbl_escalão->Location = System::Drawing::Point(13, 77);
			this->lbl_escalão->Name = L"lbl_escalão";
			this->lbl_escalão->Size = System::Drawing::Size(45, 13);
			this->lbl_escalão->TabIndex = 7;
			this->lbl_escalão->Text = L"Escalão";
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Adulto", L"Criança", L"Reformado" });
			this->comboBox1->Location = System::Drawing::Point(12, 93);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(121, 21);
			this->comboBox1->TabIndex = 8;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(313, 445);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->lbl_escalão);
			this->Controls->Add(this->lbl_total);
			this->Controls->Add(this->txt_total);
			this->Controls->Add(this->bt_calcular);
			this->Controls->Add(this->txt_preco);
			this->Controls->Add(this->lbl_preco);
			this->Controls->Add(this->txt_quantidade);
			this->Controls->Add(this->lbl_quantidade);
			this->Name = L"Form1";
			this->Text = L"Produção 1";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	//Data: 28maio2019
	//Feito por: Jorge Sepúlveda
	//Titulo: Produção 1
	private: System::Void Bt_calcular_Click(System::Object^ sender, System::EventArgs^ e) {
		
		//Criação e inicialização das variáveis
		float quant = 0;
		float preco = 0;
		float preco_final;

		//Obtenção dos valores
		quant = Convert::ToDouble(txt_quantidade->Text);
		preco = Convert::ToDouble(txt_preco->Text);


		//Calculo do valor final
		preco_final = quant * preco;

		//Devolução do valor calculado
		txt_total->Text = Convert::ToString(preco_final);

	}
};
}
