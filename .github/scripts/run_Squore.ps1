$path = pwd

$version = $Env:version
$ecu = $Env:ECU
$token = $Env:token

# Build Squore project
java -jar ./$($ecu)ECU/$($ecu)_Squore/squore-agent.jar "https://vistrsquoret01.vi.vector.int:8543/SQuORE_Server" -t $token -- --commands="PROCESS_CREATION" --name=$ecu --branch="main" --color="rgb(64,255,192)" --version=$version --wizardId="ANALYTICS" --dp="type=CANoe,dir=$path\canoe4sw-se-runtime\TestReports_test,import_traceability_matrix=true,traceability_file=$path\$($ecu)ECU\$($ecu)_Testing\Requirements\$ecu.vtc-tso" --dp="type=Vector_TraceItems,dir=$path\$($ecu)ECU\$($ecu)_Testing\Requirements"
 
# Get Project Id   
$var = (curl.exe -X GET "https://vistrsquoret01.vi.vector.int:8543/SQuORE_Server/api/projects/$($ecu)?fields=artefactId" -H "accept: application/json" -H "Authorization: Bearer $token ") | ConvertFrom-Json
 
$artefactId = $var.artefactId
 
# Generate report

curl.exe -X GET "https://vistrsquoret01.vi.vector.int:8543/SQuORE_Server/api/artefacts/$artefactId/reports/DR_DASHBOARD_REPORT_FLEX_APP" -H "accept: application/pdf" -H "Authorization: Bearer $token " --output ./$($ecu)'ECU'/$($ecu)'_Squore'/$($ecu)_$($version).pdf 
