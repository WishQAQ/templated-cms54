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
$z[4]=Array("include","",1207,1242);
$z[4][4]['filename']="head.htm";
$z[5]=Array("field","",1365,1386);
$z[5][4]['name']="typeurl";
$z[6]=Array("field","\$ID = @me; \$sql = \"SELECT * FROM `dede_arctype` WHERE id=\$ID\";\$query = mysql_query(\$sql);\$row=mysql_fetch_array(\$query); \$relID = \"\$row[reid]\"; if(\$relID == 0) {@me = \$row[typename];}else{\$sql = \"SELECT `typename` FROM `dede_arctype` WHERE id=\$relID\";\$query = mysql_query(\$sql);\$row=mysql_fetch_array(\$query); @me = \$row[typename];}",1388,1772);
$z[6][4]['name']="typeid";
$z[6][4]['runphp']="yes";
$z[7]=Array("channel","\r\n        <li><a href='[field:typelink/]' title='[field:typename/]'>[field:typename/]</a></li>\r\n        ",1844,2084);
$z[7][4]['type']="son";
$z[7][4]['currentstyle']="<li class='current'><a href='~typelink~'>~typename~</a></li>";
$z[8]=Array("list","\r\n          <div class=\"art_list not-animated\" data-animate=\"fadeInUp\">\r\n            <div class=\"art_img\"><a href='[field:arcurl/]'><img src='[field:litpic/]' width=\"\" /></a></div>\r\n            <div class=\"art_right\">\r\n                <div class=\"art_title\"><a href='[field:arcurl/]' >[field:title/]</a></div>\r\n                <div class=\"art_author\"><span>日期：[field:pubdate function='strftime(\"%Y-%m-%d\",@me)'/]</span></div>\r\n                <div class=\"art_des\">[field:description function='cn_substr(@me,250)'/]...</div>\r\n            </div>\r\n          </div>\r\n          ",2196,2812);
$z[8][4]['pagesize']="10";
$z[9]=Array("pagelist","",2933,2999);
$z[9][4]['listitem']="index,end,pre,next,pageno";
$z[9][4]['listsize']="3";
$z[10]=Array("include","",3091,3126);
$z[10][4]['filename']="foot.htm";

?>