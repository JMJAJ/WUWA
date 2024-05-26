$sourcePath = "C:\Wuthering Waves\Wuthering Waves Game\Client\Saved\Resources\1.0.0\Resource\"
$destinationPath = Join-Path $sourcePath "UnpackedFiles"

if (-not (Test-Path -Path $destinationPath)) {
    New-Item -ItemType Directory -Path $destinationPath | Out-Null
}

$files = Get-ChildItem $sourcePath

for ($i=0; $i -lt $files.Count; $i++) {
    $outputPath = Join-Path $destinationPath $files[$i].BaseName
    if (-not (Test-Path -Path $outputPath)) {
        New-Item -ItemType Directory -Path $outputPath | Out-Null
    }
    .\repak -a 0xE0D4C0AA387A268B29C397E3C0CAD934522EFC96BE5526D6288EA26351CDACC9 unpack $files[$i].FullName -output $outputPath
}
