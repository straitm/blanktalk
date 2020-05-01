void fig_fig()
{
  const double size = 0.057;

  TCanvas * c1 = new TCanvas();
  c1->SetRightMargin(0.03);
  c1->SetTopMargin(0.025);
  c1->SetBottomMargin(0.13);
  c1->SetLeftMargin(0.12);
  c1->SetCanvasSize(600, 400);
  gStyle->SetOptStat(0);
  c1->SetTickx(1);
  c1->SetTicky(1);
  c1->SetFrameLineWidth(2);

  const double xmin = 0, xmax = 0.2, ymin = 700, ymax = 999.9;

  TH2D * dum = new TH2D("dum", "", 1, xmin, xmax, 1, ymin, ymax);
  dum->GetXaxis()->SetTitle("Something (units)");
  dum->GetYaxis()->SetTitle("Something/10#kern[-0.5]{ }units");
  dum->GetXaxis()->CenterTitle();
  dum->GetXaxis()->SetNdivisions(505);
  dum->GetYaxis()->CenterTitle();
  dum->GetXaxis()->SetTitleSize(size);
  dum->GetYaxis()->SetTitleSize(size);
  dum->GetXaxis()->SetLabelSize(size);
  dum->GetYaxis()->SetLabelSize(size);
  dum->GetYaxis()->SetTitleOffset(1);
  dum->GetYaxis()->SetDecimals();
  dum->GetXaxis()->SetTickLength(0.02);
  dum->GetYaxis()->SetTickLength(0.02);

  dum->Draw();

  TLegend leg(0.3, 0.76, 0.49, 0.93);
  leg.SetTextSize(size);
  leg.SetBorderSize(0);
  leg.SetFillStyle(0);
  leg.SetTextFont(42);
  leg.Draw();

  c1->SaveAs("fig-fig.pdf");
}
