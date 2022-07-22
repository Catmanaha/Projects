using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using Xamarin.Forms;

namespace Calculator
{
    public partial class MainPage : ContentPage
    {
        public MainPage()
        {
            InitializeComponent();
        }
        private double FirstNumber;
        private string OperatorName;
        private bool IsOperatorClicked;

        private void ButtonReset_Clicked(object sender, EventArgs e)
        {
            label_main.Text = "0";
            IsOperatorClicked = false;
            FirstNumber = 0;
        }

        private void ButtonAll_Clicked(object sender, EventArgs e)
        {
            var button = sender as Button;

            if (label_main.Text == "0" || IsOperatorClicked)
            {
                IsOperatorClicked = false;
                label_main.Text = button.Text;
            }
            else
            {
                label_main.Text += button.Text;
            }
        }
        private void DeleteButton_Clicked(object sender, EventArgs e)
        {
            string number = label_main.Text;

            if (number != "0")
            {
                number = number.Remove(number.Length - 1, 1);
                if (string.IsNullOrEmpty(number))
                {
                    label_main.Text = "0";
                }

                else
                    label_main.Text = number;
            }

        }
        private void Percent_Clicked(object sender, EventArgs e)
        {
            string number = label_main.Text;
            decimal percentValue = Convert.ToDecimal(number);
            string result = (percentValue / 100).ToString("0.##");

            label_main.Text = result;

        }

        private void ButtonOperation_Clicked(object sender, EventArgs e)
        {
            var button = sender as Button;
            IsOperatorClicked = true;
            OperatorName = button.Text;
            FirstNumber = Convert.ToDouble(label_main.Text);
        }
        private void ButtonEqual_Clicked(object sender, EventArgs e)
        {

            double SecondNumber = Convert.ToDouble(label_main.Text);
            string Final = ResultCalculate(FirstNumber, SecondNumber).ToString("0.##");
            label_main.Text = Final;

        }

        private double ResultCalculate(double FirstNumber, double SecondNumber)
        {
            double result = 0;
            if (OperatorName == "+")
            {
                result = FirstNumber + SecondNumber;
            }
            else if (OperatorName == "-")
            {
                result = FirstNumber - SecondNumber;
            }
            else if (OperatorName == "*")
            {
                result = FirstNumber * SecondNumber;
            }
            else if (OperatorName == "/")
            {
                result = FirstNumber / SecondNumber;
            }
            return result;
        }

        private void ButtonDot_Clicked(object sender, EventArgs e)
        {

            if (label_main.Text.Contains(".") == false)
            {
                label_main.Text += ".";


            }

        }

    
    }
}
