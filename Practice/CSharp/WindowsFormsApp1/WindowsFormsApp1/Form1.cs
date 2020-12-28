using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace WindowsFormsApp1
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }
        Timer t1;
        Button btn;
        private void button1_Click(object sender, EventArgs e)
        {
            //MessageBox.Show("Hello World!");
            btn = new Button();
            btn.Text = "새 버튼";
            btn.SetBounds(100, 100, 70, 70);
            btn.Click += btn_ChangeSize;
            this.Controls.Add(btn);
        }
        int i;
        private void btn_ChangeSize(object sender, EventArgs e) {
            t1 = new Timer();
            t1.Interval = 100;
            t1.Tick += timer_Tick;
            i = 100;
            t1.Start();
        }
        
        private void timer_Tick(object sender, EventArgs e)
        {
            btn.Size = new Size(i, i);
            i += 2;
            if(i >= 200)
            {
                t1.Stop();
            }
        }

        private void button2_Click(object sender, EventArgs e)
        {
            this.Close();
        }
    }
}
