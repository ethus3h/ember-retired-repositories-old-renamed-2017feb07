use strict;
use warnings;
use File::Copy;
use CGI qw(:standard);
#use URI::Find
#use strict;¬use warnings;¬use File::Copy;¬use CGI qw(:standard);¬#use URI::Find¬#open files¬print "\n\n==================================\n\n";¬print "Reading data files...";¬$/ = undef;¬open(INPUT, "input.scdat") or print "Input error (input.scdat): $!"."!\n";¬open(URL, "url.scdat") or print "URL error (url.scdat): $!"."!\n";¬open(OUTPUT, ">>output.scdat") or print "Output error (output.scdat): $!"."!\n";¬open(OUTPUTA, ">>outputa.scdat") or print "Outputa error (outputa.scdat): $!"."!\n";¬open(WORDS, ">>words.scdat") or print "Word output error (words.scdat): $!"."!\n";¬open(OUTPUTTEMP, "outputtemp.scdat") or print "Word input error (outputtemp.scdat): $!"."!\n";¬open(LINKS, ">>links.scdat") or print "Links output error (links.scdat): $!"."!\n";¬open(PROCESSEDLINKS, ">>processedlinks.scdat") or print "Processed Links output error (links.scdat): $!"."!\n";¬open(LOG, ">>log.scdat") or print "Log error (log.scdat): $!"."!\n";¬#write errors to the log¬#print "Logging...\n";¬#print LOG "$!";¬#print LOG "Read datafiles\n";¬print " Done\n";¬#variables¬print "Getting variables...";¬my $url = <URL>;¬my $dataa = <INPUT>;¬my $processeddata = "$dataa"." "."$url";¬#my $processedata = "$dataa"." "."$url";¬#my $data = "$processeddata";¬my $links = "";¬my $number = 0;¬my $oldnum = 1;¬my @words = "";¬my @wordhasg = "";¬my %wordhash = "";¬my @wordstemp = "";¬my $oldlinks = "";¬#print "Logging...\n";¬#print LOG "$!";¬#print LOG "Got variables\n";¬print " Done\n";¬#extract links¬print "Extracting links...";¬$processeddata =~ /(href|HREF|src|SRC|Href|HRef|HREf|hRef|hREf|hREF|hrEf|hrEF|hreF|Src|SRc|sRc|sRC)="([^"]+)/;¬print $links;¬$links = $links . "\n" . $2;¬if ( $links ne "\n" ) {¬$oldnum = 0;¬$number = 1;¬}¬$processeddata =~ s/(href|HREF|src|SRC|Href|HRef|HREf|hRef|hREf|hREF|hrEf|hrEF|hreF|Src|SRc|sRc|sRC)="[^"]+/ /;¬#print "\nLinks:\n$links\n$number\n";¬#print $processeddata;¬while ( $processeddata =~ /(href|HREF|src|SRC|Href|HRef|HREf|hRef|hREf|hREF|hrEf|hrEF|hreF|Src|SRc|sRc|sRC)="([^"]+)/ ) {¬$links = $links . "\n" . $2;¬$processeddata =~ s/(href|HREF|src|SRC|Href|HRef|HREf|hRef|hREf|hREF|hrEf|hrEF|hreF|Src|SRc|sRc|sRC)="[^"]+/ /;¬}¬#until ( $number == $oldnum ) {¬#$processeddata =~ /(href|HREF|src|SRC|Href|HRef|HREf|hRef|hREf|hREF|hrEf|hrEF|hreF|Src|SRc|sRc|sRC)="([^"]+)/;¬##print $links;¬#if ( $links ne $oldlinks ) {¬#$oldlinks = $links;¬#$processeddata =~ /(href|HREF|src|SRC|Href|HRef|HREf|hRef|hREf|hREF|hrEf|hrEF|hreF|Src|SRc|sRc|sRC)="([^"]+)/;¬#$links = $links . "\n" . $2;¬#}¬##$oldnum = $number;¬##$number = $oldnum+1;¬#if ( $links ne $oldlinks ) {¬#$oldnum = $number;¬#$number = $oldnum + 1;¬#}¬#$processeddata =~ s/(href|HREF|src|SRC|Href|HRef|HREf|hRef|hREf|hREF|hrEf|hrEF|hreF|Src|SRc|sRc|sRC)="[^"]+/ /;¬#}¬#print "\nLinks:\n$links\n$number\n";¬#$processeddata =~ /(http|rtsp|ftp)://[^"]+/;¬#print $links;¬#$links = $links . "\n" . $1;¬#if ( $links ne "\n" ) {¬#$oldnum = 0;¬#$number = 1;¬#}¬#$processeddata =~ s/(http|rtsp|ftp)://[^"]+/ /;¬#print "\nLinks:\n$links\n$number\n";¬#print $processeddata;¬#while ( $processeddata =~ /(http|rtsp|ftp)://.+\.\w+/ ) {¬#$links = $links . "\n" . $1;¬#$processeddata =~ s/(http|rtsp|ftp)://[^"]+/ /;¬#}¬$links =~ s/^\n//g;¬$links =~ s/\n\n/\n/g;¬print LINKS $links."\n";¬print " Done\n";¬#print "$processeddata"."\n";¬#$links = m/(href|src)="[^"]/;¬#$processedata = s/src="/"/g;¬#$processedata = s/href="/"/g;¬#$processedata = s/"/\n/g;¬#print "$processedata";¬#HTML::SimpleLinkExtor($links);¬#nls to spaces¬print "Removing newlines...";¬#print "Logging...\n";¬#print LOG "$!";¬#print LOG "Parsed newlines\n";¬print " Done\n";¬$processeddata =~ s/\n/ /g;¬#html opening tags to spaces¬print "Removing HTML tags...";¬#print "Logging...\n";¬#print LOG "$!";¬#print LOG "Parsed opening HTML tags\n";¬$processeddata =~ s/<[^>]+>/ /g;¬print " Done\n";¬#closing html tags to spaces¬#print "Removing closing HTML tags...";¬#print "Logging...\n";¬#print LOG "$!";¬#print LOG "Parsed closing HTML tags\n";¬#print " Done\n";¬#s/<(?:[^>'"]*|(['"]).*?\1)*>//gs;¬#$processeddata =~ s/<\/[^>]+/ /g;¬#everything that isn't a letter, number, or undescore to a space¬print "Removing junk characters...";¬#print "Logging...\n";¬#print LOG "$!";¬#print LOG "Parsed junk characters\n";¬$processeddata =~ s/<![^>]+>/ /g;¬$processeddata =~ s/\W/ /g;¬print " Done\n";¬#remove extra spaces¬print "Removing extra spaces...";¬#print "Logging...\n";¬#print LOG "$!";¬#print LOG "Removed extra spaces\n";¬$processeddata =~ s/ +/ /g;¬print " Done\n";¬#make it lowercase¬print "Lowercasing text...: ";¬print "A, ";¬$processeddata =~ s/A/a/g;¬print "B, ";¬$processeddata =~ s/B/b/g;¬print "C, ";¬$processeddata =~ s/C/c/g;¬print "D, ";¬$processeddata =~ s/D/d/g;¬print "E, ";¬$processeddata =~ s/E/e/g;¬print "F, ";¬$processeddata =~ s/F/f/g;¬print "G, ";¬$processeddata =~ s/G/g/g;¬print "H, ";¬$processeddata =~ s/H/h/g;¬print "I, ";¬$processeddata =~ s/I/i/g;¬print "J, ";¬$processeddata =~ s/J/j/g;¬print "K, ";¬$processeddata =~ s/K/k/g;¬print "L, ";¬$processeddata =~ s/L/l/g;¬print "M, ";¬$processeddata =~ s/M/m/g;¬print "N, ";¬$processeddata =~ s/N/n/g;¬print "O, ";¬$processeddata =~ s/O/o/g;¬print "P, ";¬$processeddata =~ s/P/p/g;¬print "Q, ";¬$processeddata =~ s/Q/q/g;¬print "R, ";¬$processeddata =~ s/R/r/g;¬print "S, ";¬$processeddata =~ s/S/s/g;¬print "T, ";¬$processeddata =~ s/T/t/g;¬print "U, ";¬$processeddata =~ s/U/u/g;¬print "V, ";¬$processeddata =~ s/V/v/g;¬print "W, ";¬$processeddata =~ s/W/w/g;¬print "X, ";¬$processeddata =~ s/X/x/g;¬print "Y, ";¬$processeddata =~ s/Y/y/g;¬print "Z...";¬$processeddata =~ s/Z/z/g;¬#print "Logging...\n";¬#print LOG "$!";¬#print LOG "Lowercased text\n";¬print " Done\n";¬#append comma¬print "Additional parsing...";¬#$processeddata =~ s/(.)/$chars{$1}++;$1/eg;¬#print "frequency of '$_' is $chars{$_}\n";¬#if ( $processeddata =~ // ) {¬#$processeddata = $processeddata . ",";¬$processeddata =~ s/ / \n/g;¬#print OUTPUT $processeddata;¬#print $processeddata;¬@wordhasg = split /\n/,$processeddata;¬#%wordhash = ¬#foreach my $processeddata(@words) {¬#$wordhash{$processeddata}=1;¬#}¬#copy("output.scdat", "outputtemp.scdat");¬#@words = <OUTPUTTEMP>;¬#@wordstemp = sort {uc($a) cmp uc($b)} @words;¬#print @wordstemp;¬#print WORDS @wordstemp;¬@wordhasg = sort @wordhasg;¬#print OUTPUTA @wordhasg;¬print OUTPUTA @wordhasg;¬my %hash; foreach my $text(@wordhasg) {¬$hash{$text}=1;¬} my @wofd = join "", keys %hash;¬@wofd = sort @wofd;¬print WORDS @wofd;¬#print %wordhash;¬#print "Logging...\n";¬#print LOG "$!";¬#print LOG "Additionally parsed\n";#remove unnecesary spaces¬print " Done\n";¬print "Removing unnecessary space before comma, if it's there...";¬$processeddata =~ s/ ,/,/g;¬#print "Logging...\n";¬#print LOG "$!";¬#print LOG "Removed unnecessary space befor comma, if it's there\n";#append url¬print " Done\n";¬print "Appending URL...";¬$processeddata = $processeddata . $url;¬#print "Logging...\n";¬#print LOG "$!";¬#print LOG "Appended URL\n";#print it¬print " Done\n";¬#print "Y, ";¬#print "$processeddata\n";¬#append nl¬print "Preparing to write to the file...";¬$processeddata = $processeddata . "\n";¬#print "Logging...\n";¬#print LOG "$!";¬#print LOG "Wrote data\n";#write it to the file¬if ($processeddata =~ /^\s+/) {¬$processeddata =~ s/^\s+//g;¬}¬print " Done\n";¬print "Writing data to the file...";¬print OUTPUT $processeddata;¬print " Done\n";¬#print "Logging...\n";¬#print LOG "$!";¬#print LOG "Logged...\n";#write errors to the log¬print "Final logging...";¬#print LOG "$!";¬#print LOG "Succeeded\n\n==================================\n\n";¬print PROCESSEDLINKS $url;¬print " Done\n-----\n";¬print "Done!\n\n==================================\n\n";¬close INPUT;¬close OUTPUT;¬close LOG;
#open files
print "\n\n==================================\n\nReading data files...";
#print "Reading data files...";
$/ = undef;
open(INPUT, "input.scdat") or print "Input error (input.scdat): $!"."!\n";
open(URL, "url.scdat") or print "URL error (url.scdat): $!"."!\n";
open(OUTPUT, ">>output.scdat") or print "Output error (output.scdat): $!"."!\n";
open(OUTPUTA, ">>outputa.scdat") or print "Outputa error (outputa.scdat): $!"."!\n";
open(WORDS, ">>words.scdat") or print "Word output error (words.scdat): $!"."!\n";
open(OUTPUTTEMP, "outputtemp.scdat") or print "Word input error (outputtemp.scdat): $!"."!\n";
open(LINKS, ">>links.scdat") or print "Links output error (links.scdat): $!"."!\n";
open(PROCESSEDLINKS, ">>processedlinks.scdat") or print "Processed Links output error (links.scdat): $!"."!\n";
open(LOG, ">>log.scdat") or print "Log error (log.scdat): $!"."!\n";
#write errors to the log
#print "Logging...\n";
#print LOG "$!";
#print LOG "Read datafiles\n";
print " Done\nGetting variables...";
#variables
#print "Getting variables...";
my $url = <URL>;
my $dataa = <INPUT>;
my $processeddata = "$dataa"." "."$url";
#my $processedata = "$dataa"." "."$url";
#my $data = "$processeddata";
my $links = "";
my $number = 0;
my $oldnum = 1;
my @words = "";
my @wordhasg = "";
my %wordhash = "";
my @wordstemp = "";
my $oldlinks = "";
#print "Logging...\n";
#print LOG "$!";
#print LOG "Got variables\n";
print " Done\nExtracting links...";
#extract links
#print "Extracting links...";
$processeddata =~ /(href|HREF|src|SRC|Href|HRef|HREf|hRef|hREf|hREF|hrEf|hrEF|hreF|Src|SRc|sRc|sRC)="([^"]+)/;
print $links;
$links = $links . "\n" . $2;
if ( $links ne "\n" ) {
$oldnum = 0;
$number = 1;
}
$processeddata =~ s/(href|HREF|src|SRC|Href|HRef|HREf|hRef|hREf|hREF|hrEf|hrEF|hreF|Src|SRc|sRc|sRC)="[^"]+/ /;
#print "\nLinks:\n$links\n$number\n";
#print $processeddata;
while ( $processeddata =~ /(href|HREF|src|SRC|Href|HRef|HREf|hRef|hREf|hREF|hrEf|hrEF|hreF|Src|SRc|sRc|sRC)="([^"]+)/ ) {
$links = $links . "\n" . $2;
$processeddata =~ s/(href|HREF|src|SRC|Href|HRef|HREf|hRef|hREf|hREF|hrEf|hrEF|hreF|Src|SRc|sRc|sRC)="[^"]+/ /;
}
#until ( $number == $oldnum ) {
#$processeddata =~ /(href|HREF|src|SRC|Href|HRef|HREf|hRef|hREf|hREF|hrEf|hrEF|hreF|Src|SRc|sRc|sRC)="([^"]+)/;
##print $links;
#if ( $links ne $oldlinks ) {
#$oldlinks = $links;
#$processeddata =~ /(href|HREF|src|SRC|Href|HRef|HREf|hRef|hREf|hREF|hrEf|hrEF|hreF|Src|SRc|sRc|sRC)="([^"]+)/;
#$links = $links . "\n" . $2;
#}
##$oldnum = $number;
##$number = $oldnum+1;
#if ( $links ne $oldlinks ) {
#$oldnum = $number;
#$number = $oldnum + 1;
#}
#$processeddata =~ s/(href|HREF|src|SRC|Href|HRef|HREf|hRef|hREf|hREF|hrEf|hrEF|hreF|Src|SRc|sRc|sRC)="[^"]+/ /;
#}
#print "\nLinks:\n$links\n$number\n";
#$processeddata =~ /(http|rtsp|ftp)://[^"]+/;
#print $links;
#$links = $links . "\n" . $1;
#if ( $links ne "\n" ) {
#$oldnum = 0;
#$number = 1;
#}
#$processeddata =~ s/(http|rtsp|ftp)://[^"]+/ /;
#print "\nLinks:\n$links\n$number\n";
#print $processeddata;
#while ( $processeddata =~ /(http|rtsp|ftp)://.+\.\w+/ ) {
#$links = $links . "\n" . $1;
#$processeddata =~ s/(http|rtsp|ftp)://[^"]+/ /;
#}
$links =~ s/^\n//g;
$links =~ s/\n\n/\n/g;
print LINKS $links."\n";
print " Done\nRemoving newlines...";
#print "$processeddata"."\n";
#$links = m/(href|src)="[^"]/;
#$processedata = s/src="/"/g;
#$processedata = s/href="/"/g;
#$processedata = s/"/\n/g;
#print "$processedata";
#HTML::SimpleLinkExtor($links);
#nls to spaces
#print "Removing newlines...";
#print "Logging...\n";
#print LOG "$!";
#print LOG "Parsed newlines\n";
print " Done\nRemoving HTML tags...";
$processeddata =~ s/\n/ /g;
#html opening tags to spaces
#print "Removing HTML tags...";
#print "Logging...\n";
#print LOG "$!";
#print LOG "Parsed opening HTML tags\n";
$processeddata =~ s/<[^>]+>/ /g;
print " Done\nRemoving junk characters...";
#closing html tags to spaces
#print "Removing closing HTML tags...";
#print "Logging...\n";
#print LOG "$!";
#print LOG "Parsed closing HTML tags\n";
#print " Done\n";
#s/<(?:[^>'"]*|(['"]).*?\1)*>//gs;
#$processeddata =~ s/<\/[^>]+/ /g;
#everything that isn't a letter, number, or undescore to a space
#print "Removing junk characters...";
#print "Logging...\n";
#print LOG "$!";
#print LOG "Parsed junk characters\n";
$processeddata =~ s/<![^>]+>/ /g;
$processeddata =~ s/\W/ /g;
print " Done\nRemoving extra spaces...";
#remove extra spaces
#print "Removing extra spaces...";
#print "Logging...\n";
#print LOG "$!";
#print LOG "Removed extra spaces\n";
$processeddata =~ s/ +/ /g;
print " Done\nLowercasing text...: ";
#make it lowercase
#print "Lowercasing text...: ";
print "A, ";
$processeddata =~ s/A/a/g;
print "B, ";
$processeddata =~ s/B/b/g;
print "C, ";
$processeddata =~ s/C/c/g;
print "D, ";
$processeddata =~ s/D/d/g;
print "E, ";
$processeddata =~ s/E/e/g;
print "F, ";
$processeddata =~ s/F/f/g;
print "G, ";
$processeddata =~ s/G/g/g;
print "H, ";
$processeddata =~ s/H/h/g;
print "I, ";
$processeddata =~ s/I/i/g;
print "J, ";
$processeddata =~ s/J/j/g;
print "K, ";
$processeddata =~ s/K/k/g;
print "L, ";
$processeddata =~ s/L/l/g;
print "M, ";
$processeddata =~ s/M/m/g;
print "N, ";
$processeddata =~ s/N/n/g;
print "O, ";
$processeddata =~ s/O/o/g;
print "P, ";
$processeddata =~ s/P/p/g;
print "Q, ";
$processeddata =~ s/Q/q/g;
print "R, ";
$processeddata =~ s/R/r/g;
print "S, ";
$processeddata =~ s/S/s/g;
print "T, ";
$processeddata =~ s/T/t/g;
print "U, ";
$processeddata =~ s/U/u/g;
print "V, ";
$processeddata =~ s/V/v/g;
print "W, ";
$processeddata =~ s/W/w/g;
print "X, ";
$processeddata =~ s/X/x/g;
print "Y, ";
$processeddata =~ s/Y/y/g;
print "Z...";
$processeddata =~ s/Z/z/g;
#print "Logging...\n";
#print LOG "$!";
#print LOG "Lowercased text\n";
print " Done\nAdditional parsing...";
#append comma
#print "Additional parsing...";
#$processeddata =~ s/(.)/$chars{$1}++;$1/eg;
#print "frequency of '$_' is $chars{$_}\n";
#if ( $processeddata =~ // ) {
#$processeddata = $processeddata . ",";
$processeddata =~ s/ / \n/g;
#print OUTPUT $processeddata;
#print $processeddata;
@wordhasg = split /\n/,$processeddata;
#%wordhash = 
#foreach my $processeddata(@words) {
#$wordhash{$processeddata}=1;
#}
#copy("output.scdat", "outputtemp.scdat");
#@words = <OUTPUTTEMP>;
#@wordstemp = sort {uc($a) cmp uc($b)} @words;
#print @wordstemp;
#print WORDS @wordstemp;
@wordhasg = sort @wordhasg;
#print OUTPUTA @wordhasg;
print OUTPUTA @wordhasg;
my %hash; foreach my $text(@wordhasg) {
$hash{$text}=1;
} my @wofd = join "", keys %hash;
@wofd = sort @wofd;
print WORDS @wofd;
#print %wordhash;
#print "Logging...\n";
#print LOG "$!";
#print LOG "Additionally parsed\n";#remove unnecesary spaces
print " Done\nRemoving unnecessary space before comma, if it's there...";
#print "Removing unnecessary space before comma, if it's there...";
$processeddata =~ s/ ,/,/g;
#print "Logging...\n";
#print LOG "$!";
#print LOG "Removed unnecessary space befor comma, if it's there\n";#append url
print " Done\nAppending URL...";
#print "Appending URL...";
$processeddata = $processeddata . $url;
#print "Logging...\n";
#print LOG "$!";
#print LOG "Appended URL\n";#print it
print " Done\nPreparing to write to the file...";
#print "Y, ";
#print "$processeddata\n";
#append nl
#print "Preparing to write to the file...";
$processeddata = $processeddata . "\n";
#print "Logging...\n";
#print LOG "$!";
#print LOG "Wrote data\n";#write it to the file
if ($processeddata =~ /^\s+/) {
$processeddata =~ s/^\s+//g;
}
print " Done\nWriting data to the file...";
#print "Writing data to the file...";
print OUTPUT $processeddata;
print " Done\nFinal logging...";
#print "Logging...\n";
#print LOG "$!";
#print LOG "Logged...\n";#write errors to the log
#print "Final logging...";
#print LOG "$!";
#print LOG "Succeeded\n\n==================================\n\n";
print PROCESSEDLINKS $url;
print " Done\n-----\n";
print "Done!\n\n==================================\n\n";
close INPUT;
close OUTPUT;
close LOG;