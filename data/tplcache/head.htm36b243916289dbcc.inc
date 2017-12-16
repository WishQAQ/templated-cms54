<?php
$z[0]=Array("global","",115,141);
$z[0][4]['name']="cfg_webname";
$z[1]=Array("global","",182,208);
$z[1][4]['name']="cfg_webname";
$z[2]=Array("field","(@me==\"\")? @me=\" class='current'\":@me=\"\";",558,649);
$z[2][4]['name']="typeid";
$z[2][4]['runphp']="yes";
$z[3]=Array("channelartlist","\r\n        <li><a href='{dede:field name='typeurl'/}' {dede:field name='currentstyle'/}>{dede:field name='typename'/}</a>\r\n          <ul>\r\n            {dede:channel type='son' noself='yes'}\r\n            <li><a href='[field:typelink/]' title=\"[field:typename/]\">[field:typename/]</a></li>\r\n            {/dede:channel}\r\n          </ul>\r\n        </li>\r\n        ",675,1095);
$z[3][4]['row']="10";
$z[3][4]['typeid']="top";
$z[4]=Array("channelartlist","\r\n          <li><span><a href='{dede:field name='typeurl'/}'>{dede:field name='typename'/}</a></span><a href=\"javascript:;\"><i class=\"touch-arrow-down\"></i></a>\r\n            <ul>\r\n              {dede:channel type='son' noself='yes'}\r\n              <li><a href='[field:typelink/]' title=\"[field:typename/]\">[field:typename/]</a></li>\r\n              {/dede:channel}\r\n            </ul>\r\n          </li>\r\n          ",1300,1774);
$z[4][4]['row']="10";
$z[4][4]['typeid']="top";
$z[5]=Array("arclist","\r\n        <li><a href=\"[field:lj/]\" title=\"[field:title/]\" target=\"_blank\"><img src=\"[field:litpic/]\" /></a></li>\r\n        ",1965,2170);
$z[5][4]['typeid']="14";
$z[5][4]['row']="5";
$z[5][4]['addfields']="lj";
$z[5][4]['channelid']="17";

?>