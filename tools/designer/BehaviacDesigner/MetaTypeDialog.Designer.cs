/////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Tencent is pleased to support the open source community by making behaviac available.
//
// Copyright (C) 2015 THL A29 Limited, a Tencent company. All rights reserved.
//
// Licensed under the BSD 3-Clause License (the "License"); you may not use this file except in compliance with
// the License. You may obtain a copy of the License at http://opensource.org/licenses/BSD-3-Clause
//
// Unless required by applicable law or agreed to in writing, software distributed under the License is
// distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and limitations under the License.
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////

namespace Behaviac.Design
{
    partial class MetaTypeDialog
    {
        /// <summary>
        /// Required designer variable.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// Clean up any resources being used.
        /// </summary>
        /// <param name="disposing">true if managed resources should be disposed; otherwise, false.</param>
        protected override void Dispose(bool disposing) {
            if (disposing && (components != null)) {
                components.Dispose();
            }

            base.Dispose(disposing);
        }

        #region Windows Form Designer generated code

        /// <summary>
        /// Required method for Designer support - do not modify
        /// the contents of this method with the code editor.
        /// </summary>
        private void InitializeComponent() {
            System.ComponentModel.ComponentResourceManager resources = new System.ComponentModel.ComponentResourceManager(typeof(MetaTypeDialog));
            this.okButton = new System.Windows.Forms.Button();
            this.cancelButton = new System.Windows.Forms.Button();
            this.metaTypePanel = new Behaviac.Design.MetaTypePanel();
            this.SuspendLayout();
            // 
            // okButton
            // 
            resources.ApplyResources(this.okButton, "okButton");
            this.okButton.BackColor = System.Drawing.Color.FromArgb(((int)(((byte)(65)))), ((int)(((byte)(65)))), ((int)(((byte)(65)))));
            this.okButton.DialogResult = System.Windows.Forms.DialogResult.OK;
            this.okButton.FlatAppearance.MouseDownBackColor = System.Drawing.Color.DarkGray;
            this.okButton.FlatAppearance.MouseOverBackColor = System.Drawing.Color.DarkGray;
            this.okButton.ForeColor = System.Drawing.Color.LightGray;
            this.okButton.Name = "okButton";
            this.okButton.UseVisualStyleBackColor = false;
            this.okButton.Click += new System.EventHandler(this.okButton_Click);
            // 
            // cancelButton
            // 
            resources.ApplyResources(this.cancelButton, "cancelButton");
            this.cancelButton.BackColor = System.Drawing.Color.FromArgb(((int)(((byte)(65)))), ((int)(((byte)(65)))), ((int)(((byte)(65)))));
            this.cancelButton.DialogResult = System.Windows.Forms.DialogResult.Cancel;
            this.cancelButton.FlatAppearance.MouseDownBackColor = System.Drawing.Color.DarkGray;
            this.cancelButton.FlatAppearance.MouseOverBackColor = System.Drawing.Color.DarkGray;
            this.cancelButton.ForeColor = System.Drawing.Color.LightGray;
            this.cancelButton.Name = "cancelButton";
            this.cancelButton.UseVisualStyleBackColor = false;
            // 
            // metaTypePanel
            // 
            resources.ApplyResources(this.metaTypePanel, "metaTypePanel");
            this.metaTypePanel.BackColor = System.Drawing.Color.FromArgb(((int)(((byte)(56)))), ((int)(((byte)(56)))), ((int)(((byte)(56)))));
            this.metaTypePanel.ForeColor = System.Drawing.Color.LightGray;
            this.metaTypePanel.IsModified = true;
            this.metaTypePanel.Name = "metaTypePanel";
            // 
            // MetaTypeDialog
            // 
            this.AcceptButton = this.okButton;
            this.BackColor = System.Drawing.Color.FromArgb(((int)(((byte)(56)))), ((int)(((byte)(56)))), ((int)(((byte)(56)))));
            this.CancelButton = this.cancelButton;
            resources.ApplyResources(this, "$this");
            this.Controls.Add(this.metaTypePanel);
            this.Controls.Add(this.okButton);
            this.Controls.Add(this.cancelButton);
            this.ForeColor = System.Drawing.Color.LightGray;
            this.MaximizeBox = false;
            this.MinimizeBox = false;
            this.Name = "MetaTypeDialog";
            this.TopMost = true;
            this.FormClosing += new System.Windows.Forms.FormClosingEventHandler(this.MetaTypeDialog_FormClosing);
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.Button okButton;
        private System.Windows.Forms.Button cancelButton;
        private MetaTypePanel metaTypePanel;


    }
}