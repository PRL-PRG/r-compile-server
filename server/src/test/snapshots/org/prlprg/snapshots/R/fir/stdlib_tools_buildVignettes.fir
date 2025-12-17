fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2526472995;
    st buildVignettes = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2526472995(package, dir, `lib.loc`, quiet, clean, tangle, skip, ser_elibs) {
  (reg package:*, reg dir:*, reg lib_loc:*, reg quiet:*, reg clean:*, reg tangle:*, reg skip:*, reg ser_elibs:*) -+> V { var package:*, var dir:*, var `lib.loc`:*, reg lib_loc_isMissing:L, reg lib_loc_orDefault:*, var quiet:*, reg quiet_isMissing:L, reg quiet_orDefault:*, var clean:*, reg clean_isMissing:L, reg clean_orDefault:*, var tangle:*, reg tangle_isMissing:L, reg tangle_orDefault:*, var skip:*, reg skip_isMissing:L, reg skip_orDefault:*, var ser_elibs:*, reg ser_elibs_isMissing:L, reg ser_elibs_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg ser_elibs1:*, reg ser_elibs2:V, reg c:V, reg r2:V, reg separate:*, reg separate1:V, reg c1:L, reg readRDS:cls, reg ser_elibs3:*, reg ser_elibs4:V, reg p:p(V +), reg r4:V, reg pkgVignettes:cls, reg package1:*, reg package2:V, reg p1:p(V +), reg dir1:*, reg dir2:V, reg p2:p(V +), reg lib_loc1:*, reg lib_loc2:V, reg p3:p(V +), reg r9:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r10:V, reg r11:V, reg vigns:*, reg vigns1:V, reg c2:V, reg c3:L, reg sym2:cls, reg base2:cls, reg guard2:L, reg r12:V, reg r13:V, reg invisible:cls, reg r14:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r17:V, reg r18:V, reg vigns2:*, reg vigns3:V, reg c4:L, reg vigns5:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r19:V, reg length:cls, reg r20:V, reg r21:V, reg c5:L, reg sym4:cls, reg base4:cls, reg guard4:L, reg r23:V, reg r24:V, reg vigns6:*, reg vigns7:V, reg c6:L, reg vigns9:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r25:V, reg length1:cls, reg r26:V, reg c7:L, reg warning:cls, reg paste:cls, reg vigns10:*, reg vigns11:V, reg c8:L, reg vigns13:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg r27:V, reg p4:p(V +), reg r29:V, reg p5:p(V +), reg r31:V, reg duplicated:cls, reg vigns14:*, reg vigns15:V, reg c9:L, reg vigns17:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg r33:V, reg p6:p(V +), reg r35:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r36:V, reg r37:V, reg dups:*, reg dups1:V, reg any:cls, reg r38:V, reg c10:L, reg unique:cls, reg vigns18:*, reg vigns19:V, reg c11:L, reg vigns21:V, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg r39:V, reg c12:L, reg dx11:V, reg dr10:V, reg dc5:L, reg dx12:V, reg dx13:V, reg dups2:*, reg dups3:V, reg __:cls, reg r40:V, reg p7:p(V +), reg r42:V, reg sort:cls, reg basename:cls, reg vigns22:*, reg vigns23:V, reg c13:L, reg vigns25:V, reg dr12:V, reg dc6:L, reg dx14:V, reg dx15:V, reg r43:V, reg c14:L, reg dx17:V, reg dr14:V, reg dc7:L, reg dx18:V, reg dx19:V, reg _in_:cls, reg vigns26:*, reg vigns27:V, reg c15:L, reg vigns29:V, reg dr16:V, reg dc8:L, reg dx20:V, reg dx21:V, reg r44:V, reg p8:p(V +), reg names:*, reg names1:V, reg p9:p(V +), reg r47:V, reg __1:cls, reg r48:V, reg p10:p(V +), reg r50:V, reg p11:p(V +), reg r52:V, reg stop:cls, reg gettextf:cls, reg paste1:cls, reg sQuote:cls, reg docs:*, reg docs1:V, reg p12:p(V +), reg r54:V, reg p13:p(V +), reg r56:V, reg p14:p(V +), reg paste2:cls, reg sQuote1:cls, reg names2:*, reg names3:V, reg p15:p(V +), reg r59:V, reg p16:p(V +), reg r61:V, reg p17:p(V +), reg r63:V, reg p18:p(V +), reg r65:V, reg isTRUE:cls, reg skip1:*, reg skip2:V, reg p19:p(V +), reg r68:V, reg c16:L, reg rownames:cls, reg __2:cls, reg r69:V, reg r70:cls, reg r71:V, reg p20:p(V +), reg r73:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r75:V, reg r76:V, reg skip3:*, reg skip4:V, reg c17:V, reg r77:V, reg c18:L, reg isFALSE:cls, reg skip5:*, reg skip6:V, reg p21:p(V +), reg r79:V, reg c19:L, reg r80:V, reg stopifnot:cls, reg sym7:cls, reg base7:cls, reg guard7:L, reg r81:V, reg r82:V, reg skip7:*, reg skip8:V, reg c20:L, reg p22:p(V +), reg r84:V, reg Sys_unsetenv:cls, reg r85:V, reg options:cls, reg r86:V, reg getwd:cls, reg r87:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r88:V, reg r89:V, reg wd:*, reg wd1:V, reg c21:V, reg c22:L, reg stop1:cls, reg r90:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r92:V, reg on_exit:cls, reg r94:V, reg setwd:cls, reg vigns30:*, reg vigns31:V, reg c23:L, reg vigns33:V, reg dr18:V, reg dc9:L, reg dx22:V, reg dx23:V, reg r95:V, reg p23:p(V +), reg r97:V, reg list_files:cls, reg r98:V, reg _in_1:cls, reg origfiles:*, reg origfiles1:V, reg p24:p(V +), reg r100:V, reg file_create:cls, reg r101:V, reg character:cls, reg r102:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r103:V, reg r104:V, reg list:cls, reg r105:V, reg getwd1:cls, reg r106:V, reg character1:cls, reg r107:V, reg character2:cls, reg r108:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r109:V, reg r110:V, reg vigns34:*, reg vigns35:V, reg c24:L, reg vigns37:V, reg dr20:V, reg dc10:L, reg dx24:V, reg dx25:V, reg r111:V, reg r112:I, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c25:L, reg x:V, reg basename1:cls, reg vigns38:*, reg vigns39:V, reg c26:L, reg vigns41:V, reg dr22:V, reg dc11:L, reg dx26:V, reg dx27:V, reg r113:V, reg c27:L, reg dx29:V, reg dr24:V, reg dc12:L, reg dx30:V, reg dx31:V, reg i5:*, reg i6:V, reg __3:cls, reg r114:V, reg p25:p(V +), reg r116:V, reg vigns42:*, reg vigns43:V, reg c28:L, reg i8:I, reg vigns45:V, reg dr26:V, reg dc13:L, reg dx32:V, reg i10:I, reg dx33:V, reg r117:V, reg c29:L, reg i12:I, reg dx35:V, reg dr28:V, reg dc14:L, reg dx36:V, reg i14:I, reg dx37:V, reg i15:*, reg i16:V, reg __4:cls, reg r118:V, reg isTRUE1:cls, reg skip9:*, reg skip10:V, reg p26:p(V +), reg r120:V, reg c30:L, reg vignetteInfo:cls, reg file:*, reg file1:V, reg p27:p(V +), reg r122:V, reg sym12:cls, reg base12:cls, reg guard12:L, reg r123:V, reg i21:I, reg r124:V, reg _w_o_:cls, reg vinfo:*, reg vinfo1:V, reg c31:L, reg vinfo3:V, reg dr30:V, reg dc15:L, reg dx38:V, reg dx39:V, reg r125:V, reg p28:p(V +), reg installed:*, reg installed1:V, reg p29:p(V +), reg r128:V, reg length2:cls, reg r129:V, reg r130:V, reg i22:I, reg r131:V, reg _in_2:cls, reg name:*, reg name1:V, reg p30:p(V +), reg skip11:*, reg skip12:V, reg p31:p(V +), reg r134:V, reg thisSKIP:*, reg thisSKIP1:V, reg c32:L, reg isTRUE2:cls, reg skip13:*, reg skip14:V, reg p32:p(V +), reg r136:V, reg c33:L, reg _pretty_format2:cls, reg sprintf:cls, reg sQuote2:cls, reg file2:*, reg file3:V, reg p33:p(V +), reg r138:V, reg p34:p(V +), reg r140:V, reg p35:p(V +), reg missdeps:*, reg missdeps1:V, reg p36:p(V +), reg r143:V, reg i27:I, reg r144:V, reg gettextf1:cls, reg sQuote3:cls, reg file4:*, reg file5:V, reg p37:p(V +), reg r146:V, reg p38:p(V +), reg r148:V, reg message:cls, reg paste3:cls, reg sym13:cls, reg base13:cls, reg guard13:L, reg r149:V, reg r150:V, reg msg:*, reg msg1:V, reg c34:cls, reg r151:V, reg p39:p(V +), reg r153:V, reg p40:p(V +), reg r155:V, reg sym14:cls, reg base14:cls, reg guard14:L, reg r156:V, reg i30:I, reg r157:V, reg skipped:*, reg skipped1:V, reg file6:*, reg file7:V, reg c35:cls, reg r158:V, reg vigns46:*, reg vigns47:V, reg c36:L, reg i34:I, reg vigns49:V, reg dr32:V, reg dc16:L, reg dx40:V, reg i36:I, reg dx41:V, reg r160:V, reg c37:L, reg i38:I, reg dx43:V, reg dr34:V, reg dc17:L, reg dx44:V, reg i40:I, reg dx45:V, reg i41:*, reg i42:V, reg __5:cls, reg r161:V, reg enc:*, reg enc1:V, reg r162:V, reg c38:L, reg message1:cls, reg gettextf2:cls, reg file8:*, reg file9:V, reg p41:p(V +), reg r164:V, reg p42:p(V +), reg r166:V, reg sym15:cls, reg base15:cls, reg guard15:L, reg r167:V, reg i47:I, reg r168:V, reg fails:*, reg fails1:V, reg file10:*, reg file11:V, reg c39:cls, reg r169:V, reg vignetteEngine:cls, reg vigns50:*, reg vigns51:V, reg c40:L, reg vigns53:V, reg dr36:V, reg dc18:L, reg dx46:V, reg dx47:V, reg r171:V, reg c41:L, reg dx49:V, reg dr38:V, reg dc19:L, reg dx50:V, reg dx51:V, reg i50:*, reg i51:V, reg __6:cls, reg r172:V, reg p43:p(V +), reg r174:V, reg separate2:*, reg separate3:V, reg c42:L, reg gsub:cls, reg tempfile:cls, reg r175:V, reg p44:p(V +), reg r177:V, reg saveRDS:cls, reg engine:*, reg engine1:V, reg p45:p(V +), reg tf2:*, reg tf3:V, reg p46:p(V +), reg r180:V, reg sprintf1:cls, reg file12:*, reg file13:V, reg p47:p(V +), reg vigns54:*, reg vigns55:V, reg c43:L, reg vigns57:V, reg dr40:V, reg dc20:L, reg dx52:V, reg dx53:V, reg r182:V, reg p48:p(V +), reg quiet1:*, reg quiet2:V, reg p49:p(V +), reg have_makefile:*, reg have_makefile1:V, reg p50:p(V +), reg name2:*, reg name3:V, reg p51:p(V +), reg enc2:*, reg enc3:V, reg p52:p(V +), reg tf4:*, reg tf5:V, reg p53:p(V +), reg r189:V, reg get_timeout:cls, reg Sys_getenv:cls, reg Sys_getenv1:cls, reg r190:V, reg p54:p(V +), reg r192:V, reg p55:p(V +), reg r194:V, reg tempfile1:cls, reg r195:V, reg R_runR:cls, reg Rcmd:*, reg Rcmd1:V, reg p56:p(V +), reg elibs:*, reg elibs1:V, reg p57:p(V +), reg tf6:*, reg tf7:V, reg p58:p(V +), reg tf8:*, reg tf9:V, reg p59:p(V +), reg tlim:*, reg tlim1:V, reg p60:p(V +), reg r201:V, reg unlink:cls, reg tf10:*, reg tf11:V, reg p61:p(V +), reg r203:V, reg status:*, reg status1:V, reg r204:V, reg c44:L, reg readLines:cls, reg tf12:*, reg tf13:V, reg p62:p(V +), reg r206:V, reg grepl:cls, reg patt:*, reg patt1:V, reg p63:p(V +), reg this:*, reg this1:V, reg p64:p(V +), reg r209:V, reg gsub1:cls, reg patt2:*, reg patt3:V, reg p65:p(V +), reg this2:*, reg this3:V, reg c45:L, reg this5:V, reg dr42:V, reg dc21:L, reg dx54:V, reg dx55:V, reg l1:*, reg l2:V, reg __7:cls, reg r211:V, reg p66:p(V +), reg r213:V, reg sym16:cls, reg base16:cls, reg guard16:L, reg r214:V, reg i58:I, reg r215:V, reg outputs:*, reg outputs1:V, reg output:*, reg output1:V, reg c46:cls, reg r216:V, reg cat:cls, reg this6:*, reg this7:V, reg c47:L, reg this9:V, reg dr44:V, reg dc22:L, reg dx56:V, reg dx57:V, reg l3:*, reg l4:V, reg r217:V, reg __8:cls, reg r218:V, reg p67:p(V +), reg r220:V, reg i59:I, reg sym17:cls, reg base17:cls, reg guard17:L, reg r222:V, reg i62:I, reg r223:V, reg fails2:*, reg fails3:V, reg file14:*, reg file15:V, reg c48:cls, reg r224:V, reg cat1:cls, reg readLines1:cls, reg tf14:*, reg tf15:V, reg p68:p(V +), reg r226:V, reg p69:p(V +), reg r228:V, reg unlink1:cls, reg tf16:*, reg tf17:V, reg p70:p(V +), reg r230:V, reg i63:I, reg message2:cls, reg gettextf3:cls, reg sQuote4:cls, reg file16:*, reg file17:V, reg p71:p(V +), reg r233:V, reg p72:p(V +), reg engine2:*, reg engine3:V, reg c49:L, reg engine5:V, reg dr46:V, reg dc23:L, reg dx58:V, reg dx59:V, reg r235:V, reg p73:p(V +), reg r237:V, reg p74:p(V +), reg r239:V, reg tryCatch:cls, reg engine6:*, reg engine7:V, reg c50:L, reg engine9:V, reg dr48:V, reg dc24:L, reg dx60:V, reg dx61:V, reg r240:V, reg dx62:cls, reg file18:*, reg file19:V, reg p75:p(V +), reg quiet3:*, reg quiet4:V, reg p76:p(V +), reg enc4:*, reg enc5:V, reg p77:p(V +), reg setwd1:cls, reg startdir:*, reg startdir1:V, reg p78:p(V +), reg find_vignette_product:cls, reg name4:*, reg name5:V, reg p79:p(V +), reg engine10:*, reg engine11:V, reg p80:p(V +), reg r249:V, reg have_makefile2:*, reg have_makefile3:V, reg r250:V, reg c51:L, reg c53:V, reg vignette_is_tex:cls, reg output2:*, reg output3:V, reg p81:p(V +), reg r252:V, reg c54:L, reg c55:V, reg c57:L, reg texi2pdf:cls, reg output4:*, reg output5:V, reg p82:p(V +), reg quiet5:*, reg quiet6:V, reg p83:p(V +), reg find_vignette_product1:cls, reg name6:*, reg name7:V, reg p84:p(V +), reg engine12:*, reg engine13:V, reg p85:p(V +), reg r258:V, reg sym18:cls, reg base18:cls, reg guard18:L, reg r260:V, reg r261:V, reg outputs2:*, reg outputs3:V, reg output6:*, reg output7:V, reg c58:cls, reg r262:V, reg p86:p(V +), reg r264:cls, reg p87:p(V +), reg r266:V, reg tangle1:*, reg tangle2:V, reg c59:L, reg i65:I, reg c61:V, reg separate4:*, reg separate5:V, reg r267:V, reg c62:L, reg c63:V, reg c65:L, reg tryCatch1:cls, reg engine14:*, reg engine15:V, reg c66:L, reg engine17:V, reg dr50:V, reg dc25:L, reg dx63:V, reg dx64:V, reg r268:V, reg dx65:cls, reg file20:*, reg file21:V, reg p88:p(V +), reg quiet7:*, reg quiet8:V, reg p89:p(V +), reg enc6:*, reg enc7:V, reg p90:p(V +), reg setwd2:cls, reg startdir2:*, reg startdir3:V, reg p91:p(V +), reg find_vignette_product2:cls, reg name8:*, reg name9:V, reg p92:p(V +), reg engine18:*, reg engine19:V, reg p93:p(V +), reg r277:V, reg p94:p(V +), reg r279:cls, reg p95:p(V +), reg r281:V, reg output8:*, reg output9:V, reg l5:*, reg c67:L, reg i70:I, reg output11:V, reg l7:*, reg dr52:V, reg dc26:L, reg dx66:V, reg i72:I, reg output13:V, reg dx67:V, reg file22:*, reg file23:V, reg ____:cls, reg r282:V, reg i73:I, reg separate6:*, reg separate7:V, reg r283:V, reg c68:L, reg thisOK:*, reg thisOK1:V, reg c69:L, reg message3:cls, reg gettextf4:cls, reg sQuote5:cls, reg file24:*, reg file25:V, reg p96:p(V +), reg r285:V, reg p97:p(V +), reg r287:V, reg p98:p(V +), reg r289:V, reg i78:I, reg r290:V, reg message4:cls, reg gettextf5:cls, reg sQuote6:cls, reg file26:*, reg file27:V, reg p99:p(V +), reg r292:V, reg p100:p(V +), reg r294:V, reg p101:p(V +), reg r296:V, reg i79:I, reg have_makefile4:*, reg have_makefile5:V, reg c70:L, reg _Platform:*, reg _Platform1:V, reg c71:L, reg _Platform3:V, reg dr54:V, reg dc27:L, reg dx68:V, reg dx69:V, reg r298:V, reg r299:V, reg WINDOWS:*, reg WINDOWS1:V, reg c72:L, reg chartr:cls, reg R_home:cls, reg r300:V, reg p102:p(V +), reg r302:V, reg Sys_setenv:cls, reg rhome:*, reg rhome1:V, reg p103:p(V +), reg r304:V, reg Sys_getenv2:cls, reg r306:V, reg sym19:cls, reg base19:cls, reg guard19:L, reg r307:V, reg r308:V, reg make:*, reg make1:V, reg nzchar:cls, reg r309:V, reg r310:V, reg c73:L, reg system:cls, reg make2:*, reg make3:V, reg p104:p(V +), reg r313:V, reg yy:*, reg yy1:V, reg r314:V, reg c74:L, reg stop2:cls, reg r315:V, reg clean1:*, reg clean2:V, reg c75:L, reg c77:V, reg sym20:cls, reg base20:cls, reg guard20:L, reg r317:V, reg c80:L, reg r318:V, reg startsWith:cls, reg readLines2:cls, reg r319:V, reg p105:p(V +), reg r321:V, reg any1:cls, reg r322:V, reg c81:L, reg c82:V, reg c84:L, reg system1:cls, reg paste4:cls, reg make4:*, reg make5:V, reg p106:p(V +), reg r324:V, reg p107:p(V +), reg r326:V, reg r327:V, reg __9:cls, reg r329:V, reg r330:cls, reg r331:V, reg sym21:cls, reg base21:cls, reg guard21:L, reg r332:V, reg r333:V, reg outputs4:*, reg outputs5:V, reg unlist:cls, reg sourceList:*, reg sourceList1:V, reg p108:p(V +), reg r335:V, reg c85:cls, reg r336:V, reg clean3:*, reg clean4:V, reg c86:L, reg setdiff:cls, reg list_files1:cls, reg r337:V, reg p109:p(V +), reg keep:*, reg keep1:V, reg p110:p(V +), reg r340:V, reg file_test:cls, reg f:*, reg f1:V, reg p111:p(V +), reg r342:V, reg unlink2:cls, reg f2:*, reg f3:V, reg c87:L, reg f5:V, reg dr56:V, reg dc28:L, reg dx70:V, reg dx71:V, reg newer:*, reg newer1:V, reg __10:cls, reg r343:V, reg p112:p(V +), reg r345:V, reg setdiff1:cls, reg list_files2:cls, reg r346:V, reg p113:p(V +), reg sym22:cls, reg base22:cls, reg guard22:L, reg r348:V, reg r349:V, reg keep2:*, reg keep3:V, reg origfiles2:*, reg origfiles3:V, reg c88:cls, reg r350:V, reg p114:p(V +), reg r352:V, reg f6:*, reg f7:V, reg c89:L, reg f9:V, reg dr58:V, reg dc29:L, reg dx72:V, reg dx73:V, reg file_test1:cls, reg f10:*, reg f11:V, reg p115:p(V +), reg r354:V, reg __11:cls, reg r355:V, reg file_remove:cls, reg f12:*, reg f13:V, reg p116:p(V +), reg r357:V, reg file_exists:cls, reg r358:V, reg c90:L, reg file_remove1:cls, reg r359:V, reg sym23:cls, reg base23:cls, reg guard23:L, reg r361:V, reg r362:V, reg fails4:*, reg fails5:V, reg length3:cls, reg r363:V, reg c91:L, reg message5:cls, reg ngettext:cls, reg sym24:cls, reg base24:cls, reg guard24:L, reg r364:V, reg r365:V, reg fails6:*, reg fails7:V, reg length4:cls, reg r366:V, reg p117:p(V +), reg r368:V, reg p118:p(V +), reg r370:V, reg message6:cls, reg paste5:cls, reg _pretty_format3:cls, reg fails8:*, reg fails9:V, reg p119:p(V +), reg r372:V, reg p120:p(V +), reg r374:V, reg p121:p(V +), reg r376:V, reg message7:cls, reg r377:V, reg sym25:cls, reg base25:cls, reg guard25:L, reg r379:V, reg r380:V, reg fails10:*, reg fails11:V, reg length5:cls, reg r381:V, reg c92:L, reg c93:V, reg sym26:cls, reg base26:cls, reg guard26:L, reg r382:V, reg c97:L, reg r383:V, reg outputs6:*, reg outputs7:V, reg length6:cls, reg r384:V, reg sym27:cls, reg base27:cls, reg guard27:L, reg r387:V, reg c100:L, reg r388:V, reg r389:V, reg vigns58:*, reg vigns59:V, reg c101:L, reg c103:L, reg r391:V, reg vigns61:V, reg dr60:V, reg dc30:L, reg dx74:V, reg c105:L, reg r393:V, reg dx75:V, reg r394:V, reg length7:cls, reg r395:V, reg sym28:cls, reg base28:cls, reg guard28:L, reg r400:V, reg c108:L, reg r401:V, reg r402:V, reg r403:V, reg skipped2:*, reg skipped3:V, reg length8:cls, reg r404:V, reg r405:V, reg r406:V, reg c109:L, reg c110:V, reg c112:L, reg stop3:cls, reg msg2:*, reg msg3:V, reg p122:p(V +), reg r408:V, reg outputs8:*, reg outputs9:V, reg l8:*, reg c113:L, reg outputs11:V, reg l10:*, reg dr62:V, reg dc31:L, reg dx76:V, reg dx77:V, reg r410:V, reg sourceList2:*, reg sourceList3:V, reg l11:*, reg c114:L, reg sourceList5:V, reg l13:*, reg dr64:V, reg dc32:L, reg dx78:V, reg dx79:V, reg r411:V, reg sym29:cls, reg base29:cls, reg guard29:L, reg r412:V, reg r413:V, reg vigns62:*, reg vigns63:V, reg invisible1:cls, reg r414:V |
    mkenv;
    st package = package;
    st dir = dir;
    lib_loc_isMissing = missing.0(lib_loc);
    if lib_loc_isMissing then L0(NULL) else L0(lib_loc);
  L0(lib_loc_orDefault):
    st `lib.loc` = lib_loc_orDefault;
    quiet_isMissing = missing.0(quiet);
    if quiet_isMissing then L1(TRUE) else L1(quiet);
  L1(quiet_orDefault):
    st quiet = quiet_orDefault;
    clean_isMissing = missing.0(clean);
    if clean_isMissing then L2(TRUE) else L2(clean);
  L2(clean_orDefault):
    st clean = clean_orDefault;
    tangle_isMissing = missing.0(tangle);
    if tangle_isMissing then L3(FALSE) else L3(tangle);
  L3(tangle_orDefault):
    st tangle = tangle_orDefault;
    skip_isMissing = missing.0(skip);
    if skip_isMissing then L4(NULL) else L4(skip);
  L4(skip_orDefault):
    st skip = skip_orDefault;
    ser_elibs_isMissing = missing.0(ser_elibs);
    if ser_elibs_isMissing then L5(NULL) else L5(ser_elibs);
  L5(ser_elibs_orDefault):
    st ser_elibs = ser_elibs_orDefault;
    sym = ldf `is.null`;
    base = ldf `is.null` in base;
    guard = `==`.4(sym, base);
    if guard then L92() else L93();
  L6(r1):
    r2 = `!`(r1);
    st separate = r2;
    separate = ld separate;
    check L95() else D1();
  L92():
    ser_elibs1 = ld ser_elibs;
    check L94() else D0();
  L93():
    r = dyn base(<sym ser_elibs>);
    goto L6(r);
  D0():
    deopt 1 [ser_elibs1];
  D1():
    deopt 6 [separate];
  L94():
    ser_elibs2 = force? ser_elibs1;
    checkMissing(ser_elibs2);
    c = `==`(ser_elibs2, NULL);
    goto L6(c);
  L95():
    separate1 = force? separate;
    checkMissing(separate1);
    c1 = `as.logical`(separate1);
    if c1 then L96() else L7();
  L7():
    goto L8();
  L8():
    pkgVignettes = ldf pkgVignettes;
    check L100() else D4();
  L96():
    readRDS = ldf readRDS;
    check L97() else D2();
  D2():
    deopt 9 [];
  D4():
    deopt 16 [];
  L97():
    p = prom<V +>{
      ser_elibs3 = ld ser_elibs;
      ser_elibs4 = force? ser_elibs3;
      checkMissing(ser_elibs4);
      return ser_elibs4;
    };
    r4 = dyn readRDS(p);
    check L98() else D3();
  L100():
    p1 = prom<V +>{
      package1 = ld package;
      package2 = force? package1;
      checkMissing(package2);
      return package2;
    };
    p2 = prom<V +>{
      dir1 = ld dir;
      dir2 = force? dir1;
      checkMissing(dir2);
      return dir2;
    };
    p3 = prom<V +>{
      lib_loc1 = ld `lib.loc`;
      lib_loc2 = force? lib_loc1;
      checkMissing(lib_loc2);
      return lib_loc2;
    };
    r9 = dyn pkgVignettes[package, dir, `lib.loc`, check](p1, p2, p3, TRUE);
    check L101() else D5();
  D3():
    deopt 11 [r4];
  D5():
    deopt 25 [r9];
  L98():
    st elibs = r4;
    goto L8();
  L101():
    st vigns = r9;
    sym1 = ldf `is.null`;
    base1 = ldf `is.null` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L102() else L103();
  L9(r11):
    c3 = `as.logical`(r11);
    if c3 then L105() else L10();
  L102():
    vigns = ld vigns;
    check L104() else D6();
  L103():
    r10 = dyn base1(<sym vigns>);
    goto L9(r10);
  D6():
    deopt 28 [vigns];
  L10():
    sym3 = ldf length;
    base3 = ldf length in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L111() else L112();
  L104():
    vigns1 = force? vigns;
    checkMissing(vigns1);
    c2 = `==`(vigns1, NULL);
    goto L9(c2);
  L105():
    sym2 = ldf invisible;
    base2 = ldf invisible in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L106() else L107();
  L11(r13):
    popenv;
    return r13;
  L13(r18):
    r21 = `<=`(r18, 1);
    c5 = `as.logical`(r21);
    if c5 then L119() else L14();
  L106():
    invisible = ldf invisible in base;
    r14 = dyn invisible();
    check L108() else D7();
  L107():
    r12 = dyn base2();
    goto L11(r12);
  L111():
    vigns2 = ld vigns;
    check L113() else D8();
  L112():
    r17 = dyn base3(<lang `$`(vigns, docs)>);
    goto L13(r17);
  D7():
    deopt 34 [r14];
  D8():
    deopt 40 [vigns2];
  L14():
    goto L15();
  L15():
    sym4 = ldf length;
    base4 = ldf length in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L121() else L122();
  L108():
    goto L11(r14);
  L113():
    vigns3 = force? vigns2;
    checkMissing(vigns3);
    c4 = `is.object`(vigns3);
    if c4 then L115() else L116(vigns3);
  L119():
    st separate = FALSE;
    goto L15();
  L16(r24):
    c7 = `as.logical`(r24);
    if c7 then L129() else L17();
  L114(dx1):
    length = ldf length in base;
    r20 = dyn length(dx1);
    check L118() else D9();
  L115():
    dr = tryDispatchBuiltin.1("$", vigns3);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L117() else L116(dr);
  L116(vigns5):
    r19 = `$`(vigns5, <sym docs>);
    goto L114(r19);
  L121():
    vigns6 = ld vigns;
    check L123() else D10();
  L122():
    r23 = dyn base4(<lang `$`(vigns, msg)>);
    goto L16(r23);
  D9():
    deopt 44 [r20];
  D10():
    deopt 54 [vigns6];
  L17():
    goto L18();
  L18():
    duplicated = ldf duplicated;
    check L133() else D14();
  L117():
    dx = getTryDispatchBuiltinValue(dr);
    goto L114(dx);
  L118():
    goto L13(r20);
  L123():
    vigns7 = force? vigns6;
    checkMissing(vigns7);
    c6 = `is.object`(vigns7);
    if c6 then L125() else L126(vigns7);
  L129():
    warning = ldf warning;
    check L130() else D12();
  D12():
    deopt 60 [];
  D14():
    deopt 68 [];
  L124(dx3):
    length1 = ldf length in base;
    r26 = dyn length1(dx3);
    check L128() else D11();
  L125():
    dr2 = tryDispatchBuiltin.1("$", vigns7);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L127() else L126(dr2);
  L126(vigns9):
    r25 = `$`(vigns9, <sym msg>);
    goto L124(r25);
  L130():
    p5 = prom<V +>{
      paste = ldf paste;
      p4 = prom<V +>{
        vigns10 = ld vigns;
        vigns11 = force? vigns10;
        checkMissing(vigns11);
        c8 = `is.object`(vigns11);
        if c8 then L1() else L2(vigns11);
      L0(dx5):
        return dx5;
      L1():
        dr4 = tryDispatchBuiltin.1("$", vigns11);
        dc2 = getTryDispatchBuiltinDispatched(dr4);
        if dc2 then L3() else L2(dr4);
      L2(vigns13):
        r27 = `$`(vigns13, <sym msg>);
        goto L0(r27);
      L3():
        dx4 = getTryDispatchBuiltinValue(dr4);
        goto L0(dx4);
      };
      r29 = dyn paste[, collapse](p4, "\n");
      return r29;
    };
    r31 = dyn warning[, domain](p5, NA_LGL);
    check L131() else D13();
  L133():
    p6 = prom<V +>{
      vigns14 = ld vigns;
      vigns15 = force? vigns14;
      checkMissing(vigns15);
      c9 = `is.object`(vigns15);
      if c9 then L1() else L2(vigns15);
    L0(dx7):
      return dx7;
    L1():
      dr6 = tryDispatchBuiltin.1("$", vigns15);
      dc3 = getTryDispatchBuiltinDispatched(dr6);
      if dc3 then L3() else L2(dr6);
    L2(vigns17):
      r33 = `$`(vigns17, <sym names>);
      goto L0(r33);
    L3():
      dx6 = getTryDispatchBuiltinValue(dr6);
      goto L0(dx6);
    };
    r35 = dyn duplicated(p6);
    check L134() else D15();
  D11():
    deopt 58 [r26];
  D13():
    deopt 64 [r31];
  D15():
    deopt 70 [r35];
  L127():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L124(dx2);
  L128():
    goto L16(r26);
  L131():
    goto L18();
  L134():
    st dups = r35;
    sym5 = ldf any;
    base5 = ldf any in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L135() else L136();
  L19(r37):
    c10 = `as.logical`(r37);
    if c10 then L139() else L20();
  L135():
    dups = ld dups;
    check L137() else D16();
  L136():
    r36 = dyn base5(<sym dups>);
    goto L19(r36);
  D16():
    deopt 74 [dups];
  L20():
    goto L21();
  L21():
    isTRUE = ldf isTRUE;
    check L147() else D24();
  L137():
    dups1 = force? dups;
    checkMissing(dups1);
    any = ldf any in base;
    r38 = dyn any(dups1);
    check L138() else D17();
  L139():
    unique = ldf unique;
    check L140() else D18();
  D17():
    deopt 77 [r38];
  D18():
    deopt 79 [];
  D24():
    deopt 97 [];
  L138():
    goto L19(r38);
  L140():
    p7 = prom<V +>{
      vigns18 = ld vigns;
      vigns19 = force? vigns18;
      checkMissing(vigns19);
      c11 = `is.object`(vigns19);
      if c11 then L2() else L3(vigns19);
    L1(dx9):
      c12 = `is.object`(dx9);
      if c12 then L5() else L6(dx9);
    L2():
      dr8 = tryDispatchBuiltin.1("$", vigns19);
      dc4 = getTryDispatchBuiltinDispatched(dr8);
      if dc4 then L4() else L3(dr8);
    L3(vigns21):
      r39 = `$`(vigns21, <sym names>);
      goto L1(r39);
    L0(dx13):
      return dx13;
    L4():
      dx8 = getTryDispatchBuiltinValue(dr8);
      goto L1(dx8);
    L5():
      dr10 = tryDispatchBuiltin.1("[", dx9);
      dc5 = getTryDispatchBuiltinDispatched(dr10);
      if dc5 then L7() else L6(dr10);
    L6(dx11):
      dups2 = ld dups;
      dups3 = force? dups2;
      __ = ldf `[` in base;
      r40 = dyn __(dx11, dups3);
      goto L0(r40);
    L7():
      dx12 = getTryDispatchBuiltinValue(dr10);
      goto L0(dx12);
    };
    r42 = dyn unique(p7);
    check L141() else D19();
  L147():
    p19 = prom<V +>{
      skip1 = ld skip;
      skip2 = force? skip1;
      checkMissing(skip2);
      return skip2;
    };
    r68 = dyn isTRUE(p19);
    check L148() else D25();
  D19():
    deopt 81 [r42];
  D25():
    deopt 99 [r68];
  L141():
    st names = r42;
    sort = ldf sort;
    check L142() else D20();
  L148():
    c16 = `as.logical`(r68);
    if c16 then L149() else L22();
  D20():
    deopt 84 [];
  L22():
    sym6 = ldf `is.null`;
    base6 = ldf `is.null` in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L153() else L154();
  L23():
    Sys_unsetenv = ldf `Sys.unsetenv`;
    check L164() else D33();
  L142():
    p11 = prom<V +>{
      basename = ldf basename;
      p10 = prom<V +>{
        vigns22 = ld vigns;
        vigns23 = force? vigns22;
        checkMissing(vigns23);
        c13 = `is.object`(vigns23);
        if c13 then L2() else L3(vigns23);
      L1(dx15):
        c14 = `is.object`(dx15);
        if c14 then L5() else L6(dx15);
      L2():
        dr12 = tryDispatchBuiltin.1("$", vigns23);
        dc6 = getTryDispatchBuiltinDispatched(dr12);
        if dc6 then L4() else L3(dr12);
      L3(vigns25):
        r43 = `$`(vigns25, <sym docs>);
        goto L1(r43);
      L0(dx19):
        return dx19;
      L4():
        dx14 = getTryDispatchBuiltinValue(dr12);
        goto L1(dx14);
      L5():
        dr14 = tryDispatchBuiltin.1("[", dx15);
        dc7 = getTryDispatchBuiltinDispatched(dr14);
        if dc7 then L7() else L6(dr14);
      L6(dx17):
        _in_ = ldf `%in%`;
        p8 = prom<V +>{
          vigns26 = ld vigns;
          vigns27 = force? vigns26;
          checkMissing(vigns27);
          c15 = `is.object`(vigns27);
          if c15 then L1() else L2(vigns27);
        L0(dx21):
          return dx21;
        L1():
          dr16 = tryDispatchBuiltin.1("$", vigns27);
          dc8 = getTryDispatchBuiltinDispatched(dr16);
          if dc8 then L3() else L2(dr16);
        L2(vigns29):
          r44 = `$`(vigns29, <sym names>);
          goto L0(r44);
        L3():
          dx20 = getTryDispatchBuiltinValue(dr16);
          goto L0(dx20);
        };
        p9 = prom<V +>{
          names = ld names;
          names1 = force? names;
          checkMissing(names1);
          return names1;
        };
        r47 = dyn _in_(p8, p9);
        __1 = ldf `[` in base;
        r48 = dyn __1(dx17, r47);
        goto L0(r48);
      L7():
        dx18 = getTryDispatchBuiltinValue(dr14);
        goto L0(dx18);
      };
      r50 = dyn basename(p10);
      return r50;
    };
    r52 = dyn sort(p11);
    check L143() else D21();
  L149():
    rownames = ldf rownames;
    check L150() else D26();
  D21():
    deopt 86 [r52];
  D26():
    deopt 101 [];
  D33():
    deopt 124 [];
  L24(r76):
    r77 = `!`(r76);
    c18 = `as.logical`(r77);
    if c18 then L156() else L25();
  L143():
    st docs = r52;
    stop = ldf stop;
    check L144() else D22();
  L150():
    p20 = prom<V +>{
      __2 = ldf `::`;
      r69 = dyn __2("utils", "installed.packages");
      checkFun.0(r69);
      r70 = r69 as cls;
      r71 = dyn r70();
      return r71;
    };
    r73 = dyn rownames(p20);
    check L151() else D27();
  L153():
    skip3 = ld skip;
    check L155() else D28();
  L154():
    r75 = dyn base6(<sym skip>);
    goto L24(r75);
  L164():
    r85 = dyn Sys_unsetenv("SWEAVE_STYLEPATH_DEFAULT");
    check L165() else D34();
  D22():
    deopt 89 [];
  D27():
    deopt 103 [r73];
  D28():
    deopt 106 [skip3];
  D34():
    deopt 126 [r85];
  L25():
    goto L23();
  L144():
    p18 = prom<V +>{
      gettextf = ldf gettextf;
      p14 = prom<V +>{
        paste1 = ldf paste;
        p13 = prom<V +>{
          sQuote = ldf sQuote;
          p12 = prom<V +>{
            docs = ld docs;
            docs1 = force? docs;
            checkMissing(docs1);
            return docs1;
          };
          r54 = dyn sQuote(p12);
          return r54;
        };
        r56 = dyn paste1[, collapse](p13, ", ");
        return r56;
      };
      p17 = prom<V +>{
        paste2 = ldf paste;
        p16 = prom<V +>{
          sQuote1 = ldf sQuote;
          p15 = prom<V +>{
            names2 = ld names;
            names3 = force? names2;
            checkMissing(names3);
            return names3;
          };
          r59 = dyn sQuote1(p15);
          return r59;
        };
        r61 = dyn paste2[, collapse](p16, ", ");
        return r61;
      };
      r63 = dyn gettextf("Detected vignette source files (%s) with shared names (%s) and therefore risking overwriting each other's output files", p14, p17);
      return r63;
    };
    r65 = dyn stop[, domain](p18, NA_LGL);
    check L145() else D23();
  L151():
    st installed = r73;
    goto L23();
  L155():
    skip4 = force? skip3;
    checkMissing(skip4);
    c17 = `==`(skip4, NULL);
    goto L24(c17);
  L156():
    isFALSE = ldf isFALSE;
    check L157() else D29();
  L165():
    options = ldf options;
    check L166() else D35();
  D23():
    deopt 93 [r65];
  D29():
    deopt 111 [];
  D35():
    deopt 128 [];
  L145():
    goto L21();
  L157():
    p21 = prom<V +>{
      skip5 = ld skip;
      skip6 = force? skip5;
      checkMissing(skip6);
      return skip6;
    };
    r79 = dyn isFALSE(p21);
    check L158() else D30();
  L166():
    r86 = dyn options[warn](1.0);
    check L167() else D36();
  D30():
    deopt 113 [r79];
  D36():
    deopt 131 [r86];
  L158():
    c19 = `as.logical`(r79);
    if c19 then L159() else L26();
  L167():
    st op = r86;
    getwd = ldf getwd;
    check L168() else D37();
  D37():
    deopt 134 [];
  L26():
    stopifnot = ldf stopifnot;
    check L161() else D31();
  L27(r80):
    goto L23();
  L159():
    st skip = NULL;
    goto L27(NULL);
  L168():
    r87 = dyn getwd();
    check L169() else D38();
  D31():
    deopt 118 [];
  D38():
    deopt 135 [r87];
  L161():
    p22 = prom<V +>{
      sym7 = ldf `is.character`;
      base7 = ldf `is.character` in base;
      guard7 = `==`.4(sym7, base7);
      if guard7 then L1() else L2();
    L0(r82):
      return r82;
    L1():
      skip7 = ld skip;
      skip8 = force? skip7;
      checkMissing(skip8);
      c20 = `is.character`(skip8);
      goto L0(c20);
    L2():
      r81 = dyn base7(<sym skip>);
      goto L0(r81);
    };
    r84 = dyn stopifnot(p22);
    check L162() else D32();
  L169():
    st wd = r87;
    sym8 = ldf `is.null`;
    base8 = ldf `is.null` in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L170() else L171();
  D32():
    deopt 120 [r84];
  L28(r89):
    c22 = `as.logical`(r89);
    if c22 then L173() else L29();
  L162():
    goto L27(r84);
  L170():
    wd = ld wd;
    check L172() else D39();
  L171():
    r88 = dyn base8(<sym wd>);
    goto L28(r88);
  D39():
    deopt 138 [wd];
  L29():
    goto L30();
  L30():
    sym9 = ldf `on.exit`;
    base9 = ldf `on.exit` in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L177() else L178();
  L172():
    wd1 = force? wd;
    checkMissing(wd1);
    c21 = `==`(wd1, NULL);
    goto L28(c21);
  L173():
    stop1 = ldf stop;
    check L174() else D40();
  D40():
    deopt 142 [];
  L31():
    setwd = ldf setwd;
    check L179() else D42();
  L174():
    r90 = dyn stop1("current working directory cannot be ascertained");
    check L175() else D41();
  L177():
    on_exit = ldf `on.exit` in base;
    r94 = dyn on_exit(<lang {
      setwd(wd);
      options(op)
    }>);
    goto L31();
  L178():
    r92 = dyn base9(<lang {
      setwd(wd);
      options(op)
    }>);
    goto L31();
  D41():
    deopt 144 [r90];
  D42():
    deopt 151 [];
  L175():
    goto L30();
  L179():
    p23 = prom<V +>{
      vigns30 = ld vigns;
      vigns31 = force? vigns30;
      checkMissing(vigns31);
      c23 = `is.object`(vigns31);
      if c23 then L1() else L2(vigns31);
    L0(dx23):
      return dx23;
    L1():
      dr18 = tryDispatchBuiltin.1("$", vigns31);
      dc9 = getTryDispatchBuiltinDispatched(dr18);
      if dc9 then L3() else L2(dr18);
    L2(vigns33):
      r95 = `$`(vigns33, <sym dir>);
      goto L0(r95);
    L3():
      dx22 = getTryDispatchBuiltinValue(dr18);
      goto L0(dx22);
    };
    r97 = dyn setwd(p23);
    check L180() else D43();
  D43():
    deopt 153 [r97];
  L180():
    list_files = ldf `list.files`;
    check L181() else D44();
  D44():
    deopt 155 [];
  L181():
    r98 = dyn list_files[`all.files`](TRUE);
    check L182() else D45();
  D45():
    deopt 158 [r98];
  L182():
    st origfiles = r98;
    _in_1 = ldf `%in%`;
    check L183() else D46();
  D46():
    deopt 161 [];
  L183():
    p24 = prom<V +>{
      origfiles = ld origfiles;
      origfiles1 = force? origfiles;
      checkMissing(origfiles1);
      return origfiles1;
    };
    r100 = dyn _in_1("Makefile", p24);
    check L184() else D47();
  D47():
    deopt 164 [r100];
  L184():
    st `have.makefile` = r100;
    file_create = ldf `file.create`;
    check L185() else D48();
  D48():
    deopt 167 [];
  L185():
    r101 = dyn file_create(".build.timestamp");
    check L186() else D49();
  D49():
    deopt 169 [r101];
  L186():
    character = ldf character;
    check L187() else D50();
  D50():
    deopt 171 [];
  L187():
    r102 = dyn character();
    check L188() else D51();
  D51():
    deopt 172 [r102];
  L188():
    st outputs = r102;
    sym10 = ldf list;
    base10 = ldf list in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L189() else L190();
  L32(r104):
    st sourceList = r104;
    getwd1 = ldf getwd;
    check L192() else D53();
  L189():
    list = ldf list in base;
    r105 = dyn list();
    check L191() else D52();
  L190():
    r103 = dyn base10();
    goto L32(r103);
  D52():
    deopt 177 [r105];
  D53():
    deopt 180 [];
  L191():
    goto L32(r105);
  L192():
    r106 = dyn getwd1();
    check L193() else D54();
  D54():
    deopt 181 [r106];
  L193():
    st startdir = r106;
    character1 = ldf character;
    check L194() else D55();
  D55():
    deopt 184 [];
  L194():
    r107 = dyn character1();
    check L195() else D56();
  D56():
    deopt 185 [r107];
  L195():
    st skipped = r107;
    character2 = ldf character;
    check L196() else D57();
  D57():
    deopt 188 [];
  L196():
    r108 = dyn character2();
    check L197() else D58();
  D58():
    deopt 189 [r108];
  L197():
    st fails = r108;
    sym11 = ldf seq_along;
    base11 = ldf seq_along in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L198() else L199();
  L33(r110):
    s = toForSeq(r110);
    l = length(s);
    i = 0;
    goto L34(i);
  L198():
    vigns34 = ld vigns;
    check L200() else D59();
  L199():
    r109 = dyn base11(<lang `$`(vigns, docs)>);
    goto L33(r109);
  D59():
    deopt 192 [vigns34];
  L34(i1):
    i2 = `+`.1(i1, 1);
    c25 = `<`.1(l, i2);
    if c25 then L205() else L62();
  L200():
    vigns35 = force? vigns34;
    checkMissing(vigns35);
    c24 = `is.object`(vigns35);
    if c24 then L202() else L203(vigns35);
  L62():
    x = `[[`(s, i2, NULL, TRUE);
    st i = x;
    st thisOK = TRUE;
    basename1 = ldf basename;
    check L206() else D60();
  L201(dx25):
    r112 = seq_along(dx25);
    goto L33(r112);
  L202():
    dr20 = tryDispatchBuiltin.1("$", vigns35);
    dc10 = getTryDispatchBuiltinDispatched(dr20);
    if dc10 then L204() else L203(dr20);
  L203(vigns37):
    r111 = `$`(vigns37, <sym docs>);
    goto L201(r111);
  L205():
    have_makefile4 = ld `have.makefile`;
    check L340() else D145();
  D60():
    deopt 200 [i2];
  D145():
    deopt 469 [have_makefile4];
  L204():
    dx24 = getTryDispatchBuiltinValue(dr20);
    goto L201(dx24);
  L206():
    p25 = prom<V +>{
      vigns38 = ld vigns;
      vigns39 = force? vigns38;
      checkMissing(vigns39);
      c26 = `is.object`(vigns39);
      if c26 then L2() else L3(vigns39);
    L1(dx27):
      c27 = `is.object`(dx27);
      if c27 then L5() else L6(dx27);
    L2():
      dr22 = tryDispatchBuiltin.1("$", vigns39);
      dc11 = getTryDispatchBuiltinDispatched(dr22);
      if dc11 then L4() else L3(dr22);
    L3(vigns41):
      r113 = `$`(vigns41, <sym docs>);
      goto L1(r113);
    L0(dx31):
      return dx31;
    L4():
      dx26 = getTryDispatchBuiltinValue(dr22);
      goto L1(dx26);
    L5():
      dr24 = tryDispatchBuiltin.1("[", dx27);
      dc12 = getTryDispatchBuiltinDispatched(dr24);
      if dc12 then L7() else L6(dr24);
    L6(dx29):
      i5 = ld i;
      i6 = force? i5;
      __3 = ldf `[` in base;
      r114 = dyn __3(dx29, i6);
      goto L0(r114);
    L7():
      dx30 = getTryDispatchBuiltinValue(dr24);
      goto L0(dx30);
    };
    r116 = dyn basename1(p25);
    check L207() else D61();
  L340():
    have_makefile5 = force? have_makefile4;
    checkMissing(have_makefile5);
    c70 = `as.logical`(have_makefile5);
    if c70 then L341() else L63();
  D61():
    deopt 202 [i2, r116];
  L63():
    __9 = ldf `::`;
    check L382() else D167();
  L75():
    file_exists = ldf `file.exists`;
    check L410() else D188();
  L207():
    st file = r116;
    vigns42 = ld vigns;
    check L208() else D62();
  L341():
    _Platform = ld `.Platform`;
    check L342() else D146();
  D62():
    deopt 204 [i2, vigns42];
  D146():
    deopt 471 [_Platform];
  D167():
    deopt 545 [];
  D188():
    deopt 605 [];
  L208():
    vigns43 = force? vigns42;
    checkMissing(vigns43);
    c28 = `is.object`(vigns43);
    if c28 then L210() else L211(i2, vigns43);
  L342():
    _Platform1 = force? _Platform;
    checkMissing(_Platform1);
    c71 = `is.object`(_Platform1);
    if c71 then L344() else L345(_Platform1);
  L382():
    r329 = dyn __9("grDevices", "graphics.off");
    check L383() else D168();
  L410():
    r358 = dyn file_exists(".build.timestamp");
    check L411() else D189();
  D168():
    deopt 548 [r329];
  D189():
    deopt 607 [r358];
  L209(i10, dx33):
    c29 = `is.object`(dx33);
    if c29 then L213() else L214(i10, dx33);
  L210():
    dr26 = tryDispatchBuiltin.1("$", vigns43);
    dc13 = getTryDispatchBuiltinDispatched(dr26);
    if dc13 then L212() else L211(i2, dr26);
  L211(i8, vigns45):
    r117 = `$`(vigns45, <sym names>);
    goto L209(i8, r117);
  L343(dx69):
    r299 = `==`(dx69, "windows");
    st WINDOWS = r299;
    WINDOWS = ld WINDOWS;
    check L347() else D147();
  L344():
    dr54 = tryDispatchBuiltin.1("$", _Platform1);
    dc27 = getTryDispatchBuiltinDispatched(dr54);
    if dc27 then L346() else L345(dr54);
  L345(_Platform3):
    r298 = `$`(_Platform3, <sym OS.type>);
    goto L343(r298);
  L383():
    checkFun.0(r329);
    r330 = r329 as cls;
    r331 = dyn r330();
    check L384() else D169();
  L411():
    c90 = `as.logical`(r358);
    if c90 then L412() else L79();
  D147():
    deopt 477 [WINDOWS];
  D169():
    deopt 550 [r331];
  L35(i14, dx37):
    st name = dx37;
    isTRUE1 = ldf isTRUE;
    check L217() else D64();
  L79():
    goto L80();
  L80():
    sym23 = ldf length;
    base23 = ldf length in base;
    guard23 = `==`.4(sym23, base23);
    if guard23 then L416() else L417();
  L212():
    dx32 = getTryDispatchBuiltinValue(dr26);
    goto L209(i2, dx32);
  L213():
    dr28 = tryDispatchBuiltin.1("[", dx33);
    dc14 = getTryDispatchBuiltinDispatched(dr28);
    if dc14 then L215() else L214(i10, dr28);
  L214(i12, dx35):
    i15 = ld i;
    check L216() else D63();
  L346():
    dx68 = getTryDispatchBuiltinValue(dr54);
    goto L343(dx68);
  L347():
    WINDOWS1 = force? WINDOWS;
    checkMissing(WINDOWS1);
    c72 = `as.logical`(WINDOWS1);
    if c72 then L348() else L64();
  L384():
    sym21 = ldf c;
    base21 = ldf c in base;
    guard21 = `==`.4(sym21, base21);
    if guard21 then L385() else L386();
  L412():
    file_remove1 = ldf `file.remove`;
    check L413() else D190();
  D63():
    deopt 207 [i12, dx35, i15];
  D64():
    deopt 212 [i14];
  D190():
    deopt 609 [];
  L64():
    goto L65();
  L65():
    Sys_getenv2 = ldf `Sys.getenv`;
    check L354() else D152();
  L76(r333):
    st keep = r333;
    clean3 = ld clean;
    check L391() else D174();
  L81(r362):
    c91 = `as.logical`(r362);
    if c91 then L420() else L82();
  L215():
    dx36 = getTryDispatchBuiltinValue(dr28);
    goto L35(i10, dx36);
  L216():
    i16 = force? i15;
    __4 = ldf `[` in base;
    r118 = dyn __4(dx35, i16);
    goto L35(i12, r118);
  L217():
    p26 = prom<V +>{
      skip9 = ld skip;
      skip10 = force? skip9;
      checkMissing(skip10);
      return skip10;
    };
    r120 = dyn isTRUE1(p26);
    check L218() else D65();
  L348():
    chartr = ldf chartr;
    check L349() else D148();
  L385():
    outputs4 = ld outputs;
    check L387() else D170();
  L386():
    r332 = dyn base21(<sym outputs>, <lang unlist(sourceList)>);
    goto L76(r332);
  L413():
    r359 = dyn file_remove1(".build.timestamp");
    check L414() else D191();
  L416():
    fails4 = ld fails;
    check L418() else D192();
  L417():
    r361 = dyn base23(<sym fails>);
    goto L81(r361);
  D65():
    deopt 214 [i14, r120];
  D148():
    deopt 480 [];
  D152():
    deopt 494 [];
  D170():
    deopt 553 [outputs4];
  D174():
    deopt 562 [clean3];
  D191():
    deopt 611 [r359];
  D192():
    deopt 616 [fails4];
  L82():
    goto L83();
  L83():
    sym25 = ldf length;
    base25 = ldf length in base;
    guard25 = `==`.4(sym25, base25);
    if guard25 then L428() else L429();
  L218():
    c30 = `as.logical`(r120);
    if c30 then L219() else L36();
  L349():
    p102 = prom<V +>{
      R_home = ldf `R.home`;
      r300 = dyn R_home();
      return r300;
    };
    r302 = dyn chartr("\\", "/", p102);
    check L350() else D149();
  L354():
    r306 = dyn Sys_getenv2("MAKE", "make");
    check L355() else D153();
  L387():
    outputs5 = force? outputs4;
    checkMissing(outputs5);
    unlist = ldf unlist;
    check L388() else D171();
  L391():
    clean4 = force? clean3;
    checkMissing(clean4);
    c86 = `as.logical`(clean4);
    if c86 then L392() else L77();
  L414():
    goto L80();
  L418():
    fails5 = force? fails4;
    checkMissing(fails5);
    length3 = ldf length in base;
    r363 = dyn length3(fails5);
    check L419() else D193();
  L420():
    message5 = ldf message;
    check L421() else D194();
  D149():
    deopt 484 [r302];
  D153():
    deopt 497 [r306];
  D171():
    deopt 556 [];
  D193():
    deopt 619 [r363];
  D194():
    deopt 621 [];
  L36():
    _in_2 = ldf `%in%`;
    check L228() else D71();
  L38(i22, r131):
    st thisSKIP = r131;
    thisSKIP = ld thisSKIP;
    check L230() else D73();
  L77():
    goto L75();
  L84(r380):
    c92 = `as.logical`(r380);
    if c92 then L85(c92) else L432();
  L219():
    vignetteInfo = ldf vignetteInfo;
    check L220() else D66();
  L350():
    st rhome = r302;
    Sys_setenv = ldf `Sys.setenv`;
    check L351() else D150();
  L355():
    st make = r306;
    sym19 = ldf nzchar;
    base19 = ldf nzchar in base;
    guard19 = `==`.4(sym19, base19);
    if guard19 then L356() else L357();
  L388():
    p108 = prom<V +>{
      sourceList = ld sourceList;
      sourceList1 = force? sourceList;
      checkMissing(sourceList1);
      return sourceList1;
    };
    r335 = dyn unlist(p108);
    check L389() else D172();
  L392():
    setdiff = ldf setdiff;
    check L393() else D175();
  L419():
    goto L81(r363);
  L421():
    p118 = prom<V +>{
      ngettext = ldf ngettext;
      p117 = prom<V +>{
        sym24 = ldf length;
        base24 = ldf length in base;
        guard24 = `==`.4(sym24, base24);
        if guard24 then L1() else L2();
      L0(r365):
        return r365;
      L1():
        fails6 = ld fails;
        fails7 = force? fails6;
        checkMissing(fails7);
        length4 = ldf length in base;
        r366 = dyn length4(fails7);
        goto L0(r366);
      L2():
        r364 = dyn base24(<sym fails>);
        goto L0(r364);
      };
      r368 = dyn ngettext(p117, "SUMMARY: processing the following file failed:", "SUMMARY: processing the following files failed:");
      return r368;
    };
    r370 = dyn message5(p118);
    check L422() else D195();
  L428():
    fails10 = ld fails;
    check L430() else D200();
  L429():
    r379 = dyn base25(<sym fails>);
    goto L84(r379);
  D66():
    deopt 216 [i14];
  D71():
    deopt 233 [i14];
  D73():
    deopt 238 [i22, thisSKIP];
  D150():
    deopt 487 [];
  D172():
    deopt 558 [r335];
  D175():
    deopt 565 [];
  D195():
    deopt 623 [r370];
  D200():
    deopt 635 [fails10];
  L66(r308):
    r310 = `!`(r308);
    c73 = `as.logical`(r310);
    if c73 then L360() else L67();
  L85(c93):
    c112 = `as.logical`(c93);
    if c112 then L450() else L89();
  L220():
    p27 = prom<V +>{
      file = ld file;
      file1 = force? file;
      checkMissing(file1);
      return file1;
    };
    r122 = dyn vignetteInfo(p27);
    check L221() else D67();
  L228():
    p30 = prom<V +>{
      name = ld name;
      name1 = force? name;
      checkMissing(name1);
      return name1;
    };
    p31 = prom<V +>{
      skip11 = ld skip;
      skip12 = force? skip11;
      checkMissing(skip12);
      return skip12;
    };
    r134 = dyn _in_2(p30, p31);
    check L229() else D72();
  L230():
    thisSKIP1 = force? thisSKIP;
    checkMissing(thisSKIP1);
    c32 = `as.logical`(thisSKIP1);
    if c32 then L231() else L39();
  L351():
    p103 = prom<V +>{
      rhome = ld rhome;
      rhome1 = force? rhome;
      checkMissing(rhome1);
      return rhome1;
    };
    r304 = dyn Sys_setenv[R_HOME](p103);
    check L352() else D151();
  L356():
    make = ld make;
    check L358() else D154();
  L357():
    r307 = dyn base19(<sym make>);
    goto L66(r307);
  L389():
    c85 = ldf c in base;
    r336 = dyn c85(outputs5, r335);
    check L390() else D173();
  L393():
    p109 = prom<V +>{
      list_files1 = ldf `list.files`;
      r337 = dyn list_files1[`all.files`, `no..`](TRUE, TRUE);
      return r337;
    };
    p110 = prom<V +>{
      keep = ld keep;
      keep1 = force? keep;
      checkMissing(keep1);
      return keep1;
    };
    r340 = dyn setdiff(p109, p110);
    check L394() else D176();
  L422():
    message6 = ldf message;
    check L423() else D196();
  L430():
    fails11 = force? fails10;
    checkMissing(fails11);
    length5 = ldf length in base;
    r381 = dyn length5(fails11);
    check L431() else D201();
  L432():
    sym26 = ldf length;
    base26 = ldf length in base;
    guard26 = `==`.4(sym26, base26);
    if guard26 then L433() else L434();
  D67():
    deopt 218 [i14, r122];
  D72():
    deopt 236 [i14, r134];
  D151():
    deopt 490 [r304];
  D154():
    deopt 501 [make];
  D173():
    deopt 560 [r336];
  D176():
    deopt 568 [r340];
  D196():
    deopt 625 [];
  D201():
    deopt 638 [r381];
  L39():
    vigns46 = ld vigns;
    check L249() else D85();
  L67():
    goto L68();
  L68():
    system = ldf system;
    check L362() else D156();
  L86(c97, r383):
    sym27 = ldf length;
    base27 = ldf length in base;
    guard27 = `==`.4(sym27, base27);
    if guard27 then L437() else L438();
  L89():
    goto L90();
  L90():
    outputs8 = ld outputs;
    check L454() else D210();
  L221():
    st vinfo = r122;
    sym12 = ldf length;
    base12 = ldf length in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L222() else L223();
  L229():
    goto L38(i14, r134);
  L231():
    isTRUE2 = ldf isTRUE;
    check L232() else D74();
  L352():
    goto L65();
  L358():
    make1 = force? make;
    checkMissing(make1);
    nzchar = ldf nzchar in base;
    r309 = dyn nzchar(make1);
    check L359() else D155();
  L360():
    st make = "make";
    goto L68();
  L390():
    goto L76(r336);
  L394():
    st f = r340;
    file_test = ldf file_test;
    check L395() else D177();
  L423():
    p121 = prom<V +>{
      paste5 = ldf paste;
      p120 = prom<V +>{
        _pretty_format3 = ldf `.pretty_format`;
        p119 = prom<V +>{
          fails8 = ld fails;
          fails9 = force? fails8;
          checkMissing(fails9);
          return fails9;
        };
        r372 = dyn _pretty_format3(p119);
        return r372;
      };
      r374 = dyn paste5[, collapse](p120, "\n");
      return r374;
    };
    r376 = dyn message6(p121);
    check L424() else D197();
  L431():
    goto L84(r381);
  L433():
    outputs6 = ld outputs;
    check L435() else D202();
  L434():
    r382 = dyn base26(<sym outputs>);
    goto L86(c92, r382);
  L450():
    st msg = "Vignette re-building failed.";
    stop3 = ldf stop;
    check L451() else D208();
  D74():
    deopt 241 [i22];
  D85():
    deopt 274 [i22, vigns46];
  D155():
    deopt 504 [r309];
  D156():
    deopt 512 [];
  D177():
    deopt 571 [];
  D197():
    deopt 627 [r376];
  D202():
    deopt 641 [c92, outputs6];
  D208():
    deopt 663 [];
  D210():
    deopt 672 [outputs8];
  L37(i21, r124):
    r130 = `>`(r124, 0.0);
    goto L38(i21, r130);
  L87(c100, r388, r389):
    sym28 = ldf length;
    base28 = ldf length in base;
    guard28 = `==`.4(sym28, base28);
    if guard28 then L445() else L446();
  L222():
    _w_o_ = ldf `%w/o%`;
    check L224() else D68();
  L223():
    r123 = dyn base12(<lang `<-`(missdeps, `%w/o%`(`$`(vinfo, depends), installed))>);
    goto L37(i14, r123);
  L232():
    p32 = prom<V +>{
      skip13 = ld skip;
      skip14 = force? skip13;
      checkMissing(skip14);
      return skip14;
    };
    r136 = dyn isTRUE2(p32);
    check L233() else D75();
  L249():
    vigns47 = force? vigns46;
    checkMissing(vigns47);
    c36 = `is.object`(vigns47);
    if c36 then L251() else L252(i22, vigns47);
  L359():
    goto L66(r309);
  L362():
    p104 = prom<V +>{
      make2 = ld make;
      make3 = force? make2;
      checkMissing(make3);
      return make3;
    };
    r313 = dyn system(p104);
    check L363() else D157();
  L395():
    p111 = prom<V +>{
      f = ld f;
      f1 = force? f;
      checkMissing(f1);
      return f1;
    };
    r342 = dyn file_test("-nt", p111, ".build.timestamp");
    check L396() else D178();
  L424():
    message7 = ldf message;
    check L425() else D198();
  L435():
    outputs7 = force? outputs6;
    checkMissing(outputs7);
    length6 = ldf length in base;
    r384 = dyn length6(outputs7);
    check L436() else D203();
  L437():
    vigns58 = ld vigns;
    check L439() else D204();
  L438():
    r387 = dyn base27(<lang `$`(vigns, docs)>);
    goto L87(c97, r383, r387);
  L451():
    p122 = prom<V +>{
      msg2 = ld msg;
      msg3 = force? msg2;
      checkMissing(msg3);
      return msg3;
    };
    r408 = dyn stop3[, domain, `call.`](p122, NA_LGL, FALSE);
    check L452() else D209();
  L454():
    outputs9 = force? outputs8;
    checkMissing(outputs9);
    l8 = ld vigns;
    c113 = `is.object`(l8);
    if c113 then L456() else L457(outputs9, l8);
  D68():
    deopt 223 [i14];
  D75():
    deopt 243 [i22, r136];
  D157():
    deopt 514 [r313];
  D178():
    deopt 575 [r342];
  D198():
    deopt 629 [];
  D203():
    deopt 644 [c92, r384];
  D204():
    deopt 646 [c97, r383, vigns58];
  D209():
    deopt 669 [r408];
  L88(c108, r401, r402, r403):
    r405 = `-`(r402, r403);
    r406 = `!=`(r401, r405);
    c109 = `as.logical`(r406);
    c110 = `||`(c108, c109);
    goto L85(c110);
  L224():
    p28 = prom<V +>{
      vinfo = ld vinfo;
      vinfo1 = force? vinfo;
      checkMissing(vinfo1);
      c31 = `is.object`(vinfo1);
      if c31 then L1() else L2(vinfo1);
    L0(dx39):
      return dx39;
    L1():
      dr30 = tryDispatchBuiltin.1("$", vinfo1);
      dc15 = getTryDispatchBuiltinDispatched(dr30);
      if dc15 then L3() else L2(dr30);
    L2(vinfo3):
      r125 = `$`(vinfo3, <sym depends>);
      goto L0(r125);
    L3():
      dx38 = getTryDispatchBuiltinValue(dr30);
      goto L0(dx38);
    };
    p29 = prom<V +>{
      installed = ld installed;
      installed1 = force? installed;
      checkMissing(installed1);
      return installed1;
    };
    r128 = dyn _w_o_(p28, p29);
    check L225() else D69();
  L233():
    c33 = `as.logical`(r136);
    if c33 then L234() else L40();
  L250(i36, dx41):
    c37 = `is.object`(dx41);
    if c37 then L254() else L255(i36, dx41);
  L251():
    dr32 = tryDispatchBuiltin.1("$", vigns47);
    dc16 = getTryDispatchBuiltinDispatched(dr32);
    if dc16 then L253() else L252(i22, dr32);
  L252(i34, vigns49):
    r160 = `$`(vigns49, <sym encodings>);
    goto L250(i34, r160);
  L363():
    st yy = r313;
    yy = ld yy;
    check L364() else D158();
  L396():
    st newer = r342;
    unlink2 = ldf unlink;
    check L397() else D179();
  L425():
    r377 = dyn message7();
    check L426() else D199();
  L436():
    goto L86(c92, r384);
  L439():
    vigns59 = force? vigns58;
    checkMissing(vigns59);
    c101 = `is.object`(vigns59);
    if c101 then L441() else L442(c97, r383, vigns59);
  L445():
    skipped2 = ld skipped;
    check L447() else D206();
  L446():
    r400 = dyn base28(<sym skipped>);
    goto L88(c100, r388, r389, r400);
  L452():
    goto L90();
  L455(dx77):
    st vigns = dx77;
    sourceList2 = ld sourceList;
    check L459() else D211();
  L456():
    dr62 = tryDispatchBuiltin.0("$<-", l8, outputs9);
    dc31 = getTryDispatchBuiltinDispatched(dr62);
    if dc31 then L458() else L457(outputs9, dr62);
  L457(outputs11, l10):
    r410 = `$<-`(l10, <sym outputs>, outputs9);
    goto L455(r410);
  D69():
    deopt 226 [i14, r128];
  D158():
    deopt 516 [yy];
  D179():
    deopt 578 [];
  D199():
    deopt 630 [r377];
  D206():
    deopt 652 [c100, r388, r389, skipped2];
  D211():
    deopt 677 [sourceList2];
  L40():
    gettextf1 = ldf gettextf;
    check L238() else D78();
  L41(i27, r144):
    st msg = r144;
    message = ldf message;
    check L240() else D80();
  L44(i40, dx45):
    st enc = dx45;
    enc = ld enc;
    check L258() else D87();
  L225():
    st missdeps = r128;
    length2 = ldf length in base;
    r129 = dyn length2(r128);
    check L226() else D70();
  L234():
    _pretty_format2 = ldf `.pretty_format2`;
    check L235() else D76();
  L253():
    dx40 = getTryDispatchBuiltinValue(dr32);
    goto L250(i22, dx40);
  L254():
    dr34 = tryDispatchBuiltin.1("[", dx41);
    dc17 = getTryDispatchBuiltinDispatched(dr34);
    if dc17 then L256() else L255(i36, dr34);
  L255(i38, dx43):
    i41 = ld i;
    check L257() else D86();
  L364():
    yy1 = force? yy;
    checkMissing(yy1);
    r314 = `>`(yy1, 0.0);
    c74 = `as.logical`(r314);
    if c74 then L365() else L69();
  L397():
    p112 = prom<V +>{
      f2 = ld f;
      f3 = force? f2;
      checkMissing(f3);
      c87 = `is.object`(f3);
      if c87 then L1() else L2(f3);
    L0(dx71):
      return dx71;
    L1():
      dr56 = tryDispatchBuiltin.1("[", f3);
      dc28 = getTryDispatchBuiltinDispatched(dr56);
      if dc28 then L3() else L2(dr56);
    L2(f5):
      newer = ld newer;
      newer1 = force? newer;
      __10 = ldf `[` in base;
      r343 = dyn __10(f5, newer1);
      goto L0(r343);
    L3():
      dx70 = getTryDispatchBuiltinValue(dr56);
      goto L0(dx70);
    };
    r345 = dyn unlink2[, recursive](p112, TRUE);
    check L398() else D180();
  L426():
    goto L83();
  L440(c105, r393, dx75):
    length7 = ldf length in base;
    r395 = dyn length7(dx75);
    check L444() else D205();
  L441():
    dr60 = tryDispatchBuiltin.1("$", vigns59);
    dc30 = getTryDispatchBuiltinDispatched(dr60);
    if dc30 then L443() else L442(c97, r383, dr60);
  L442(c103, r391, vigns61):
    r394 = `$`(vigns61, <sym docs>);
    goto L440(c103, r391, r394);
  L447():
    skipped3 = force? skipped2;
    checkMissing(skipped3);
    length8 = ldf length in base;
    r404 = dyn length8(skipped3);
    check L448() else D207();
  L458():
    dx76 = getTryDispatchBuiltinValue(dr62);
    goto L455(dx76);
  L459():
    sourceList3 = force? sourceList2;
    checkMissing(sourceList3);
    l11 = ld vigns;
    c114 = `is.object`(l11);
    if c114 then L461() else L462(sourceList3, l11);
  D70():
    deopt 229 [i14, r129];
  D76():
    deopt 245 [i22];
  D78():
    deopt 250 [i22];
  D80():
    deopt 256 [i27];
  D86():
    deopt 277 [i38, dx43, i41];
  D87():
    deopt 281 [i40, enc];
  D180():
    deopt 582 [r345];
  D205():
    deopt 650 [c105, r393, r395];
  D207():
    deopt 655 [c100, r388, r389, r404];
  L69():
    goto L70();
  L70():
    clean1 = ld clean;
    check L369() else D161();
  L226():
    goto L37(i14, r129);
  L235():
    p35 = prom<V +>{
      sprintf = ldf sprintf;
      p34 = prom<V +>{
        sQuote2 = ldf sQuote;
        p33 = prom<V +>{
          file2 = ld file;
          file3 = force? file2;
          checkMissing(file3);
          return file3;
        };
        r138 = dyn sQuote2(p33);
        return r138;
      };
      r140 = dyn sprintf("Note: skipping %s due to unavailable dependencies:", p34);
      return r140;
    };
    p36 = prom<V +>{
      missdeps = ld missdeps;
      missdeps1 = force? missdeps;
      checkMissing(missdeps1);
      return missdeps1;
    };
    r143 = dyn _pretty_format2(p35, p36);
    check L236() else D77();
  L238():
    p38 = prom<V +>{
      sQuote3 = ldf sQuote;
      p37 = prom<V +>{
        file4 = ld file;
        file5 = force? file4;
        checkMissing(file5);
        return file5;
      };
      r146 = dyn sQuote3(p37);
      return r146;
    };
    r148 = dyn gettextf1("Note: skipping %s", p38);
    check L239() else D79();
  L240():
    p40 = prom<V +>{
      paste3 = ldf paste0;
      p39 = prom<V +>{
        sym13 = ldf c;
        base13 = ldf c in base;
        guard13 = `==`.4(sym13, base13);
        if guard13 then L1() else L2();
      L0(r150):
        return r150;
      L1():
        msg = ld msg;
        msg1 = force? msg;
        checkMissing(msg1);
        c34 = ldf c in base;
        r151 = dyn c34(msg1, "");
        goto L0(r151);
      L2():
        r149 = dyn base13(<sym msg>, "");
        goto L0(r149);
      };
      r153 = dyn paste3[, collapse](p39, "\n");
      return r153;
    };
    r155 = dyn message[, domain](p40, NA_LGL);
    check L241() else D81();
  L256():
    dx44 = getTryDispatchBuiltinValue(dr34);
    goto L44(i36, dx44);
  L257():
    i42 = force? i41;
    __5 = ldf `[` in base;
    r161 = dyn __5(dx43, i42);
    goto L44(i38, r161);
  L258():
    enc1 = force? enc;
    checkMissing(enc1);
    r162 = `==`(enc1, "non-ASCII");
    c38 = `as.logical`(r162);
    if c38 then L259() else L45();
  L365():
    stop2 = ldf stop;
    check L366() else D159();
  L398():
    setdiff1 = ldf setdiff;
    check L399() else D181();
  L443():
    dx74 = getTryDispatchBuiltinValue(dr60);
    goto L440(c97, r383, dx74);
  L444():
    goto L87(c105, r393, r395);
  L448():
    goto L88(c100, r388, r389, r404);
  L460(dx79):
    st vigns = dx79;
    sym29 = ldf invisible;
    base29 = ldf invisible in base;
    guard29 = `==`.4(sym29, base29);
    if guard29 then L464() else L465();
  L461():
    dr64 = tryDispatchBuiltin.0("$<-", l11, sourceList3);
    dc32 = getTryDispatchBuiltinDispatched(dr64);
    if dc32 then L463() else L462(sourceList3, dr64);
  L462(sourceList5, l13):
    r411 = `$<-`(l13, <sym sources>, sourceList3);
    goto L460(r411);
  D77():
    deopt 248 [i22, r143];
  D79():
    deopt 253 [i22, r148];
  D81():
    deopt 260 [i27, r155];
  D159():
    deopt 521 [];
  D161():
    deopt 526 [clean1];
  D181():
    deopt 584 [];
  L45():
    vignetteEngine = ldf vignetteEngine;
    check L269() else D93();
  L91(r413):
    popenv;
    return r413;
  L236():
    goto L41(i22, r143);
  L239():
    goto L41(i22, r148);
  L241():
    sym14 = ldf c;
    base14 = ldf c in base;
    guard14 = `==`.4(sym14, base14);
    if guard14 then L242() else L243();
  L259():
    message1 = ldf message;
    check L260() else D88();
  L366():
    r315 = dyn stop2("running 'make' failed");
    check L367() else D160();
  L369():
    clean2 = force? clean1;
    checkMissing(clean2);
    c75 = `as.logical`(clean2);
    if c75 then L370() else L71(c75);
  L399():
    p113 = prom<V +>{
      list_files2 = ldf `list.files`;
      r346 = dyn list_files2[`all.files`, `no..`](TRUE, TRUE);
      return r346;
    };
    p114 = prom<V +>{
      sym22 = ldf c;
      base22 = ldf c in base;
      guard22 = `==`.4(sym22, base22);
      if guard22 then L1() else L2();
    L0(r349):
      return r349;
    L1():
      keep2 = ld keep;
      keep3 = force? keep2;
      checkMissing(keep3);
      origfiles2 = ld origfiles;
      origfiles3 = force? origfiles2;
      checkMissing(origfiles3);
      c88 = ldf c in base;
      r350 = dyn c88(keep3, origfiles3);
      goto L0(r350);
    L2():
      r348 = dyn base22(<sym keep>, <sym origfiles>);
      goto L0(r348);
    };
    r352 = dyn setdiff1(p113, p114);
    check L400() else D182();
  L463():
    dx78 = getTryDispatchBuiltinValue(dr64);
    goto L460(dx78);
  L464():
    vigns62 = ld vigns;
    check L466() else D212();
  L465():
    r412 = dyn base29(<sym vigns>);
    goto L91(r412);
  D88():
    deopt 286 [i40];
  D93():
    deopt 303 [i40];
  D160():
    deopt 523 [r315];
  D182():
    deopt 587 [r352];
  D212():
    deopt 684 [vigns62];
  L42(i30, r157):
    st skipped = r157;
    goto L34(i30);
  L71(c77):
    c84 = `as.logical`(c77);
    if c84 then L377() else L73();
  L242():
    skipped = ld skipped;
    check L244() else D82();
  L243():
    r156 = dyn base14(<sym skipped>, <sym file>);
    goto L42(i27, r156);
  L260():
    p42 = prom<V +>{
      gettextf2 = ldf gettextf;
      p41 = prom<V +>{
        file8 = ld file;
        file9 = force? file8;
        checkMissing(file9);
        return file9;
      };
      r164 = dyn gettextf2("Error: Vignette '%s' is non-ASCII but has no declared encoding", p41);
      return r164;
    };
    r166 = dyn message1(p42);
    check L261() else D89();
  L269():
    p43 = prom<V +>{
      vigns50 = ld vigns;
      vigns51 = force? vigns50;
      checkMissing(vigns51);
      c40 = `is.object`(vigns51);
      if c40 then L2() else L3(vigns51);
    L1(dx47):
      c41 = `is.object`(dx47);
      if c41 then L5() else L6(dx47);
    L2():
      dr36 = tryDispatchBuiltin.1("$", vigns51);
      dc18 = getTryDispatchBuiltinDispatched(dr36);
      if dc18 then L4() else L3(dr36);
    L3(vigns53):
      r171 = `$`(vigns53, <sym engines>);
      goto L1(r171);
    L0(dx51):
      return dx51;
    L4():
      dx46 = getTryDispatchBuiltinValue(dr36);
      goto L1(dx46);
    L5():
      dr38 = tryDispatchBuiltin.1("[", dx47);
      dc19 = getTryDispatchBuiltinDispatched(dr38);
      if dc19 then L7() else L6(dr38);
    L6(dx49):
      i50 = ld i;
      i51 = force? i50;
      __6 = ldf `[` in base;
      r172 = dyn __6(dx49, i51);
      goto L0(r172);
    L7():
      dx50 = getTryDispatchBuiltinValue(dr38);
      goto L0(dx50);
    };
    r174 = dyn vignetteEngine(p43);
    check L270() else D94();
  L367():
    goto L70();
  L370():
    sym20 = ldf any;
    base20 = ldf any in base;
    guard20 = `==`.4(sym20, base20);
    if guard20 then L371() else L372();
  L400():
    st f = r352;
    f6 = ld f;
    check L401() else D183();
  L466():
    vigns63 = force? vigns62;
    checkMissing(vigns63);
    invisible1 = ldf invisible in base;
    r414 = dyn invisible1(vigns63);
    check L467() else D213();
  D82():
    deopt 263 [i27, skipped];
  D89():
    deopt 288 [i40, r166];
  D94():
    deopt 305 [i40, r174];
  D183():
    deopt 589 [f6];
  D213():
    deopt 687 [r414];
  L72(c80, r318):
    c81 = `as.logical`(r318);
    c82 = `&&`(c80, c81);
    goto L71(c82);
  L73():
    goto L74(NULL);
  L74(r327):
    goto L75();
  L244():
    skipped1 = force? skipped;
    checkMissing(skipped1);
    file6 = ld file;
    check L245() else D83();
  L261():
    sym15 = ldf c;
    base15 = ldf c in base;
    guard15 = `==`.4(sym15, base15);
    if guard15 then L262() else L263();
  L270():
    st engine = r174;
    separate2 = ld separate;
    check L271() else D95();
  L371():
    startsWith = ldf startsWith;
    check L373() else D162();
  L372():
    r317 = dyn base20(<lang startsWith(readLines("Makefile", warn=FALSE), "clean:")>);
    goto L72(c75, r317);
  L377():
    system1 = ldf system;
    check L378() else D165();
  L401():
    f7 = force? f6;
    checkMissing(f7);
    c89 = `is.object`(f7);
    if c89 then L402() else L403(f7);
  L467():
    goto L91(r414);
  D83():
    deopt 265 [i27, file6];
  D95():
    deopt 307 [i40, separate2];
  D162():
    deopt 531 [c75];
  D165():
    deopt 539 [];
  L46(i47, r168):
    st fails = r168;
    goto L34(i47);
  L78(dx73):
    st f = dx73;
    file_remove = ldf `file.remove`;
    check L407() else D186();
  L245():
    file7 = force? file6;
    checkMissing(file7);
    c35 = ldf c in base;
    r158 = dyn c35(skipped1, file7);
    check L246() else D84();
  L262():
    fails = ld fails;
    check L264() else D90();
  L263():
    r167 = dyn base15(<sym fails>, <sym file>);
    goto L46(i40, r167);
  L271():
    separate3 = force? separate2;
    checkMissing(separate3);
    c42 = `as.logical`(separate3);
    if c42 then L272() else L48();
  L373():
    p105 = prom<V +>{
      readLines2 = ldf readLines;
      r319 = dyn readLines2[, warn]("Makefile", FALSE);
      return r319;
    };
    r321 = dyn startsWith(p105, "clean:");
    check L374() else D163();
  L378():
    p107 = prom<V +>{
      paste4 = ldf paste;
      p106 = prom<V +>{
        make4 = ld make;
        make5 = force? make4;
        checkMissing(make5);
        return make5;
      };
      r324 = dyn paste4(p106, "clean");
      return r324;
    };
    r326 = dyn system1(p107);
    check L379() else D166();
  L402():
    dr58 = tryDispatchBuiltin.1("[", f7);
    dc29 = getTryDispatchBuiltinDispatched(dr58);
    if dc29 then L404() else L403(dr58);
  L403(f9):
    file_test1 = ldf file_test;
    check L405() else D184();
  D84():
    deopt 268 [i27, r158];
  D90():
    deopt 291 [i40, fails];
  D163():
    deopt 534 [c75, r321];
  D166():
    deopt 541 [r326];
  D184():
    deopt 592 [f9];
  D186():
    deopt 599 [];
  L48():
    message2 = ldf message;
    check L313() else D129();
  L53(i63):
    tangle1 = ld tangle;
    check L317() else D133();
  L246():
    goto L42(i27, r158);
  L264():
    fails1 = force? fails;
    checkMissing(fails1);
    file10 = ld file;
    check L265() else D91();
  L272():
    gsub = ldf gsub;
    check L273() else D96();
  L374():
    any1 = ldf any in base;
    r322 = dyn any1(r321);
    check L375() else D164();
  L379():
    goto L74(r326);
  L404():
    dx72 = getTryDispatchBuiltinValue(dr58);
    goto L78(dx72);
  L405():
    p115 = prom<V +>{
      f10 = ld f;
      f11 = force? f10;
      checkMissing(f11);
      return f11;
    };
    r354 = dyn file_test1("-f", p115);
    check L406() else D185();
  L407():
    p116 = prom<V +>{
      f12 = ld f;
      f13 = force? f12;
      checkMissing(f13);
      return f13;
    };
    r357 = dyn file_remove(p116);
    check L408() else D187();
  D91():
    deopt 293 [i40, file10];
  D96():
    deopt 310 [i40];
  D129():
    deopt 420 [i40];
  D133():
    deopt 429 [i63, tangle1];
  D164():
    deopt 536 [c75, r322];
  D185():
    deopt 595 [f9, r354];
  D187():
    deopt 601 [r357];
  L265():
    file11 = force? file10;
    checkMissing(file11);
    c39 = ldf c in base;
    r169 = dyn c39(fails1, file11);
    check L266() else D92();
  L273():
    p44 = prom<V +>{
      tempfile = ldf tempfile;
      r175 = dyn tempfile[fileext](".rds");
      return r175;
    };
    r177 = dyn gsub[, , , fixed]("\\", "/", p44, TRUE);
    check L274() else D97();
  L313():
    p74 = prom<V +>{
      gettextf3 = ldf gettextf;
      p72 = prom<V +>{
        sQuote4 = ldf sQuote;
        p71 = prom<V +>{
          file16 = ld file;
          file17 = force? file16;
          checkMissing(file17);
          return file17;
        };
        r233 = dyn sQuote4(p71);
        return r233;
      };
      p73 = prom<V +>{
        engine2 = ld engine;
        engine3 = force? engine2;
        checkMissing(engine3);
        c49 = `is.object`(engine3);
        if c49 then L1() else L2(engine3);
      L0(dx59):
        return dx59;
      L1():
        dr46 = tryDispatchBuiltin.1("$", engine3);
        dc23 = getTryDispatchBuiltinDispatched(dr46);
        if dc23 then L3() else L2(dr46);
      L2(engine5):
        r235 = `$`(engine5, <sym name>);
        goto L0(r235);
      L3():
        dx58 = getTryDispatchBuiltinValue(dr46);
        goto L0(dx58);
      };
      r237 = dyn gettextf3("--- re-building %s using %s", p72, p73);
      return r237;
    };
    r239 = dyn message2(p74);
    check L314() else D130();
  L317():
    tangle2 = force? tangle1;
    checkMissing(tangle2);
    c59 = `as.logical`(tangle2);
    if c59 then L318() else L54(i63, c59);
  L375():
    goto L72(c75, r322);
  L406():
    __11 = ldf `[` in base;
    r355 = dyn __11(f9, r354);
    goto L78(r355);
  L408():
    goto L75();
  D92():
    deopt 296 [i40, r169];
  D97():
    deopt 316 [i40, r177];
  D130():
    deopt 422 [i40, r239];
  L54(i65, c61):
    c65 = `as.logical`(c61);
    if c65 then L321() else L55();
  L266():
    goto L46(i40, r169);
  L274():
    st tf2 = r177;
    saveRDS = ldf saveRDS;
    check L275() else D98();
  L314():
    tryCatch = ldf tryCatch;
    check L315() else D131();
  L318():
    separate4 = ld separate;
    check L319() else D134();
  D98():
    deopt 319 [i40];
  D131():
    deopt 424 [i40];
  D134():
    deopt 431 [i63, c59, separate4];
  L55():
    goto L57(i65);
  L57(i73):
    separate6 = ld separate;
    check L330() else D139();
  L275():
    p45 = prom<V +>{
      engine = ld engine;
      engine1 = force? engine;
      checkMissing(engine1);
      return engine1;
    };
    p46 = prom<V +>{
      tf2 = ld tf2;
      tf3 = force? tf2;
      checkMissing(tf3);
      return tf3;
    };
    r180 = dyn saveRDS(p45, p46);
    check L276() else D99();
  L315():
    p86 = prom<V +>{
      engine6 = ld engine;
      engine7 = force? engine6;
      checkMissing(engine7);
      c50 = `is.object`(engine7);
      if c50 then L5() else L6(engine7);
    L4(dx61):
      checkFun.0(dx61);
      dx62 = dx61 as cls;
      p75 = prom<V +>{
        file18 = ld file;
        file19 = force? file18;
        checkMissing(file19);
        return file19;
      };
      p76 = prom<V +>{
        quiet3 = ld quiet;
        quiet4 = force? quiet3;
        checkMissing(quiet4);
        return quiet4;
      };
      p77 = prom<V +>{
        enc4 = ld enc;
        enc5 = force? enc4;
        checkMissing(enc5);
        return enc5;
      };
      dyn dx62[, quiet, encoding](p75, p76, p77);
      setwd1 = ldf setwd;
      p78 = prom<V +>{
        startdir = ld startdir;
        startdir1 = force? startdir;
        checkMissing(startdir1);
        return startdir1;
      };
      dyn setwd1(p78);
      find_vignette_product = ldf find_vignette_product;
      p79 = prom<V +>{
        name4 = ld name;
        name5 = force? name4;
        checkMissing(name5);
        return name5;
      };
      p80 = prom<V +>{
        engine10 = ld engine;
        engine11 = force? engine10;
        checkMissing(engine11);
        return engine11;
      };
      r249 = dyn find_vignette_product[, by, engine](p79, "weave", p80);
      st output = r249;
      have_makefile2 = ld `have.makefile`;
      have_makefile3 = force? have_makefile2;
      checkMissing(have_makefile3);
      r250 = `!`(have_makefile3);
      c51 = `as.logical`(r250);
      if c51 then L8() else L0(c51);
    L5():
      dr48 = tryDispatchBuiltin.1("$", engine7);
      dc24 = getTryDispatchBuiltinDispatched(dr48);
      if dc24 then L7() else L6(dr48);
    L6(engine9):
      r240 = `$`(engine9, <sym weave>);
      goto L4(r240);
    L0(c53):
      c57 = `as.logical`(c53);
      if c57 then L10() else L1();
    L7():
      dx60 = getTryDispatchBuiltinValue(dr48);
      goto L4(dx60);
    L8():
      vignette_is_tex = ldf vignette_is_tex;
      p81 = prom<V +>{
        output2 = ld output;
        output3 = force? output2;
        checkMissing(output3);
        return output3;
      };
      r252 = dyn vignette_is_tex(p81);
      c54 = `as.logical`(r252);
      c55 = `&&`(c51, c54);
      goto L0(c55);
    L1():
      goto L2();
    L2():
      sym18 = ldf c;
      base18 = ldf c in base;
      guard18 = `==`.4(sym18, base18);
      if guard18 then L12() else L13();
    L10():
      texi2pdf = ldf texi2pdf;
      p82 = prom<V +>{
        output4 = ld output;
        output5 = force? output4;
        checkMissing(output5);
        return output5;
      };
      p83 = prom<V +>{
        quiet5 = ld quiet;
        quiet6 = force? quiet5;
        checkMissing(quiet6);
        return quiet6;
      };
      dyn texi2pdf[file, clean, quiet](p82, FALSE, p83);
      find_vignette_product1 = ldf find_vignette_product;
      p84 = prom<V +>{
        name6 = ld name;
        name7 = force? name6;
        checkMissing(name7);
        return name7;
      };
      p85 = prom<V +>{
        engine12 = ld engine;
        engine13 = force? engine12;
        checkMissing(engine13);
        return engine13;
      };
      r258 = dyn find_vignette_product1[, by, engine](p84, "texi2pdf", p85);
      st output = r258;
      goto L2();
    L3(r261):
      st outputs = r261;
      invisible.0();
      return r261;
    L12():
      outputs2 = ld outputs;
      outputs3 = force? outputs2;
      checkMissing(outputs3);
      output6 = ld output;
      output7 = force? output6;
      checkMissing(output7);
      c58 = ldf c in base;
      r262 = dyn c58(outputs3, output7);
      goto L3(r262);
    L13():
      r260 = dyn base18(<sym outputs>, <sym output>);
      goto L3(r260);
    };
    p87 = prom<V +>{
      r264 = clos inner3708401697;
      return r264;
    };
    r266 = dyn tryCatch[, error](p86, p87);
    check L316() else D132();
  L319():
    separate5 = force? separate4;
    checkMissing(separate5);
    r267 = `!`(separate5);
    c62 = `as.logical`(r267);
    c63 = `&&`(c59, c62);
    goto L54(i63, c63);
  L321():
    tryCatch1 = ldf tryCatch;
    check L322() else D135();
  D99():
    deopt 322 [i40, r180];
  D132():
    deopt 428 [i40, r266];
  D135():
    deopt 436 [i65];
  D139():
    deopt 451 [i73, separate6];
  L276():
    sprintf1 = ldf sprintf;
    check L277() else D100();
  L316():
    goto L53(i40);
  L322():
    p94 = prom<V +>{
      engine14 = ld engine;
      engine15 = force? engine14;
      checkMissing(engine15);
      c66 = `is.object`(engine15);
      if c66 then L1() else L2(engine15);
    L0(dx64):
      checkFun.0(dx64);
      dx65 = dx64 as cls;
      p88 = prom<V +>{
        file20 = ld file;
        file21 = force? file20;
        checkMissing(file21);
        return file21;
      };
      p89 = prom<V +>{
        quiet7 = ld quiet;
        quiet8 = force? quiet7;
        checkMissing(quiet8);
        return quiet8;
      };
      p90 = prom<V +>{
        enc6 = ld enc;
        enc7 = force? enc6;
        checkMissing(enc7);
        return enc7;
      };
      dyn dx65[, quiet, encoding](p88, p89, p90);
      setwd2 = ldf setwd;
      p91 = prom<V +>{
        startdir2 = ld startdir;
        startdir3 = force? startdir2;
        checkMissing(startdir3);
        return startdir3;
      };
      dyn setwd2(p91);
      find_vignette_product2 = ldf find_vignette_product;
      p92 = prom<V +>{
        name8 = ld name;
        name9 = force? name8;
        checkMissing(name9);
        return name9;
      };
      p93 = prom<V +>{
        engine18 = ld engine;
        engine19 = force? engine18;
        checkMissing(engine19);
        return engine19;
      };
      r277 = dyn find_vignette_product2[, by, main, engine](p92, "tangle", FALSE, p93);
      return r277;
    L1():
      dr50 = tryDispatchBuiltin.1("$", engine15);
      dc25 = getTryDispatchBuiltinDispatched(dr50);
      if dc25 then L3() else L2(dr50);
    L2(engine17):
      r268 = `$`(engine17, <sym tangle>);
      goto L0(r268);
    L3():
      dx63 = getTryDispatchBuiltinValue(dr50);
      goto L0(dx63);
    };
    p95 = prom<V +>{
      r279 = clos inner3708401697;
      return r279;
    };
    r281 = dyn tryCatch1[, error](p94, p95);
    check L323() else D136();
  L330():
    separate7 = force? separate6;
    checkMissing(separate7);
    r283 = `!`(separate7);
    c68 = `as.logical`(r283);
    if c68 then L331() else L58();
  D100():
    deopt 324 [i40];
  D136():
    deopt 440 [i65, r281];
  L58():
    goto L61(i73);
  L61(i79):
    goto L34(i79);
  L277():
    p47 = prom<V +>{
      file12 = ld file;
      file13 = force? file12;
      checkMissing(file13);
      return file13;
    };
    p48 = prom<V +>{
      vigns54 = ld vigns;
      vigns55 = force? vigns54;
      checkMissing(vigns55);
      c43 = `is.object`(vigns55);
      if c43 then L1() else L2(vigns55);
    L0(dx53):
      return dx53;
    L1():
      dr40 = tryDispatchBuiltin.1("$", vigns55);
      dc20 = getTryDispatchBuiltinDispatched(dr40);
      if dc20 then L3() else L2(dr40);
    L2(vigns57):
      r182 = `$`(vigns57, <sym pkgdir>);
      goto L0(r182);
    L3():
      dx52 = getTryDispatchBuiltinValue(dr40);
      goto L0(dx52);
    };
    p49 = prom<V +>{
      quiet1 = ld quiet;
      quiet2 = force? quiet1;
      checkMissing(quiet2);
      return quiet2;
    };
    p50 = prom<V +>{
      have_makefile = ld `have.makefile`;
      have_makefile1 = force? have_makefile;
      checkMissing(have_makefile1);
      return have_makefile1;
    };
    p51 = prom<V +>{
      name2 = ld name;
      name3 = force? name2;
      checkMissing(name3);
      return name3;
    };
    p52 = prom<V +>{
      enc2 = ld enc;
      enc3 = force? enc2;
      checkMissing(enc3);
      return enc3;
    };
    p53 = prom<V +>{
      tf4 = ld tf2;
      tf5 = force? tf4;
      checkMissing(tf5);
      return tf5;
    };
    r189 = dyn sprintf1("tools:::.buildOneVignette(\"%s\", \"%s\", %s, %s, \"%s\", \"%s\", \"%s\")", p47, p48, p49, p50, p51, p52, p53);
    check L278() else D101();
  L323():
    st output = r281;
    output8 = ld output;
    check L324() else D137();
  L331():
    thisOK = ld thisOK;
    check L332() else D140();
  D101():
    deopt 333 [i40, r189];
  D137():
    deopt 442 [i65, output8];
  D140():
    deopt 454 [i73, thisOK];
  L278():
    st Rcmd = r189;
    get_timeout = ldf get_timeout;
    check L279() else D102();
  L324():
    output9 = force? output8;
    checkMissing(output9);
    l5 = ld sourceList;
    c67 = `is.object`(l5);
    if c67 then L325() else L326(i65, output9, l5);
  L332():
    thisOK1 = force? thisOK;
    checkMissing(thisOK1);
    c69 = `as.logical`(thisOK1);
    if c69 then L333() else L59();
  D102():
    deopt 336 [i40];
  L56(i72, output13, dx67):
    st sourceList = dx67;
    goto L57(i72);
  L59():
    message4 = ldf message;
    check L337() else D143();
  L60(i78, r290):
    goto L61(i78);
  L279():
    p55 = prom<V +>{
      Sys_getenv = ldf `Sys.getenv`;
      p54 = prom<V +>{
        Sys_getenv1 = ldf `Sys.getenv`;
        r190 = dyn Sys_getenv1("_R_CHECK_ELAPSED_TIMEOUT_");
        return r190;
      };
      r192 = dyn Sys_getenv("_R_CHECK_ONE_VIGNETTE_ELAPSED_TIMEOUT_", p54);
      return r192;
    };
    r194 = dyn get_timeout(p55);
    check L280() else D103();
  L325():
    dr52 = tryDispatchBuiltin.0("[[<-", l5, output9);
    dc26 = getTryDispatchBuiltinDispatched(dr52);
    if dc26 then L327() else L326(i65, output9, dr52);
  L326(i70, output11, l7):
    file22 = ld file;
    check L328() else D138();
  L333():
    message3 = ldf message;
    check L334() else D141();
  D103():
    deopt 338 [i40, r194];
  D138():
    deopt 445 [i70, output11, l7, output9, file22];
  D141():
    deopt 457 [i73];
  D143():
    deopt 461 [i73];
  L280():
    st tlim = r194;
    tempfile1 = ldf tempfile;
    check L281() else D104();
  L327():
    dx66 = getTryDispatchBuiltinValue(dr52);
    goto L56(i65, output9, dx66);
  L328():
    file23 = force? file22;
    ____ = ldf `[[<-` in base;
    r282 = dyn ____(l7, output9, file23);
    goto L56(i70, output11, r282);
  L334():
    p98 = prom<V +>{
      gettextf4 = ldf gettextf;
      p97 = prom<V +>{
        sQuote5 = ldf sQuote;
        p96 = prom<V +>{
          file24 = ld file;
          file25 = force? file24;
          checkMissing(file25);
          return file25;
        };
        r285 = dyn sQuote5(p96);
        return r285;
      };
      r287 = dyn gettextf4("--- finished re-building %s\n", p97);
      return r287;
    };
    r289 = dyn message3(p98);
    check L335() else D142();
  L337():
    p101 = prom<V +>{
      gettextf5 = ldf gettextf;
      p100 = prom<V +>{
        sQuote6 = ldf sQuote;
        p99 = prom<V +>{
          file26 = ld file;
          file27 = force? file26;
          checkMissing(file27);
          return file27;
        };
        r292 = dyn sQuote6(p99);
        return r292;
      };
      r294 = dyn gettextf5("--- failed re-building %s\n", p100);
      return r294;
    };
    r296 = dyn message4(p101);
    check L338() else D144();
  D104():
    deopt 341 [i40];
  D142():
    deopt 459 [i73, r289];
  D144():
    deopt 463 [i73, r296];
  L281():
    r195 = dyn tempfile1();
    check L282() else D105();
  L335():
    goto L60(i73, r289);
  L338():
    goto L60(i73, r296);
  D105():
    deopt 342 [i40, r195];
  L282():
    st tf = r195;
    R_runR = ldf R_runR;
    check L283() else D106();
  D106():
    deopt 345 [i40];
  L283():
    p56 = prom<V +>{
      Rcmd = ld Rcmd;
      Rcmd1 = force? Rcmd;
      checkMissing(Rcmd1);
      return Rcmd1;
    };
    p57 = prom<V +>{
      elibs = ld elibs;
      elibs1 = force? elibs;
      checkMissing(elibs1);
      return elibs1;
    };
    p58 = prom<V +>{
      tf6 = ld tf;
      tf7 = force? tf6;
      checkMissing(tf7);
      return tf7;
    };
    p59 = prom<V +>{
      tf8 = ld tf;
      tf9 = force? tf8;
      checkMissing(tf9);
      return tf9;
    };
    p60 = prom<V +>{
      tlim = ld tlim;
      tlim1 = force? tlim;
      checkMissing(tlim1);
      return tlim1;
    };
    r201 = dyn R_runR[, , , stdout, stderr, timeout](p56, "--vanilla --no-echo", p57, p58, p59, p60);
    check L284() else D107();
  D107():
    deopt 355 [i40, r201];
  L284():
    st status = r201;
    unlink = ldf unlink;
    check L285() else D108();
  D108():
    deopt 358 [i40];
  L285():
    p61 = prom<V +>{
      tf10 = ld tf2;
      tf11 = force? tf10;
      checkMissing(tf11);
      return tf11;
    };
    r203 = dyn unlink(p61);
    check L286() else D109();
  D109():
    deopt 360 [i40, r203];
  L286():
    status = ld status;
    check L287() else D110();
  D110():
    deopt 361 [i40, status];
  L287():
    status1 = force? status;
    checkMissing(status1);
    r204 = `!`(status1);
    c44 = `as.logical`(r204);
    if c44 then L288() else L49();
  L49():
    sym17 = ldf c;
    base17 = ldf c in base;
    guard17 = `==`.4(sym17, base17);
    if guard17 then L303() else L304();
  L51(i59):
    unlink1 = ldf unlink;
    check L310() else D127();
  L288():
    readLines = ldf readLines;
    check L289() else D111();
  D111():
    deopt 365 [i40];
  D127():
    deopt 416 [i59];
  L52(i62, r223):
    st fails = r223;
    cat1 = ldf cat;
    check L308() else D125();
  L289():
    p62 = prom<V +>{
      tf12 = ld tf;
      tf13 = force? tf12;
      checkMissing(tf13);
      return tf13;
    };
    r206 = dyn readLines(p62);
    check L290() else D112();
  L303():
    fails2 = ld fails;
    check L305() else D122();
  L304():
    r222 = dyn base17(<sym fails>, <sym file>);
    goto L52(i40, r222);
  L310():
    p70 = prom<V +>{
      tf16 = ld tf;
      tf17 = force? tf16;
      checkMissing(tf17);
      return tf17;
    };
    r230 = dyn unlink1(p70);
    check L311() else D128();
  D112():
    deopt 367 [i40, r206];
  D122():
    deopt 402 [i40, fails2];
  D125():
    deopt 410 [i62];
  D128():
    deopt 418 [i59, r230];
  L290():
    st this = r206;
    st patt = "^[+]-[+]";
    grepl = ldf grepl;
    check L291() else D113();
  L305():
    fails3 = force? fails2;
    checkMissing(fails3);
    file14 = ld file;
    check L306() else D123();
  L308():
    p69 = prom<V +>{
      readLines1 = ldf readLines;
      p68 = prom<V +>{
        tf14 = ld tf;
        tf15 = force? tf14;
        checkMissing(tf15);
        return tf15;
      };
      r226 = dyn readLines1(p68);
      return r226;
    };
    r228 = dyn cat1[, sep](p69, "\n");
    check L309() else D126();
  L311():
    goto L53(i59);
  D113():
    deopt 373 [i40];
  D123():
    deopt 404 [i40, file14];
  D126():
    deopt 414 [i62, r228];
  L291():
    p63 = prom<V +>{
      patt = ld patt;
      patt1 = force? patt;
      checkMissing(patt1);
      return patt1;
    };
    p64 = prom<V +>{
      this = ld this;
      this1 = force? this;
      checkMissing(this1);
      return this1;
    };
    r209 = dyn grepl(p63, p64);
    check L292() else D114();
  L306():
    file15 = force? file14;
    checkMissing(file15);
    c48 = ldf c in base;
    r224 = dyn c48(fails3, file15);
    check L307() else D124();
  L309():
    goto L51(i62);
  D114():
    deopt 376 [i40, r209];
  D124():
    deopt 407 [i40, r224];
  L292():
    st l = r209;
    gsub1 = ldf gsub;
    check L293() else D115();
  L307():
    goto L52(i40, r224);
  D115():
    deopt 379 [i40];
  L293():
    p65 = prom<V +>{
      patt2 = ld patt;
      patt3 = force? patt2;
      checkMissing(patt3);
      return patt3;
    };
    p66 = prom<V +>{
      this2 = ld this;
      this3 = force? this2;
      checkMissing(this3);
      c45 = `is.object`(this3);
      if c45 then L1() else L2(this3);
    L0(dx55):
      return dx55;
    L1():
      dr42 = tryDispatchBuiltin.1("[", this3);
      dc21 = getTryDispatchBuiltinDispatched(dr42);
      if dc21 then L3() else L2(dr42);
    L2(this5):
      l1 = ld l;
      l2 = force? l1;
      __7 = ldf `[` in base;
      r211 = dyn __7(this5, l2);
      goto L0(r211);
    L3():
      dx54 = getTryDispatchBuiltinValue(dr42);
      goto L0(dx54);
    };
    r213 = dyn gsub1(p65, "", p66);
    check L294() else D116();
  D116():
    deopt 383 [i40, r213];
  L294():
    st output = r213;
    sym16 = ldf c;
    base16 = ldf c in base;
    guard16 = `==`.4(sym16, base16);
    if guard16 then L295() else L296();
  L50(i58, r215):
    st outputs = r215;
    cat = ldf cat;
    check L300() else D120();
  L295():
    outputs = ld outputs;
    check L297() else D117();
  L296():
    r214 = dyn base16(<sym outputs>, <sym output>);
    goto L50(i40, r214);
  D117():
    deopt 387 [i40, outputs];
  D120():
    deopt 395 [i58];
  L297():
    outputs1 = force? outputs;
    checkMissing(outputs1);
    output = ld output;
    check L298() else D118();
  L300():
    p67 = prom<V +>{
      this6 = ld this;
      this7 = force? this6;
      checkMissing(this7);
      c47 = `is.object`(this7);
      if c47 then L1() else L2(this7);
    L0(dx57):
      return dx57;
    L1():
      dr44 = tryDispatchBuiltin.1("[", this7);
      dc22 = getTryDispatchBuiltinDispatched(dr44);
      if dc22 then L3() else L2(dr44);
    L2(this9):
      l3 = ld l;
      l4 = force? l3;
      checkMissing(l4);
      r217 = `!`(l4);
      __8 = ldf `[` in base;
      r218 = dyn __8(this9, r217);
      goto L0(r218);
    L3():
      dx56 = getTryDispatchBuiltinValue(dr44);
      goto L0(dx56);
    };
    r220 = dyn cat[, sep](p67, "\n");
    check L301() else D121();
  D118():
    deopt 389 [i40, output];
  D121():
    deopt 399 [i58, r220];
  L298():
    output1 = force? output;
    checkMissing(output1);
    c46 = ldf c in base;
    r216 = dyn c46(outputs1, output1);
    check L299() else D119();
  L301():
    goto L51(i58);
  D119():
    deopt 392 [i40, r216];
  L299():
    goto L50(i40, r216);
  }
}
fun inner3708401697(e) {
  (reg e:*) -+> V { var e:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg fails:*, reg fails1:V, reg file:*, reg file1:V, reg c:cls, reg r2:V, reg message:cls, reg gettextf:cls, reg file2:*, reg file3:V, reg p:p(V +), reg conditionMessage:cls, reg e1:*, reg e2:V, reg p1:p(V +), reg r5:V, reg p2:p(V +), reg r7:V, reg p3:p(V +), reg r9:V |
    mkenv;
    st e = e;
    sst thisOK = FALSE;
    sym = ldf c;
    base = ldf c in base;
    guard = `==`.4(sym, base);
    if guard then L1() else L2();
  L0(r1):
    sst fails = r1;
    message = ldf message;
    check L6() else D3();
  L1():
    fails = ld fails;
    check L3() else D0();
  L2():
    r = dyn base(<sym fails>, <sym file>);
    goto L0(r);
  D0():
    deopt 5 [fails];
  D3():
    deopt 13 [];
  L3():
    fails1 = force? fails;
    checkMissing(fails1);
    file = ld file;
    check L4() else D1();
  L6():
    p3 = prom<V +>{
      gettextf = ldf gettextf;
      p = prom<V +>{
        file2 = ld file;
        file3 = force? file2;
        checkMissing(file3);
        return file3;
      };
      p2 = prom<V +>{
        conditionMessage = ldf conditionMessage;
        p1 = prom<V +>{
          e1 = ld e;
          e2 = force? e1;
          checkMissing(e2);
          return e2;
        };
        r5 = dyn conditionMessage(p1);
        return r5;
      };
      r7 = dyn gettextf("Error: processing vignette '%s' failed with diagnostics:\n%s", p, p2);
      return r7;
    };
    r9 = dyn message(p3);
    check L7() else D4();
  D1():
    deopt 7 [file];
  D4():
    deopt 15 [r9];
  L4():
    file1 = force? file;
    checkMissing(file1);
    c = ldf c in base;
    r2 = dyn c(fails1, file1);
    check L5() else D2();
  L7():
    popenv;
    return r9;
  D2():
    deopt 10 [r2];
  L5():
    goto L0(r2);
  }
}