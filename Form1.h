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
	private: System::Windows::Forms::ComboBox^ cmb_escalao;
	private: System::Windows::Forms::Label^ lbl_crianca;
	private: System::Windows::Forms::Label^ lbl_reformado;
	private: System::Windows::Forms::Label^ lbl_extras;
	private: System::Windows::Forms::CheckBox^ chk_x;
	private: System::Windows::Forms::CheckBox^ chk_y;
	private: System::Windows::Forms::CheckBox^ chk_z;
	private: System::Windows::Forms::Label^ lbl_extra;
	private: System::Windows::Forms::Label^ lbl_agrava;
	private: System::Windows::Forms::RadioButton^ rdb_sim;
	private: System::Windows::Forms::RadioButton^ rdb_nao;
	private: System::Windows::Forms::Label^ lbl_info_agrav;


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
			this->cmb_escalao = (gcnew System::Windows::Forms::ComboBox());
			this->lbl_crianca = (gcnew System::Windows::Forms::Label());
			this->lbl_reformado = (gcnew System::Windows::Forms::Label());
			this->lbl_extras = (gcnew System::Windows::Forms::Label());
			this->chk_x = (gcnew System::Windows::Forms::CheckBox());
			this->chk_y = (gcnew System::Windows::Forms::CheckBox());
			this->chk_z = (gcnew System::Windows::Forms::CheckBox());
			this->lbl_extra = (gcnew System::Windows::Forms::Label());
			this->lbl_agrava = (gcnew System::Windows::Forms::Label());
			this->rdb_sim = (gcnew System::Windows::Forms::RadioButton());
			this->rdb_nao = (gcnew System::Windows::Forms::RadioButton());
			this->lbl_info_agrav = (gcnew System::Windows::Forms::Label());
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
			this->txt_quantidade->TextChanged += gcnew System::EventHandler(this, &Form1::Txt_quantidade_TextChanged);
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
			this->txt_preco->TextChanged += gcnew System::EventHandler(this, &Form1::Txt_preco_TextChanged);
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
			this->txt_total->Location = System::Drawing::Point(203, 267);
			this->txt_total->Name = L"txt_total";
			this->txt_total->Size = System::Drawing::Size(100, 20);
			this->txt_total->TabIndex = 5;
			// 
			// lbl_total
			// 
			this->lbl_total->AutoSize = true;
			this->lbl_total->Location = System::Drawing::Point(160, 270);
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
			// cmb_escalao
			// 
			this->cmb_escalao->FormattingEnabled = true;
			this->cmb_escalao->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Adulto", L"Criança", L"Reformado" });
			this->cmb_escalao->Location = System::Drawing::Point(12, 93);
			this->cmb_escalao->Name = L"cmb_escalao";
			this->cmb_escalao->Size = System::Drawing::Size(121, 21);
			this->cmb_escalao->TabIndex = 8;
			this->cmb_escalao->SelectedIndexChanged += gcnew System::EventHandler(this, &Form1::Cmb_escalao_SelectedIndexChanged);
			// 
			// lbl_crianca
			// 
			this->lbl_crianca->AutoSize = true;
			this->lbl_crianca->Location = System::Drawing::Point(157, 101);
			this->lbl_crianca->Name = L"lbl_crianca";
			this->lbl_crianca->Size = System::Drawing::Size(63, 13);
			this->lbl_crianca->TabIndex = 9;
			this->lbl_crianca->Text = L"Criança -5%";
			// 
			// lbl_reformado
			// 
			this->lbl_reformado->AutoSize = true;
			this->lbl_reformado->Location = System::Drawing::Point(224, 101);
			this->lbl_reformado->Name = L"lbl_reformado";
			this->lbl_reformado->Size = System::Drawing::Size(79, 13);
			this->lbl_reformado->TabIndex = 10;
			this->lbl_reformado->Text = L"Reformado -7%";
			// 
			// lbl_extras
			// 
			this->lbl_extras->AutoSize = true;
			this->lbl_extras->Location = System::Drawing::Point(13, 133);
			this->lbl_extras->Name = L"lbl_extras";
			this->lbl_extras->Size = System::Drawing::Size(36, 13);
			this->lbl_extras->TabIndex = 11;
			this->lbl_extras->Text = L"Extras";
			// 
			// chk_x
			// 
			this->chk_x->AutoSize = true;
			this->chk_x->Location = System::Drawing::Point(16, 150);
			this->chk_x->Name = L"chk_x";
			this->chk_x->Size = System::Drawing::Size(31, 17);
			this->chk_x->TabIndex = 12;
			this->chk_x->Text = L"x";
			this->chk_x->UseVisualStyleBackColor = true;
			this->chk_x->CheckedChanged += gcnew System::EventHandler(this, &Form1::Chk_x_CheckedChanged);
			// 
			// chk_y
			// 
			this->chk_y->AutoSize = true;
			this->chk_y->Location = System::Drawing::Point(53, 150);
			this->chk_y->Name = L"chk_y";
			this->chk_y->Size = System::Drawing::Size(31, 17);
			this->chk_y->TabIndex = 13;
			this->chk_y->Text = L"y";
			this->chk_y->UseVisualStyleBackColor = true;
			this->chk_y->CheckedChanged += gcnew System::EventHandler(this, &Form1::Chk_y_CheckedChanged);
			// 
			// chk_z
			// 
			this->chk_z->AutoSize = true;
			this->chk_z->Location = System::Drawing::Point(90, 150);
			this->chk_z->Name = L"chk_z";
			this->chk_z->Size = System::Drawing::Size(31, 17);
			this->chk_z->TabIndex = 14;
			this->chk_z->Text = L"z";
			this->chk_z->UseVisualStyleBackColor = true;
			this->chk_z->CheckedChanged += gcnew System::EventHandler(this, &Form1::Chk_z_CheckedChanged);
			// 
			// lbl_extra
			// 
			this->lbl_extra->AutoSize = true;
			this->lbl_extra->Location = System::Drawing::Point(160, 150);
			this->lbl_extra->Name = L"lbl_extra";
			this->lbl_extra->Size = System::Drawing::Size(78, 13);
			this->lbl_extra->TabIndex = 15;
			this->lbl_extra->Text = L"+ 10€ por extra";
			// 
			// lbl_agrava
			// 
			this->lbl_agrava->AutoSize = true;
			this->lbl_agrava->Location = System::Drawing::Point(16, 187);
			this->lbl_agrava->Name = L"lbl_agrava";
			this->lbl_agrava->Size = System::Drawing::Size(70, 13);
			this->lbl_agrava->TabIndex = 16;
			this->lbl_agrava->Text = L"Agravamento";
			// 
			// rdb_sim
			// 
			this->rdb_sim->AutoSize = true;
			this->rdb_sim->Location = System::Drawing::Point(19, 216);
			this->rdb_sim->Name = L"rdb_sim";
			this->rdb_sim->Size = System::Drawing::Size(42, 17);
			this->rdb_sim->TabIndex = 17;
			this->rdb_sim->Text = L"Sim";
			this->rdb_sim->UseVisualStyleBackColor = true;
			this->rdb_sim->CheckedChanged += gcnew System::EventHandler(this, &Form1::Rdb_sim_CheckedChanged);
			// 
			// rdb_nao
			// 
			this->rdb_nao->AutoSize = true;
			this->rdb_nao->Checked = true;
			this->rdb_nao->Location = System::Drawing::Point(67, 216);
			this->rdb_nao->Name = L"rdb_nao";
			this->rdb_nao->Size = System::Drawing::Size(45, 17);
			this->rdb_nao->TabIndex = 18;
			this->rdb_nao->TabStop = true;
			this->rdb_nao->Text = L"Não";
			this->rdb_nao->UseVisualStyleBackColor = true;
			this->rdb_nao->CheckedChanged += gcnew System::EventHandler(this, &Form1::Rdb_nao_CheckedChanged);
			// 
			// lbl_info_agrav
			// 
			this->lbl_info_agrav->AutoSize = true;
			this->lbl_info_agrav->Location = System::Drawing::Point(163, 216);
			this->lbl_info_agrav->Name = L"lbl_info_agrav";
			this->lbl_info_agrav->Size = System::Drawing::Size(53, 13);
			this->lbl_info_agrav->TabIndex = 19;
			this->lbl_info_agrav->Text = L"Sim +10%";
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(313, 303);
			this->Controls->Add(this->lbl_info_agrav);
			this->Controls->Add(this->rdb_nao);
			this->Controls->Add(this->rdb_sim);
			this->Controls->Add(this->lbl_agrava);
			this->Controls->Add(this->lbl_extra);
			this->Controls->Add(this->chk_z);
			this->Controls->Add(this->chk_y);
			this->Controls->Add(this->chk_x);
			this->Controls->Add(this->lbl_extras);
			this->Controls->Add(this->lbl_reformado);
			this->Controls->Add(this->lbl_crianca);
			this->Controls->Add(this->cmb_escalao);
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
		float extras = 0;

		//Obtenção dos valores
		try
		{
			quant = Convert::ToDouble(txt_quantidade->Text);
		}
		catch (...)
		{
			txt_preco->Text = "0";
		}

		try
		{
			preco = Convert::ToDouble(txt_preco->Text);
		}
		catch (...)
		{
			txt_quantidade->Text = "0";
		}

		if (chk_x->Checked) { extras = extras + 10; };
		if (chk_y->Checked) { extras = extras + 10; };
		if (chk_z->Checked) { extras = extras + 10; };


		//Calculo do valor final
		preco_final = (quant * preco)+extras;

		//Aplicação doa descontos e agravamento
		if (cmb_escalao->Text == "Criança") { preco_final = preco_final * 0.95; };
		if (cmb_escalao->Text == "Reformado") { preco_final = preco_final * 0.93; };

		if (rdb_sim->Checked) { preco_final = preco_final * 1.1; };

		//Devolução do valor calculado
		txt_total->Text = Convert::ToString(preco_final);

	}

	public: void calcular()
	{
		//Criação e inicialização das variáveis
		float quant = 0;
		float preco = 0;
		float preco_final;
		float extras = 0;

		//Obtenção dos valores
		try
		{
			quant = Convert::ToDouble(txt_quantidade->Text);
		}
		catch (...)
		{
			txt_preco->Text = "0";
		}

		try
		{
			preco = Convert::ToDouble(txt_preco->Text);
		}
		catch (...)
		{
			txt_quantidade->Text = "0";
		}

		if (chk_x->Checked) { extras = extras + 10; };
		if (chk_y->Checked) { extras = extras + 10; };
		if (chk_z->Checked) { extras = extras + 10; };


		//Calculo do valor final
		preco_final = (quant * preco) + extras;

		//Aplicação doa descontos e agravamento
		if (cmb_escalao->Text == "Criança") { preco_final = preco_final * 0.95; };
		if (cmb_escalao->Text == "Reformado") { preco_final = preco_final * 0.93; };

		if (rdb_sim->Checked) { preco_final = preco_final * 1.1; };

		//Devolução do valor calculado
		txt_total->Text = Convert::ToString(preco_final);
	}

private: System::Void Txt_quantidade_TextChanged(System::Object^ sender, System::EventArgs^ e) { }

private: System::Void Txt_preco_TextChanged(System::Object^ sender, System::EventArgs^ e) {}

private: System::Void Cmb_escalao_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) 
	{
	calcular();
	}


private: System::Void Chk_x_CheckedChanged(System::Object^ sender, System::EventArgs^ e) 
	{
	calcular();
	}

private: System::Void Chk_y_CheckedChanged(System::Object^ sender, System::EventArgs^ e) 
	{
	calcular();
	}

private: System::Void Chk_z_CheckedChanged(System::Object^ sender, System::EventArgs^ e) 
	{
	calcular();
	}

private: System::Void Rdb_sim_CheckedChanged(System::Object^ sender, System::EventArgs^ e) 
	{
	calcular();
	}

private: System::Void Rdb_nao_CheckedChanged(System::Object^ sender, System::EventArgs^ e) 
	{
	calcular();
	}
};
}
