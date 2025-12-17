fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2673918525;
    st `.shlib_internal` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2673918525(args) {
  (reg args:*) -+> V { var args:*, reg r:cls, reg r1:cls, reg _Platform:*, reg _Platform1:V, reg c:L, reg _Platform3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r2:V, reg r3:V, reg Sys_getenv:cls, reg r4:V, reg sym:cls, reg base:cls, reg guard:L, reg r5:V, reg r6:V, reg cross:*, reg cross1:V, reg nzchar:cls, reg r7:V, reg c1:L, reg _in_:cls, reg cross2:*, reg cross3:V, reg p:p(V +), reg sym1:cls, reg base1:cls, reg guard1:L, reg r9:V, reg r10:V, reg c2:cls, reg r11:V, reg p1:p(V +), reg r13:V, reg r14:V, reg c3:L, reg stop:cls, reg sQuote:cls, reg cross4:*, reg cross5:V, reg p2:p(V +), reg r16:V, reg p3:p(V +), reg r18:V, reg Sys_setenv:cls, reg cross6:*, reg cross7:V, reg r20:V, reg c4:L, reg paste0:cls, reg cross8:*, reg cross9:V, reg p4:p(V +), reg r22:V, reg p5:p(V +), reg r24:V, reg WINDOWS:*, reg WINDOWS1:V, reg r26:V, reg c5:L, reg readLines:cls, reg file_path:cls, reg paste1:cls, reg R_home:cls, reg r27:V, reg p6:p(V +), reg Sys_getenv1:cls, reg r29:V, reg p7:p(V +), reg r31:V, reg p8:p(V +), reg r33:V, reg p9:p(V +), reg r35:V, reg sub:cls, reg grep:cls, reg mconf:*, reg mconf1:V, reg p10:p(V +), reg r37:V, reg p11:p(V +), reg r39:V, reg sub1:cls, reg grep1:cls, reg mconf2:*, reg mconf3:V, reg p12:p(V +), reg r41:V, reg p13:p(V +), reg r43:V, reg Sys_getenv2:cls, reg r44:V, reg Sys_getenv3:cls, reg r45:V, reg chartr:cls, reg R_home1:cls, reg r47:V, reg p14:p(V +), reg r49:V, reg Sys_setenv1:cls, reg rhome:*, reg rhome1:V, reg p15:p(V +), reg r51:V, reg Sys_getenv4:cls, reg r52:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r53:V, reg r54:V, reg rarch:*, reg rarch1:V, reg is_na:cls, reg r55:V, reg c6:L, reg sym3:cls, reg base3:cls, reg guard3:L, reg r56:V, reg r57:V, reg _Platform4:*, reg _Platform5:V, reg c7:L, reg _Platform7:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r58:V, reg nzchar1:cls, reg r59:V, reg c8:L, reg paste2:cls, reg _Platform8:*, reg _Platform9:V, reg c9:L, reg _Platform11:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg r60:V, reg p16:p(V +), reg r62:V, reg Sys_setenv2:cls, reg rarch2:*, reg rarch3:V, reg p17:p(V +), reg r64:V, reg r65:V, reg character:cls, reg r66:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r67:V, reg r68:V, reg file_path1:cls, reg paste3:cls, reg R_home2:cls, reg r69:V, reg p18:p(V +), reg rarch4:*, reg rarch5:V, reg p19:p(V +), reg r72:V, reg p20:p(V +), reg r74:V, reg makevars_site:cls, reg r75:V, reg file_path2:cls, reg R_home3:cls, reg r76:V, reg p21:p(V +), reg WINDOWS2:*, reg WINDOWS3:V, reg c10:L, reg p22:p(V +), reg r79:V, reg c11:cls, reg r80:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r81:V, reg r82:V, reg SHLIB_LIBADD:*, reg SHLIB_LIBADD1:V, reg nzchar2:cls, reg r83:V, reg c12:L, reg SHLIB_LIBADD2:*, reg SHLIB_LIBADD3:V, reg SHLIB_LIBADD4:V, reg character1:cls, reg r84:V, reg character2:cls, reg r85:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r86:V, reg r87:V, reg args1:*, reg args2:V, reg length:cls, reg r88:V, reg c13:L, reg args3:*, reg args4:V, reg c14:L, reg args6:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg __:cls, reg r89:V, reg _in_1:cls, reg a:*, reg a1:V, reg p23:p(V +), reg sym7:cls, reg base7:cls, reg guard7:L, reg r91:V, reg r92:V, reg c15:cls, reg r93:V, reg p24:p(V +), reg r95:V, reg c16:L, reg Usage:cls, reg r96:V, reg _in_2:cls, reg a2:*, reg a3:V, reg p25:p(V +), reg sym8:cls, reg base8:cls, reg guard8:L, reg r100:V, reg r101:V, reg c17:cls, reg r102:V, reg p26:p(V +), reg r104:V, reg c18:L, reg cat:cls, reg R_version:*, reg R_version1:V, reg c19:L, reg R_version3:V, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg __1:cls, reg r105:V, reg p27:p(V +), reg R_version4:*, reg R_version5:V, reg c20:L, reg R_version7:V, reg dr10:V, reg dc5:L, reg dx10:V, reg dx11:V, reg __2:cls, reg r107:V, reg p28:p(V +), reg R_version8:*, reg R_version9:V, reg c21:L, reg R_version11:V, reg dr12:V, reg dc6:L, reg dx12:V, reg dx13:V, reg __3:cls, reg r109:V, reg p29:p(V +), reg r111:V, reg cat1:cls, reg _R_copyright_msg:cls, reg r112:V, reg p30:p(V +), reg r114:V, reg _in_3:cls, reg a4:*, reg a5:V, reg p31:p(V +), reg sym9:cls, reg base9:cls, reg guard9:L, reg r117:V, reg r118:V, reg c22:cls, reg r119:V, reg p32:p(V +), reg r121:V, reg c23:L, reg _in_4:cls, reg a6:*, reg a7:V, reg p33:p(V +), reg sym10:cls, reg base10:cls, reg guard10:L, reg r123:V, reg r124:V, reg c24:cls, reg r125:V, reg p34:p(V +), reg r127:V, reg c25:L, reg _in_5:cls, reg a8:*, reg a9:V, reg p35:p(V +), reg sym11:cls, reg base11:cls, reg guard11:L, reg r129:V, reg r130:V, reg c26:cls, reg r131:V, reg p36:p(V +), reg r133:V, reg c27:L, reg a10:*, reg a11:V, reg r134:V, reg c28:L, reg a12:*, reg a13:V, reg r135:V, reg c29:L, reg a14:*, reg a15:V, reg r136:V, reg c30:L, reg a16:*, reg a17:V, reg r137:V, reg c31:L, reg a18:*, reg a19:V, reg r138:V, reg c32:L, reg a20:*, reg a21:V, reg r139:V, reg c33:L, reg a22:*, reg a23:V, reg r140:V, reg c34:L, reg a24:*, reg a25:V, reg r141:V, reg c35:L, reg sym12:cls, reg base12:cls, reg guard12:L, reg r142:V, reg r143:V, reg args7:*, reg args8:V, reg length1:cls, reg r144:V, reg r145:V, reg c36:L, reg args9:*, reg args10:V, reg c37:L, reg args12:V, reg dr14:V, reg dc7:L, reg dx14:V, reg dx15:V, reg __4:cls, reg r146:V, reg args13:*, reg args14:V, reg c38:L, reg args16:V, reg dr16:V, reg dc8:L, reg dx16:V, reg dx17:V, reg __5:cls, reg r147:V, reg dx18:V, reg stop1:cls, reg r148:V, reg substr:cls, reg a26:*, reg a27:V, reg p37:p(V +), reg r150:V, reg r151:V, reg c39:L, reg substr1:cls, reg a28:*, reg a29:V, reg p38:p(V +), reg r153:V, reg sub2:cls, reg a30:*, reg a31:V, reg p39:p(V +), reg r155:V, reg sub3:cls, reg paste4:cls, reg base13:*, reg base14:V, reg p40:p(V +), reg r157:V, reg p41:p(V +), reg a32:*, reg a33:V, reg p42:p(V +), reg r160:V, reg sym13:cls, reg base15:cls, reg guard13:L, reg r161:V, reg r162:V, reg ext:*, reg ext1:V, reg nzchar3:cls, reg r163:V, reg c40:L, reg _in_6:cls, reg ext2:*, reg ext3:V, reg p43:p(V +), reg sym14:cls, reg base16:cls, reg guard14:L, reg r165:V, reg r166:V, reg c41:cls, reg r167:V, reg p44:p(V +), reg r169:V, reg c42:L, reg base17:*, reg base18:V, reg ext4:*, reg ext5:V, reg r170:V, reg c43:L, reg base20:*, reg base21:V, reg _in_7:cls, reg ext6:*, reg ext7:V, reg p45:p(V +), reg sym15:cls, reg base22:cls, reg guard15:L, reg r172:V, reg r173:V, reg c44:cls, reg r174:V, reg p46:p(V +), reg r176:V, reg c45:L, reg base23:*, reg base24:V, reg ext8:*, reg ext9:V, reg r177:V, reg c46:L, reg base25:*, reg base26:V, reg _in_8:cls, reg ext10:*, reg ext11:V, reg p47:p(V +), reg sym16:cls, reg base27:cls, reg guard16:L, reg r179:V, reg r180:V, reg c47:cls, reg r181:V, reg p48:p(V +), reg r183:V, reg c48:L, reg base28:*, reg base29:V, reg ext12:*, reg ext13:V, reg r184:V, reg c49:L, reg base30:*, reg base31:V, reg ext14:*, reg ext15:V, reg r185:V, reg c50:L, reg base32:*, reg base33:V, reg sym17:cls, reg base34:cls, reg guard17:L, reg r186:V, reg r187:V, reg nobj:*, reg nobj1:V, reg nzchar4:cls, reg r188:V, reg c51:L, reg c53:V, reg sym18:cls, reg base35:cls, reg guard18:L, reg r189:V, reg c56:L, reg r190:V, reg shlib:*, reg shlib1:V, reg nzchar5:cls, reg r191:V, reg r192:V, reg c57:L, reg c58:V, reg c60:L, reg paste5:cls, reg nobj2:*, reg nobj3:V, reg p49:p(V +), reg SHLIB_EXT:*, reg SHLIB_EXT1:V, reg p50:p(V +), reg r195:V, reg r196:V, reg sym19:cls, reg base36:cls, reg guard19:L, reg r198:V, reg r199:V, reg nobj4:*, reg nobj5:V, reg nzchar6:cls, reg r200:V, reg c61:L, reg sym20:cls, reg base37:cls, reg guard20:L, reg r201:V, reg r202:V, reg objs:*, reg objs1:V, reg nobj6:*, reg nobj7:V, reg c62:cls, reg r203:V, reg sym21:cls, reg base38:cls, reg guard21:L, reg r204:V, reg r205:V, reg pkg_libs:*, reg pkg_libs1:V, reg a34:*, reg a35:V, reg c63:cls, reg r206:V, reg args17:*, reg args18:V, reg c64:L, reg args20:V, reg dr18:V, reg dc9:L, reg dx19:V, reg dx20:V, reg __6:cls, reg r207:V, reg sym22:cls, reg base39:cls, reg guard22:L, reg r208:V, reg r209:V, reg objs2:*, reg objs3:V, reg length2:cls, reg r210:V, reg c65:L, reg paste6:cls, reg objs4:*, reg objs5:V, reg p51:p(V +), reg OBJ_EXT:*, reg OBJ_EXT1:V, reg p52:p(V +), reg r213:V, reg sym23:cls, reg base40:cls, reg guard23:L, reg r215:V, reg r216:V, reg makefiles:*, reg makefiles1:V, reg makevars_user:cls, reg r217:V, reg c66:cls, reg r218:V, reg paste7:cls, reg shQuote:cls, reg objs6:*, reg objs7:V, reg p53:p(V +), reg r220:V, reg p54:p(V +), reg r222:V, reg WINDOWS4:*, reg WINDOWS5:V, reg c67:L, reg c69:V, reg file_exists:cls, reg p55:p(V +), reg r224:V, reg c70:L, reg c71:L, reg c72:V, reg file_exists1:cls, reg p56:p(V +), reg r226:V, reg c75:L, reg c76:V, reg c79:L, reg c80:V, reg c82:L, reg sym24:cls, reg base41:cls, reg guard24:L, reg r227:V, reg r228:V, reg fn:*, reg fn1:V, reg makefiles2:*, reg makefiles3:V, reg c83:cls, reg r229:V, reg readLines1:cls, reg fn2:*, reg fn3:V, reg p57:p(V +), reg r231:V, reg sym25:cls, reg base42:cls, reg guard25:L, reg r232:V, reg r233:V, reg grep2:cls, reg lines:*, reg lines1:V, reg p58:p(V +), reg r235:V, reg length3:cls, reg r236:V, reg c84:L, reg sym26:cls, reg base43:cls, reg guard26:L, reg r238:V, reg r239:V, reg grep3:cls, reg lines2:*, reg lines3:V, reg p59:p(V +), reg r241:V, reg length4:cls, reg r242:V, reg r243:V, reg c85:L, reg gsub:cls, reg ll:*, reg ll1:V, reg p60:p(V +), reg r245:V, reg gsub1:cls, reg val:*, reg val1:V, reg p61:p(V +), reg r247:V, reg _in_9:cls, reg val2:*, reg val3:V, reg p62:p(V +), reg cxx_standards:*, reg cxx_standards1:V, reg p63:p(V +), reg r250:V, reg c86:L, reg val4:*, reg val5:V, reg r251:V, reg sym27:cls, reg base44:cls, reg guard27:L, reg r253:V, reg r254:V, reg grepl:cls, reg lines4:*, reg lines5:V, reg p64:p(V +), reg r256:V, reg any:cls, reg r257:V, reg c87:L, reg r258:V, reg file_exists2:cls, reg r260:V, reg c88:L, reg sym28:cls, reg base45:cls, reg guard28:L, reg r261:V, reg r262:V, reg makefiles4:*, reg makefiles5:V, reg c89:cls, reg r263:V, reg readLines2:cls, reg r264:V, reg sym29:cls, reg base46:cls, reg guard29:L, reg r265:V, reg r266:V, reg grep4:cls, reg lines6:*, reg lines7:V, reg p65:p(V +), reg r268:V, reg length5:cls, reg r269:V, reg c90:L, reg sym30:cls, reg base47:cls, reg guard30:L, reg r271:V, reg r272:V, reg grep5:cls, reg lines8:*, reg lines9:V, reg p66:p(V +), reg r274:V, reg length6:cls, reg r275:V, reg r276:V, reg c91:L, reg gsub2:cls, reg ll2:*, reg ll3:V, reg p67:p(V +), reg r278:V, reg gsub3:cls, reg val6:*, reg val7:V, reg p68:p(V +), reg r280:V, reg _in_10:cls, reg val8:*, reg val9:V, reg p69:p(V +), reg cxx_standards2:*, reg cxx_standards3:V, reg p70:p(V +), reg r283:V, reg c92:L, reg val10:*, reg val11:V, reg r284:V, reg sym31:cls, reg base48:cls, reg guard31:L, reg r286:V, reg r287:V, reg grepl1:cls, reg lines10:*, reg lines11:V, reg p71:p(V +), reg r289:V, reg any1:cls, reg r290:V, reg c93:L, reg r291:V, reg sym32:cls, reg base49:cls, reg guard32:L, reg r292:V, reg r293:V, reg use_cxxstd:*, reg use_cxxstd1:V, reg c94:V, reg c95:L, reg cxx_standards4:*, reg cxx_standards5:V, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c96:L, reg x:V, reg sym33:cls, reg base50:cls, reg guard33:L, reg r294:V, reg i7:I, reg r295:V, reg Sys_getenv5:cls, reg paste8:cls, reg i8:*, reg i9:V, reg p72:p(V +), reg r297:V, reg p73:p(V +), reg r299:V, reg nzchar7:cls, reg r300:V, reg c97:L, reg i12:*, reg i13:V, reg i14:I, reg sym34:cls, reg base51:cls, reg guard34:L, reg r302:V, reg r303:V, reg use_cxxstd2:*, reg use_cxxstd3:V, reg c98:V, reg c99:L, reg Sys_getenv6:cls, reg r304:V, reg _in_11:cls, reg val12:*, reg val13:V, reg p74:p(V +), reg cxx_standards6:*, reg cxx_standards7:V, reg p75:p(V +), reg r307:V, reg c100:L, reg val14:*, reg val15:V, reg val16:V, reg with_cxx:*, reg with_cxx1:V, reg c101:L, reg r308:cls, reg sym35:cls, reg base52:cls, reg guard35:L, reg r309:V, reg r310:V, reg use_cxxstd4:*, reg use_cxxstd5:V, reg c102:V, reg r311:V, reg c103:L, reg use_cxxstd6:*, reg use_cxxstd7:V, reg r312:V, reg c104:L, reg stop2:cls, reg r313:V, reg checkCXX:cls, reg use_cxxstd8:*, reg use_cxxstd9:V, reg p76:p(V +), reg r316:V, reg r317:V, reg c105:L, reg stop3:cls, reg paste9:cls, reg use_cxxstd10:*, reg use_cxxstd11:V, reg p77:p(V +), reg use_cxxstd12:*, reg use_cxxstd13:V, reg p78:p(V +), reg r320:V, reg p79:p(V +), reg r322:V, reg r323:V, reg r324:V, reg paste10:cls, reg shQuote1:cls, reg shlib2:*, reg shlib3:V, reg p80:p(V +), reg r327:V, reg p81:p(V +), reg r329:V, reg with_cxx2:*, reg with_cxx3:V, reg c106:L, reg sym36:cls, reg base53:cls, reg guard36:L, reg r330:V, reg r331:V, reg use_cxxstd14:*, reg use_cxxstd15:V, reg c107:V, reg r332:V, reg c108:L, reg sprintf:cls, reg sym37:cls, reg base54:cls, reg guard37:L, reg r333:V, reg r334:V, reg c109:cls, reg r335:V, reg p82:p(V +), reg use_cxxstd16:*, reg use_cxxstd17:V, reg p83:p(V +), reg use_cxxstd18:*, reg use_cxxstd19:V, reg p84:p(V +), reg r339:V, reg sym38:cls, reg base55:cls, reg guard38:L, reg r340:V, reg r341:V, reg cxx_makeargs:*, reg cxx_makeargs1:V, reg makeargs:*, reg makeargs1:V, reg c110:cls, reg r342:V, reg r343:V, reg sym39:cls, reg base56:cls, reg guard39:L, reg r344:V, reg r345:V, reg makeargs2:*, reg makeargs3:V, reg c111:cls, reg r346:V, reg use_fc_link:*, reg use_fc_link1:V, reg c112:L, reg c114:V, reg with_f77:*, reg with_f78:V, reg c115:L, reg c116:L, reg c117:V, reg with_f9x:*, reg with_f9x1:V, reg c120:L, reg c121:V, reg c124:L, reg c125:V, reg c127:L, reg sym40:cls, reg base57:cls, reg guard40:L, reg r348:V, reg r349:V, reg makeargs4:*, reg makeargs5:V, reg c128:cls, reg r350:V, reg with_objc:*, reg with_objc1:V, reg c129:L, reg sym41:cls, reg base58:cls, reg guard41:L, reg r351:V, reg r352:V, reg shlib_libadd:*, reg shlib_libadd1:V, reg c130:cls, reg r353:V, reg with_f79:*, reg with_f80:V, reg c131:L, reg c132:V, reg with_f9x2:*, reg with_f9x3:V, reg c134:L, reg c135:V, reg c137:L, reg use_fc_link2:*, reg use_fc_link3:V, reg c138:L, reg sym42:cls, reg base59:cls, reg guard42:L, reg r355:V, reg r356:V, reg shlib_libadd2:*, reg shlib_libadd3:V, reg c139:cls, reg r357:V, reg r358:V, reg sym43:cls, reg base60:cls, reg guard43:L, reg r359:V, reg r360:V, reg shlib_libadd4:*, reg shlib_libadd5:V, reg c140:cls, reg r361:V, reg sym44:cls, reg base61:cls, reg guard44:L, reg r363:V, reg r364:V, reg use_C:*, reg use_C1:V, reg nzchar8:cls, reg r365:V, reg c141:L, reg r366:cls, reg checkC:cls, reg use_C2:*, reg use_C3:V, reg p85:p(V +), reg r368:V, reg r369:V, reg c142:L, reg stop4:cls, reg paste11:cls, reg use_C4:*, reg use_C5:V, reg p86:p(V +), reg use_C6:*, reg use_C7:V, reg p87:p(V +), reg r372:V, reg p88:p(V +), reg r374:V, reg sprintf1:cls, reg sym45:cls, reg base62:cls, reg guard45:L, reg r376:V, reg r377:V, reg c143:cls, reg r378:V, reg p89:p(V +), reg use_C8:*, reg use_C9:V, reg p90:p(V +), reg r381:V, reg sym46:cls, reg base63:cls, reg guard46:L, reg r382:V, reg r383:V, reg c_makeargs:*, reg c_makeargs1:V, reg makeargs6:*, reg makeargs7:V, reg c144:cls, reg r384:V, reg sym47:cls, reg base64:cls, reg guard47:L, reg r386:V, reg r387:V, reg pkg_libs2:*, reg pkg_libs3:V, reg length7:cls, reg r388:V, reg c145:L, reg sym48:cls, reg base65:cls, reg guard48:L, reg r389:V, reg r390:V, reg makeargs8:*, reg makeargs9:V, reg paste12:cls, reg p91:cls, reg pkg_libs4:*, reg pkg_libs5:V, reg p92:p(V +), reg r392:V, reg p93:p(V +), reg r394:V, reg c146:cls, reg r395:V, reg sym49:cls, reg base66:cls, reg guard49:L, reg r397:V, reg r398:V, reg shlib_libadd6:*, reg shlib_libadd7:V, reg length8:cls, reg r399:V, reg c147:L, reg sym50:cls, reg base67:cls, reg guard50:L, reg r400:V, reg r401:V, reg makeargs10:*, reg makeargs11:V, reg paste13:cls, reg p94:cls, reg shlib_libadd8:*, reg shlib_libadd9:V, reg p95:p(V +), reg r403:V, reg p96:p(V +), reg r405:V, reg c148:cls, reg r406:V, reg with_f9x4:*, reg with_f9x5:V, reg c149:L, reg c151:V, reg file_exists3:cls, reg r408:V, reg c152:L, reg c153:V, reg c155:L, reg c157:V, reg sym51:cls, reg base68:cls, reg guard51:L, reg r409:V, reg c160:L, reg r410:V, reg grep6:cls, reg lines12:*, reg lines13:V, reg p97:p(V +), reg r412:V, reg length9:cls, reg r413:V, reg c161:L, reg c162:V, reg c164:L, reg sym52:cls, reg base69:cls, reg guard52:L, reg r414:V, reg r415:V, reg makeargs12:*, reg makeargs13:V, reg c165:cls, reg r416:V, reg WINDOWS6:*, reg WINDOWS7:V, reg c166:L, reg c168:V, reg debug:*, reg debug1:V, reg c169:L, reg c170:V, reg c172:L, reg sym53:cls, reg base70:cls, reg guard53:L, reg r418:V, reg r419:V, reg makeargs14:*, reg makeargs15:V, reg c173:cls, reg r420:V, reg WINDOWS8:*, reg WINDOWS9:V, reg c174:L, reg c176:V, reg rarch6:*, reg rarch7:V, reg r422:V, reg c177:L, reg c178:V, reg c180:L, reg sym54:cls, reg base71:cls, reg guard54:L, reg r423:V, reg r424:V, reg makeargs16:*, reg makeargs17:V, reg c181:cls, reg r425:V, reg config_val_to_logical:cls, reg Sys_getenv7:cls, reg r427:V, reg p98:p(V +), reg r429:V, reg sym55:cls, reg base72:cls, reg guard55:L, reg r430:V, reg r431:V, reg makeargs18:*, reg makeargs19:V, reg isTRUE:cls, reg use_lto:*, reg use_lto1:V, reg p99:p(V +), reg r433:V, reg c182:L, reg sym56:cls, reg base73:cls, reg guard56:L, reg r434:V, reg r435:V, reg paste14:cls, reg shQuote2:cls, reg r436:V, reg p100:p(V +), reg r438:V, reg paste15:cls, reg shQuote3:cls, reg r439:V, reg p101:p(V +), reg r441:V, reg c183:cls, reg r442:V, reg r443:V, reg isFALSE:cls, reg use_lto2:*, reg use_lto3:V, reg p102:p(V +), reg r445:V, reg c184:L, reg sym57:cls, reg base74:cls, reg guard57:L, reg r446:V, reg r447:V, reg c185:cls, reg r448:V, reg c186:cls, reg r449:V, reg config_val_to_logical1:cls, reg Sys_getenv8:cls, reg r450:V, reg p103:p(V +), reg r452:V, reg c187:L, reg sym58:cls, reg base75:cls, reg guard58:L, reg r453:V, reg r454:V, reg makeargs20:*, reg makeargs21:V, reg c188:cls, reg r455:V, reg paste16:cls, reg MAKE:*, reg MAKE1:V, reg p104:p(V +), reg p105:cls, reg paste17:cls, reg shQuote4:cls, reg makefiles6:*, reg makefiles7:V, reg p106:p(V +), reg r459:V, reg p107:p(V +), reg r461:V, reg p108:p(V +), reg r463:V, reg p109:p(V +), reg p110:cls, reg makeargs22:*, reg makeargs23:V, reg p111:p(V +), reg r466:V, reg p112:p(V +), reg p113:cls, reg makeobjs:*, reg makeobjs1:V, reg p114:p(V +), reg r469:V, reg p115:p(V +), reg r471:V, reg dry_run:*, reg dry_run1:V, reg c189:L, reg cat2:cls, reg cmd:*, reg cmd1:V, reg p116:p(V +), reg r473:V, reg system:cls, reg paste18:cls, reg cmd2:*, reg cmd3:V, reg p117:p(V +), reg r475:V, reg p118:p(V +), reg r477:V, reg system1:cls, reg paste19:cls, reg MAKE2:*, reg MAKE3:V, reg p119:p(V +), reg p120:cls, reg paste20:cls, reg shQuote5:cls, reg makefiles8:*, reg makefiles9:V, reg p121:p(V +), reg r481:V, reg p122:p(V +), reg r483:V, reg p123:p(V +), reg r485:V, reg p124:p(V +), reg r487:V, reg p125:p(V +), reg r489:V, reg with_c:*, reg with_c1:V, reg c190:L, reg lines14:*, reg lines15:V, reg c191:L, reg lines17:V, reg dr20:V, reg dc10:L, reg dx21:V, reg dx22:V, reg grep7:cls, reg lines18:*, reg lines19:V, reg p126:p(V +), reg r491:V, reg __7:cls, reg r492:V, reg sub4:cls, reg cc:*, reg cc1:V, reg p127:p(V +), reg r494:V, reg try:cls, reg system2:cls, reg paste21:cls, reg cc2:*, reg cc3:V, reg p128:p(V +), reg r496:V, reg p129:p(V +), reg r498:V, reg p130:p(V +), reg r500:V, reg sym59:cls, reg base76:cls, reg guard59:L, reg r501:V, reg r502:V, reg cc_ver:*, reg cc_ver1:V, reg inherits:cls, reg r503:V, reg r504:V, reg c192:L, reg message:cls, reg sQuote1:cls, reg cc_ver2:*, reg cc_ver3:V, reg c193:L, reg cc_ver5:V, reg dr22:V, reg dc11:L, reg dx23:V, reg dx24:V, reg __8:cls, reg r505:V, reg p131:p(V +), reg r507:V, reg p132:p(V +), reg r509:V, reg r510:V, reg with_f81:*, reg with_f82:V, reg c194:L, reg c195:V, reg with_f9x6:*, reg with_f9x7:V, reg c197:L, reg c198:V, reg c200:L, reg lines20:*, reg lines21:V, reg c201:L, reg lines23:V, reg dr24:V, reg dc12:L, reg dx25:V, reg dx26:V, reg grep8:cls, reg lines24:*, reg lines25:V, reg p133:p(V +), reg r513:V, reg __9:cls, reg r514:V, reg sub5:cls, reg fc:*, reg fc1:V, reg p134:p(V +), reg r516:V, reg try1:cls, reg system3:cls, reg paste22:cls, reg fc2:*, reg fc3:V, reg p135:p(V +), reg r518:V, reg p136:p(V +), reg r520:V, reg p137:p(V +), reg r522:V, reg sym60:cls, reg base77:cls, reg guard60:L, reg r523:V, reg r524:V, reg fc_ver:*, reg fc_ver1:V, reg inherits1:cls, reg r525:V, reg r526:V, reg c202:L, reg message1:cls, reg sQuote2:cls, reg fc_ver2:*, reg fc_ver3:V, reg c203:L, reg fc_ver5:V, reg dr26:V, reg dc13:L, reg dx27:V, reg dx28:V, reg __10:cls, reg r527:V, reg p138:p(V +), reg r529:V, reg p139:p(V +), reg r531:V, reg r532:V, reg with_cxx4:*, reg with_cxx5:V, reg c204:L, reg lines26:*, reg lines27:V, reg c205:L, reg lines29:V, reg dr28:V, reg dc14:L, reg dx29:V, reg dx30:V, reg grep9:cls, reg lines30:*, reg lines31:V, reg p140:p(V +), reg r535:V, reg __11:cls, reg r536:V, reg sub6:cls, reg cxx:*, reg cxx1:V, reg p141:p(V +), reg r538:V, reg sym61:cls, reg base78:cls, reg guard61:L, reg r539:V, reg r540:V, reg cxx2:*, reg cxx3:V, reg nzchar9:cls, reg r541:V, reg c206:L, reg try2:cls, reg system4:cls, reg paste23:cls, reg cxx4:*, reg cxx5:V, reg p142:p(V +), reg r543:V, reg p143:p(V +), reg r545:V, reg p144:p(V +), reg r547:V, reg sym62:cls, reg base79:cls, reg guard62:L, reg r548:V, reg r549:V, reg cxx_ver:*, reg cxx_ver1:V, reg inherits2:cls, reg r550:V, reg r551:V, reg c207:L, reg message2:cls, reg sQuote3:cls, reg cxx_ver2:*, reg cxx_ver3:V, reg c208:L, reg cxx_ver5:V, reg dr30:V, reg dc15:L, reg dx31:V, reg dx32:V, reg __12:cls, reg r552:V, reg p145:p(V +), reg r554:V, reg p146:p(V +), reg r556:V, reg sym63:cls, reg base80:cls, reg guard63:L, reg r557:V, reg r558:V, reg use_cxxstd20:*, reg use_cxxstd21:V, reg c209:V, reg r559:V, reg c210:L, reg message3:cls, reg use_cxxstd22:*, reg use_cxxstd23:V, reg p147:p(V +), reg r561:V, reg r562:V, reg r563:V, reg r564:V, reg Sys_info:cls, reg r566:V, reg c211:L, reg r568:V, reg dr32:V, reg dc16:L, reg dx33:V, reg dx34:V, reg __13:cls, reg r569:V, reg r570:V, reg c212:L, reg c214:V, reg with_c2:*, reg with_c3:V, reg c215:L, reg c216:L, reg c217:V, reg with_f83:*, reg with_f84:V, reg c220:L, reg c221:V, reg c224:L, reg c225:L, reg c226:V, reg with_f9x8:*, reg with_f9x9:V, reg c229:L, reg c230:V, reg c233:L, reg c234:L, reg c235:V, reg with_cxx6:*, reg with_cxx7:V, reg c238:L, reg c239:V, reg c242:L, reg c243:V, reg c245:L, reg try3:cls, reg system5:cls, reg r571:V, reg p148:p(V +), reg r573:V, reg sym64:cls, reg base81:cls, reg guard64:L, reg r574:V, reg r575:V, reg sdk:*, reg sdk1:V, reg inherits3:cls, reg r576:V, reg r577:V, reg c246:L, reg Sys_readlink:cls, reg sdk2:*, reg sdk3:V, reg p149:p(V +), reg r579:V, reg message4:cls, reg sQuote4:cls, reg sdk4:*, reg sdk5:V, reg p150:p(V +), reg r581:V, reg p151:p(V +), reg r583:V, reg r584:V, reg preclean:*, reg preclean1:V, reg c247:L, reg system6:cls, reg paste24:cls, reg cmd4:*, reg cmd5:V, reg p152:p(V +), reg r587:V, reg p153:p(V +), reg r589:V, reg system7:cls, reg cmd6:*, reg cmd7:V, reg p154:p(V +), reg r592:V, reg res:*, reg res1:V, reg r593:V, reg c248:L, reg c250:V, reg build_objects_symbol_tables:*, reg build_objects_symbol_tables1:V, reg c251:L, reg c252:V, reg c254:L, reg system8:cls, reg paste25:cls, reg cmd8:*, reg cmd9:V, reg p155:p(V +), reg r595:V, reg p156:p(V +), reg r597:V, reg clean:*, reg clean1:V, reg c255:L, reg system9:cls, reg paste26:cls, reg cmd10:*, reg cmd11:V, reg p157:p(V +), reg r600:V, reg p158:p(V +), reg r602:V, reg res2:*, reg res3:V |
    mkenv;
    st args = args;
    r = clos inner2708337952;
    st Usage = r;
    r1 = clos inner1246119658;
    st p1 = r1;
    _Platform = ld `.Platform`;
    check L218() else D0();
  D0():
    deopt 6 [_Platform];
  L218():
    _Platform1 = force? _Platform;
    checkMissing(_Platform1);
    c = `is.object`(_Platform1);
    if c then L220() else L221(_Platform1);
  L219(dx1):
    r3 = `==`(dx1, "windows");
    st WINDOWS = r3;
    Sys_getenv = ldf `Sys.getenv`;
    check L223() else D1();
  L220():
    dr = tryDispatchBuiltin.1("$", _Platform1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L222() else L221(dr);
  L221(_Platform3):
    r2 = `$`(_Platform3, <sym OS.type>);
    goto L219(r2);
  D1():
    deopt 13 [];
  L222():
    dx = getTryDispatchBuiltinValue(dr);
    goto L219(dx);
  L223():
    r4 = dyn Sys_getenv("R_CROSS_BUILD");
    check L224() else D2();
  D2():
    deopt 15 [r4];
  L224():
    st cross = r4;
    sym = ldf nzchar;
    base = ldf nzchar in base;
    guard = `==`.4(sym, base);
    if guard then L225() else L226();
  L0(r6):
    c1 = `as.logical`(r6);
    if c1 then L229() else L1();
  L225():
    cross = ld cross;
    check L227() else D3();
  L226():
    r5 = dyn base(<sym cross>);
    goto L0(r5);
  D3():
    deopt 19 [cross];
  L1():
    goto L4();
  L4():
    WINDOWS = ld WINDOWS;
    check L239() else D11();
  L227():
    cross1 = force? cross;
    checkMissing(cross1);
    nzchar = ldf nzchar in base;
    r7 = dyn nzchar(cross1);
    check L228() else D4();
  L229():
    _in_ = ldf `%in%`;
    check L230() else D5();
  D4():
    deopt 22 [r7];
  D5():
    deopt 24 [];
  D11():
    deopt 47 [WINDOWS];
  L228():
    goto L0(r7);
  L230():
    p = prom<V +>{
      cross2 = ld cross;
      cross3 = force? cross2;
      checkMissing(cross3);
      return cross3;
    };
    p1 = prom<V +>{
      sym1 = ldf c;
      base1 = ldf c in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r10):
      return r10;
    L1():
      c2 = ldf c in base;
      r11 = dyn c2("x64", "singlearch");
      goto L0(r11);
    L2():
      r9 = dyn base1("x64", "singlearch");
      goto L0(r9);
    };
    r13 = dyn _in_(p, p1);
    check L231() else D6();
  L239():
    WINDOWS1 = force? WINDOWS;
    checkMissing(WINDOWS1);
    r26 = `!`(WINDOWS1);
    c5 = `as.logical`(r26);
    if c5 then L240() else L5();
  D6():
    deopt 27 [r13];
  L5():
    chartr = ldf chartr;
    check L252() else D22();
  L6():
    st OBJ_EXT = ".o";
    character = ldf character;
    check L278() else D36();
  L231():
    r14 = `!`(r13);
    c3 = `as.logical`(r14);
    if c3 then L232() else L2();
  L240():
    readLines = ldf readLines;
    check L241() else D12();
  D12():
    deopt 51 [];
  D22():
    deopt 80 [];
  D36():
    deopt 139 [];
  L2():
    goto L3();
  L3():
    st WINDOWS = TRUE;
    Sys_setenv = ldf `Sys.setenv`;
    check L236() else D9();
  L232():
    stop = ldf stop;
    check L233() else D7();
  L241():
    p9 = prom<V +>{
      file_path = ldf `file.path`;
      p8 = prom<V +>{
        paste1 = ldf paste0;
        p6 = prom<V +>{
          R_home = ldf `R.home`;
          r27 = dyn R_home("etc");
          return r27;
        };
        p7 = prom<V +>{
          Sys_getenv1 = ldf `Sys.getenv`;
          r29 = dyn Sys_getenv1("R_ARCH");
          return r29;
        };
        r31 = dyn paste1(p6, p7);
        return r31;
      };
      r33 = dyn file_path(p8, "Makeconf");
      return r33;
    };
    r35 = dyn readLines(p9);
    check L242() else D13();
  L252():
    p14 = prom<V +>{
      R_home1 = ldf `R.home`;
      r47 = dyn R_home1();
      return r47;
    };
    r49 = dyn chartr("\\", "/", p14);
    check L253() else D23();
  L278():
    r66 = dyn character();
    check L279() else D37();
  D7():
    deopt 30 [];
  D9():
    deopt 41 [];
  D13():
    deopt 53 [r35];
  D23():
    deopt 84 [r49];
  D37():
    deopt 140 [r66];
  L233():
    p3 = prom<V +>{
      sQuote = ldf sQuote;
      p2 = prom<V +>{
        cross4 = ld cross;
        cross5 = force? cross4;
        checkMissing(cross5);
        return cross5;
      };
      r16 = dyn sQuote(p2);
      return r16;
    };
    r18 = dyn stop("invalid value ", p3, " for R_CROSS_BUILD");
    check L234() else D8();
  L236():
    p5 = prom<V +>{
      cross6 = ld cross;
      cross7 = force? cross6;
      checkMissing(cross7);
      r20 = `==`(cross7, "singlearch");
      c4 = `as.logical`(r20);
      if c4 then L1() else L0();
    L0():
      paste0 = ldf paste0;
      p4 = prom<V +>{
        cross8 = ld cross;
        cross9 = force? cross8;
        checkMissing(cross9);
        return cross9;
      };
      r22 = dyn paste0("/", p4);
      return r22;
    L1():
      return "";
    };
    r24 = dyn Sys_setenv[R_ARCH](p5);
    check L237() else D10();
  L242():
    st mconf = r35;
    sub = ldf sub;
    check L243() else D14();
  L253():
    st rhome = r49;
    Sys_setenv1 = ldf `Sys.setenv`;
    check L254() else D24();
  L279():
    st objs = r66;
    st shlib = "";
    sym4 = ldf c;
    base4 = ldf c in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L280() else L281();
  D8():
    deopt 34 [r18];
  D10():
    deopt 44 [r24];
  D14():
    deopt 56 [];
  D24():
    deopt 87 [];
  L12(r68):
    st makefiles = r68;
    sym5 = ldf nzchar;
    base5 = ldf nzchar in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L289() else L290();
  L234():
    goto L3();
  L237():
    goto L4();
  L243():
    p11 = prom<V +>{
      grep = ldf grep;
      p10 = prom<V +>{
        mconf = ld mconf;
        mconf1 = force? mconf;
        checkMissing(mconf1);
        return mconf1;
      };
      r37 = dyn grep[, , value, perl]("^SHLIB_EXT", p10, TRUE, TRUE);
      return r37;
    };
    r39 = dyn sub(".*= ", "", p11);
    check L244() else D15();
  L254():
    p15 = prom<V +>{
      rhome = ld rhome;
      rhome1 = force? rhome;
      checkMissing(rhome1);
      return rhome1;
    };
    r51 = dyn Sys_setenv1[R_HOME](p15);
    check L255() else D25();
  L280():
    file_path1 = ldf `file.path`;
    check L282() else D38();
  L281():
    r67 = dyn base4(<lang file.path(paste0(R.home("etc"), rarch), "Makeconf")>, <lang makevars_site()>, <lang file.path(R.home("share"), "make", if(WINDOWS, "winshlib.mk", "shlib.mk"))>);
    goto L12(r67);
  D15():
    deopt 60 [r39];
  D25():
    deopt 90 [r51];
  D38():
    deopt 148 [];
  L13(r82):
    c12 = `as.logical`(r82);
    if c12 then L293() else L14();
  L244():
    st SHLIB_EXT = r39;
    sub1 = ldf sub;
    check L245() else D16();
  L255():
    st SHLIB_EXT = ".dll";
    st SHLIB_LIBADD = "";
    st MAKE = "make";
    Sys_getenv4 = ldf `Sys.getenv`;
    check L256() else D26();
  L282():
    p20 = prom<V +>{
      paste3 = ldf paste0;
      p18 = prom<V +>{
        R_home2 = ldf `R.home`;
        r69 = dyn R_home2("etc");
        return r69;
      };
      p19 = prom<V +>{
        rarch4 = ld rarch;
        rarch5 = force? rarch4;
        checkMissing(rarch5);
        return rarch5;
      };
      r72 = dyn paste3(p18, p19);
      return r72;
    };
    r74 = dyn file_path1(p20, "Makeconf");
    check L283() else D39();
  L289():
    SHLIB_LIBADD = ld SHLIB_LIBADD;
    check L291() else D45();
  L290():
    r81 = dyn base5(<sym SHLIB_LIBADD>);
    goto L13(r81);
  D16():
    deopt 63 [];
  D26():
    deopt 101 [];
  D39():
    deopt 151 [r74];
  D45():
    deopt 166 [SHLIB_LIBADD];
  L14():
    character1 = ldf character;
    check L296() else D48();
  L15(SHLIB_LIBADD4):
    st shlib_libadd = SHLIB_LIBADD4;
    st with_c = FALSE;
    st with_cxx = FALSE;
    st with_f77 = FALSE;
    st with_f9x = FALSE;
    st with_objc = FALSE;
    st use_cxxstd = NULL;
    st use_fc_link = FALSE;
    st use_lto = NA_LGL;
    st use_C = "";
    character2 = ldf character;
    check L298() else D50();
  L245():
    p13 = prom<V +>{
      grep1 = ldf grep;
      p12 = prom<V +>{
        mconf2 = ld mconf;
        mconf3 = force? mconf2;
        checkMissing(mconf3);
        return mconf3;
      };
      r41 = dyn grep1[, , value, perl]("^SHLIB_LIBADD", p12, TRUE, TRUE);
      return r41;
    };
    r43 = dyn sub1(".*= ", "", p13);
    check L246() else D17();
  L256():
    r52 = dyn Sys_getenv4("R_ARCH", NA_STR);
    check L257() else D27();
  L283():
    makevars_site = ldf makevars_site;
    check L284() else D40();
  L291():
    SHLIB_LIBADD1 = force? SHLIB_LIBADD;
    checkMissing(SHLIB_LIBADD1);
    nzchar2 = ldf nzchar in base;
    r83 = dyn nzchar2(SHLIB_LIBADD1);
    check L292() else D46();
  L293():
    SHLIB_LIBADD2 = ld SHLIB_LIBADD;
    check L294() else D47();
  D17():
    deopt 67 [r43];
  D27():
    deopt 104 [r52];
  D40():
    deopt 153 [];
  D46():
    deopt 169 [r83];
  D47():
    deopt 170 [SHLIB_LIBADD2];
  D48():
    deopt 173 [];
  D50():
    deopt 204 [];
  L246():
    st SHLIB_LIBADD = r43;
    Sys_getenv2 = ldf `Sys.getenv`;
    check L247() else D18();
  L257():
    st rarch = r52;
    sym2 = ldf `is.na`;
    base2 = ldf `is.na` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L258() else L259();
  L284():
    r75 = dyn makevars_site();
    check L285() else D41();
  L292():
    goto L13(r83);
  L294():
    SHLIB_LIBADD3 = force? SHLIB_LIBADD2;
    checkMissing(SHLIB_LIBADD3);
    goto L15(SHLIB_LIBADD3);
  L296():
    r84 = dyn character1();
    check L297() else D49();
  L298():
    r85 = dyn character2();
    check L299() else D51();
  D18():
    deopt 70 [];
  D41():
    deopt 154 [r75];
  D49():
    deopt 174 [r84];
  D51():
    deopt 205 [r85];
  L7(r54):
    c6 = `as.logical`(r54);
    if c6 then L262() else L8();
  L247():
    r44 = dyn Sys_getenv2("MAKE");
    check L248() else D19();
  L258():
    rarch = ld rarch;
    check L260() else D28();
  L259():
    r53 = dyn base2(<sym rarch>);
    goto L7(r53);
  L285():
    file_path2 = ldf `file.path`;
    check L286() else D42();
  L297():
    goto L15(r84);
  L299():
    st pkg_libs = r85;
    st clean = FALSE;
    st preclean = FALSE;
    st dry_run = FALSE;
    st debug = FALSE;
    goto L60();
  D19():
    deopt 72 [r44];
  D28():
    deopt 108 [rarch];
  D42():
    deopt 156 [];
  L8():
    goto L6();
  L60():
    sym6 = ldf length;
    base6 = ldf length in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L300() else L301();
  L248():
    st MAKE = r44;
    Sys_getenv3 = ldf `Sys.getenv`;
    check L249() else D20();
  L260():
    rarch1 = force? rarch;
    checkMissing(rarch1);
    is_na = ldf `is.na` in base;
    r55 = dyn is_na(rarch1);
    check L261() else D29();
  L262():
    sym3 = ldf nzchar;
    base3 = ldf nzchar in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L263() else L264();
  L286():
    p21 = prom<V +>{
      R_home3 = ldf `R.home`;
      r76 = dyn R_home3("share");
      return r76;
    };
    p22 = prom<V +>{
      WINDOWS2 = ld WINDOWS;
      WINDOWS3 = force? WINDOWS2;
      checkMissing(WINDOWS3);
      c10 = `as.logical`(WINDOWS3);
      if c10 then L1() else L0();
    L0():
      return "shlib.mk";
    L1():
      return "winshlib.mk";
    };
    r79 = dyn file_path2(p21, "make", p22);
    check L287() else D43();
  D20():
    deopt 75 [];
  D29():
    deopt 111 [r55];
  D43():
    deopt 160 [r79];
  L9(r57):
    c8 = `as.logical`(r57);
    if c8 then L271() else L10();
  L16(r87):
    c13 = `as.logical`(r87);
    if c13 then L304() else L17();
  L249():
    r45 = dyn Sys_getenv3("R_ARCH");
    check L250() else D21();
  L261():
    goto L7(r55);
  L263():
    _Platform4 = ld `.Platform`;
    check L265() else D30();
  L264():
    r56 = dyn base3(<lang `$`(.Platform, r_arch)>);
    goto L9(r56);
  L287():
    c11 = ldf c in base;
    r80 = dyn c11(r74, r75, r79);
    check L288() else D44();
  L300():
    args1 = ld args;
    check L302() else D52();
  L301():
    r86 = dyn base6(<sym args>);
    goto L16(r86);
  D21():
    deopt 77 [r45];
  D30():
    deopt 114 [_Platform4];
  D44():
    deopt 162 [r80];
  D52():
    deopt 221 [args1];
  L10():
    st rarch = "";
    goto L11("");
  L11(r65):
    goto L6();
  L17():
    sym22 = ldf length;
    base39 = ldf length in base;
    guard22 = `==`.4(sym22, base39);
    if guard22 then L459() else L460();
  L250():
    st rarch = r45;
    goto L6();
  L265():
    _Platform5 = force? _Platform4;
    checkMissing(_Platform5);
    c7 = `is.object`(_Platform5);
    if c7 then L267() else L268(_Platform5);
  L271():
    paste2 = ldf paste0;
    check L272() else D32();
  L288():
    goto L12(r80);
  L302():
    args2 = force? args1;
    checkMissing(args2);
    length = ldf length in base;
    r88 = dyn length(args2);
    check L303() else D53();
  L304():
    args3 = ld args;
    check L305() else D54();
  D32():
    deopt 120 [];
  D53():
    deopt 224 [r88];
  D54():
    deopt 225 [args3];
  L61(r209):
    c65 = `as.logical`(r209);
    if c65 then L463() else L62();
  L266(dx3):
    nzchar1 = ldf nzchar in base;
    r59 = dyn nzchar1(dx3);
    check L270() else D31();
  L267():
    dr2 = tryDispatchBuiltin.1("$", _Platform5);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L269() else L268(dr2);
  L268(_Platform7):
    r58 = `$`(_Platform7, <sym r_arch>);
    goto L266(r58);
  L272():
    p16 = prom<V +>{
      _Platform8 = ld `.Platform`;
      _Platform9 = force? _Platform8;
      checkMissing(_Platform9);
      c9 = `is.object`(_Platform9);
      if c9 then L1() else L2(_Platform9);
    L0(dx5):
      return dx5;
    L1():
      dr4 = tryDispatchBuiltin.1("$", _Platform9);
      dc2 = getTryDispatchBuiltinDispatched(dr4);
      if dc2 then L3() else L2(dr4);
    L2(_Platform11):
      r60 = `$`(_Platform11, <sym r_arch>);
      goto L0(r60);
    L3():
      dx4 = getTryDispatchBuiltinValue(dr4);
      goto L0(dx4);
    };
    r62 = dyn paste2("/", p16);
    check L273() else D33();
  L303():
    goto L16(r88);
  L305():
    args4 = force? args3;
    checkMissing(args4);
    c14 = `is.object`(args4);
    if c14 then L306() else L307(args4);
  L459():
    objs2 = ld objs;
    check L461() else D127();
  L460():
    r208 = dyn base39(<sym objs>);
    goto L61(r208);
  D31():
    deopt 118 [r59];
  D33():
    deopt 123 [r62];
  D127():
    deopt 546 [objs2];
  L18(dx7):
    st a = dx7;
    _in_1 = ldf `%in%`;
    check L309() else D55();
  L62():
    goto L63();
  L63():
    sym23 = ldf c;
    base40 = ldf c in base;
    guard23 = `==`.4(sym23, base40);
    if guard23 then L467() else L468();
  L269():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L266(dx2);
  L270():
    goto L9(r59);
  L273():
    st rarch = r62;
    Sys_setenv2 = ldf `Sys.setenv`;
    check L274() else D34();
  L306():
    dr6 = tryDispatchBuiltin.1("[", args4);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L308() else L307(dr6);
  L307(args6):
    __ = ldf `[` in base;
    r89 = dyn __(args6, 1);
    goto L18(r89);
  L461():
    objs3 = force? objs2;
    checkMissing(objs3);
    length2 = ldf length in base;
    r210 = dyn length2(objs3);
    check L462() else D128();
  L463():
    paste6 = ldf paste0;
    check L464() else D129();
  D34():
    deopt 126 [];
  D55():
    deopt 232 [];
  D128():
    deopt 549 [r210];
  D129():
    deopt 551 [];
  L64(r216):
    st makefiles = r216;
    paste7 = ldf paste0;
    check L473() else D135();
  L274():
    p17 = prom<V +>{
      rarch2 = ld rarch;
      rarch3 = force? rarch2;
      checkMissing(rarch3);
      return rarch3;
    };
    r64 = dyn Sys_setenv2[R_ARCH](p17);
    check L275() else D35();
  L308():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L18(dx6);
  L309():
    p23 = prom<V +>{
      a = ld a;
      a1 = force? a;
      checkMissing(a1);
      return a1;
    };
    p24 = prom<V +>{
      sym7 = ldf c;
      base7 = ldf c in base;
      guard7 = `==`.4(sym7, base7);
      if guard7 then L1() else L2();
    L0(r92):
      return r92;
    L1():
      c15 = ldf c in base;
      r93 = dyn c15("-h", "--help");
      goto L0(r93);
    L2():
      r91 = dyn base7("-h", "--help");
      goto L0(r91);
    };
    r95 = dyn _in_1(p23, p24);
    check L310() else D56();
  L462():
    goto L61(r210);
  L464():
    p51 = prom<V +>{
      objs4 = ld objs;
      objs5 = force? objs4;
      checkMissing(objs5);
      return objs5;
    };
    p52 = prom<V +>{
      OBJ_EXT = ld OBJ_EXT;
      OBJ_EXT1 = force? OBJ_EXT;
      checkMissing(OBJ_EXT1);
      return OBJ_EXT1;
    };
    r213 = dyn paste6[, , collapse](p51, p52, " ");
    check L465() else D130();
  L467():
    makefiles = ld makefiles;
    check L469() else D131();
  L468():
    r215 = dyn base40(<sym makefiles>, <lang makevars_user()>);
    goto L64(r215);
  D35():
    deopt 129 [r64];
  D56():
    deopt 235 [r95];
  D130():
    deopt 556 [r213];
  D131():
    deopt 562 [makefiles];
  D135():
    deopt 571 [];
  L275():
    goto L11(r64);
  L310():
    c16 = `as.logical`(r95);
    if c16 then L311() else L19();
  L465():
    st objs = r213;
    goto L63();
  L469():
    makefiles1 = force? makefiles;
    checkMissing(makefiles1);
    makevars_user = ldf makevars_user;
    check L470() else D132();
  L473():
    p54 = prom<V +>{
      shQuote = ldf shQuote;
      p53 = prom<V +>{
        objs6 = ld objs;
        objs7 = force? objs6;
        checkMissing(objs7);
        return objs7;
      };
      r220 = dyn shQuote(p53);
      return r220;
    };
    r222 = dyn paste7("OBJECTS=", p54);
    check L474() else D136();
  D132():
    deopt 565 [];
  D136():
    deopt 574 [r222];
  L19():
    _in_2 = ldf `%in%`;
    check L316() else D59();
  L311():
    Usage = ldf Usage;
    check L312() else D57();
  L470():
    r217 = dyn makevars_user();
    check L471() else D133();
  L474():
    st makeobjs = r222;
    WINDOWS4 = ld WINDOWS;
    check L475() else D137();
  D57():
    deopt 237 [];
  D59():
    deopt 243 [];
  D133():
    deopt 566 [r217];
  D137():
    deopt 576 [WINDOWS4];
  L312():
    r96 = dyn Usage();
    check L313() else D58();
  L316():
    p25 = prom<V +>{
      a2 = ld a;
      a3 = force? a2;
      checkMissing(a3);
      return a3;
    };
    p26 = prom<V +>{
      sym8 = ldf c;
      base8 = ldf c in base;
      guard8 = `==`.4(sym8, base8);
      if guard8 then L1() else L2();
    L0(r101):
      return r101;
    L1():
      c17 = ldf c in base;
      r102 = dyn c17("-v", "--version");
      goto L0(r102);
    L2():
      r100 = dyn base8("-v", "--version");
      goto L0(r100);
    };
    r104 = dyn _in_2(p25, p26);
    check L317() else D60();
  L471():
    c66 = ldf c in base;
    r218 = dyn c66(makefiles1, r217);
    check L472() else D134();
  L475():
    WINDOWS5 = force? WINDOWS4;
    checkMissing(WINDOWS5);
    c67 = `as.logical`(WINDOWS5);
    if c67 then L476() else L65(c67);
  D58():
    deopt 238 [r96];
  D60():
    deopt 246 [r104];
  D134():
    deopt 568 [r218];
  L65(c69):
    c82 = `as.logical`(c69);
    if c82 then L484() else L67();
  L313():
    popenv;
    return 0;
  L317():
    c18 = `as.logical`(r104);
    if c18 then L318() else L21();
  L472():
    goto L64(r218);
  L476():
    file_exists = ldf `file.exists`;
    check L477() else D138();
  D138():
    deopt 579 [c67];
  L21():
    _in_3 = ldf `%in%`;
    check L325() else D65();
  L67():
    file_exists2 = ldf `file.exists`;
    check L523() else D163();
  L80():
    sym32 = ldf `is.null`;
    base49 = ldf `is.null` in base;
    guard32 = `==`.4(sym32, base49);
    if guard32 then L563() else L564();
  L318():
    cat = ldf cat;
    check L319() else D61();
  L477():
    p55 = prom<V +>{
      st fn = "Makevars.ucrt";
      invisible.0();
      return "Makevars.ucrt";
    };
    r224 = dyn file_exists(p55);
    check L478() else D139();
  L484():
    sym24 = ldf c;
    base41 = ldf c in base;
    guard24 = `==`.4(sym24, base41);
    if guard24 then L485() else L486();
  D61():
    deopt 248 [];
  D65():
    deopt 272 [];
  D139():
    deopt 581 [c67, r224];
  D163():
    deopt 688 [];
  L68(r228):
    st makefiles = r228;
    readLines1 = ldf readLines;
    check L490() else D145();
  L94(r293):
    c95 = `as.logical`(r293);
    if c95 then L566() else L95();
  L319():
    p27 = prom<V +>{
      R_version = ld `R.version`;
      R_version1 = force? R_version;
      checkMissing(R_version1);
      c19 = `is.object`(R_version1);
      if c19 then L1() else L2(R_version1);
    L0(dx9):
      return dx9;
    L1():
      dr8 = tryDispatchBuiltin.1("[[", R_version1);
      dc4 = getTryDispatchBuiltinDispatched(dr8);
      if dc4 then L3() else L2(dr8);
    L2(R_version3):
      __1 = ldf `[[` in base;
      r105 = dyn __1(R_version3, "major");
      goto L0(r105);
    L3():
      dx8 = getTryDispatchBuiltinValue(dr8);
      goto L0(dx8);
    };
    p28 = prom<V +>{
      R_version4 = ld `R.version`;
      R_version5 = force? R_version4;
      checkMissing(R_version5);
      c20 = `is.object`(R_version5);
      if c20 then L1() else L2(R_version5);
    L0(dx11):
      return dx11;
    L1():
      dr10 = tryDispatchBuiltin.1("[[", R_version5);
      dc5 = getTryDispatchBuiltinDispatched(dr10);
      if dc5 then L3() else L2(dr10);
    L2(R_version7):
      __2 = ldf `[[` in base;
      r107 = dyn __2(R_version7, "minor");
      goto L0(r107);
    L3():
      dx10 = getTryDispatchBuiltinValue(dr10);
      goto L0(dx10);
    };
    p29 = prom<V +>{
      R_version8 = ld `R.version`;
      R_version9 = force? R_version8;
      checkMissing(R_version9);
      c21 = `is.object`(R_version9);
      if c21 then L1() else L2(R_version9);
    L0(dx13):
      return dx13;
    L1():
      dr12 = tryDispatchBuiltin.1("[[", R_version9);
      dc6 = getTryDispatchBuiltinDispatched(dr12);
      if dc6 then L3() else L2(dr12);
    L2(R_version11):
      __3 = ldf `[[` in base;
      r109 = dyn __3(R_version11, "svn rev");
      goto L0(r109);
    L3():
      dx12 = getTryDispatchBuiltinValue(dr12);
      goto L0(dx12);
    };
    r111 = dyn cat[, , , , , , , sep]("R shared object builder: ", p27, ".", p28, " (r", p29, ")\n", "");
    check L320() else D62();
  L325():
    p31 = prom<V +>{
      a4 = ld a;
      a5 = force? a4;
      checkMissing(a5);
      return a5;
    };
    p32 = prom<V +>{
      sym9 = ldf c;
      base9 = ldf c in base;
      guard9 = `==`.4(sym9, base9);
      if guard9 then L1() else L2();
    L0(r118):
      return r118;
    L1():
      c22 = ldf c in base;
      r119 = dyn c22("-n", "--dry-run");
      goto L0(r119);
    L2():
      r117 = dyn base9("-n", "--dry-run");
      goto L0(r117);
    };
    r121 = dyn _in_3(p31, p32);
    check L326() else D66();
  L478():
    c70 = `as.logical`(r224);
    if c70 then L66(c67, c70) else L479();
  L485():
    fn = ld fn;
    check L487() else D142();
  L486():
    r227 = dyn base41(<sym fn>, <sym makefiles>);
    goto L68(r227);
  L523():
    r260 = dyn file_exists2("Makevars");
    check L524() else D164();
  L563():
    use_cxxstd = ld use_cxxstd;
    check L565() else D185();
  L564():
    r292 = dyn base49(<sym use_cxxstd>);
    goto L94(r292);
  D62():
    deopt 258 [r111];
  D66():
    deopt 275 [r121];
  D142():
    deopt 590 [fn];
  D145():
    deopt 598 [];
  D164():
    deopt 690 [r260];
  D185():
    deopt 792 [use_cxxstd];
  L66(c71, c72):
    c79 = `as.logical`(c72);
    c80 = `&&`(c71, c79);
    goto L65(c80);
  L95():
    goto L102();
  L102():
    sym34 = ldf `is.null`;
    base51 = ldf `is.null` in base;
    guard34 = `==`.4(sym34, base51);
    if guard34 then L579() else L580();
  L320():
    cat1 = ldf cat;
    check L321() else D63();
  L326():
    c23 = `as.logical`(r121);
    if c23 then L327() else L22();
  L479():
    file_exists1 = ldf `file.exists`;
    check L480() else D140();
  L487():
    fn1 = force? fn;
    checkMissing(fn1);
    makefiles2 = ld makefiles;
    check L488() else D143();
  L490():
    p57 = prom<V +>{
      fn2 = ld fn;
      fn3 = force? fn2;
      checkMissing(fn3);
      return fn3;
    };
    r231 = dyn readLines1[, warn](p57, FALSE);
    check L491() else D146();
  L524():
    c88 = `as.logical`(r260);
    if c88 then L525() else L81();
  L565():
    use_cxxstd1 = force? use_cxxstd;
    checkMissing(use_cxxstd1);
    c94 = `==`(use_cxxstd1, NULL);
    goto L94(c94);
  L566():
    cxx_standards4 = ld cxx_standards;
    check L567() else D186();
  D63():
    deopt 260 [];
  D140():
    deopt 583 [c67, c70];
  D143():
    deopt 592 [makefiles2];
  D146():
    deopt 602 [r231];
  D186():
    deopt 795 [cxx_standards4];
  L20():
    args17 = ld args;
    check L454() else D126();
  L22():
    _in_4 = ldf `%in%`;
    check L329() else D67();
  L81():
    goto L80();
  L103(r303):
    c99 = `as.logical`(r303);
    if c99 then L582() else L104();
  L321():
    p30 = prom<V +>{
      _R_copyright_msg = ldf `.R_copyright_msg`;
      r112 = dyn _R_copyright_msg(2000.0);
      return r112;
    };
    r114 = dyn cat1[, , , , sep]("", p30, "This is free software; see the GNU General Public License version 2", "or later for copying conditions.  There is NO warranty.", "\n");
    check L322() else D64();
  L327():
    st dry_run = TRUE;
    goto L20();
  L480():
    p56 = prom<V +>{
      st fn = "Makevars.win";
      invisible.0();
      return "Makevars.win";
    };
    r226 = dyn file_exists1(p56);
    check L481() else D141();
  L488():
    makefiles3 = force? makefiles2;
    checkMissing(makefiles3);
    c83 = ldf c in base;
    r229 = dyn c83(fn1, makefiles3);
    check L489() else D144();
  L491():
    st lines = r231;
    sym25 = ldf length;
    base42 = ldf length in base;
    guard25 = `==`.4(sym25, base42);
    if guard25 then L492() else L493();
  L525():
    sym28 = ldf c;
    base45 = ldf c in base;
    guard28 = `==`.4(sym28, base45);
    if guard28 then L526() else L527();
  L567():
    cxx_standards5 = force? cxx_standards4;
    checkMissing(cxx_standards5);
    s = toForSeq(cxx_standards5);
    l = length(s);
    i = 0;
    goto L96(i);
  L579():
    use_cxxstd2 = ld use_cxxstd;
    check L581() else D191();
  L580():
    r302 = dyn base51(<sym use_cxxstd>);
    goto L103(r302);
  D64():
    deopt 267 [r114];
  D67():
    deopt 280 [];
  D126():
    deopt 535 [args17];
  D141():
    deopt 585 [c67, c70, r226];
  D144():
    deopt 595 [r229];
  D191():
    deopt 818 [use_cxxstd2];
  L69(r233):
    c84 = `as.logical`(r233);
    if c84 then L497() else L70();
  L82(r262):
    st makefiles = r262;
    readLines2 = ldf readLines;
    check L530() else D167();
  L96(i1):
    i2 = `+`.1(i1, 1);
    c96 = `<`.1(l, i2);
    if c96 then L568() else L101();
  L104():
    goto L107();
  L107():
    with_cxx = ld with_cxx;
    check L591() else D197();
  L322():
    popenv;
    return 0;
  L329():
    p33 = prom<V +>{
      a6 = ld a;
      a7 = force? a6;
      checkMissing(a7);
      return a7;
    };
    p34 = prom<V +>{
      sym10 = ldf c;
      base10 = ldf c in base;
      guard10 = `==`.4(sym10, base10);
      if guard10 then L1() else L2();
    L0(r124):
      return r124;
    L1():
      c24 = ldf c in base;
      r125 = dyn c24("-d", "--debug");
      goto L0(r125);
    L2():
      r123 = dyn base10("-d", "--debug");
      goto L0(r123);
    };
    r127 = dyn _in_4(p33, p34);
    check L330() else D68();
  L454():
    args18 = force? args17;
    checkMissing(args18);
    c64 = `is.object`(args18);
    if c64 then L455() else L456(args18);
  L481():
    c75 = `as.logical`(r226);
    c76 = `||`(c70, c75);
    goto L66(c67, c76);
  L489():
    goto L68(r229);
  L492():
    grep2 = ldf grep;
    check L494() else D147();
  L493():
    r232 = dyn base42(<lang grep("^OBJECTS *=", lines, perl=TRUE, useBytes=TRUE)>);
    goto L69(r232);
  L526():
    makefiles4 = ld makefiles;
    check L528() else D165();
  L527():
    r261 = dyn base45("Makevars", <sym makefiles>);
    goto L82(r261);
  L581():
    use_cxxstd3 = force? use_cxxstd2;
    checkMissing(use_cxxstd3);
    c98 = `==`(use_cxxstd3, NULL);
    goto L103(c98);
  L582():
    Sys_getenv6 = ldf `Sys.getenv`;
    check L583() else D192();
  D68():
    deopt 283 [r127];
  D147():
    deopt 607 [];
  D165():
    deopt 694 [makefiles4];
  D167():
    deopt 700 [];
  D192():
    deopt 822 [];
  D197():
    deopt 838 [with_cxx];
  L59(dx20):
    st args = dx20;
    goto L60();
  L70():
    goto L71();
  L71():
    sym26 = ldf length;
    base43 = ldf length in base;
    guard26 = `==`.4(sym26, base43);
    if guard26 then L499() else L500();
  L99(i14):
    goto L102();
  L101():
    x = `[[`(s, i2, NULL, TRUE);
    st i = x;
    sym33 = ldf nzchar;
    base50 = ldf nzchar in base;
    guard33 = `==`.4(sym33, base50);
    if guard33 then L569() else L570();
  L330():
    c25 = `as.logical`(r127);
    if c25 then L331() else L23();
  L455():
    dr18 = tryDispatchBuiltin.1("[", args18);
    dc9 = getTryDispatchBuiltinDispatched(dr18);
    if dc9 then L457() else L456(dr18);
  L456(args20):
    __6 = ldf `[` in base;
    r207 = dyn __6(args20, -1);
    goto L59(r207);
  L494():
    p58 = prom<V +>{
      lines = ld lines;
      lines1 = force? lines;
      checkMissing(lines1);
      return lines1;
    };
    r235 = dyn grep2[, , perl, useBytes]("^OBJECTS *=", p58, TRUE, TRUE);
    check L495() else D148();
  L497():
    st makeobjs = "";
    goto L71();
  L528():
    makefiles5 = force? makefiles4;
    checkMissing(makefiles5);
    c89 = ldf c in base;
    r263 = dyn c89("Makevars", makefiles5);
    check L529() else D166();
  L530():
    r264 = dyn readLines2[, warn]("Makevars", FALSE);
    check L531() else D168();
  L568():
    goto L99(i2);
  L583():
    r304 = dyn Sys_getenv6("R_PKG_CXX_STD");
    check L584() else D193();
  L591():
    with_cxx1 = force? with_cxx;
    checkMissing(with_cxx1);
    c101 = `as.logical`(with_cxx1);
    if c101 then L592() else L108();
  D148():
    deopt 614 [r235];
  D166():
    deopt 697 [r263];
  D168():
    deopt 704 [r264];
  D193():
    deopt 824 [r304];
  L23():
    _in_5 = ldf `%in%`;
    check L333() else D69();
  L72(r239):
    r243 = `==`(r239, 1.0);
    c85 = `as.logical`(r243);
    if c85 then L504() else L73();
  L97(i7, r295):
    c97 = `as.logical`(r295);
    if c97 then L574() else L98();
  L108():
    goto L116();
  L116():
    paste10 = ldf paste0;
    check L610() else D206();
  L331():
    st debug = TRUE;
    goto L20();
  L457():
    dx19 = getTryDispatchBuiltinValue(dr18);
    goto L59(dx19);
  L495():
    length3 = ldf length in base;
    r236 = dyn length3(r235);
    check L496() else D149();
  L499():
    grep3 = ldf grep;
    check L501() else D150();
  L500():
    r238 = dyn base43(<lang `<-`(ll, grep("^CXX_STD *=", lines, perl=TRUE, value=TRUE, useBytes=TRUE))>);
    goto L72(r238);
  L529():
    goto L82(r263);
  L531():
    st lines = r264;
    sym29 = ldf length;
    base46 = ldf length in base;
    guard29 = `==`.4(sym29, base46);
    if guard29 then L532() else L533();
  L569():
    Sys_getenv5 = ldf `Sys.getenv`;
    check L571() else D187();
  L570():
    r294 = dyn base50(<lang Sys.getenv(paste0("USE_CXX", i))>);
    goto L97(i2, r294);
  L584():
    st val = r304;
    _in_11 = ldf `%in%`;
    check L585() else D194();
  L592():
    r308 = clos inner1274516544;
    st checkCXX = r308;
    sym35 = ldf `is.null`;
    base52 = ldf `is.null` in base;
    guard35 = `==`.4(sym35, base52);
    if guard35 then L593() else L594();
  D69():
    deopt 288 [];
  D149():
    deopt 616 [r236];
  D150():
    deopt 625 [];
  D187():
    deopt 800 [i2];
  D194():
    deopt 827 [];
  D206():
    deopt 882 [];
  L73():
    goto L76();
  L76():
    sym27 = ldf any;
    base44 = ldf any in base;
    guard27 = `==`.4(sym27, base44);
    if guard27 then L515() else L516();
  L83(r266):
    c90 = `as.logical`(r266);
    if c90 then L537() else L84();
  L98():
    goto L96(i7);
  L109(r310):
    r311 = `!`(r310);
    c103 = `as.logical`(r311);
    if c103 then L596() else L110();
  L333():
    p35 = prom<V +>{
      a8 = ld a;
      a9 = force? a8;
      checkMissing(a9);
      return a9;
    };
    p36 = prom<V +>{
      sym11 = ldf c;
      base11 = ldf c in base;
      guard11 = `==`.4(sym11, base11);
      if guard11 then L1() else L2();
    L0(r130):
      return r130;
    L1():
      c26 = ldf c in base;
      r131 = dyn c26("-c", "--clean");
      goto L0(r131);
    L2():
      r129 = dyn base11("-c", "--clean");
      goto L0(r129);
    };
    r133 = dyn _in_5(p35, p36);
    check L334() else D70();
  L496():
    goto L69(r236);
  L501():
    p59 = prom<V +>{
      lines2 = ld lines;
      lines3 = force? lines2;
      checkMissing(lines3);
      return lines3;
    };
    r241 = dyn grep3[, , perl, value, useBytes]("^CXX_STD *=", p59, TRUE, TRUE, TRUE);
    check L502() else D151();
  L504():
    gsub = ldf gsub;
    check L505() else D153();
  L532():
    grep4 = ldf grep;
    check L534() else D169();
  L533():
    r265 = dyn base46(<lang grep("^OBJECTS *=", lines, perl=TRUE, useBytes=TRUE)>);
    goto L83(r265);
  L571():
    p73 = prom<V +>{
      paste8 = ldf paste0;
      p72 = prom<V +>{
        i8 = ld i;
        i9 = force? i8;
        checkMissing(i9);
        return i9;
      };
      r297 = dyn paste8("USE_CXX", p72);
      return r297;
    };
    r299 = dyn Sys_getenv5(p73);
    check L572() else D188();
  L574():
    i12 = ld i;
    check L575() else D190();
  L585():
    p74 = prom<V +>{
      val12 = ld val;
      val13 = force? val12;
      checkMissing(val13);
      return val13;
    };
    p75 = prom<V +>{
      cxx_standards6 = ld cxx_standards;
      cxx_standards7 = force? cxx_standards6;
      checkMissing(cxx_standards7);
      return cxx_standards7;
    };
    r307 = dyn _in_11(p74, p75);
    check L586() else D195();
  L593():
    use_cxxstd4 = ld use_cxxstd;
    check L595() else D198();
  L594():
    r309 = dyn base52(<sym use_cxxstd>);
    goto L109(r309);
  L610():
    p81 = prom<V +>{
      shQuote1 = ldf shQuote;
      p80 = prom<V +>{
        shlib2 = ld shlib;
        shlib3 = force? shlib2;
        checkMissing(shlib3);
        return shlib3;
      };
      r327 = dyn shQuote1(p80);
      return r327;
    };
    r329 = dyn paste10("SHLIB=", p81);
    check L611() else D207();
  D70():
    deopt 291 [r133];
  D151():
    deopt 634 [r241];
  D153():
    deopt 641 [];
  D169():
    deopt 709 [];
  D188():
    deopt 802 [i2, r299];
  D190():
    deopt 805 [i7, i12];
  D195():
    deopt 830 [r307];
  D198():
    deopt 844 [use_cxxstd4];
  D207():
    deopt 885 [r329];
  L77(r254):
    c87 = `as.logical`(r254);
    if c87 then L520() else L78();
  L84():
    goto L85();
  L85():
    sym30 = ldf length;
    base47 = ldf length in base;
    guard30 = `==`.4(sym30, base47);
    if guard30 then L539() else L540();
  L110():
    goto L115(NULL);
  L115(r324):
    goto L116();
  L334():
    c27 = `as.logical`(r133);
    if c27 then L335() else L24();
  L502():
    st ll = r241;
    length4 = ldf length in base;
    r242 = dyn length4(r241);
    check L503() else D152();
  L505():
    p60 = prom<V +>{
      ll = ld ll;
      ll1 = force? ll;
      checkMissing(ll1);
      return ll1;
    };
    r245 = dyn gsub("^CXX_STD *= *CXX", "", p60);
    check L506() else D154();
  L515():
    grepl = ldf grepl;
    check L517() else D160();
  L516():
    r253 = dyn base44(<lang grepl("^USE_FC_TO_LINK", lines, perl=TRUE, useBytes=TRUE)>);
    goto L77(r253);
  L534():
    p65 = prom<V +>{
      lines6 = ld lines;
      lines7 = force? lines6;
      checkMissing(lines7);
      return lines7;
    };
    r268 = dyn grep4[, , perl, useBytes]("^OBJECTS *=", p65, TRUE, TRUE);
    check L535() else D170();
  L537():
    st makeobjs = "";
    goto L85();
  L572():
    nzchar7 = ldf nzchar in base;
    r300 = dyn nzchar7(r299);
    check L573() else D189();
  L575():
    i13 = force? i12;
    checkMissing(i13);
    st use_cxxstd = i13;
    goto L99(i7);
  L586():
    c100 = `as.logical`(r307);
    if c100 then L587() else L105();
  L595():
    use_cxxstd5 = force? use_cxxstd4;
    checkMissing(use_cxxstd5);
    c102 = `==`(use_cxxstd5, NULL);
    goto L109(c102);
  L596():
    use_cxxstd6 = ld use_cxxstd;
    check L597() else D199();
  L611():
    st makeargs = r329;
    with_cxx2 = ld with_cxx;
    check L612() else D208();
  D152():
    deopt 637 [r242];
  D154():
    deopt 645 [r245];
  D160():
    deopt 672 [];
  D170():
    deopt 716 [r268];
  D189():
    deopt 804 [i2, r300];
  D199():
    deopt 848 [use_cxxstd6];
  D208():
    deopt 887 [with_cxx2];
  L24():
    a10 = ld a;
    check L337() else D71();
  L78():
    goto L79(NULL);
  L79(r258):
    goto L80();
  L86(r272):
    r276 = `==`(r272, 1.0);
    c91 = `as.logical`(r276);
    if c91 then L544() else L87();
  L105():
    goto L106(NULL);
  L106(val16):
    goto L107();
  L335():
    st clean = TRUE;
    goto L20();
  L503():
    goto L72(r242);
  L506():
    st val = r245;
    gsub1 = ldf gsub;
    check L507() else D155();
  L517():
    p64 = prom<V +>{
      lines4 = ld lines;
      lines5 = force? lines4;
      checkMissing(lines5);
      return lines5;
    };
    r256 = dyn grepl[, , perl, useBytes]("^USE_FC_TO_LINK", p64, TRUE, TRUE);
    check L518() else D161();
  L520():
    st use_fc_link = TRUE;
    goto L79(TRUE);
  L535():
    length5 = ldf length in base;
    r269 = dyn length5(r268);
    check L536() else D171();
  L539():
    grep5 = ldf grep;
    check L541() else D172();
  L540():
    r271 = dyn base47(<lang `<-`(ll, grep("^CXX_STD *=", lines, perl=TRUE, value=TRUE, useBytes=TRUE))>);
    goto L86(r271);
  L573():
    goto L97(i2, r300);
  L587():
    val14 = ld val;
    check L588() else D196();
  L597():
    use_cxxstd7 = force? use_cxxstd6;
    checkMissing(use_cxxstd7);
    r312 = `==`(use_cxxstd7, "98");
    c104 = `as.logical`(r312);
    if c104 then L598() else L111();
  L612():
    with_cxx3 = force? with_cxx2;
    checkMissing(with_cxx3);
    c106 = `as.logical`(with_cxx3);
    if c106 then L613() else L117();
  D71():
    deopt 295 [a10];
  D155():
    deopt 648 [];
  D161():
    deopt 679 [r256];
  D171():
    deopt 718 [r269];
  D172():
    deopt 727 [];
  D196():
    deopt 831 [val14];
  L87():
    goto L90();
  L90():
    sym31 = ldf any;
    base48 = ldf any in base;
    guard31 = `==`.4(sym31, base48);
    if guard31 then L555() else L556();
  L111():
    goto L112();
  L112():
    checkCXX = ldf checkCXX;
    check L602() else D202();
  L117():
    use_fc_link = ld use_fc_link;
    check L631() else D217();
  L123():
    with_objc = ld with_objc;
    check L644() else D222();
  L337():
    a11 = force? a10;
    checkMissing(a11);
    r134 = `==`(a11, "--preclean");
    c28 = `as.logical`(r134);
    if c28 then L338() else L25();
  L507():
    p61 = prom<V +>{
      val = ld val;
      val1 = force? val;
      checkMissing(val1);
      return val1;
    };
    r247 = dyn gsub1(" +$", "", p61);
    check L508() else D156();
  L518():
    any = ldf any in base;
    r257 = dyn any(r256);
    check L519() else D162();
  L536():
    goto L83(r269);
  L541():
    p66 = prom<V +>{
      lines8 = ld lines;
      lines9 = force? lines8;
      checkMissing(lines9);
      return lines9;
    };
    r274 = dyn grep5[, , perl, value, useBytes]("^CXX_STD *=", p66, TRUE, TRUE, TRUE);
    check L542() else D173();
  L544():
    gsub2 = ldf gsub;
    check L545() else D175();
  L588():
    val15 = force? val14;
    checkMissing(val15);
    st use_cxxstd = val15;
    goto L106(val15);
  L598():
    stop2 = ldf stop;
    check L599() else D200();
  L613():
    sym36 = ldf `is.null`;
    base53 = ldf `is.null` in base;
    guard36 = `==`.4(sym36, base53);
    if guard36 then L614() else L615();
  D156():
    deopt 652 [r247];
  D162():
    deopt 681 [r257];
  D173():
    deopt 736 [r274];
  D175():
    deopt 743 [];
  D200():
    deopt 853 [];
  D202():
    deopt 863 [];
  D217():
    deopt 919 [use_fc_link];
  D222():
    deopt 939 [with_objc];
  L25():
    a12 = ld a;
    check L340() else D72();
  L91(r287):
    c93 = `as.logical`(r287);
    if c93 then L560() else L92();
  L118(r331):
    r332 = `!`(r331);
    c108 = `as.logical`(r332);
    if c108 then L617() else L119();
  L338():
    st preclean = TRUE;
    goto L20();
  L508():
    st val = r247;
    _in_9 = ldf `%in%`;
    check L509() else D157();
  L519():
    goto L77(r257);
  L542():
    st ll = r274;
    length6 = ldf length in base;
    r275 = dyn length6(r274);
    check L543() else D174();
  L545():
    p67 = prom<V +>{
      ll2 = ld ll;
      ll3 = force? ll2;
      checkMissing(ll3);
      return ll3;
    };
    r278 = dyn gsub2("^CXX_STD *= *CXX", "", p67);
    check L546() else D176();
  L555():
    grepl1 = ldf grepl;
    check L557() else D182();
  L556():
    r286 = dyn base48(<lang grepl("^USE_FC_TO_LINK", lines, perl=TRUE, useBytes=TRUE)>);
    goto L91(r286);
  L599():
    r313 = dyn stop2[, `call.`, domain]("C++98 standard requested but unsupported", FALSE, NA_LGL);
    check L600() else D201();
  L602():
    p76 = prom<V +>{
      use_cxxstd8 = ld use_cxxstd;
      use_cxxstd9 = force? use_cxxstd8;
      checkMissing(use_cxxstd9);
      return use_cxxstd9;
    };
    r316 = dyn checkCXX(p76);
    check L603() else D203();
  L614():
    use_cxxstd14 = ld use_cxxstd;
    check L616() else D209();
  L615():
    r330 = dyn base53(<sym use_cxxstd>);
    goto L118(r330);
  L631():
    use_fc_link1 = force? use_fc_link;
    checkMissing(use_fc_link1);
    c112 = `as.logical`(use_fc_link1);
    if c112 then L632() else L124(c112);
  L644():
    with_objc1 = force? with_objc;
    checkMissing(with_objc1);
    c129 = `as.logical`(with_objc1);
    if c129 then L645() else L128();
  D72():
    deopt 302 [a12];
  D157():
    deopt 655 [];
  D174():
    deopt 739 [r275];
  D176():
    deopt 747 [r278];
  D182():
    deopt 774 [];
  D201():
    deopt 859 [r313];
  D203():
    deopt 865 [r316];
  D209():
    deopt 890 [use_cxxstd14];
  L92():
    goto L93(NULL);
  L93(r291):
    goto L80();
  L119():
    sym39 = ldf c;
    base56 = ldf c in base;
    guard39 = `==`.4(sym39, base56);
    if guard39 then L626() else L627();
  L121(r343):
    goto L123();
  L124(c114):
    c127 = `as.logical`(c114);
    if c127 then L638() else L126();
  L128():
    goto L130();
  L130():
    with_f79 = ld with_f77;
    check L651() else D225();
  L340():
    a13 = force? a12;
    checkMissing(a13);
    r135 = `==`(a13, "--use-LTO");
    c29 = `as.logical`(r135);
    if c29 then L341() else L26();
  L509():
    p62 = prom<V +>{
      val2 = ld val;
      val3 = force? val2;
      checkMissing(val3);
      return val3;
    };
    p63 = prom<V +>{
      cxx_standards = ld cxx_standards;
      cxx_standards1 = force? cxx_standards;
      checkMissing(cxx_standards1);
      return cxx_standards1;
    };
    r250 = dyn _in_9(p62, p63);
    check L510() else D158();
  L543():
    goto L86(r275);
  L546():
    st val = r278;
    gsub3 = ldf gsub;
    check L547() else D177();
  L557():
    p71 = prom<V +>{
      lines10 = ld lines;
      lines11 = force? lines10;
      checkMissing(lines11);
      return lines11;
    };
    r289 = dyn grepl1[, , perl, useBytes]("^USE_FC_TO_LINK", p71, TRUE, TRUE);
    check L558() else D183();
  L560():
    st use_fc_link = TRUE;
    goto L93(TRUE);
  L600():
    goto L112();
  L603():
    r317 = `!`(r316);
    c105 = `as.logical`(r317);
    if c105 then L604() else L113();
  L616():
    use_cxxstd15 = force? use_cxxstd14;
    checkMissing(use_cxxstd15);
    c107 = `==`(use_cxxstd15, NULL);
    goto L118(c107);
  L617():
    sprintf = ldf sprintf;
    check L618() else D210();
  L632():
    with_f77 = ld with_f77;
    check L633() else D218();
  L645():
    sym41 = ldf c;
    base58 = ldf c in base;
    guard41 = `==`.4(sym41, base58);
    if guard41 then L646() else L647();
  D158():
    deopt 658 [r250];
  D177():
    deopt 750 [];
  D183():
    deopt 781 [r289];
  D210():
    deopt 895 [];
  D218():
    deopt 921 [c112, with_f77];
  D225():
    deopt 951 [with_f79];
  L26():
    a14 = ld a;
    check L343() else D73();
  L113():
    goto L114(NULL);
  L114(r323):
    goto L115(r323);
  L122(r345):
    st makeargs = r345;
    goto L121(r345);
  L126():
    goto L123();
  L129(r352):
    st shlib_libadd = r352;
    goto L130();
  L341():
    st use_lto = TRUE;
    goto L20();
  L510():
    c86 = `as.logical`(r250);
    if c86 then L511() else L74();
  L547():
    p68 = prom<V +>{
      val6 = ld val;
      val7 = force? val6;
      checkMissing(val7);
      return val7;
    };
    r280 = dyn gsub3(" +$", "", p68);
    check L548() else D178();
  L558():
    any1 = ldf any in base;
    r290 = dyn any1(r289);
    check L559() else D184();
  L604():
    stop3 = ldf stop;
    check L605() else D204();
  L618():
    p82 = prom<V +>{
      sym37 = ldf c;
      base54 = ldf c in base;
      guard37 = `==`.4(sym37, base54);
      if guard37 then L1() else L2();
    L0(r334):
      return r334;
    L1():
      c109 = ldf c in base;
      r335 = dyn c109("CXX='$(CXX%s) $(CXX%sSTD)'", "CXXFLAGS='$(CXX%sFLAGS)'", "CXXPICFLAGS='$(CXX%sPICFLAGS)'", "SHLIB_LDFLAGS='$(SHLIB_CXX%sLDFLAGS)'", "SHLIB_LD='$(SHLIB_CXX%sLD)'");
      goto L0(r335);
    L2():
      r333 = dyn base54("CXX='$(CXX%s) $(CXX%sSTD)'", "CXXFLAGS='$(CXX%sFLAGS)'", "CXXPICFLAGS='$(CXX%sPICFLAGS)'", "SHLIB_LDFLAGS='$(SHLIB_CXX%sLDFLAGS)'", "SHLIB_LD='$(SHLIB_CXX%sLD)'");
      goto L0(r333);
    };
    p83 = prom<V +>{
      use_cxxstd16 = ld use_cxxstd;
      use_cxxstd17 = force? use_cxxstd16;
      checkMissing(use_cxxstd17);
      return use_cxxstd17;
    };
    p84 = prom<V +>{
      use_cxxstd18 = ld use_cxxstd;
      use_cxxstd19 = force? use_cxxstd18;
      checkMissing(use_cxxstd19);
      return use_cxxstd19;
    };
    r339 = dyn sprintf(p82, p83, p84);
    check L619() else D211();
  L626():
    makeargs2 = ld makeargs;
    check L628() else D215();
  L627():
    r344 = dyn base56("SHLIB_LDFLAGS='$(SHLIB_CXXLDFLAGS)'", "SHLIB_LD='$(SHLIB_CXXLD)'", <sym makeargs>);
    goto L122(r344);
  L633():
    with_f78 = force? with_f77;
    checkMissing(with_f78);
    c115 = `as.logical`(with_f78);
    if c115 then L125(c112, c115) else L634();
  L638():
    sym40 = ldf c;
    base57 = ldf c in base;
    guard40 = `==`.4(sym40, base57);
    if guard40 then L639() else L640();
  L646():
    shlib_libadd = ld shlib_libadd;
    check L648() else D223();
  L647():
    r351 = dyn base58(<sym shlib_libadd>, "$(OBJC_LIBS)");
    goto L129(r351);
  L651():
    with_f80 = force? with_f79;
    checkMissing(with_f80);
    c131 = `as.logical`(with_f80);
    if c131 then L131(c131) else L652();
  D73():
    deopt 309 [a14];
  D178():
    deopt 754 [r280];
  D184():
    deopt 783 [r290];
  D204():
    deopt 868 [];
  D211():
    deopt 899 [r339];
  D215():
    deopt 914 [makeargs2];
  D223():
    deopt 943 [shlib_libadd];
  L74():
    goto L75(NULL);
  L75(r251):
    goto L76();
  L125(c116, c117):
    c124 = `as.logical`(c117);
    c125 = `&&`(c116, c124);
    goto L124(c125);
  L127(r349):
    st makeargs = r349;
    goto L123();
  L131(c132):
    c137 = `as.logical`(c132);
    if c137 then L655() else L132();
  L343():
    a15 = force? a14;
    checkMissing(a15);
    r136 = `==`(a15, "--no-use-LTO");
    c30 = `as.logical`(r136);
    if c30 then L344() else L27();
  L511():
    val4 = ld val;
    check L512() else D159();
  L548():
    st val = r280;
    _in_10 = ldf `%in%`;
    check L549() else D179();
  L559():
    goto L91(r290);
  L605():
    p79 = prom<V +>{
      paste9 = ldf paste0;
      p77 = prom<V +>{
        use_cxxstd10 = ld use_cxxstd;
        use_cxxstd11 = force? use_cxxstd10;
        checkMissing(use_cxxstd11);
        return use_cxxstd11;
      };
      p78 = prom<V +>{
        use_cxxstd12 = ld use_cxxstd;
        use_cxxstd13 = force? use_cxxstd12;
        checkMissing(use_cxxstd13);
        return use_cxxstd13;
      };
      r320 = dyn paste9("C++", p77, " standard requested but CXX", p78, " is not defined");
      return r320;
    };
    r322 = dyn stop3[, `call.`, domain](p79, FALSE, NA_LGL);
    check L606() else D205();
  L619():
    st cxx_makeargs = r339;
    sym38 = ldf c;
    base55 = ldf c in base;
    guard38 = `==`.4(sym38, base55);
    if guard38 then L620() else L621();
  L628():
    makeargs3 = force? makeargs2;
    checkMissing(makeargs3);
    c111 = ldf c in base;
    r346 = dyn c111("SHLIB_LDFLAGS='$(SHLIB_CXXLDFLAGS)'", "SHLIB_LD='$(SHLIB_CXXLD)'", makeargs3);
    check L629() else D216();
  L634():
    with_f9x = ld with_f9x;
    check L635() else D219();
  L639():
    makeargs4 = ld makeargs;
    check L641() else D220();
  L640():
    r348 = dyn base57("SHLIB_LDFLAGS='$(SHLIB_FCLDFLAGS)'", "SHLIB_LD='$(SHLIB_FCLD)'", "ALL_LIBS='$(PKG_LIBS) $(SHLIB_LIBADD) $(SAN_LIBS)'", <sym makeargs>);
    goto L127(r348);
  L648():
    shlib_libadd1 = force? shlib_libadd;
    checkMissing(shlib_libadd1);
    c130 = ldf c in base;
    r353 = dyn c130(shlib_libadd1, "$(OBJC_LIBS)");
    check L649() else D224();
  L652():
    with_f9x2 = ld with_f9x;
    check L653() else D226();
  D159():
    deopt 659 [val4];
  D179():
    deopt 757 [];
  D205():
    deopt 874 [r322];
  D216():
    deopt 917 [r346];
  D219():
    deopt 923 [c112, c115, with_f9x];
  D220():
    deopt 932 [makeargs4];
  D224():
    deopt 947 [r353];
  D226():
    deopt 953 [c131, with_f9x2];
  L27():
    a16 = ld a;
    check L346() else D74();
  L120(r341):
    st makeargs = r341;
    goto L121(r341);
  L132():
    goto L137();
  L137():
    sym44 = ldf nzchar;
    base61 = ldf nzchar in base;
    guard44 = `==`.4(sym44, base61);
    if guard44 then L668() else L669();
  L344():
    st use_lto = FALSE;
    goto L20();
  L512():
    val5 = force? val4;
    checkMissing(val5);
    st use_cxxstd = val5;
    st with_cxx = TRUE;
    goto L75(TRUE);
  L549():
    p69 = prom<V +>{
      val8 = ld val;
      val9 = force? val8;
      checkMissing(val9);
      return val9;
    };
    p70 = prom<V +>{
      cxx_standards2 = ld cxx_standards;
      cxx_standards3 = force? cxx_standards2;
      checkMissing(cxx_standards3);
      return cxx_standards3;
    };
    r283 = dyn _in_10(p69, p70);
    check L550() else D180();
  L606():
    goto L114(r322);
  L620():
    cxx_makeargs = ld cxx_makeargs;
    check L622() else D212();
  L621():
    r340 = dyn base55(<sym cxx_makeargs>, <sym makeargs>);
    goto L120(r340);
  L629():
    goto L122(r346);
  L635():
    with_f9x1 = force? with_f9x;
    checkMissing(with_f9x1);
    c120 = `as.logical`(with_f9x1);
    c121 = `||`(c115, c120);
    goto L125(c112, c121);
  L641():
    makeargs5 = force? makeargs4;
    checkMissing(makeargs5);
    c128 = ldf c in base;
    r350 = dyn c128("SHLIB_LDFLAGS='$(SHLIB_FCLDFLAGS)'", "SHLIB_LD='$(SHLIB_FCLD)'", "ALL_LIBS='$(PKG_LIBS) $(SHLIB_LIBADD) $(SAN_LIBS)'", makeargs5);
    check L642() else D221();
  L649():
    goto L129(r353);
  L653():
    with_f9x3 = force? with_f9x2;
    checkMissing(with_f9x3);
    c134 = `as.logical`(with_f9x3);
    c135 = `||`(c131, c134);
    goto L131(c135);
  L655():
    use_fc_link2 = ld use_fc_link;
    check L656() else D227();
  D74():
    deopt 316 [a16];
  D180():
    deopt 760 [r283];
  D212():
    deopt 903 [cxx_makeargs];
  D221():
    deopt 935 [r350];
  D227():
    deopt 956 [use_fc_link2];
  L138(r364):
    c141 = `as.logical`(r364);
    if c141 then L672() else L139();
  L346():
    a17 = force? a16;
    checkMissing(a17);
    r137 = `==`(a17, "--use-C17");
    c31 = `as.logical`(r137);
    if c31 then L347() else L28();
  L550():
    c92 = `as.logical`(r283);
    if c92 then L551() else L88();
  L622():
    cxx_makeargs1 = force? cxx_makeargs;
    checkMissing(cxx_makeargs1);
    makeargs = ld makeargs;
    check L623() else D213();
  L642():
    goto L127(r350);
  L656():
    use_fc_link3 = force? use_fc_link2;
    checkMissing(use_fc_link3);
    c138 = `as.logical`(use_fc_link3);
    if c138 then L657() else L133();
  L668():
    use_C = ld use_C;
    check L670() else D232();
  L669():
    r363 = dyn base61(<sym use_C>);
    goto L138(r363);
  D213():
    deopt 905 [makeargs];
  D232():
    deopt 978 [use_C];
  L28():
    a18 = ld a;
    check L349() else D75();
  L88():
    goto L89(NULL);
  L89(r284):
    goto L90();
  L133():
    sym43 = ldf c;
    base60 = ldf c in base;
    guard43 = `==`.4(sym43, base60);
    if guard43 then L663() else L664();
  L135(r358):
    goto L137();
  L139():
    goto L143();
  L143():
    sym47 = ldf length;
    base64 = ldf length in base;
    guard47 = `==`.4(sym47, base64);
    if guard47 then L687() else L688();
  L347():
    st use_C = 17.0;
    goto L20();
  L551():
    val10 = ld val;
    check L552() else D181();
  L623():
    makeargs1 = force? makeargs;
    checkMissing(makeargs1);
    c110 = ldf c in base;
    r342 = dyn c110(cxx_makeargs1, makeargs1);
    check L624() else D214();
  L657():
    sym42 = ldf c;
    base59 = ldf c in base;
    guard42 = `==`.4(sym42, base59);
    if guard42 then L658() else L659();
  L670():
    use_C1 = force? use_C;
    checkMissing(use_C1);
    nzchar8 = ldf nzchar in base;
    r365 = dyn nzchar8(use_C1);
    check L671() else D233();
  L672():
    r366 = clos inner2405409536;
    st checkC = r366;
    checkC = ldf checkC;
    check L673() else D234();
  D75():
    deopt 323 [a18];
  D181():
    deopt 761 [val10];
  D214():
    deopt 908 [r342];
  D233():
    deopt 981 [r365];
  D234():
    deopt 986 [];
  L134(r356):
    st shlib_libadd = r356;
    goto L135(r356);
  L136(r360):
    st shlib_libadd = r360;
    goto L135(r360);
  L144(r387):
    c145 = `as.logical`(r387);
    if c145 then L691() else L145();
  L349():
    a19 = force? a18;
    checkMissing(a19);
    r138 = `==`(a19, "--use-C23");
    c32 = `as.logical`(r138);
    if c32 then L350() else L29();
  L552():
    val11 = force? val10;
    checkMissing(val11);
    st use_cxxstd = val11;
    st with_cxx = TRUE;
    goto L89(TRUE);
  L624():
    goto L120(r342);
  L658():
    shlib_libadd2 = ld shlib_libadd;
    check L660() else D228();
  L659():
    r355 = dyn base59(<sym shlib_libadd>, "$(FCLIBS_XTRA)");
    goto L134(r355);
  L663():
    shlib_libadd4 = ld shlib_libadd;
    check L665() else D230();
  L664():
    r359 = dyn base60(<sym shlib_libadd>, "$(FLIBS) $(FCLIBS_XTRA)");
    goto L136(r359);
  L671():
    goto L138(r365);
  L673():
    p85 = prom<V +>{
      use_C2 = ld use_C;
      use_C3 = force? use_C2;
      checkMissing(use_C3);
      return use_C3;
    };
    r368 = dyn checkC(p85);
    check L674() else D235();
  L687():
    pkg_libs2 = ld pkg_libs;
    check L689() else D243();
  L688():
    r386 = dyn base64(<sym pkg_libs>);
    goto L144(r386);
  D228():
    deopt 960 [shlib_libadd2];
  D230():
    deopt 968 [shlib_libadd4];
  D235():
    deopt 988 [r368];
  D243():
    deopt 1019 [pkg_libs2];
  L29():
    a20 = ld a;
    check L352() else D76();
  L145():
    goto L147();
  L147():
    sym49 = ldf length;
    base66 = ldf length in base;
    guard49 = `==`.4(sym49, base66);
    if guard49 then L699() else L700();
  L350():
    st use_C = 23.0;
    goto L20();
  L660():
    shlib_libadd3 = force? shlib_libadd2;
    checkMissing(shlib_libadd3);
    c139 = ldf c in base;
    r357 = dyn c139(shlib_libadd3, "$(FCLIBS_XTRA)");
    check L661() else D229();
  L665():
    shlib_libadd5 = force? shlib_libadd4;
    checkMissing(shlib_libadd5);
    c140 = ldf c in base;
    r361 = dyn c140(shlib_libadd5, "$(FLIBS) $(FCLIBS_XTRA)");
    check L666() else D231();
  L674():
    r369 = `!`(r368);
    c142 = `as.logical`(r369);
    if c142 then L675() else L140();
  L689():
    pkg_libs3 = force? pkg_libs2;
    checkMissing(pkg_libs3);
    length7 = ldf length in base;
    r388 = dyn length7(pkg_libs3);
    check L690() else D244();
  L691():
    sym48 = ldf c;
    base65 = ldf c in base;
    guard48 = `==`.4(sym48, base65);
    if guard48 then L692() else L693();
  D76():
    deopt 330 [a20];
  D229():
    deopt 964 [r357];
  D231():
    deopt 972 [r361];
  D244():
    deopt 1022 [r388];
  L140():
    goto L141();
  L141():
    sprintf1 = ldf sprintf;
    check L679() else D238();
  L146(r390):
    st makeargs = r390;
    goto L147();
  L148(r398):
    c147 = `as.logical`(r398);
    if c147 then L703() else L149();
  L352():
    a21 = force? a20;
    checkMissing(a21);
    r139 = `==`(a21, "--use-C90");
    c33 = `as.logical`(r139);
    if c33 then L353() else L30();
  L661():
    goto L134(r357);
  L666():
    goto L136(r361);
  L675():
    stop4 = ldf stop;
    check L676() else D236();
  L690():
    goto L144(r388);
  L692():
    makeargs8 = ld makeargs;
    check L694() else D245();
  L693():
    r389 = dyn base65(<sym makeargs>, <lang paste0("PKG_LIBS='", p1(pkg_libs), "'")>);
    goto L146(r389);
  L699():
    shlib_libadd6 = ld shlib_libadd;
    check L701() else D249();
  L700():
    r397 = dyn base66(<sym shlib_libadd>);
    goto L148(r397);
  D236():
    deopt 991 [];
  D238():
    deopt 1001 [];
  D245():
    deopt 1025 [makeargs8];
  D249():
    deopt 1040 [shlib_libadd6];
  L30():
    a22 = ld a;
    check L355() else D77();
  L149():
    goto L151();
  L151():
    with_f9x4 = ld with_f9x;
    check L711() else D255();
  L353():
    st use_C = 90.0;
    goto L20();
  L676():
    p88 = prom<V +>{
      paste11 = ldf paste0;
      p86 = prom<V +>{
        use_C4 = ld use_C;
        use_C5 = force? use_C4;
        checkMissing(use_C5);
        return use_C5;
      };
      p87 = prom<V +>{
        use_C6 = ld use_C;
        use_C7 = force? use_C6;
        checkMissing(use_C7);
        return use_C7;
      };
      r372 = dyn paste11("C", p86, " standard requested but CC", p87, " is not defined");
      return r372;
    };
    r374 = dyn stop4[, `call.`, domain](p88, FALSE, NA_LGL);
    check L677() else D237();
  L679():
    p89 = prom<V +>{
      sym45 = ldf c;
      base62 = ldf c in base;
      guard45 = `==`.4(sym45, base62);
      if guard45 then L1() else L2();
    L0(r377):
      return r377;
    L1():
      c143 = ldf c in base;
      r378 = dyn c143("CC='$(CC%s)'", "CFLAGS='$(C%sFLAGS)'");
      goto L0(r378);
    L2():
      r376 = dyn base62("CC='$(CC%s)'", "CFLAGS='$(C%sFLAGS)'");
      goto L0(r376);
    };
    p90 = prom<V +>{
      use_C8 = ld use_C;
      use_C9 = force? use_C8;
      checkMissing(use_C9);
      return use_C9;
    };
    r381 = dyn sprintf1(p89, p90);
    check L680() else D239();
  L694():
    makeargs9 = force? makeargs8;
    checkMissing(makeargs9);
    paste12 = ldf paste0;
    check L695() else D246();
  L701():
    shlib_libadd7 = force? shlib_libadd6;
    checkMissing(shlib_libadd7);
    length8 = ldf length in base;
    r399 = dyn length8(shlib_libadd7);
    check L702() else D250();
  L703():
    sym50 = ldf c;
    base67 = ldf c in base;
    guard50 = `==`.4(sym50, base67);
    if guard50 then L704() else L705();
  D77():
    deopt 337 [a22];
  D237():
    deopt 997 [r374];
  D239():
    deopt 1004 [r381];
  D246():
    deopt 1028 [];
  D250():
    deopt 1043 [r399];
  D255():
    deopt 1059 [with_f9x4];
  L150(r401):
    st makeargs = r401;
    goto L151();
  L355():
    a23 = force? a22;
    checkMissing(a23);
    r140 = `==`(a23, "--use-C99");
    c34 = `as.logical`(r140);
    if c34 then L356() else L31();
  L677():
    goto L141();
  L680():
    st c_makeargs = r381;
    sym46 = ldf c;
    base63 = ldf c in base;
    guard46 = `==`.4(sym46, base63);
    if guard46 then L681() else L682();
  L695():
    p93 = prom<V +>{
      p91 = ldf p1;
      p92 = prom<V +>{
        pkg_libs4 = ld pkg_libs;
        pkg_libs5 = force? pkg_libs4;
        checkMissing(pkg_libs5);
        return pkg_libs5;
      };
      r392 = dyn p91(p92);
      return r392;
    };
    r394 = dyn paste12("PKG_LIBS='", p93, "'");
    check L696() else D247();
  L702():
    goto L148(r399);
  L704():
    makeargs10 = ld makeargs;
    check L706() else D251();
  L705():
    r400 = dyn base67(<sym makeargs>, <lang paste0("SHLIB_LIBADD='", p1(shlib_libadd), "'")>);
    goto L150(r400);
  L711():
    with_f9x5 = force? with_f9x4;
    checkMissing(with_f9x5);
    c149 = `as.logical`(with_f9x5);
    if c149 then L712() else L152(c149);
  D247():
    deopt 1032 [r394];
  D251():
    deopt 1046 [makeargs10];
  L31():
    a24 = ld a;
    check L358() else D78();
  L142(r383):
    st makeargs = r383;
    goto L143();
  L152(c151):
    c155 = `as.logical`(c151);
    if c155 then L716() else L153(c155);
  L356():
    st use_C = 99.0;
    goto L20();
  L681():
    c_makeargs = ld c_makeargs;
    check L683() else D240();
  L682():
    r382 = dyn base63(<sym c_makeargs>, <sym makeargs>);
    goto L142(r382);
  L696():
    c146 = ldf c in base;
    r395 = dyn c146(makeargs9, r394);
    check L697() else D248();
  L706():
    makeargs11 = force? makeargs10;
    checkMissing(makeargs11);
    paste13 = ldf paste0;
    check L707() else D252();
  L712():
    file_exists3 = ldf `file.exists`;
    check L713() else D256();
  D78():
    deopt 344 [a24];
  D240():
    deopt 1008 [c_makeargs];
  D248():
    deopt 1034 [r395];
  D252():
    deopt 1049 [];
  D256():
    deopt 1062 [c149];
  L153(c157):
    c164 = `as.logical`(c157);
    if c164 then L723() else L155();
  L358():
    a25 = force? a24;
    checkMissing(a25);
    r141 = `==`(a25, "-o");
    c35 = `as.logical`(r141);
    if c35 then L359() else L32();
  L683():
    c_makeargs1 = force? c_makeargs;
    checkMissing(c_makeargs1);
    makeargs6 = ld makeargs;
    check L684() else D241();
  L697():
    goto L146(r395);
  L707():
    p96 = prom<V +>{
      p94 = ldf p1;
      p95 = prom<V +>{
        shlib_libadd8 = ld shlib_libadd;
        shlib_libadd9 = force? shlib_libadd8;
        checkMissing(shlib_libadd9);
        return shlib_libadd9;
      };
      r403 = dyn p94(p95);
      return r403;
    };
    r405 = dyn paste13("SHLIB_LIBADD='", p96, "'");
    check L708() else D253();
  L713():
    r408 = dyn file_exists3("Makevars");
    check L714() else D257();
  L716():
    sym51 = ldf length;
    base68 = ldf length in base;
    guard51 = `==`.4(sym51, base68);
    if guard51 then L717() else L718();
  D241():
    deopt 1010 [makeargs6];
  D253():
    deopt 1053 [r405];
  D257():
    deopt 1064 [c149, r408];
  L32():
    substr = ldf substr;
    check L377() else D85();
  L154(c160, r410):
    c161 = `as.logical`(r410);
    c162 = `&&`(c160, c161);
    goto L153(c162);
  L155():
    goto L157();
  L157():
    WINDOWS6 = ld WINDOWS;
    check L729() else D263();
  L359():
    sym12 = ldf length;
    base12 = ldf length in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L360() else L361();
  L684():
    makeargs7 = force? makeargs6;
    checkMissing(makeargs7);
    c144 = ldf c in base;
    r384 = dyn c144(c_makeargs1, makeargs7);
    check L685() else D242();
  L708():
    c148 = ldf c in base;
    r406 = dyn c148(makeargs11, r405);
    check L709() else D254();
  L714():
    c152 = `as.logical`(r408);
    c153 = `&&`(c149, c152);
    goto L152(c153);
  L717():
    grep6 = ldf grep;
    check L719() else D258();
  L718():
    r409 = dyn base68(<lang grep("^\\s*PKG_FCFLAGS", lines, perl=TRUE, useBytes=TRUE)>);
    goto L154(c155, r409);
  L723():
    sym52 = ldf c;
    base69 = ldf c in base;
    guard52 = `==`.4(sym52, base69);
    if guard52 then L724() else L725();
  D85():
    deopt 375 [];
  D242():
    deopt 1013 [r384];
  D254():
    deopt 1055 [r406];
  D258():
    deopt 1069 [c155];
  D263():
    deopt 1090 [WINDOWS6];
  L33(r143):
    r145 = `>=`(r143, 2);
    c36 = `as.logical`(r145);
    if c36 then L364() else L34();
  L156(r415):
    st makeargs = r415;
    goto L157();
  L360():
    args7 = ld args;
    check L362() else D79();
  L361():
    r142 = dyn base12(<sym args>);
    goto L33(r142);
  L377():
    p37 = prom<V +>{
      a26 = ld a;
      a27 = force? a26;
      checkMissing(a27);
      return a27;
    };
    r150 = dyn substr(p37, 1.0, 9.0);
    check L378() else D86();
  L685():
    goto L142(r384);
  L709():
    goto L150(r406);
  L719():
    p97 = prom<V +>{
      lines12 = ld lines;
      lines13 = force? lines12;
      checkMissing(lines13);
      return lines13;
    };
    r412 = dyn grep6[, , perl, useBytes]("^\\s*PKG_FCFLAGS", p97, TRUE, TRUE);
    check L720() else D259();
  L724():
    makeargs12 = ld makeargs;
    check L726() else D261();
  L725():
    r414 = dyn base69(<sym makeargs>, "P_FCFLAGS='$(PKG_FCFLAGS)'");
    goto L156(r414);
  L729():
    WINDOWS7 = force? WINDOWS6;
    checkMissing(WINDOWS7);
    c166 = `as.logical`(WINDOWS7);
    if c166 then L730() else L158(c166);
  D79():
    deopt 350 [args7];
  D86():
    deopt 379 [r150];
  D259():
    deopt 1076 [c155, r412];
  D261():
    deopt 1082 [makeargs12];
  L34():
    stop1 = ldf stop;
    check L374() else D83();
  L37(dx18):
    goto L20();
  L158(c168):
    c172 = `as.logical`(c168);
    if c172 then L733() else L159();
  L362():
    args8 = force? args7;
    checkMissing(args8);
    length1 = ldf length in base;
    r144 = dyn length1(args8);
    check L363() else D80();
  L364():
    args9 = ld args;
    check L365() else D81();
  L378():
    r151 = `==`(r150, "--output=");
    c39 = `as.logical`(r151);
    if c39 then L379() else L38();
  L720():
    length9 = ldf length in base;
    r413 = dyn length9(r412);
    check L721() else D260();
  L726():
    makeargs13 = force? makeargs12;
    checkMissing(makeargs13);
    c165 = ldf c in base;
    r416 = dyn c165(makeargs13, "P_FCFLAGS='$(PKG_FCFLAGS)'");
    check L727() else D262();
  L730():
    debug = ld debug;
    check L731() else D264();
  D80():
    deopt 353 [r144];
  D81():
    deopt 356 [args9];
  D83():
    deopt 369 [];
  D260():
    deopt 1078 [c155, r413];
  D262():
    deopt 1086 [r416];
  D264():
    deopt 1092 [c166, debug];
  L38():
    sub2 = ldf sub;
    check L383() else D89();
  L159():
    goto L161();
  L161():
    WINDOWS8 = ld WINDOWS;
    check L739() else D267();
  L363():
    goto L33(r144);
  L365():
    args10 = force? args9;
    checkMissing(args10);
    c37 = `is.object`(args10);
    if c37 then L366() else L367(args10);
  L374():
    r148 = dyn stop1[, `call.`]("-o option without value", FALSE);
    check L375() else D84();
  L379():
    substr1 = ldf substr;
    check L380() else D87();
  L721():
    goto L154(c155, r413);
  L727():
    goto L156(r416);
  L731():
    debug1 = force? debug;
    checkMissing(debug1);
    c169 = `as.logical`(debug1);
    c170 = `&&`(c166, c169);
    goto L158(c170);
  L733():
    sym53 = ldf c;
    base70 = ldf c in base;
    guard53 = `==`.4(sym53, base70);
    if guard53 then L734() else L735();
  D84():
    deopt 373 [r148];
  D87():
    deopt 383 [];
  D89():
    deopt 390 [];
  D267():
    deopt 1105 [WINDOWS8];
  L35(dx15):
    st shlib = dx15;
    args13 = ld args;
    check L369() else D82();
  L160(r419):
    st makeargs = r419;
    goto L161();
  L366():
    dr14 = tryDispatchBuiltin.1("[", args10);
    dc7 = getTryDispatchBuiltinDispatched(dr14);
    if dc7 then L368() else L367(dr14);
  L367(args12):
    __4 = ldf `[` in base;
    r146 = dyn __4(args12, 2);
    goto L35(r146);
  L375():
    goto L37(r148);
  L380():
    p38 = prom<V +>{
      a28 = ld a;
      a29 = force? a28;
      checkMissing(a29);
      return a29;
    };
    r153 = dyn substr1(p38, 10.0, 1000.0);
    check L381() else D88();
  L383():
    p39 = prom<V +>{
      a30 = ld a;
      a31 = force? a30;
      checkMissing(a31);
      return a31;
    };
    r155 = dyn sub2("\\.[[:alnum:]]*$", "", p39);
    check L384() else D90();
  L734():
    makeargs14 = ld makeargs;
    check L736() else D265();
  L735():
    r418 = dyn base70(<sym makeargs>, "DEBUG=T");
    goto L160(r418);
  L739():
    WINDOWS9 = force? WINDOWS8;
    checkMissing(WINDOWS9);
    c174 = `as.logical`(WINDOWS9);
    if c174 then L740() else L162(c174);
  D82():
    deopt 362 [args13];
  D88():
    deopt 387 [r153];
  D90():
    deopt 394 [r155];
  D265():
    deopt 1097 [makeargs14];
  L162(c176):
    c180 = `as.logical`(c176);
    if c180 then L743() else L163();
  L368():
    dx14 = getTryDispatchBuiltinValue(dr14);
    goto L35(dx14);
  L369():
    args14 = force? args13;
    checkMissing(args14);
    c38 = `is.object`(args14);
    if c38 then L370() else L371(args14);
  L381():
    st shlib = r153;
    goto L20();
  L384():
    st base = r155;
    sub3 = ldf sub;
    check L385() else D91();
  L736():
    makeargs15 = force? makeargs14;
    checkMissing(makeargs15);
    c173 = ldf c in base;
    r420 = dyn c173(makeargs15, "DEBUG=T");
    check L737() else D266();
  L740():
    rarch6 = ld rarch;
    check L741() else D268();
  D91():
    deopt 397 [];
  D266():
    deopt 1101 [r420];
  D268():
    deopt 1107 [c174, rarch6];
  L36(dx17):
    st args = dx17;
    goto L37(dx17);
  L163():
    goto L165();
  L165():
    config_val_to_logical = ldf config_val_to_logical;
    check L749() else D271();
  L370():
    dr16 = tryDispatchBuiltin.1("[", args14);
    dc8 = getTryDispatchBuiltinDispatched(dr16);
    if dc8 then L372() else L371(dr16);
  L371(args16):
    __5 = ldf `[` in base;
    r147 = dyn __5(args16, -1);
    goto L36(r147);
  L385():
    p41 = prom<V +>{
      paste4 = ldf paste0;
      p40 = prom<V +>{
        base13 = ld base;
        base14 = force? base13;
        checkMissing(base14);
        return base14;
      };
      r157 = dyn paste4(p40, ".");
      return r157;
    };
    p42 = prom<V +>{
      a32 = ld a;
      a33 = force? a32;
      checkMissing(a33);
      return a33;
    };
    r160 = dyn sub3[, , , fixed](p41, "", p42, TRUE);
    check L386() else D92();
  L737():
    goto L160(r420);
  L741():
    rarch7 = force? rarch6;
    checkMissing(rarch7);
    r422 = `==`(rarch7, "/x64");
    c177 = `as.logical`(r422);
    c178 = `&&`(c174, c177);
    goto L162(c178);
  L743():
    sym54 = ldf c;
    base71 = ldf c in base;
    guard54 = `==`.4(sym54, base71);
    if guard54 then L744() else L745();
  D92():
    deopt 403 [r160];
  D271():
    deopt 1123 [];
  L164(r424):
    st makeargs = r424;
    goto L165();
  L372():
    dx16 = getTryDispatchBuiltinValue(dr16);
    goto L36(dx16);
  L386():
    st ext = r160;
    st nobj = "";
    sym13 = ldf nzchar;
    base15 = ldf nzchar in base;
    guard13 = `==`.4(sym13, base15);
    if guard13 then L387() else L388();
  L744():
    makeargs16 = ld makeargs;
    check L746() else D269();
  L745():
    r423 = dyn base71(<sym makeargs>, "WIN=64 TCLBIN=");
    goto L164(r423);
  L749():
    p98 = prom<V +>{
      Sys_getenv7 = ldf `Sys.getenv`;
      r427 = dyn Sys_getenv7("_R_SHLIB_BUILD_OBJECTS_SYMBOL_TABLES_", "FALSE");
      return r427;
    };
    r429 = dyn config_val_to_logical(p98);
    check L750() else D272();
  D269():
    deopt 1114 [makeargs16];
  D272():
    deopt 1125 [r429];
  L39(r162):
    c40 = `as.logical`(r162);
    if c40 then L391() else L40();
  L387():
    ext = ld ext;
    check L389() else D93();
  L388():
    r161 = dyn base15(<sym ext>);
    goto L39(r161);
  L746():
    makeargs17 = force? makeargs16;
    checkMissing(makeargs17);
    c181 = ldf c in base;
    r425 = dyn c181(makeargs17, "WIN=64 TCLBIN=");
    check L747() else D270();
  L750():
    st build_objects_symbol_tables = r429;
    sym55 = ldf c;
    base72 = ldf c in base;
    guard55 = `==`.4(sym55, base72);
    if guard55 then L751() else L752();
  D93():
    deopt 410 [ext];
  D270():
    deopt 1118 [r425];
  L40():
    goto L54();
  L54():
    sym19 = ldf nzchar;
    base36 = ldf nzchar in base;
    guard19 = `==`.4(sym19, base36);
    if guard19 then L438() else L439();
  L166(r431):
    st makeargs = r431;
    config_val_to_logical1 = ldf config_val_to_logical;
    check L773() else D285();
  L389():
    ext1 = force? ext;
    checkMissing(ext1);
    nzchar3 = ldf nzchar in base;
    r163 = dyn nzchar3(ext1);
    check L390() else D94();
  L391():
    _in_6 = ldf `%in%`;
    check L392() else D95();
  L747():
    goto L164(r425);
  L751():
    makeargs18 = ld makeargs;
    check L753() else D273();
  L752():
    r430 = dyn base72(<sym makeargs>, <lang if(isTRUE(use_lto), c(paste0("LTO=", shQuote("$(LTO_OPT)")), paste0("LTO_FC=", shQuote("$(LTO_FC_OPT)"))), if(isFALSE(use_lto), c("LTO=", "LTO_FC=")))>);
    goto L166(r430);
  D94():
    deopt 413 [r163];
  D95():
    deopt 415 [];
  D273():
    deopt 1129 [makeargs18];
  D285():
    deopt 1165 [];
  L55(r199):
    c61 = `as.logical`(r199);
    if c61 then L442() else L56();
  L390():
    goto L39(r163);
  L392():
    p43 = prom<V +>{
      ext2 = ld ext;
      ext3 = force? ext2;
      checkMissing(ext3);
      return ext3;
    };
    p44 = prom<V +>{
      sym14 = ldf c;
      base16 = ldf c in base;
      guard14 = `==`.4(sym14, base16);
      if guard14 then L1() else L2();
    L0(r166):
      return r166;
    L1():
      c41 = ldf c in base;
      r167 = dyn c41("cc", "cpp");
      goto L0(r167);
    L2():
      r165 = dyn base16("cc", "cpp");
      goto L0(r165);
    };
    r169 = dyn _in_6(p43, p44);
    check L393() else D96();
  L438():
    nobj4 = ld nobj;
    check L440() else D118();
  L439():
    r198 = dyn base36(<sym nobj>);
    goto L55(r198);
  L753():
    makeargs19 = force? makeargs18;
    checkMissing(makeargs19);
    isTRUE = ldf isTRUE;
    check L754() else D274();
  L773():
    p103 = prom<V +>{
      Sys_getenv8 = ldf `Sys.getenv`;
      r450 = dyn Sys_getenv8("_R_CXX_USE_NO_REMAP_", "FALSE");
      return r450;
    };
    r452 = dyn config_val_to_logical1(p103);
    check L774() else D286();
  D96():
    deopt 418 [r169];
  D118():
    deopt 513 [nobj4];
  D274():
    deopt 1132 [];
  D286():
    deopt 1167 [r452];
  L56():
    sym21 = ldf c;
    base38 = ldf c in base;
    guard21 = `==`.4(sym21, base38);
    if guard21 then L449() else L450();
  L393():
    c42 = `as.logical`(r169);
    if c42 then L394() else L41();
  L440():
    nobj5 = force? nobj4;
    checkMissing(nobj5);
    nzchar6 = ldf nzchar in base;
    r200 = dyn nzchar6(nobj5);
    check L441() else D119();
  L442():
    sym20 = ldf c;
    base37 = ldf c in base;
    guard20 = `==`.4(sym20, base37);
    if guard20 then L443() else L444();
  L754():
    p99 = prom<V +>{
      use_lto = ld use_lto;
      use_lto1 = force? use_lto;
      checkMissing(use_lto1);
      return use_lto1;
    };
    r433 = dyn isTRUE(p99);
    check L755() else D275();
  L774():
    c187 = `as.logical`(r452);
    if c187 then L775() else L172();
  D119():
    deopt 516 [r200];
  D275():
    deopt 1134 [r433];
  L41():
    ext4 = ld ext;
    check L397() else D98();
  L42():
    sym17 = ldf nzchar;
    base34 = ldf nzchar in base;
    guard17 = `==`.4(sym17, base34);
    if guard17 then L423() else L424();
  L57(r202):
    st objs = r202;
    goto L20();
  L58(r205):
    st pkg_libs = r205;
    goto L20();
  L172():
    goto L174();
  L174():
    paste16 = ldf paste;
    check L781() else D289();
  L394():
    st with_cxx = TRUE;
    base17 = ld base;
    check L395() else D97();
  L441():
    goto L55(r200);
  L443():
    objs = ld objs;
    check L445() else D120();
  L444():
    r201 = dyn base37(<sym objs>, <sym nobj>);
    goto L57(r201);
  L449():
    pkg_libs = ld pkg_libs;
    check L451() else D123();
  L450():
    r204 = dyn base38(<sym pkg_libs>, <sym a>);
    goto L58(r204);
  L755():
    c182 = `as.logical`(r433);
    if c182 then L756() else L167();
  L775():
    sym58 = ldf c;
    base75 = ldf c in base;
    guard58 = `==`.4(sym58, base75);
    if guard58 then L776() else L777();
  D97():
    deopt 422 [base17];
  D98():
    deopt 425 [ext4];
  D120():
    deopt 519 [objs];
  D123():
    deopt 528 [pkg_libs];
  D289():
    deopt 1179 [];
  L49(r187):
    c51 = `as.logical`(r187);
    if c51 then L427() else L50(c51);
  L167():
    isFALSE = ldf isFALSE;
    check L765() else D281();
  L169(r443):
    c186 = ldf c in base;
    r449 = dyn c186(makeargs19, r443);
    check L772() else D284();
  L173(r454):
    st makeargs = r454;
    goto L174();
  L395():
    base18 = force? base17;
    checkMissing(base18);
    st nobj = base18;
    goto L42();
  L397():
    ext5 = force? ext4;
    checkMissing(ext5);
    r170 = `==`(ext5, "m");
    c43 = `as.logical`(r170);
    if c43 then L398() else L43();
  L423():
    nobj = ld nobj;
    check L425() else D112();
  L424():
    r186 = dyn base34(<sym nobj>);
    goto L49(r186);
  L445():
    objs1 = force? objs;
    checkMissing(objs1);
    nobj6 = ld nobj;
    check L446() else D121();
  L451():
    pkg_libs1 = force? pkg_libs;
    checkMissing(pkg_libs1);
    a34 = ld a;
    check L452() else D124();
  L756():
    sym56 = ldf c;
    base73 = ldf c in base;
    guard56 = `==`.4(sym56, base73);
    if guard56 then L757() else L758();
  L776():
    makeargs20 = ld makeargs;
    check L778() else D287();
  L777():
    r453 = dyn base75(<sym makeargs>, "CXX_DEFS=-DR_NO_REMAP");
    goto L173(r453);
  L781():
    p104 = prom<V +>{
      MAKE = ld MAKE;
      MAKE1 = force? MAKE;
      checkMissing(MAKE1);
      return MAKE1;
    };
    p109 = prom<V +>{
      p105 = ldf p1;
      p108 = prom<V +>{
        paste17 = ldf paste;
        p107 = prom<V +>{
          shQuote4 = ldf shQuote;
          p106 = prom<V +>{
            makefiles6 = ld makefiles;
            makefiles7 = force? makefiles6;
            checkMissing(makefiles7);
            return makefiles7;
          };
          r459 = dyn shQuote4(p106);
          return r459;
        };
        r461 = dyn paste17("-f", p107);
        return r461;
      };
      r463 = dyn p105(p108);
      return r463;
    };
    p112 = prom<V +>{
      p110 = ldf p1;
      p111 = prom<V +>{
        makeargs22 = ld makeargs;
        makeargs23 = force? makeargs22;
        checkMissing(makeargs23);
        return makeargs23;
      };
      r466 = dyn p110(p111);
      return r466;
    };
    p115 = prom<V +>{
      p113 = ldf p1;
      p114 = prom<V +>{
        makeobjs = ld makeobjs;
        makeobjs1 = force? makeobjs;
        checkMissing(makeobjs1);
        return makeobjs1;
      };
      r469 = dyn p113(p114);
      return r469;
    };
    r471 = dyn paste16(p104, p109, p112, p115);
    check L782() else D290();
  D112():
    deopt 489 [nobj];
  D121():
    deopt 521 [nobj6];
  D124():
    deopt 530 [a34];
  D281():
    deopt 1150 [];
  D284():
    deopt 1162 [r449];
  D287():
    deopt 1170 [makeargs20];
  D290():
    deopt 1184 [r471];
  L43():
    _in_7 = ldf `%in%`;
    check L401() else D100();
  L50(c53):
    c60 = `as.logical`(c53);
    if c60 then L433() else L52();
  L168(r435):
    goto L169(r435);
  L398():
    st with_objc = TRUE;
    base20 = ld base;
    check L399() else D99();
  L425():
    nobj1 = force? nobj;
    checkMissing(nobj1);
    nzchar4 = ldf nzchar in base;
    r188 = dyn nzchar4(nobj1);
    check L426() else D113();
  L427():
    sym18 = ldf nzchar;
    base35 = ldf nzchar in base;
    guard18 = `==`.4(sym18, base35);
    if guard18 then L428() else L429();
  L446():
    nobj7 = force? nobj6;
    checkMissing(nobj7);
    c62 = ldf c in base;
    r203 = dyn c62(objs1, nobj7);
    check L447() else D122();
  L452():
    a35 = force? a34;
    checkMissing(a35);
    c63 = ldf c in base;
    r206 = dyn c63(pkg_libs1, a35);
    check L453() else D125();
  L757():
    paste14 = ldf paste0;
    check L759() else D276();
  L758():
    r434 = dyn base73(<lang paste0("LTO=", shQuote("$(LTO_OPT)"))>, <lang paste0("LTO_FC=", shQuote("$(LTO_FC_OPT)"))>);
    goto L168(r434);
  L765():
    p102 = prom<V +>{
      use_lto2 = ld use_lto;
      use_lto3 = force? use_lto2;
      checkMissing(use_lto3);
      return use_lto3;
    };
    r445 = dyn isFALSE(p102);
    check L766() else D282();
  L772():
    goto L166(r449);
  L778():
    makeargs21 = force? makeargs20;
    checkMissing(makeargs21);
    c188 = ldf c in base;
    r455 = dyn c188(makeargs21, "CXX_DEFS=-DR_NO_REMAP");
    check L779() else D288();
  L782():
    st cmd = r471;
    dry_run = ld dry_run;
    check L783() else D291();
  D99():
    deopt 432 [base20];
  D100():
    deopt 436 [];
  D113():
    deopt 492 [r188];
  D122():
    deopt 524 [r203];
  D125():
    deopt 533 [r206];
  D276():
    deopt 1138 [];
  D282():
    deopt 1152 [r445];
  D288():
    deopt 1174 [r455];
  D291():
    deopt 1186 [dry_run];
  L51(c56, r190):
    r192 = `!`(r190);
    c57 = `as.logical`(r192);
    c58 = `&&`(c56, c57);
    goto L50(c58);
  L52():
    goto L53(NULL);
  L53(r196):
    goto L54();
  L399():
    base21 = force? base20;
    checkMissing(base21);
    st nobj = base21;
    goto L42();
  L401():
    p45 = prom<V +>{
      ext6 = ld ext;
      ext7 = force? ext6;
      checkMissing(ext7);
      return ext7;
    };
    p46 = prom<V +>{
      sym15 = ldf c;
      base22 = ldf c in base;
      guard15 = `==`.4(sym15, base22);
      if guard15 then L1() else L2();
    L0(r173):
      return r173;
    L1():
      c44 = ldf c in base;
      r174 = dyn c44("mm", "M");
      goto L0(r174);
    L2():
      r172 = dyn base22("mm", "M");
      goto L0(r172);
    };
    r176 = dyn _in_7(p45, p46);
    check L402() else D101();
  L426():
    goto L49(r188);
  L428():
    shlib = ld shlib;
    check L430() else D114();
  L429():
    r189 = dyn base35(<sym shlib>);
    goto L51(c51, r189);
  L433():
    paste5 = ldf paste0;
    check L434() else D116();
  L447():
    goto L57(r203);
  L453():
    goto L58(r206);
  L759():
    p100 = prom<V +>{
      shQuote2 = ldf shQuote;
      r436 = dyn shQuote2("$(LTO_OPT)");
      return r436;
    };
    r438 = dyn paste14("LTO=", p100);
    check L760() else D277();
  L766():
    c184 = `as.logical`(r445);
    if c184 then L767() else L170();
  L779():
    goto L173(r455);
  L783():
    dry_run1 = force? dry_run;
    checkMissing(dry_run1);
    c189 = `as.logical`(dry_run1);
    if c189 then L784() else L175();
  D101():
    deopt 439 [r176];
  D114():
    deopt 495 [c51, shlib];
  D116():
    deopt 502 [];
  D277():
    deopt 1141 [r438];
  L170():
    goto L169(NULL);
  L175():
    system1 = ldf system;
    check L790() else D296();
  L176():
    res2 = ld res;
    check L922() else D366();
  L402():
    c45 = `as.logical`(r176);
    if c45 then L403() else L44();
  L430():
    shlib1 = force? shlib;
    checkMissing(shlib1);
    nzchar5 = ldf nzchar in base;
    r191 = dyn nzchar5(shlib1);
    check L431() else D115();
  L434():
    p49 = prom<V +>{
      nobj2 = ld nobj;
      nobj3 = force? nobj2;
      checkMissing(nobj3);
      return nobj3;
    };
    p50 = prom<V +>{
      SHLIB_EXT = ld SHLIB_EXT;
      SHLIB_EXT1 = force? SHLIB_EXT;
      checkMissing(SHLIB_EXT1);
      return SHLIB_EXT1;
    };
    r195 = dyn paste5(p49, p50);
    check L435() else D117();
  L760():
    paste15 = ldf paste0;
    check L761() else D278();
  L767():
    sym57 = ldf c;
    base74 = ldf c in base;
    guard57 = `==`.4(sym57, base74);
    if guard57 then L768() else L769();
  L784():
    cat2 = ldf cat;
    check L785() else D292();
  D115():
    deopt 498 [c51, r191];
  D117():
    deopt 505 [r195];
  D278():
    deopt 1143 [];
  D292():
    deopt 1189 [];
  D296():
    deopt 1204 [];
  D366():
    deopt 1446 [res2];
  L44():
    ext8 = ld ext;
    check L406() else D103();
  L171(r447):
    goto L169(r447);
  L403():
    st with_cxx = TRUE;
    st with_objc = TRUE;
    base23 = ld base;
    check L404() else D102();
  L431():
    goto L51(c51, r191);
  L435():
    st shlib = r195;
    goto L53(r195);
  L761():
    p101 = prom<V +>{
      shQuote3 = ldf shQuote;
      r439 = dyn shQuote3("$(LTO_FC_OPT)");
      return r439;
    };
    r441 = dyn paste15("LTO_FC=", p101);
    check L762() else D279();
  L768():
    c185 = ldf c in base;
    r448 = dyn c185("LTO=", "LTO_FC=");
    check L770() else D283();
  L769():
    r446 = dyn base74("LTO=", "LTO_FC=");
    goto L171(r446);
  L785():
    p116 = prom<V +>{
      cmd = ld cmd;
      cmd1 = force? cmd;
      checkMissing(cmd1);
      return cmd1;
    };
    r473 = dyn cat2[, , , sep]("make cmd is\n  ", p116, "\n\nmake would use\n", "");
    check L786() else D293();
  L790():
    p125 = prom<V +>{
      paste19 = ldf paste;
      p119 = prom<V +>{
        MAKE2 = ld MAKE;
        MAKE3 = force? MAKE2;
        checkMissing(MAKE3);
        return MAKE3;
      };
      p124 = prom<V +>{
        p120 = ldf p1;
        p123 = prom<V +>{
          paste20 = ldf paste;
          p122 = prom<V +>{
            shQuote5 = ldf shQuote;
            p121 = prom<V +>{
              makefiles8 = ld makefiles;
              makefiles9 = force? makefiles8;
              checkMissing(makefiles9);
              return makefiles9;
            };
            r481 = dyn shQuote5(p121);
            return r481;
          };
          r483 = dyn paste20("-f", p122);
          return r483;
        };
        r485 = dyn p120(p123);
        return r485;
      };
      r487 = dyn paste19(p119, p124, "compilers");
      return r487;
    };
    r489 = dyn system1[, intern](p125, TRUE);
    check L791() else D297();
  L922():
    res3 = force? res2;
    checkMissing(res3);
    popenv;
    return res3;
  D102():
    deopt 444 [base23];
  D103():
    deopt 447 [ext8];
  D279():
    deopt 1146 [r441];
  D283():
    deopt 1158 [r448];
  D293():
    deopt 1195 [r473];
  D297():
    deopt 1208 [r489];
  L404():
    base24 = force? base23;
    checkMissing(base24);
    st nobj = base24;
    goto L42();
  L406():
    ext9 = force? ext8;
    checkMissing(ext9);
    r177 = `==`(ext9, "f");
    c46 = `as.logical`(r177);
    if c46 then L407() else L45();
  L762():
    c183 = ldf c in base;
    r442 = dyn c183(r438, r441);
    check L763() else D280();
  L770():
    goto L171(r448);
  L786():
    system = ldf system;
    check L787() else D294();
  L791():
    st lines = r489;
    with_c = ld with_c;
    check L792() else D298();
  D280():
    deopt 1148 [r442];
  D294():
    deopt 1197 [];
  D298():
    deopt 1210 [with_c];
  L45():
    _in_8 = ldf `%in%`;
    check L410() else D105();
  L407():
    st with_f77 = TRUE;
    base25 = ld base;
    check L408() else D104();
  L763():
    goto L168(r442);
  L787():
    p118 = prom<V +>{
      paste18 = ldf paste;
      p117 = prom<V +>{
        cmd2 = ld cmd;
        cmd3 = force? cmd2;
        checkMissing(cmd3);
        return cmd3;
      };
      r475 = dyn paste18(p117, "-n");
      return r475;
    };
    r477 = dyn system(p118);
    check L788() else D295();
  L792():
    with_c1 = force? with_c;
    checkMissing(with_c1);
    c190 = `as.logical`(with_c1);
    if c190 then L793() else L177();
  D104():
    deopt 454 [base25];
  D105():
    deopt 458 [];
  D295():
    deopt 1199 [r477];
  L177():
    goto L182();
  L182():
    with_f81 = ld with_f77;
    check L813() else D310();
  L408():
    base26 = force? base25;
    checkMissing(base26);
    st nobj = base26;
    goto L42();
  L410():
    p47 = prom<V +>{
      ext10 = ld ext;
      ext11 = force? ext10;
      checkMissing(ext11);
      return ext11;
    };
    p48 = prom<V +>{
      sym16 = ldf c;
      base27 = ldf c in base;
      guard16 = `==`.4(sym16, base27);
      if guard16 then L1() else L2();
    L0(r180):
      return r180;
    L1():
      c47 = ldf c in base;
      r181 = dyn c47("f90", "f95");
      goto L0(r181);
    L2():
      r179 = dyn base27("f90", "f95");
      goto L0(r179);
    };
    r183 = dyn _in_8(p47, p48);
    check L411() else D106();
  L788():
    st res = 0.0;
    goto L176();
  L793():
    lines14 = ld lines;
    check L794() else D299();
  D106():
    deopt 461 [r183];
  D299():
    deopt 1212 [lines14];
  D310():
    deopt 1253 [with_f81];
  L411():
    c48 = `as.logical`(r183);
    if c48 then L412() else L46();
  L794():
    lines15 = force? lines14;
    checkMissing(lines15);
    c191 = `is.object`(lines15);
    if c191 then L795() else L796(lines15);
  L813():
    with_f82 = force? with_f81;
    checkMissing(with_f82);
    c194 = `as.logical`(with_f82);
    if c194 then L183(c194) else L814();
  L46():
    ext12 = ld ext;
    check L415() else D108();
  L178(dx22):
    st cc = dx22;
    sub4 = ldf sub;
    check L800() else D302();
  L183(c195):
    c200 = `as.logical`(c195);
    if c200 then L817() else L184();
  L412():
    st with_f9x = TRUE;
    base28 = ld base;
    check L413() else D107();
  L795():
    dr20 = tryDispatchBuiltin.1("[", lines15);
    dc10 = getTryDispatchBuiltinDispatched(dr20);
    if dc10 then L797() else L796(dr20);
  L796(lines17):
    grep7 = ldf grep;
    check L798() else D300();
  L814():
    with_f9x6 = ld with_f9x;
    check L815() else D311();
  D107():
    deopt 465 [base28];
  D108():
    deopt 468 [ext12];
  D300():
    deopt 1215 [lines17];
  D302():
    deopt 1222 [];
  D311():
    deopt 1255 [c194, with_f9x6];
  L184():
    goto L189();
  L189():
    with_cxx4 = ld with_cxx;
    check L837() else D323();
  L413():
    base29 = force? base28;
    checkMissing(base29);
    st nobj = base29;
    goto L42();
  L415():
    ext13 = force? ext12;
    checkMissing(ext13);
    r184 = `==`(ext13, "c");
    c49 = `as.logical`(r184);
    if c49 then L416() else L47();
  L797():
    dx21 = getTryDispatchBuiltinValue(dr20);
    goto L178(dx21);
  L798():
    p126 = prom<V +>{
      lines18 = ld lines;
      lines19 = force? lines18;
      checkMissing(lines19);
      return lines19;
    };
    r491 = dyn grep7("^CC =", p126);
    check L799() else D301();
  L800():
    p127 = prom<V +>{
      cc = ld cc;
      cc1 = force? cc;
      checkMissing(cc1);
      return cc1;
    };
    r494 = dyn sub4("CC = ", "", p127);
    check L801() else D303();
  L815():
    with_f9x7 = force? with_f9x6;
    checkMissing(with_f9x7);
    c197 = `as.logical`(with_f9x7);
    c198 = `||`(c194, c197);
    goto L183(c198);
  L817():
    lines20 = ld lines;
    check L818() else D312();
  D301():
    deopt 1218 [lines17, r491];
  D303():
    deopt 1226 [r494];
  D312():
    deopt 1258 [lines20];
  D323():
    deopt 1299 [with_cxx4];
  L47():
    ext14 = ld ext;
    check L419() else D110();
  L416():
    st with_c = TRUE;
    base30 = ld base;
    check L417() else D109();
  L799():
    __7 = ldf `[` in base;
    r492 = dyn __7(lines17, r491);
    goto L178(r492);
  L801():
    st cc = r494;
    try = ldf try;
    check L802() else D304();
  L818():
    lines21 = force? lines20;
    checkMissing(lines21);
    c201 = `is.object`(lines21);
    if c201 then L819() else L820(lines21);
  L837():
    with_cxx5 = force? with_cxx4;
    checkMissing(with_cxx5);
    c204 = `as.logical`(with_cxx5);
    if c204 then L838() else L190();
  D109():
    deopt 475 [base30];
  D110():
    deopt 478 [ext14];
  D304():
    deopt 1229 [];
  L185(dx26):
    st fc = dx26;
    sub5 = ldf sub;
    check L824() else D315();
  L190():
    goto L201();
  L201():
    Sys_info = ldf `Sys.info`;
    check L871() else D340();
  L417():
    base31 = force? base30;
    checkMissing(base31);
    st nobj = base31;
    goto L42();
  L419():
    ext15 = force? ext14;
    checkMissing(ext15);
    r185 = `==`(ext15, "o");
    c50 = `as.logical`(r185);
    if c50 then L420() else L48();
  L802():
    p130 = prom<V +>{
      system2 = ldf system;
      p129 = prom<V +>{
        paste21 = ldf paste;
        p128 = prom<V +>{
          cc2 = ld cc;
          cc3 = force? cc2;
          checkMissing(cc3);
          return cc3;
        };
        r496 = dyn paste21(p128, "--version");
        return r496;
      };
      r498 = dyn system2[, intern](p129, TRUE);
      return r498;
    };
    r500 = dyn try[, silent](p130, TRUE);
    check L803() else D305();
  L819():
    dr24 = tryDispatchBuiltin.1("[", lines21);
    dc12 = getTryDispatchBuiltinDispatched(dr24);
    if dc12 then L821() else L820(dr24);
  L820(lines23):
    grep8 = ldf grep;
    check L822() else D313();
  L838():
    lines26 = ld lines;
    check L839() else D324();
  D305():
    deopt 1233 [r500];
  D313():
    deopt 1261 [lines23];
  D315():
    deopt 1268 [];
  D324():
    deopt 1301 [lines26];
  D340():
    deopt 1363 [];
  L48():
    goto L42();
  L420():
    base32 = ld base;
    check L421() else D111();
  L803():
    st cc_ver = r500;
    sym59 = ldf inherits;
    base76 = ldf inherits in base;
    guard59 = `==`.4(sym59, base76);
    if guard59 then L804() else L805();
  L821():
    dx25 = getTryDispatchBuiltinValue(dr24);
    goto L185(dx25);
  L822():
    p133 = prom<V +>{
      lines24 = ld lines;
      lines25 = force? lines24;
      checkMissing(lines25);
      return lines25;
    };
    r513 = dyn grep8("^FC =", p133);
    check L823() else D314();
  L824():
    p134 = prom<V +>{
      fc = ld fc;
      fc1 = force? fc;
      checkMissing(fc1);
      return fc1;
    };
    r516 = dyn sub5("FC = ", "", p134);
    check L825() else D316();
  L839():
    lines27 = force? lines26;
    checkMissing(lines27);
    c205 = `is.object`(lines27);
    if c205 then L840() else L841(lines27);
  L871():
    r566 = dyn Sys_info();
    check L872() else D341();
  D111():
    deopt 482 [base32];
  D314():
    deopt 1264 [lines23, r513];
  D316():
    deopt 1272 [r516];
  D341():
    deopt 1364 [r566];
  L179(r502):
    r504 = `!`(r502);
    c192 = `as.logical`(r504);
    if c192 then L808() else L180();
  L191(dx30):
    st cxx = dx30;
    sub6 = ldf sub;
    check L845() else D327();
  L421():
    base33 = force? base32;
    checkMissing(base33);
    st nobj = base33;
    goto L42();
  L804():
    cc_ver = ld cc_ver;
    check L806() else D306();
  L805():
    r501 = dyn base76(<sym cc_ver>, "try-error");
    goto L179(r501);
  L823():
    __9 = ldf `[` in base;
    r514 = dyn __9(lines23, r513);
    goto L185(r514);
  L825():
    st fc = r516;
    try1 = ldf try;
    check L826() else D317();
  L840():
    dr28 = tryDispatchBuiltin.1("[", lines27);
    dc14 = getTryDispatchBuiltinDispatched(dr28);
    if dc14 then L842() else L841(dr28);
  L841(lines29):
    grep9 = ldf grep;
    check L843() else D325();
  L872():
    c211 = `is.object`(r566);
    if c211 then L873() else L874(r566);
  D306():
    deopt 1237 [cc_ver];
  D317():
    deopt 1275 [];
  D325():
    deopt 1304 [lines29];
  D327():
    deopt 1311 [];
  L180():
    goto L181(NULL);
  L181(r510):
    goto L182();
  L202(dx34):
    r570 = `==`(dx34, "Darwin");
    c212 = `as.logical`(r570);
    if c212 then L876() else L203(c212);
  L806():
    cc_ver1 = force? cc_ver;
    checkMissing(cc_ver1);
    inherits = ldf inherits in base;
    r503 = dyn inherits(cc_ver1, "try-error", FALSE);
    check L807() else D307();
  L808():
    message = ldf message;
    check L809() else D308();
  L826():
    p137 = prom<V +>{
      system3 = ldf system;
      p136 = prom<V +>{
        paste22 = ldf paste;
        p135 = prom<V +>{
          fc2 = ld fc;
          fc3 = force? fc2;
          checkMissing(fc3);
          return fc3;
        };
        r518 = dyn paste22(p135, "--version");
        return r518;
      };
      r520 = dyn system3[, intern](p136, TRUE);
      return r520;
    };
    r522 = dyn try1[, silent](p137, TRUE);
    check L827() else D318();
  L842():
    dx29 = getTryDispatchBuiltinValue(dr28);
    goto L191(dx29);
  L843():
    p140 = prom<V +>{
      lines30 = ld lines;
      lines31 = force? lines30;
      checkMissing(lines31);
      return lines31;
    };
    r535 = dyn grep9("^CXX =", p140);
    check L844() else D326();
  L845():
    p141 = prom<V +>{
      cxx = ld cxx;
      cxx1 = force? cxx;
      checkMissing(cxx1);
      return cxx1;
    };
    r538 = dyn sub6("CXX = ", "", p141);
    check L846() else D328();
  L873():
    dr32 = tryDispatchBuiltin.1("[", r566);
    dc16 = getTryDispatchBuiltinDispatched(dr32);
    if dc16 then L875() else L874(dr32);
  L874(r568):
    __13 = ldf `[` in base;
    r569 = dyn __13(r568, "sysname");
    goto L202(r569);
  D307():
    deopt 1242 [r503];
  D308():
    deopt 1245 [];
  D318():
    deopt 1279 [r522];
  D326():
    deopt 1307 [lines29, r535];
  D328():
    deopt 1315 [r538];
  L203(c214):
    c245 = `as.logical`(c214);
    if c245 then L888() else L207();
  L807():
    goto L179(r503);
  L809():
    p132 = prom<V +>{
      sQuote1 = ldf sQuote;
      p131 = prom<V +>{
        cc_ver2 = ld cc_ver;
        cc_ver3 = force? cc_ver2;
        checkMissing(cc_ver3);
        c193 = `is.object`(cc_ver3);
        if c193 then L1() else L2(cc_ver3);
      L0(dx24):
        return dx24;
      L1():
        dr22 = tryDispatchBuiltin.1("[", cc_ver3);
        dc11 = getTryDispatchBuiltinDispatched(dr22);
        if dc11 then L3() else L2(dr22);
      L2(cc_ver5):
        __8 = ldf `[` in base;
        r505 = dyn __8(cc_ver5, 1);
        goto L0(r505);
      L3():
        dx23 = getTryDispatchBuiltinValue(dr22);
        goto L0(dx23);
      };
      r507 = dyn sQuote1(p131);
      return r507;
    };
    r509 = dyn message("using C compiler: ", p132);
    check L810() else D309();
  L827():
    st fc_ver = r522;
    sym60 = ldf inherits;
    base77 = ldf inherits in base;
    guard60 = `==`.4(sym60, base77);
    if guard60 then L828() else L829();
  L844():
    __11 = ldf `[` in base;
    r536 = dyn __11(lines29, r535);
    goto L191(r536);
  L846():
    st cxx = r538;
    sym61 = ldf nzchar;
    base78 = ldf nzchar in base;
    guard61 = `==`.4(sym61, base78);
    if guard61 then L847() else L848();
  L875():
    dx33 = getTryDispatchBuiltinValue(dr32);
    goto L202(dx33);
  L876():
    with_c2 = ld with_c;
    check L877() else D342();
  D309():
    deopt 1248 [r509];
  D342():
    deopt 1370 [c212, with_c2];
  L186(r524):
    r526 = `!`(r524);
    c202 = `as.logical`(r526);
    if c202 then L832() else L187();
  L192(r540):
    c206 = `as.logical`(r540);
    if c206 then L851() else L193();
  L207():
    goto L211();
  L211():
    preclean = ld preclean;
    check L902() else D354();
  L810():
    goto L181(r509);
  L828():
    fc_ver = ld fc_ver;
    check L830() else D319();
  L829():
    r523 = dyn base77(<sym fc_ver>, "try-error");
    goto L186(r523);
  L847():
    cxx2 = ld cxx;
    check L849() else D329();
  L848():
    r539 = dyn base78(<sym cxx>);
    goto L192(r539);
  L877():
    with_c3 = force? with_c2;
    checkMissing(with_c3);
    c215 = `as.logical`(with_c3);
    if c215 then L204(c212, c215) else L878();
  L888():
    try3 = ldf try;
    check L889() else D346();
  D319():
    deopt 1283 [fc_ver];
  D329():
    deopt 1319 [cxx2];
  D346():
    deopt 1383 [];
  D354():
    deopt 1412 [preclean];
  L187():
    goto L188(NULL);
  L188(r532):
    goto L189();
  L193():
    goto L200(NULL);
  L200(r564):
    goto L201();
  L204(c216, c217):
    c224 = `as.logical`(c217);
    if c224 then L205(c216, c224) else L881();
  L830():
    fc_ver1 = force? fc_ver;
    checkMissing(fc_ver1);
    inherits1 = ldf inherits in base;
    r525 = dyn inherits1(fc_ver1, "try-error", FALSE);
    check L831() else D320();
  L832():
    message1 = ldf message;
    check L833() else D321();
  L849():
    cxx3 = force? cxx2;
    checkMissing(cxx3);
    nzchar9 = ldf nzchar in base;
    r541 = dyn nzchar9(cxx3);
    check L850() else D330();
  L851():
    try2 = ldf try;
    check L852() else D331();
  L878():
    with_f83 = ld with_f77;
    check L879() else D343();
  L889():
    p148 = prom<V +>{
      system5 = ldf system2;
      r571 = dyn system5("xcrun", "--show-sdk-path", TRUE, TRUE);
      return r571;
    };
    r573 = dyn try3[, silent](p148, TRUE);
    check L890() else D347();
  L902():
    preclean1 = force? preclean;
    checkMissing(preclean1);
    c247 = `as.logical`(preclean1);
    if c247 then L903() else L212();
  D320():
    deopt 1288 [r525];
  D321():
    deopt 1291 [];
  D330():
    deopt 1322 [r541];
  D331():
    deopt 1324 [];
  D343():
    deopt 1372 [c212, c215, with_f83];
  D347():
    deopt 1387 [r573];
  L205(c225, c226):
    c233 = `as.logical`(c226);
    if c233 then L206(c225, c233) else L884();
  L212():
    goto L213();
  L213():
    system7 = ldf system;
    check L907() else D357();
  L831():
    goto L186(r525);
  L833():
    p139 = prom<V +>{
      sQuote2 = ldf sQuote;
      p138 = prom<V +>{
        fc_ver2 = ld fc_ver;
        fc_ver3 = force? fc_ver2;
        checkMissing(fc_ver3);
        c203 = `is.object`(fc_ver3);
        if c203 then L1() else L2(fc_ver3);
      L0(dx28):
        return dx28;
      L1():
        dr26 = tryDispatchBuiltin.1("[", fc_ver3);
        dc13 = getTryDispatchBuiltinDispatched(dr26);
        if dc13 then L3() else L2(dr26);
      L2(fc_ver5):
        __10 = ldf `[` in base;
        r527 = dyn __10(fc_ver5, 1);
        goto L0(r527);
      L3():
        dx27 = getTryDispatchBuiltinValue(dr26);
        goto L0(dx27);
      };
      r529 = dyn sQuote2(p138);
      return r529;
    };
    r531 = dyn message1("using Fortran compiler: ", p139);
    check L834() else D322();
  L850():
    goto L192(r541);
  L852():
    p144 = prom<V +>{
      system4 = ldf system;
      p143 = prom<V +>{
        paste23 = ldf paste;
        p142 = prom<V +>{
          cxx4 = ld cxx;
          cxx5 = force? cxx4;
          checkMissing(cxx5);
          return cxx5;
        };
        r543 = dyn paste23(p142, "--version");
        return r543;
      };
      r545 = dyn system4[, intern](p143, TRUE);
      return r545;
    };
    r547 = dyn try2[, silent](p144, TRUE);
    check L853() else D332();
  L879():
    with_f84 = force? with_f83;
    checkMissing(with_f84);
    c220 = `as.logical`(with_f84);
    c221 = `||`(c215, c220);
    goto L204(c212, c221);
  L881():
    with_f9x8 = ld with_f9x;
    check L882() else D344();
  L890():
    st sdk = r573;
    sym64 = ldf inherits;
    base81 = ldf inherits in base;
    guard64 = `==`.4(sym64, base81);
    if guard64 then L891() else L892();
  L903():
    system6 = ldf system;
    check L904() else D355();
  D322():
    deopt 1294 [r531];
  D332():
    deopt 1328 [r547];
  D344():
    deopt 1375 [c216, c224, with_f9x8];
  D355():
    deopt 1415 [];
  D357():
    deopt 1421 [];
  L206(c234, c235):
    c242 = `as.logical`(c235);
    c243 = `&&`(c234, c242);
    goto L203(c243);
  L208(r575):
    r577 = `!`(r575);
    c246 = `as.logical`(r577);
    if c246 then L895() else L209();
  L834():
    goto L188(r531);
  L853():
    st cxx_ver = r547;
    sym62 = ldf inherits;
    base79 = ldf inherits in base;
    guard62 = `==`.4(sym62, base79);
    if guard62 then L854() else L855();
  L882():
    with_f9x9 = force? with_f9x8;
    checkMissing(with_f9x9);
    c229 = `as.logical`(with_f9x9);
    c230 = `||`(c224, c229);
    goto L205(c216, c230);
  L884():
    with_cxx6 = ld with_cxx;
    check L885() else D345();
  L891():
    sdk = ld sdk;
    check L893() else D348();
  L892():
    r574 = dyn base81(<sym sdk>, "try-error");
    goto L208(r574);
  L904():
    p153 = prom<V +>{
      paste24 = ldf paste;
      p152 = prom<V +>{
        cmd4 = ld cmd;
        cmd5 = force? cmd4;
        checkMissing(cmd5);
        return cmd5;
      };
      r587 = dyn paste24(p152, "shlib-clean");
      return r587;
    };
    r589 = dyn system6(p153);
    check L905() else D356();
  L907():
    p154 = prom<V +>{
      cmd6 = ld cmd;
      cmd7 = force? cmd6;
      checkMissing(cmd7);
      return cmd7;
    };
    r592 = dyn system7(p154);
    check L908() else D358();
  D345():
    deopt 1378 [c225, c233, with_cxx6];
  D348():
    deopt 1391 [sdk];
  D356():
    deopt 1417 [r589];
  D358():
    deopt 1423 [r592];
  L194(r549):
    r551 = `!`(r549);
    c207 = `as.logical`(r551);
    if c207 then L858() else L195();
  L209():
    goto L210(NULL);
  L210(r584):
    goto L211();
  L854():
    cxx_ver = ld cxx_ver;
    check L856() else D333();
  L855():
    r548 = dyn base79(<sym cxx_ver>, "try-error");
    goto L194(r548);
  L885():
    with_cxx7 = force? with_cxx6;
    checkMissing(with_cxx7);
    c238 = `as.logical`(with_cxx7);
    c239 = `||`(c233, c238);
    goto L206(c225, c239);
  L893():
    sdk1 = force? sdk;
    checkMissing(sdk1);
    inherits3 = ldf inherits in base;
    r576 = dyn inherits3(sdk1, "try-error", FALSE);
    check L894() else D349();
  L895():
    Sys_readlink = ldf `Sys.readlink`;
    check L896() else D350();
  L905():
    goto L213();
  L908():
    st res = r592;
    res = ld res;
    check L909() else D359();
  D333():
    deopt 1332 [cxx_ver];
  D349():
    deopt 1396 [r576];
  D350():
    deopt 1399 [];
  D359():
    deopt 1425 [res];
  L195():
    goto L199(NULL);
  L199(r563):
    goto L200(r563);
  L856():
    cxx_ver1 = force? cxx_ver;
    checkMissing(cxx_ver1);
    inherits2 = ldf inherits in base;
    r550 = dyn inherits2(cxx_ver1, "try-error", FALSE);
    check L857() else D334();
  L858():
    message2 = ldf message;
    check L859() else D335();
  L894():
    goto L208(r576);
  L896():
    p149 = prom<V +>{
      sdk2 = ld sdk;
      sdk3 = force? sdk2;
      checkMissing(sdk3);
      return sdk3;
    };
    r579 = dyn Sys_readlink(p149);
    check L897() else D351();
  L909():
    res1 = force? res;
    checkMissing(res1);
    r593 = `==`(res1, 0);
    c248 = `as.logical`(r593);
    if c248 then L910() else L214(c248);
  D334():
    deopt 1337 [r550];
  D335():
    deopt 1340 [];
  D351():
    deopt 1401 [r579];
  L214(c250):
    c254 = `as.logical`(c250);
    if c254 then L913() else L215();
  L857():
    goto L194(r550);
  L859():
    p146 = prom<V +>{
      sQuote3 = ldf sQuote;
      p145 = prom<V +>{
        cxx_ver2 = ld cxx_ver;
        cxx_ver3 = force? cxx_ver2;
        checkMissing(cxx_ver3);
        c208 = `is.object`(cxx_ver3);
        if c208 then L1() else L2(cxx_ver3);
      L0(dx32):
        return dx32;
      L1():
        dr30 = tryDispatchBuiltin.1("[", cxx_ver3);
        dc15 = getTryDispatchBuiltinDispatched(dr30);
        if dc15 then L3() else L2(dr30);
      L2(cxx_ver5):
        __12 = ldf `[` in base;
        r552 = dyn __12(cxx_ver5, 1);
        goto L0(r552);
      L3():
        dx31 = getTryDispatchBuiltinValue(dr30);
        goto L0(dx31);
      };
      r554 = dyn sQuote3(p145);
      return r554;
    };
    r556 = dyn message2("using C++ compiler: ", p146);
    check L860() else D336();
  L897():
    st sdk = r579;
    message4 = ldf message;
    check L898() else D352();
  L910():
    build_objects_symbol_tables = ld build_objects_symbol_tables;
    check L911() else D360();
  D336():
    deopt 1343 [r556];
  D352():
    deopt 1404 [];
  D360():
    deopt 1429 [c248, build_objects_symbol_tables];
  L215():
    goto L216();
  L216():
    clean = ld clean;
    check L917() else D363();
  L860():
    sym63 = ldf `is.null`;
    base80 = ldf `is.null` in base;
    guard63 = `==`.4(sym63, base80);
    if guard63 then L861() else L862();
  L898():
    p151 = prom<V +>{
      sQuote4 = ldf sQuote;
      p150 = prom<V +>{
        sdk4 = ld sdk;
        sdk5 = force? sdk4;
        checkMissing(sdk5);
        return sdk5;
      };
      r581 = dyn sQuote4(p150);
      return r581;
    };
    r583 = dyn message4("using SDK: ", p151);
    check L899() else D353();
  L911():
    build_objects_symbol_tables1 = force? build_objects_symbol_tables;
    checkMissing(build_objects_symbol_tables1);
    c251 = `as.logical`(build_objects_symbol_tables1);
    c252 = `&&`(c248, c251);
    goto L214(c252);
  L913():
    system8 = ldf system;
    check L914() else D361();
  D353():
    deopt 1407 [r583];
  D361():
    deopt 1433 [];
  D363():
    deopt 1438 [clean];
  L196(r558):
    r559 = `!`(r558);
    c210 = `as.logical`(r559);
    if c210 then L864() else L197();
  L861():
    use_cxxstd20 = ld use_cxxstd;
    check L863() else D337();
  L862():
    r557 = dyn base80(<sym use_cxxstd>);
    goto L196(r557);
  L899():
    goto L210(r583);
  L914():
    p156 = prom<V +>{
      paste25 = ldf paste;
      p155 = prom<V +>{
        cmd8 = ld cmd;
        cmd9 = force? cmd8;
        checkMissing(cmd9);
        return cmd9;
      };
      r595 = dyn paste25(p155, "symbols.rds");
      return r595;
    };
    r597 = dyn system8(p156);
    check L915() else D362();
  L917():
    clean1 = force? clean;
    checkMissing(clean1);
    c255 = `as.logical`(clean1);
    if c255 then L918() else L217();
  D337():
    deopt 1345 [use_cxxstd20];
  D362():
    deopt 1435 [r597];
  L197():
    goto L198(NULL);
  L198(r562):
    goto L199(r562);
  L217():
    goto L176();
  L863():
    use_cxxstd21 = force? use_cxxstd20;
    checkMissing(use_cxxstd21);
    c209 = `==`(use_cxxstd21, NULL);
    goto L196(c209);
  L864():
    message3 = ldf message;
    check L865() else D338();
  L915():
    goto L216();
  L918():
    system9 = ldf system;
    check L919() else D364();
  D338():
    deopt 1350 [];
  D364():
    deopt 1441 [];
  L865():
    p147 = prom<V +>{
      use_cxxstd22 = ld use_cxxstd;
      use_cxxstd23 = force? use_cxxstd22;
      checkMissing(use_cxxstd23);
      return use_cxxstd23;
    };
    r561 = dyn message3("using C++", p147);
    check L866() else D339();
  L919():
    p158 = prom<V +>{
      paste26 = ldf paste;
      p157 = prom<V +>{
        cmd10 = ld cmd;
        cmd11 = force? cmd10;
        checkMissing(cmd11);
        return cmd11;
      };
      r600 = dyn paste26(p157, "shlib-clean");
      return r600;
    };
    r602 = dyn system9(p158);
    check L920() else D365();
  D339():
    deopt 1353 [r561];
  D365():
    deopt 1443 [r602];
  L866():
    goto L198(r561);
  L920():
    goto L176();
  }
}
fun inner2708337952() {
  () -+> V { reg cat:cls, reg r:V |
    mkenv;
    cat = ldf cat;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    r = dyn cat[, , , , , , , , , , , , , , , , , , , , , , , sep]("Usage: R CMD SHLIB [options] files | linker options", "", "Build a shared object for dynamic loading from the specified source or", "object files (which are automagically made from their sources) or", "linker options.  If not given via '--output', the name for the shared", "object is determined from the first source or object file.", "", "Options:", "  -h, --help\t\tprint short help message and exit", "  -v, --version\t\tprint version info and exit", "  -o, --output=LIB\tuse LIB as (full) name for the built library", "  -c, --clean\t\tremove files created during compilation", "  --preclean\t\tremove files created during a previous run", "  -n, --dry-run\t\tdry run, showing commands that would be used", "  --use-LTO\t\tuse Link-Time Optimization", "  --no-use-LTO\t\tdo not use Link-Time Optimization", "  --use-C17\t        use a C standard at most C17 (alsp C90, C99)", "  --use-C23\t        use a C standard at least C23", "", "Windows only:", "  -d, --debug\t\tbuild a debug DLL", "", "Report bugs at <https://bugs.R-project.org>.", "\n");
    check L1() else D1();
  D1():
    deopt 27 [r];
  L1():
    popenv;
    return r;
  }
}
fun inner1246119658(`...`) {
  (reg ddd:dots) -+> V { var `...`:dots?, reg paste:cls, reg ddd1:dots?, reg r:V |
    mkenv;
    st `...` = ddd;
    paste = ldf paste;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    ddd1 = ld `...`;
    r = dyn paste[`...`, collapse](ddd1, " ");
    check L1() else D1();
  D1():
    deopt 5 [r];
  L1():
    popenv;
    return r;
  }
}
fun inner1274516544(cxxstd) {
  (reg cxxstd:*) -+> V { var cxxstd:*, reg rev:cls, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg makefiles:*, reg makefiles1:V, reg r2:I, reg p:p(V +), reg r4:V, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c:L, reg x:V, reg readLines:cls, reg makefiles2:*, reg makefiles3:V, reg c1:L, reg makefiles5:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg i5:*, reg i6:V, reg __:cls, reg r5:V, reg p1:p(V +), reg r7:V, reg paste0:cls, reg cxxstd1:*, reg cxxstd2:V, reg p2:p(V +), reg r9:V, reg grep:cls, reg pattern:*, reg pattern1:V, reg p3:p(V +), reg lines:*, reg lines1:V, reg p4:p(V +), reg r12:V, reg rev1:cls, reg sym1:cls, reg base1:cls, reg guard1:L, reg r13:V, reg r14:V, reg ll:*, reg ll1:V, reg r15:I, reg p5:p(V +), reg r17:V, reg s1:V, reg l1:I, reg i7:I, reg i10:I, reg c2:L, reg x1:V, reg gsub:cls, reg pattern2:*, reg pattern3:V, reg p6:p(V +), reg ll2:*, reg ll3:V, reg c3:L, reg ll5:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg j:*, reg j1:V, reg __1:cls, reg r19:V, reg p7:p(V +), reg r21:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r22:V, reg r23:V, reg cxx:*, reg cxx1:V, reg nzchar:cls, reg r24:V |
    mkenv;
    st cxxstd = cxxstd;
    rev = ldf rev;
    check L5() else D0();
  D0():
    deopt 1 [];
  L5():
    p = prom<V +>{
      sym = ldf seq_along;
      base = ldf seq_along in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r1):
      return r1;
    L1():
      makefiles = ld makefiles;
      makefiles1 = force? makefiles;
      checkMissing(makefiles1);
      r2 = seq_along(makefiles1);
      goto L0(r2);
    L2():
      r = dyn base(<sym makefiles>);
      goto L0(r);
    };
    r4 = dyn rev(p);
    check L6() else D1();
  D1():
    deopt 3 [r4];
  L6():
    s = toForSeq(r4);
    l = length(s);
    i = 0;
    goto L0(i);
  L0(i1):
    i2 = `+`.1(i1, 1);
    c = `<`.1(l, i2);
    if c then L7() else L4();
  L4():
    x = `[[`(s, i2, NULL, TRUE);
    st i = x;
    readLines = ldf readLines;
    check L8() else D2();
  L7():
    popenv;
    return FALSE;
  D2():
    deopt 5 [i2];
  L8():
    p1 = prom<V +>{
      makefiles2 = ld makefiles;
      makefiles3 = force? makefiles2;
      checkMissing(makefiles3);
      c1 = `is.object`(makefiles3);
      if c1 then L1() else L2(makefiles3);
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("[", makefiles3);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(makefiles5):
      i5 = ld i;
      i6 = force? i5;
      __ = ldf `[` in base;
      r5 = dyn __(makefiles5, i6);
      goto L0(r5);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    r7 = dyn readLines[, warn](p1, FALSE);
    check L9() else D3();
  D3():
    deopt 9 [i2, r7];
  L9():
    st lines = r7;
    paste0 = ldf paste0;
    check L10() else D4();
  D4():
    deopt 12 [i2];
  L10():
    p2 = prom<V +>{
      cxxstd1 = ld cxxstd;
      cxxstd2 = force? cxxstd1;
      checkMissing(cxxstd2);
      return cxxstd2;
    };
    r9 = dyn paste0("^CXX", p2, " *= *");
    check L11() else D5();
  D5():
    deopt 16 [i2, r9];
  L11():
    st pattern = r9;
    grep = ldf grep;
    check L12() else D6();
  D6():
    deopt 19 [i2];
  L12():
    p3 = prom<V +>{
      pattern = ld pattern;
      pattern1 = force? pattern;
      checkMissing(pattern1);
      return pattern1;
    };
    p4 = prom<V +>{
      lines = ld lines;
      lines1 = force? lines;
      checkMissing(lines1);
      return lines1;
    };
    r12 = dyn grep[, , perl, value, useBytes](p3, p4, TRUE, TRUE, TRUE);
    check L13() else D7();
  D7():
    deopt 28 [i2, r12];
  L13():
    st ll = r12;
    rev1 = ldf rev;
    check L14() else D8();
  D8():
    deopt 31 [i2];
  L14():
    p5 = prom<V +>{
      sym1 = ldf seq_along;
      base1 = ldf seq_along in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r14):
      return r14;
    L1():
      ll = ld ll;
      ll1 = force? ll;
      checkMissing(ll1);
      r15 = seq_along(ll1);
      goto L0(r15);
    L2():
      r13 = dyn base1(<sym ll>);
      goto L0(r13);
    };
    r17 = dyn rev1(p5);
    check L15() else D9();
  D9():
    deopt 33 [i2, r17];
  L15():
    s1 = toForSeq(r17);
    l1 = length(s1);
    i7 = 0;
    i10 = `+`.1(i7, 1);
    c2 = `<`.1(l1, i10);
    if c2 then L16() else L3();
  L3():
    x1 = `[[`(s1, i10, NULL, TRUE);
    st j = x1;
    gsub = ldf gsub;
    check L17() else D10();
  L16():
    goto L0(i2);
  D10():
    deopt 35 [i2, i10];
  L17():
    p6 = prom<V +>{
      pattern2 = ld pattern;
      pattern3 = force? pattern2;
      checkMissing(pattern3);
      return pattern3;
    };
    p7 = prom<V +>{
      ll2 = ld ll;
      ll3 = force? ll2;
      checkMissing(ll3);
      c3 = `is.object`(ll3);
      if c3 then L1() else L2(ll3);
    L0(dx3):
      return dx3;
    L1():
      dr2 = tryDispatchBuiltin.1("[", ll3);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L3() else L2(dr2);
    L2(ll5):
      j = ld j;
      j1 = force? j;
      __1 = ldf `[` in base;
      r19 = dyn __1(ll5, j1);
      goto L0(r19);
    L3():
      dx2 = getTryDispatchBuiltinValue(dr2);
      goto L0(dx2);
    };
    r21 = dyn gsub(p6, "", p7);
    check L18() else D11();
  D11():
    deopt 39 [i2, i10, r21];
  L18():
    st cxx = r21;
    sym2 = ldf nzchar;
    base2 = ldf nzchar in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L19() else L20();
  L2(r23):
    popenv;
    return r23;
  L19():
    cxx = ld cxx;
    check L21() else D12();
  L20():
    r22 = dyn base2(<sym cxx>);
    goto L2(r22);
  D12():
    deopt 43 [i2, i10, cxx];
  L21():
    cxx1 = force? cxx;
    checkMissing(cxx1);
    nzchar = ldf nzchar in base;
    r24 = dyn nzchar(cxx1);
    check L22() else D13();
  D13():
    deopt 46 [i2, i10, r24];
  L22():
    goto L2(r24);
  }
}
fun inner2405409536(cstd) {
  (reg cstd:*) -+> V { var cstd:*, reg rev:cls, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg makefiles:*, reg makefiles1:V, reg r2:I, reg p:p(V +), reg r4:V, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c:L, reg x:V, reg readLines:cls, reg makefiles2:*, reg makefiles3:V, reg c1:L, reg makefiles5:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg i5:*, reg i6:V, reg __:cls, reg r5:V, reg p1:p(V +), reg r7:V, reg paste0:cls, reg cstd1:*, reg cstd2:V, reg p2:p(V +), reg r9:V, reg grep:cls, reg pattern:*, reg pattern1:V, reg p3:p(V +), reg lines:*, reg lines1:V, reg p4:p(V +), reg r12:V, reg rev1:cls, reg sym1:cls, reg base1:cls, reg guard1:L, reg r13:V, reg r14:V, reg ll:*, reg ll1:V, reg r15:I, reg p5:p(V +), reg r17:V, reg s1:V, reg l1:I, reg i7:I, reg i10:I, reg c2:L, reg x1:V, reg gsub:cls, reg pattern2:*, reg pattern3:V, reg p6:p(V +), reg ll2:*, reg ll3:V, reg c3:L, reg ll5:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg j:*, reg j1:V, reg __1:cls, reg r19:V, reg p7:p(V +), reg r21:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r22:V, reg r23:V, reg cs:*, reg cs1:V, reg nzchar:cls, reg r24:V |
    mkenv;
    st cstd = cstd;
    rev = ldf rev;
    check L5() else D0();
  D0():
    deopt 1 [];
  L5():
    p = prom<V +>{
      sym = ldf seq_along;
      base = ldf seq_along in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r1):
      return r1;
    L1():
      makefiles = ld makefiles;
      makefiles1 = force? makefiles;
      checkMissing(makefiles1);
      r2 = seq_along(makefiles1);
      goto L0(r2);
    L2():
      r = dyn base(<sym makefiles>);
      goto L0(r);
    };
    r4 = dyn rev(p);
    check L6() else D1();
  D1():
    deopt 3 [r4];
  L6():
    s = toForSeq(r4);
    l = length(s);
    i = 0;
    goto L0(i);
  L0(i1):
    i2 = `+`.1(i1, 1);
    c = `<`.1(l, i2);
    if c then L7() else L4();
  L4():
    x = `[[`(s, i2, NULL, TRUE);
    st i = x;
    readLines = ldf readLines;
    check L8() else D2();
  L7():
    popenv;
    return FALSE;
  D2():
    deopt 5 [i2];
  L8():
    p1 = prom<V +>{
      makefiles2 = ld makefiles;
      makefiles3 = force? makefiles2;
      checkMissing(makefiles3);
      c1 = `is.object`(makefiles3);
      if c1 then L1() else L2(makefiles3);
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("[", makefiles3);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(makefiles5):
      i5 = ld i;
      i6 = force? i5;
      __ = ldf `[` in base;
      r5 = dyn __(makefiles5, i6);
      goto L0(r5);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    r7 = dyn readLines[, warn](p1, FALSE);
    check L9() else D3();
  D3():
    deopt 9 [i2, r7];
  L9():
    st lines = r7;
    paste0 = ldf paste0;
    check L10() else D4();
  D4():
    deopt 12 [i2];
  L10():
    p2 = prom<V +>{
      cstd1 = ld cstd;
      cstd2 = force? cstd1;
      checkMissing(cstd2);
      return cstd2;
    };
    r9 = dyn paste0("^CC", p2, " *= *");
    check L11() else D5();
  D5():
    deopt 16 [i2, r9];
  L11():
    st pattern = r9;
    grep = ldf grep;
    check L12() else D6();
  D6():
    deopt 19 [i2];
  L12():
    p3 = prom<V +>{
      pattern = ld pattern;
      pattern1 = force? pattern;
      checkMissing(pattern1);
      return pattern1;
    };
    p4 = prom<V +>{
      lines = ld lines;
      lines1 = force? lines;
      checkMissing(lines1);
      return lines1;
    };
    r12 = dyn grep[, , perl, value, useBytes](p3, p4, TRUE, TRUE, TRUE);
    check L13() else D7();
  D7():
    deopt 28 [i2, r12];
  L13():
    st ll = r12;
    rev1 = ldf rev;
    check L14() else D8();
  D8():
    deopt 31 [i2];
  L14():
    p5 = prom<V +>{
      sym1 = ldf seq_along;
      base1 = ldf seq_along in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r14):
      return r14;
    L1():
      ll = ld ll;
      ll1 = force? ll;
      checkMissing(ll1);
      r15 = seq_along(ll1);
      goto L0(r15);
    L2():
      r13 = dyn base1(<sym ll>);
      goto L0(r13);
    };
    r17 = dyn rev1(p5);
    check L15() else D9();
  D9():
    deopt 33 [i2, r17];
  L15():
    s1 = toForSeq(r17);
    l1 = length(s1);
    i7 = 0;
    i10 = `+`.1(i7, 1);
    c2 = `<`.1(l1, i10);
    if c2 then L16() else L3();
  L3():
    x1 = `[[`(s1, i10, NULL, TRUE);
    st j = x1;
    gsub = ldf gsub;
    check L17() else D10();
  L16():
    goto L0(i2);
  D10():
    deopt 35 [i2, i10];
  L17():
    p6 = prom<V +>{
      pattern2 = ld pattern;
      pattern3 = force? pattern2;
      checkMissing(pattern3);
      return pattern3;
    };
    p7 = prom<V +>{
      ll2 = ld ll;
      ll3 = force? ll2;
      checkMissing(ll3);
      c3 = `is.object`(ll3);
      if c3 then L1() else L2(ll3);
    L0(dx3):
      return dx3;
    L1():
      dr2 = tryDispatchBuiltin.1("[", ll3);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L3() else L2(dr2);
    L2(ll5):
      j = ld j;
      j1 = force? j;
      __1 = ldf `[` in base;
      r19 = dyn __1(ll5, j1);
      goto L0(r19);
    L3():
      dx2 = getTryDispatchBuiltinValue(dr2);
      goto L0(dx2);
    };
    r21 = dyn gsub(p6, "", p7);
    check L18() else D11();
  D11():
    deopt 39 [i2, i10, r21];
  L18():
    st cs = r21;
    sym2 = ldf nzchar;
    base2 = ldf nzchar in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L19() else L20();
  L2(r23):
    popenv;
    return r23;
  L19():
    cs = ld cs;
    check L21() else D12();
  L20():
    r22 = dyn base2(<sym cs>);
    goto L2(r22);
  D12():
    deopt 43 [i2, i10, cs];
  L21():
    cs1 = force? cs;
    checkMissing(cs1);
    nzchar = ldf nzchar in base;
    r24 = dyn nzchar(cs1);
    check L22() else D13();
  D13():
    deopt 46 [i2, i10, r24];
  L22():
    goto L2(r24);
  }
}