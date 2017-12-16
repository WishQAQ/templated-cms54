<?php
$z[0]=Array("field","",205,224);
$z[0][4]['name']="title";
$z[1]=Array("global","",225,251);
$z[1][4]['name']="cfg_webname";
$z[2]=Array("field","",292,321);
$z[2][4]['name']="keywords";
$z[3]=Array("field","",361,419);
$z[3][4]['name']="description";
$z[3][4]['function']="html2text(@me)";
$z[4]=Array("include","",1307,1342);
$z[4][4]['filename']="head.htm";
$z[5]=Array("field","",1466,1487);
$z[5][4]['name']="typeurl";
$z[6]=Array("field","\$ID = @me; \$sql = \"SELECT * FROM `dede_arctype` WHERE id=\$ID\";\$query = mysql_query(\$sql);\$row=mysql_fetch_array(\$query); \$relID = \"\$row[reid]\"; if(\$relID == 0) {@me = \$row[typename];}else{\$sql = \"SELECT `typename` FROM `dede_arctype` WHERE id=\$relID\";\$query = mysql_query(\$sql);\$row=mysql_fetch_array(\$query); @me = \$row[typename];}",1489,1873);
$z[6][4]['name']="typeid";
$z[6][4]['runphp']="yes";
$z[7]=Array("channel","\r\n        <li><a href='[field:typelink/]' title='[field:typename/]'>[field:typename/]</a></li>\r\n        ",1945,2185);
$z[7][4]['type']="son";
$z[7][4]['currentstyle']="<li class='current'><a href='~typelink~'>~typename~</a></li>";
$z[8]=Array("field","",2244,2265);
$z[8][4]['name']="content";
$z[9]=Array("include","",2330,2365);
$z[9][4]['filename']="foot.htm";

?>