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
$z[4]=Array("include","",1209,1244);
$z[4][4]['filename']="head.htm";
$z[5]=Array("field","",1368,1389);
$z[5][4]['name']="typeurl";
$z[6]=Array("field","\$ID = @me; \$sql = \"SELECT * FROM `dede_arctype` WHERE id=\$ID\";\$query = mysql_query(\$sql);\$row=mysql_fetch_array(\$query); \$relID = \"\$row[reid]\"; if(\$relID == 0) {@me = \$row[typename];}else{\$sql = \"SELECT `typename` FROM `dede_arctype` WHERE id=\$relID\";\$query = mysql_query(\$sql);\$row=mysql_fetch_array(\$query); @me = \$row[typename];}",1391,1775);
$z[6][4]['name']="typeid";
$z[6][4]['runphp']="yes";
$z[7]=Array("channel","\r\n        <li><a href='[field:typelink/]' title='[field:typename/]'>[field:typename/]</a></li>\r\n        ",1847,2087);
$z[7][4]['type']="son";
$z[7][4]['currentstyle']="<li class='current'><a href='~typelink~'>~typename~</a></li>";
$z[8]=Array("list","\r\n          <div class=\"col-lg-3 col-md-4 col-sm-6 col-xs-12 not-animated pro_list\" data-animate=\"flipInX\">\r\n            <div class=\"pro_img\"><a href=\"[field:arcurl/]\" title=\"[field:title/]\"><img src=\"[field:litpic/]\" alt=\"[field:title/]\"></a></div>\r\n            <div class=\"pro_title\"><a href='[field:arcurl/]' title='[field:title/]'>[field:title/]</a></div>\r\n          </div>\r\n          ",2212,2652);
$z[8][4]['pagesize']="12";
$z[8][4]['titlelen']="36";
$z[9]=Array("pagelist","",2775,2841);
$z[9][4]['listitem']="index,end,pre,next,pageno";
$z[9][4]['listsize']="3";
$z[10]=Array("include","",2944,2979);
$z[10][4]['filename']="foot.htm";

?>