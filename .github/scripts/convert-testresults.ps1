
$ecu = $Env:ECU

Write-Host "Creating XUnit report file"
& ReportViewerCli -r ./canoe4sw-se-runtime/TestReports/$ecu.vtestreport -e;
cscript.exe ./report-styles/xunit/xUnitTransform.vbs ./canoe4sw-se-runtime/TestReports/$ecu.xml ./canoe4sw-se-runtime/TestReports/$ecu'_xunit'.xml;

