fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1222656828;
    st `install.packages` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1222656828(pkgs, lib, repos, contriburl, method, available, destdir, dependencies, type, `configure.args`, `configure.vars`, clean, Ncpus, verbose, libs_only, INSTALL_opts, quiet, keep_outputs, `...`) {
  (reg pkgs:*, reg lib:*, reg repos:*, reg contriburl:*, reg method:*, reg available:*, reg destdir:*, reg dependencies:*, reg type:*, reg configure_args:*, reg configure_vars:*, reg clean:*, reg Ncpus:*, reg verbose:*, reg libs_only:*, reg INSTALL_opts:*, reg quiet:*, reg keep_outputs:*, reg ddd:dots) -+> V { var pkgs:*, var lib:*, var repos:*, reg repos_isMissing:L, reg repos_orDefault:*, reg getOption:cls, reg r:V, reg p:p(V +), var contriburl:*, reg contriburl_isMissing:L, reg contriburl_orDefault:*, reg contrib_url:cls, reg repos1:*, reg repos2:V, reg p1:p(V +), reg type1:*, reg type2:V, reg p2:p(V +), reg r4:V, reg p3:p(V +), var method:*, var available:*, reg available_isMissing:L, reg available_orDefault:*, var destdir:*, reg destdir_isMissing:L, reg destdir_orDefault:*, var dependencies:*, reg dependencies_isMissing:L, reg dependencies_orDefault:*, var type:*, reg type_isMissing:L, reg type_orDefault:*, reg getOption1:cls, reg r6:V, reg p4:p(V +), var `configure.args`:*, reg configure_args_isMissing:L, reg configure_args_orDefault:*, reg getOption2:cls, reg r8:V, reg p5:p(V +), var `configure.vars`:*, reg configure_vars_isMissing:L, reg configure_vars_orDefault:*, reg getOption3:cls, reg r10:V, reg p6:p(V +), var clean:*, reg clean_isMissing:L, reg clean_orDefault:*, var Ncpus:*, reg Ncpus_isMissing:L, reg Ncpus_orDefault:*, reg getOption4:cls, reg r12:V, reg p7:p(V +), var verbose:*, reg verbose_isMissing:L, reg verbose_orDefault:*, reg getOption5:cls, reg r14:V, reg p8:p(V +), var libs_only:*, reg libs_only_isMissing:L, reg libs_only_orDefault:*, var INSTALL_opts:*, var quiet:*, reg quiet_isMissing:L, reg quiet_orDefault:*, var keep_outputs:*, reg keep_outputs_isMissing:L, reg keep_outputs_orDefault:*, var `...`:dots?, reg sym:cls, reg base:cls, reg guard:L, reg r16:V, reg r17:V, reg type3:*, reg type4:V, reg c:L, reg c1:L, reg c3:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r18:V, reg c6:L, reg r19:V, reg type5:*, reg type6:V, reg length:cls, reg r20:V, reg r21:V, reg c7:L, reg c8:V, reg r22:V, reg c10:L, reg stop:cls, reg gettextf:cls, reg r23:V, reg p9:p(V +), reg r25:V, reg _Platform:*, reg _Platform1:V, reg c11:L, reg _Platform3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r27:V, reg type7:*, reg type8:V, reg r28:V, reg c12:L, reg type9:*, reg type10:V, reg r29:V, reg c13:L, reg stop1:cls, reg r30:V, reg type11:*, reg type12:V, reg type13:*, reg type14:V, reg r32:V, reg c14:L, reg c16:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r33:V, reg c19:L, reg r34:V, reg missing:cls, reg r35:V, reg r36:V, reg c20:L, reg c21:L, reg c22:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r37:V, reg c29:L, reg c30:L, reg r38:V, reg available1:*, reg available2:V, reg c31:V, reg r39:V, reg c32:L, reg c33:V, reg c36:L, reg c37:V, reg c39:L, reg stop2:cls, reg r40:V, reg r41:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r43:V, reg r44:V, reg clean1:*, reg clean2:V, reg c40:L, reg c41:L, reg c43:V, reg clean3:*, reg clean4:V, reg c44:L, reg c45:V, reg c47:L, reg sym5:cls, reg base5:cls, reg guard5:L, reg r46:V, reg r47:V, reg dependencies1:*, reg dependencies2:V, reg c48:L, reg c49:L, reg c51:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r48:V, reg c54:L, reg r49:V, reg dependencies3:*, reg dependencies4:V, reg is_na:cls, reg r50:V, reg c55:L, reg c56:V, reg c58:L, reg sym7:cls, reg base7:cls, reg guard7:L, reg r51:V, reg r52:V, reg missing1:cls, reg r53:V, reg r54:V, reg c59:L, reg c61:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r55:V, reg c64:L, reg r56:V, reg lib1:*, reg lib2:V, reg length1:cls, reg r57:V, reg r58:V, reg c65:L, reg c66:V, reg c68:L, reg r59:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r60:V, reg c69:cls, reg r61:V, reg r63:cls, reg r64:cls, reg r65:cls, reg r66:cls, reg sym10:cls, reg base10:cls, reg guard10:L, reg r67:V, reg r68:V, reg missing2:cls, reg r69:V, reg c70:L, reg sym11:cls, reg base11:cls, reg guard11:L, reg r70:V, reg r71:V, reg interactive:cls, reg r72:V, reg r73:V, reg c71:L, reg stop3:cls, reg r74:V, reg _Platform4:*, reg _Platform5:V, reg c72:L, reg _Platform7:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r76:V, reg r77:V, reg c73:L, reg c74:V, reg _Platform8:*, reg _Platform9:V, reg c76:L, reg c78:L, reg _Platform11:V, reg dr4:V, reg dc2:L, reg dx4:V, reg c80:L, reg dx5:V, reg r78:V, reg r79:V, reg c81:L, reg c82:V, reg c84:L, reg c85:V, reg capabilities:cls, reg r80:V, reg c87:L, reg c90:L, reg c91:V, reg capabilities1:cls, reg r81:V, reg c92:L, reg c93:V, reg c96:L, reg c99:L, reg c100:V, reg suppressWarnings:cls, reg __:cls, reg r82:V, reg p10:p(V +), reg r84:V, reg c101:L, reg c102:V, reg c105:L, reg c106:V, reg c108:L, reg stop4:cls, reg r86:V, reg sym12:cls, reg base12:cls, reg guard12:L, reg r87:V, reg r88:V, reg available3:*, reg available4:V, reg c109:V, reg c110:L, reg available_packages:cls, reg contriburl1:*, reg contriburl2:V, reg p11:p(V +), reg method1:*, reg method2:V, reg p12:p(V +), reg ddd1:dots?, reg r91:V, reg sym13:cls, reg base13:cls, reg guard13:L, reg r92:V, reg r93:V, reg missing3:cls, reg r94:V, reg c111:L, reg getOption6:cls, reg r95:V, reg type15:*, reg type16:V, reg r97:V, reg c112:L, reg av:*, reg av1:V, reg av2:V, reg available5:*, reg available6:V, reg NROW:cls, reg av4:*, reg av5:V, reg p13:p(V +), reg r99:V, reg c113:L, reg select_list:cls, reg sort:cls, reg unique:cls, reg rownames:cls, reg av6:*, reg av7:V, reg p14:p(V +), reg r101:V, reg p15:p(V +), reg r103:V, reg p16:p(V +), reg r105:V, reg p17:p(V +), reg r107:V, reg r108:V, reg _Platform12:*, reg _Platform13:V, reg c114:L, reg _Platform15:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg r110:V, reg r111:V, reg c115:L, reg c117:V, reg sym14:cls, reg base14:cls, reg guard14:L, reg r112:V, reg c120:L, reg r113:V, reg pkgs1:*, reg pkgs2:V, reg length2:cls, reg r114:V, reg c121:L, reg c122:V, reg c124:L, reg get_package_name:cls, reg pkgs3:*, reg pkgs4:V, reg p18:p(V +), reg r116:V, reg search:cls, reg r117:V, reg sub:cls, reg inuse:*, reg inuse1:V, reg c125:L, reg inuse3:V, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg grep:cls, reg inuse4:*, reg inuse5:V, reg p19:p(V +), reg r119:V, reg __1:cls, reg r120:V, reg p20:p(V +), reg r122:V, reg _in_:cls, reg pkgnames:*, reg pkgnames1:V, reg p21:p(V +), reg inuse6:*, reg inuse7:V, reg p22:p(V +), reg r125:V, reg sym15:cls, reg base15:cls, reg guard15:L, reg r126:V, reg r127:V, reg inuse8:*, reg inuse9:V, reg any:cls, reg r128:V, reg c126:L, reg warning:cls, reg sprintf:cls, reg ngettext:cls, reg sym16:cls, reg base16:cls, reg guard16:L, reg r129:V, reg r130:V, reg inuse10:*, reg inuse11:V, reg sum:cls, reg r131:V, reg p23:p(V +), reg r133:V, reg p24:p(V +), reg paste:cls, reg sQuote:cls, reg pkgnames2:*, reg pkgnames3:V, reg c127:L, reg pkgnames5:V, reg dr10:V, reg dc5:L, reg dx10:V, reg dx11:V, reg inuse12:*, reg inuse13:V, reg __2:cls, reg r135:V, reg p25:p(V +), reg r137:V, reg p26:p(V +), reg r139:V, reg p27:p(V +), reg r141:V, reg p28:p(V +), reg r143:V, reg pkgs5:*, reg pkgs6:V, reg c128:L, reg pkgs8:V, reg dr12:V, reg dc6:L, reg dx12:V, reg dx13:V, reg inuse14:*, reg inuse15:V, reg r144:V, reg __3:cls, reg r145:V, reg dx14:V, reg sym17:cls, reg base17:cls, reg guard17:L, reg r146:V, reg r147:V, reg pkgs9:*, reg pkgs10:V, reg length3:cls, reg r148:V, reg r149:V, reg c129:L, reg sym18:cls, reg base18:cls, reg guard18:L, reg r150:V, reg r151:V, reg invisible:cls, reg r152:V, reg sym19:cls, reg base19:cls, reg guard19:L, reg r155:V, reg r156:V, reg missing4:cls, reg r157:V, reg c130:L, reg c131:V, reg sym20:cls, reg base20:cls, reg guard20:L, reg r158:V, reg c135:L, reg r159:V, reg lib3:*, reg lib4:V, reg c136:V, reg c137:L, reg c138:V, reg c140:L, reg _libPaths:cls, reg r160:V, reg c141:L, reg r162:V, reg dr14:V, reg dc7:L, reg dx16:V, reg dx17:V, reg __4:cls, reg r163:V, reg quiet1:*, reg quiet2:V, reg r164:V, reg c142:L, reg c144:V, reg sym21:cls, reg base21:cls, reg guard21:L, reg r165:V, reg c147:L, reg r166:V, reg _libPaths1:cls, reg r167:V, reg length4:cls, reg r168:V, reg r169:V, reg c148:L, reg c149:V, reg c151:L, reg message:cls, reg sprintf1:cls, reg ngettext1:cls, reg sym22:cls, reg base22:cls, reg guard22:L, reg r170:V, reg r171:V, reg pkgs11:*, reg pkgs12:V, reg length5:cls, reg r172:V, reg p29:p(V +), reg r174:V, reg p30:p(V +), reg sQuote1:cls, reg lib5:*, reg lib6:V, reg p31:p(V +), reg r177:V, reg p32:p(V +), reg sQuote2:cls, reg r179:V, reg p33:p(V +), reg r181:V, reg p34:p(V +), reg r183:V, reg r184:V, reg dir_exists:cls, reg lib7:*, reg lib8:V, reg p35:p(V +), reg r187:V, reg file_access:cls, reg lib9:*, reg lib10:V, reg p36:p(V +), reg r189:V, reg r190:V, reg r191:V, reg sym23:cls, reg base23:cls, reg guard23:L, reg r192:V, reg r193:V, reg lib11:*, reg lib12:V, reg length6:cls, reg r194:V, reg r195:V, reg c152:L, reg c154:V, reg sym24:cls, reg base24:cls, reg guard24:L, reg r196:V, reg c157:L, reg r197:V, reg ok:*, reg ok1:V, reg r198:V, reg any1:cls, reg r199:V, reg c158:L, reg c159:V, reg c161:L, reg stop5:cls, reg sprintf2:cls, reg ngettext2:cls, reg sym25:cls, reg base25:cls, reg guard25:L, reg r200:V, reg r201:V, reg ok2:*, reg ok3:V, reg r202:V, reg sum1:cls, reg r203:V, reg p37:p(V +), reg r205:V, reg p38:p(V +), reg paste1:cls, reg sQuote3:cls, reg lib13:*, reg lib14:V, reg c162:L, reg lib16:V, reg dr16:V, reg dc8:L, reg dx18:V, reg dx19:V, reg ok4:*, reg ok5:V, reg r207:V, reg __5:cls, reg r208:V, reg p39:p(V +), reg r210:V, reg p40:p(V +), reg r212:V, reg p41:p(V +), reg r214:V, reg p42:p(V +), reg r216:V, reg sym26:cls, reg base26:cls, reg guard26:L, reg r218:V, reg r219:V, reg lib17:*, reg lib18:V, reg length7:cls, reg r220:V, reg r221:V, reg c163:L, reg c165:V, reg _Platform16:*, reg _Platform17:V, reg c166:L, reg c168:L, reg _Platform19:V, reg dr18:V, reg dc9:L, reg dx20:V, reg c170:L, reg dx21:V, reg r222:V, reg r223:V, reg c171:L, reg c172:V, reg c174:L, reg dir_exists1:cls, reg lib19:*, reg lib20:V, reg p43:p(V +), reg r225:V, reg ok6:*, reg ok7:V, reg c175:L, reg file_path:cls, reg lib21:*, reg lib22:V, reg p44:p(V +), reg paste2:cls, reg Sys_getpid:cls, reg r227:V, reg p45:p(V +), reg r229:V, reg p46:p(V +), reg r231:V, reg unlink:cls, reg fn:*, reg fn1:V, reg p47:p(V +), reg r233:V, reg try:cls, reg dir_create:cls, reg fn2:*, reg fn3:V, reg p48:p(V +), reg r235:V, reg p49:p(V +), reg r237:V, reg sym27:cls, reg base27:cls, reg guard27:L, reg r238:V, reg r239:V, reg res:*, reg res1:V, reg inherits:cls, reg r240:V, reg c176:L, reg c177:V, reg res2:*, reg res3:V, reg r241:V, reg c179:L, reg c180:V, reg c182:L, reg r242:V, reg unlink1:cls, reg fn4:*, reg fn5:V, reg p50:p(V +), reg r244:V, reg r245:V, reg sym28:cls, reg base28:cls, reg guard28:L, reg r247:V, reg r248:V, reg lib23:*, reg lib24:V, reg length8:cls, reg r249:V, reg r250:V, reg c183:L, reg c185:V, reg ok8:*, reg ok9:V, reg r251:V, reg c186:L, reg c187:V, reg c189:L, reg warning1:cls, reg gettextf1:cls, reg lib25:*, reg lib26:V, reg p51:p(V +), reg r253:V, reg p52:p(V +), reg r255:V, reg unlist:cls, reg strsplit:cls, reg Sys_getenv:cls, reg r256:V, reg p53:p(V +), reg _Platform20:*, reg _Platform21:V, reg c190:L, reg _Platform23:V, reg dr20:V, reg dc10:L, reg dx22:V, reg dx23:V, reg r258:V, reg p54:p(V +), reg r260:V, reg p55:p(V +), reg r262:V, reg c191:L, reg r264:V, reg dr22:V, reg dc11:L, reg dx24:V, reg dx25:V, reg __6:cls, reg r265:V, reg sym29:cls, reg base29:cls, reg guard29:L, reg r266:V, reg r267:V, reg interactive1:cls, reg r268:V, reg c192:L, reg askYesNo:cls, reg gettext:cls, reg r269:V, reg p56:p(V +), reg r271:V, reg isTRUE:cls, reg ans:*, reg ans1:V, reg p57:p(V +), reg r273:V, reg r274:V, reg c193:L, reg stop6:cls, reg r275:V, reg userdir:*, reg userdir1:V, reg file_exists:cls, reg userdir2:*, reg userdir3:V, reg p58:p(V +), reg r278:V, reg r279:V, reg c194:L, reg askYesNo1:cls, reg gettextf2:cls, reg sQuote4:cls, reg userdir4:*, reg userdir5:V, reg p59:p(V +), reg r281:V, reg p60:p(V +), reg r283:V, reg p61:p(V +), reg r285:V, reg isTRUE1:cls, reg ans2:*, reg ans3:V, reg p62:p(V +), reg r287:V, reg r288:V, reg c195:L, reg stop7:cls, reg r289:V, reg dir_create1:cls, reg userdir6:*, reg userdir7:V, reg p63:p(V +), reg r292:V, reg r293:V, reg c196:L, reg stop8:cls, reg gettextf3:cls, reg sQuote5:cls, reg userdir8:*, reg userdir9:V, reg p64:p(V +), reg r295:V, reg p65:p(V +), reg r297:V, reg p66:p(V +), reg r299:V, reg _libPaths2:cls, reg sym30:cls, reg base30:cls, reg guard30:L, reg r301:V, reg r302:V, reg userdir10:*, reg userdir11:V, reg _libPaths3:cls, reg r303:V, reg c197:cls, reg r304:V, reg p67:p(V +), reg r306:V, reg r307:V, reg r308:V, reg stop9:cls, reg r309:V, reg normalizePath:cls, reg lib27:*, reg lib28:V, reg p68:p(V +), reg r312:V, reg sym31:cls, reg base31:cls, reg guard31:L, reg r313:V, reg r314:V, reg pkgs13:*, reg pkgs14:V, reg length9:cls, reg r315:V, reg r316:V, reg c198:L, reg c200:V, reg sym32:cls, reg base32:cls, reg guard32:L, reg r317:V, reg c203:L, reg r318:V, reg missing5:cls, reg r319:V, reg c204:L, reg c205:V, reg c207:L, reg c209:V, reg sym33:cls, reg base33:cls, reg guard33:L, reg r320:V, reg c212:L, reg r321:V, reg missing6:cls, reg r322:V, reg c213:L, reg c214:V, reg c216:L, reg type17:*, reg type18:V, reg r323:V, reg c217:L, reg c219:V, reg sym34:cls, reg base34:cls, reg guard34:L, reg r324:V, reg c222:L, reg r325:V, reg grepl:cls, reg pkgs15:*, reg pkgs16:V, reg p69:p(V +), reg r327:V, reg any2:cls, reg r328:V, reg c223:L, reg c224:V, reg c226:L, reg c227:V, reg _in_1:cls, reg type19:*, reg type20:V, reg p70:p(V +), reg r330:V, reg c229:L, reg c232:L, reg c233:V, reg endsWith:cls, reg pkgs17:*, reg pkgs18:V, reg p71:p(V +), reg r332:V, reg c234:L, reg c235:V, reg c238:L, reg c239:V, reg c241:L, reg c242:V, reg startsWith:cls, reg type21:*, reg type22:V, reg p72:p(V +), reg r334:V, reg c244:L, reg c247:L, reg c248:V, reg endsWith1:cls, reg pkgs19:*, reg pkgs20:V, reg p73:p(V +), reg r336:V, reg c249:L, reg c250:V, reg c253:L, reg c254:V, reg c256:L, reg message1:cls, reg r337:V, reg type23:*, reg type24:V, reg r339:V, reg c257:L, reg _in_2:cls, reg type25:*, reg type26:V, reg p74:p(V +), reg r341:V, reg c258:L, reg c260:V, reg endsWith2:cls, reg pkgs21:*, reg pkgs22:V, reg p75:p(V +), reg r343:V, reg c261:L, reg c262:V, reg c264:L, reg type27:*, reg type28:V, reg message2:cls, reg r344:V, reg r345:V, reg startsWith1:cls, reg type29:*, reg type30:V, reg p76:p(V +), reg r347:V, reg c265:L, reg c267:V, reg endsWith3:cls, reg pkgs23:*, reg pkgs24:V, reg p77:p(V +), reg r349:V, reg c268:L, reg c269:V, reg c271:L, reg type31:*, reg type32:V, reg message3:cls, reg r350:V, reg grepl1:cls, reg pkgs25:*, reg pkgs26:V, reg p78:p(V +), reg r352:V, reg c272:L, reg message4:cls, reg r353:V, reg r354:V, reg sym35:cls, reg base35:cls, reg guard35:L, reg r356:V, reg r357:V, reg pkgs27:*, reg pkgs28:V, reg length10:cls, reg r358:V, reg r359:V, reg c273:L, reg c275:V, reg sym36:cls, reg base36:cls, reg guard36:L, reg r360:V, reg c278:L, reg r361:V, reg repos3:*, reg repos4:V, reg c279:V, reg c280:L, reg c281:V, reg c283:L, reg c285:V, reg type33:*, reg type34:V, reg r362:V, reg c286:L, reg c287:V, reg c289:L, reg _in_3:cls, reg type35:*, reg type36:V, reg p79:p(V +), reg r364:V, reg c290:L, reg c292:V, reg endsWith4:cls, reg pkgs29:*, reg pkgs30:V, reg p80:p(V +), reg r366:V, reg c293:L, reg c294:V, reg c296:L, reg c297:V, reg startsWith2:cls, reg type37:*, reg type38:V, reg p81:p(V +), reg r368:V, reg c299:L, reg c302:L, reg c303:V, reg endsWith5:cls, reg pkgs31:*, reg pkgs32:V, reg p82:p(V +), reg r370:V, reg c304:L, reg c305:V, reg c308:L, reg c309:V, reg c311:L, reg type39:*, reg type40:V, reg type41:V, reg grepl2:cls, reg pkgs33:*, reg pkgs34:V, reg p83:p(V +), reg r372:V, reg c312:L, reg sym37:cls, reg base37:cls, reg guard37:L, reg r373:V, reg r374:V, reg repos5:*, reg repos6:V, reg c313:V, reg c314:L, reg c316:V, reg sym38:cls, reg base38:cls, reg guard38:L, reg r375:V, reg c319:L, reg r376:V, reg missing7:cls, reg r377:V, reg c320:L, reg c321:V, reg c323:L, reg destdir1:*, reg destdir2:V, reg sym39:cls, reg base39:cls, reg guard39:L, reg r378:V, reg r379:V, reg grepl3:cls, reg pkgs35:*, reg pkgs36:V, reg p84:p(V +), reg r381:V, reg any3:cls, reg r382:V, reg sym40:cls, reg base40:cls, reg guard40:L, reg r383:V, reg r384:V, reg destdir3:*, reg destdir4:V, reg c324:V, reg c325:L, reg c327:V, reg nonlocalrepos:*, reg nonlocalrepos1:V, reg c328:L, reg c329:V, reg c331:L, reg file_path1:cls, reg tempdir:cls, reg r385:V, reg p85:p(V +), reg r387:V, reg file_exists1:cls, reg tmpd:*, reg tmpd1:V, reg p86:p(V +), reg r389:V, reg r390:V, reg c332:L, reg c334:V, reg dir_create2:cls, reg tmpd2:*, reg tmpd3:V, reg p87:p(V +), reg r392:V, reg r393:V, reg c335:L, reg c336:V, reg c338:L, reg stop10:cls, reg gettextf4:cls, reg sQuote6:cls, reg tmpd4:*, reg tmpd5:V, reg p88:p(V +), reg r395:V, reg p89:p(V +), reg r397:V, reg p90:p(V +), reg r399:V, reg r400:V, reg nonlocalrepos2:*, reg nonlocalrepos3:V, reg c339:L, reg r402:cls, reg pkgs37:*, reg pkgs38:V, reg c340:L, reg pkgs40:V, reg dr24:V, reg dc12:L, reg dx26:V, reg dx27:V, reg web:*, reg web1:V, reg __7:cls, reg r403:V, reg unique1:cls, reg urls:*, reg urls1:V, reg p91:p(V +), reg r405:V, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c341:L, reg x:V, reg pkgs41:*, reg pkgs42:V, reg p92:*, reg p93:V, reg r406:V, reg file_path2:cls, reg tmpd6:*, reg tmpd7:V, reg p94:p(V +), reg basename:cls, reg p95:*, reg p96:V, reg p97:p(V +), reg r409:V, reg p98:p(V +), reg r411:V, reg try1:cls, reg df:cls, reg p99:*, reg p100:V, reg p101:p(V +), reg destfile:*, reg destfile1:V, reg p102:p(V +), reg method3:*, reg method4:V, reg p103:p(V +), reg ddd2:dots?, reg r415:V, reg p104:p(V +), reg r417:V, reg sym41:cls, reg base41:cls, reg guard41:L, reg r418:V, reg i7:I, reg r419:V, reg res4:*, reg res5:V, reg inherits1:cls, reg r420:V, reg r421:V, reg c342:L, reg i9:I, reg c344:V, reg res6:*, reg res7:V, reg r422:V, reg c345:L, reg c346:V, reg c348:L, reg destfile2:*, reg destfile3:V, reg l1:*, reg c349:L, reg i14:I, reg destfile5:V, reg l3:*, reg dr26:V, reg dc13:L, reg dx28:V, reg i16:I, reg destfile7:V, reg dx29:V, reg this:*, reg this1:V, reg ___:cls, reg r423:V, reg i17:I, reg l4:*, reg c350:L, reg i19:I, reg r425:L, reg l6:*, reg dr28:V, reg dc14:L, reg dx30:V, reg i21:I, reg r427:L, reg dx31:V, reg this2:*, reg this3:V, reg ___1:cls, reg r428:V, reg i22:V, reg type43:*, reg type44:V, reg r429:V, reg c351:L, reg type45:*, reg type46:V, reg r430:V, reg c352:L, reg stop11:cls, reg r431:V, reg sym42:cls, reg base42:cls, reg guard42:L, reg r433:V, reg r434:V, reg missing8:cls, reg r435:V, reg r436:V, reg c353:L, reg c354:V, reg sym43:cls, reg base43:cls, reg guard43:L, reg r437:V, reg c358:L, reg r438:V, reg available7:*, reg available8:V, reg c359:V, reg r439:V, reg c360:L, reg c361:V, reg c363:L, reg type47:*, reg type48:V, reg type49:V, reg type51:*, reg type52:V, reg r440:V, reg c364:L, reg sym44:cls, reg base44:cls, reg guard44:L, reg r441:V, reg r442:V, reg repos7:*, reg repos8:V, reg c365:V, reg c366:L, reg stop12:cls, reg r443:V, reg contrib_url1:cls, reg repos9:*, reg repos10:V, reg p105:p(V +), reg r446:V, reg sym45:cls, reg base45:cls, reg guard45:L, reg r447:V, reg r448:V, reg missing9:cls, reg r449:V, reg c367:L, reg getOption7:cls, reg r450:V, reg available_packages1:cls, reg contriburl3:*, reg contriburl4:V, reg p106:p(V +), reg method5:*, reg method6:V, reg p107:p(V +), reg ddd3:dots?, reg r454:V, reg getDependencies:cls, reg pkgs43:*, reg pkgs44:V, reg p108:p(V +), reg dependencies5:*, reg dependencies6:V, reg p109:p(V +), reg available9:*, reg available10:V, reg p110:p(V +), reg lib29:*, reg lib30:V, reg p111:p(V +), reg ddd4:dots?, reg r459:V, reg available_packages2:cls, reg contrib_url2:cls, reg repos11:*, reg repos12:V, reg p112:p(V +), reg type53:*, reg type54:V, reg p113:p(V +), reg r462:V, reg p114:p(V +), reg method7:*, reg method8:V, reg p115:p(V +), reg ddd5:dots?, reg r465:V, reg row_names:cls, reg av8:*, reg av9:V, reg p116:p(V +), reg r467:V, reg pkgs45:*, reg pkgs46:V, reg c368:L, reg pkgs48:V, reg dr30:V, reg dc15:L, reg dx32:V, reg dx33:V, reg _in_4:cls, reg pkgs49:*, reg pkgs50:V, reg p117:p(V +), reg bins:*, reg bins1:V, reg p118:p(V +), reg r470:V, reg __8:cls, reg r471:V, reg pkgs51:*, reg pkgs52:V, reg c369:L, reg pkgs54:V, reg dr32:V, reg dc16:L, reg dx34:V, reg dx35:V, reg _in_5:cls, reg pkgs55:*, reg pkgs56:V, reg p119:p(V +), reg bins2:*, reg bins3:V, reg p120:p(V +), reg r474:V, reg r475:V, reg __9:cls, reg r476:V, reg av10:*, reg av11:V, reg c370:L, reg av13:V, reg dr34:V, reg dc17:L, reg dx36:V, reg dx37:V, reg bins4:*, reg bins5:V, reg __10:cls, reg r477:V, reg sym46:cls, reg base46:cls, reg guard46:L, reg r478:V, reg r479:V, reg av14:*, reg av15:V, reg c371:L, reg av17:V, reg dr36:V, reg dc18:L, reg dx38:V, reg dx39:V, reg bins6:*, reg bins7:V, reg __11:cls, reg r480:V, reg is_na1:cls, reg r481:V, reg r482:V, reg _in_6:cls, reg available11:*, reg available12:V, reg c372:L, reg available14:V, reg dr38:V, reg dc19:L, reg dx40:V, reg dx41:V, reg bins8:*, reg bins9:V, reg __12:cls, reg r483:V, reg p121:p(V +), reg r485:V, reg r486:V, reg hasArchs:*, reg hasArchs1:V, reg needsCmp:*, reg needsCmp1:V, reg r487:V, reg available15:*, reg available16:V, reg c373:L, reg available18:V, reg dr40:V, reg dc20:L, reg dx42:V, reg dx43:V, reg bins10:*, reg bins11:V, reg __13:cls, reg r488:V, reg as_numeric_version:cls, reg binvers:*, reg binvers1:V, reg p122:p(V +), reg r490:V, reg srcvers:*, reg srcvers1:V, reg r491:V, reg getOption8:cls, reg r492:V, reg sym47:cls, reg base47:cls, reg guard47:L, reg r493:V, reg r494:V, reg Sys_which:cls, reg Sys_getenv1:cls, reg r495:V, reg p123:p(V +), reg r497:V, reg nzchar:cls, reg r498:V, reg r499:V, reg c374:L, reg grepl4:cls, reg R_version:*, reg R_version1:V, reg c375:L, reg R_version3:V, reg dr42:V, reg dc21:L, reg dx44:V, reg dx45:V, reg r501:V, reg p124:p(V +), reg r503:V, reg c376:L, reg c378:V, reg sym48:cls, reg base48:cls, reg guard48:L, reg r504:V, reg c381:L, reg r505:V, reg srcOnly:*, reg srcOnly1:V, reg length11:cls, reg r506:V, reg r507:V, reg c382:L, reg c383:V, reg c385:L, reg l7:*, reg c386:L, reg r509:L, reg l9:*, reg dr44:V, reg dc22:L, reg dx46:V, reg r511:L, reg dx47:V, reg later:*, reg later1:V, reg ___2:cls, reg r512:V, reg sym49:cls, reg base49:cls, reg guard49:L, reg r514:V, reg r515:V, reg later2:*, reg later3:V, reg any4:cls, reg r516:V, reg c387:L, reg ngettext3:cls, reg sym50:cls, reg base50:cls, reg guard50:L, reg r517:V, reg r518:V, reg later4:*, reg later5:V, reg sum2:cls, reg r519:V, reg p125:p(V +), reg r521:V, reg cat:cls, reg paste3:cls, reg strwrap:cls, reg msg:*, reg msg1:V, reg p126:p(V +), reg r523:V, reg p127:p(V +), reg r525:V, reg p128:p(V +), reg r527:V, reg data_frame:cls, reg binvers2:*, reg binvers3:V, reg p129:p(V +), reg srcvers2:*, reg srcvers3:V, reg p130:p(V +), reg hasSrc:*, reg hasSrc1:V, reg p131:p(V +), reg bins12:*, reg bins13:V, reg p132:p(V +), reg r532:V, reg c388:L, reg r534:V, reg dr46:V, reg dc23:L, reg dx48:V, reg dx49:V, reg later6:*, reg later7:V, reg __14:cls, reg r535:V, reg print:cls, reg out:*, reg out1:V, reg p133:p(V +), reg r537:V, reg cat1:cls, reg r538:V, reg sym51:cls, reg base51:cls, reg guard51:L, reg r539:V, reg r540:V, reg later8:*, reg later9:V, reg hasSrc2:*, reg hasSrc3:V, reg r541:V, reg any5:cls, reg r542:V, reg c389:L, reg action:*, reg action1:V, reg r543:V, reg c390:L, reg c392:V, reg sym52:cls, reg base52:cls, reg guard52:L, reg r544:V, reg c395:L, reg r545:V, reg interactive2:cls, reg r546:V, reg c396:L, reg c397:V, reg c399:L, reg ngettext4:cls, reg sym53:cls, reg base53:cls, reg guard53:L, reg r547:V, reg r548:V, reg later10:*, reg later11:V, reg hasSrc4:*, reg hasSrc5:V, reg r549:V, reg sum3:cls, reg r550:V, reg p134:p(V +), reg r552:V, reg askYesNo2:cls, reg msg2:*, reg msg3:V, reg p135:p(V +), reg r554:V, reg sym54:cls, reg base54:cls, reg guard54:L, reg r555:V, reg r556:V, reg res8:*, reg res9:V, reg is_na2:cls, reg r557:V, reg c400:L, reg stop13:cls, reg r558:V, reg isTRUE2:cls, reg res10:*, reg res11:V, reg p136:p(V +), reg r561:V, reg r562:V, reg c401:L, reg later12:*, reg later13:V, reg hasSrc6:*, reg hasSrc7:V, reg r563:V, reg r564:V, reg r565:V, reg r566:V, reg action2:*, reg action3:V, reg r567:V, reg c402:L, reg cat2:cls, reg r568:V, reg later14:*, reg later15:V, reg hasSrc8:*, reg hasSrc9:V, reg r569:V, reg r570:V, reg r571:V, reg bins14:*, reg bins15:V, reg c403:L, reg bins17:V, reg dr48:V, reg dc24:L, reg dx50:V, reg dx51:V, reg later16:*, reg later17:V, reg r573:V, reg __15:cls, reg r574:V, reg sym55:cls, reg base55:cls, reg guard55:L, reg r575:V, reg r576:V, reg srcOnly2:*, reg srcOnly3:V, reg length12:cls, reg r577:V, reg c404:L, reg srcOnly4:*, reg srcOnly5:V, reg c405:L, reg srcOnly7:V, reg dr50:V, reg dc25:L, reg dx52:V, reg dx53:V, reg _in_7:cls, reg available19:*, reg available20:V, reg c406:L, reg available22:V, reg dr52:V, reg dc26:L, reg dx54:V, reg dx55:V, reg srcOnly8:*, reg srcOnly9:V, reg __16:cls, reg r578:V, reg p137:p(V +), reg r580:V, reg r581:V, reg __17:cls, reg r582:V, reg sym56:cls, reg base56:cls, reg guard56:L, reg r583:V, reg r584:V, reg s2:*, reg s3:V, reg length13:cls, reg r585:V, reg c407:L, reg ngettext5:cls, reg sym57:cls, reg base57:cls, reg guard57:L, reg r586:V, reg r587:V, reg s4:*, reg s5:V, reg length14:cls, reg r588:V, reg p138:p(V +), reg r590:V, reg sym58:cls, reg base58:cls, reg guard58:L, reg r591:V, reg r592:V, reg paste4:cls, reg msg4:*, reg msg5:V, reg p139:p(V +), reg r594:V, reg sQuote7:cls, reg s6:*, reg s7:V, reg p140:p(V +), reg r596:V, reg c408:cls, reg r597:V, reg strwrap1:cls, reg paste5:cls, reg msg6:*, reg msg7:V, reg p141:p(V +), reg r599:V, reg p142:p(V +), reg r601:V, reg message5:cls, reg paste6:cls, reg msg8:*, reg msg9:V, reg p143:p(V +), reg r603:V, reg p144:p(V +), reg r605:V, reg action4:*, reg action5:V, reg r606:V, reg c409:L, reg c411:V, reg sym59:cls, reg base59:cls, reg guard59:L, reg r607:V, reg c414:L, reg r608:V, reg interactive3:cls, reg r609:V, reg c415:L, reg c416:V, reg c418:L, reg askYesNo3:cls, reg r610:V, reg sym60:cls, reg base60:cls, reg guard60:L, reg r611:V, reg r612:V, reg res12:*, reg res13:V, reg is_na3:cls, reg r613:V, reg c419:L, reg stop14:cls, reg r614:V, reg isTRUE3:cls, reg res14:*, reg res15:V, reg p145:p(V +), reg r617:V, reg r618:V, reg c420:L, reg setdiff:cls, reg pkgs57:*, reg pkgs58:V, reg p146:p(V +), reg s8:*, reg s9:V, reg p147:p(V +), reg r621:V, reg r622:V, reg r623:V, reg action6:*, reg action7:V, reg r624:V, reg c421:L, reg cat3:cls, reg r625:V, reg setdiff1:cls, reg pkgs59:*, reg pkgs60:V, reg p148:p(V +), reg s10:*, reg s11:V, reg p149:p(V +), reg r628:V, reg r629:V, reg sym61:cls, reg base61:cls, reg guard61:L, reg r631:V, reg r632:V, reg bins18:*, reg bins19:V, reg length15:cls, reg r633:V, reg c422:L, reg type55:*, reg type56:V, reg r634:V, reg c423:L, reg _install_winbinary:cls, reg bins20:*, reg bins21:V, reg p150:p(V +), reg lib31:*, reg lib32:V, reg p151:p(V +), reg contrib_url3:cls, reg repos13:*, reg repos14:V, reg p152:p(V +), reg type57:*, reg type58:V, reg p153:p(V +), reg r639:V, reg p154:p(V +), reg method9:*, reg method10:V, reg p155:p(V +), reg av18:*, reg av19:V, reg p156:p(V +), reg destdir5:*, reg destdir6:V, reg p157:p(V +), reg libs_only1:*, reg libs_only2:V, reg p158:p(V +), reg quiet3:*, reg quiet4:V, reg p159:p(V +), reg ddd6:dots?, reg r646:V, reg r647:V, reg _install_macbinary:cls, reg bins22:*, reg bins23:V, reg p160:p(V +), reg lib33:*, reg lib34:V, reg p161:p(V +), reg contrib_url4:cls, reg repos15:*, reg repos16:V, reg p162:p(V +), reg type59:*, reg type60:V, reg p163:p(V +), reg r652:V, reg p164:p(V +), reg method11:*, reg method12:V, reg p165:p(V +), reg av20:*, reg av21:V, reg p166:p(V +), reg destdir7:*, reg destdir8:V, reg p167:p(V +), reg quiet5:*, reg quiet6:V, reg p168:p(V +), reg ddd7:dots?, reg r658:V, reg setdiff2:cls, reg pkgs61:*, reg pkgs62:V, reg p169:p(V +), reg bins24:*, reg bins25:V, reg p170:p(V +), reg r662:V, reg sym62:cls, reg base62:cls, reg guard62:L, reg r663:V, reg r664:V, reg pkgs63:*, reg pkgs64:V, reg length16:cls, reg r665:V, reg r666:V, reg c424:L, reg sym63:cls, reg base63:cls, reg guard63:L, reg r667:V, reg r668:V, reg invisible1:cls, reg r669:V, reg message6:cls, reg sprintf3:cls, reg ngettext6:cls, reg sym64:cls, reg base64:cls, reg guard64:L, reg r672:V, reg r673:V, reg pkgs65:*, reg pkgs66:V, reg length17:cls, reg r674:V, reg p171:p(V +), reg r676:V, reg p172:p(V +), reg paste7:cls, reg sQuote8:cls, reg pkgs67:*, reg pkgs68:V, reg p173:p(V +), reg r679:V, reg p174:p(V +), reg r681:V, reg p175:p(V +), reg r683:V, reg p176:p(V +), reg r685:V, reg flush_console:cls, reg r686:V, reg _in_8:cls, reg getOption9:cls, reg r688:V, reg p177:p(V +), reg r690:V, reg c425:L, reg c427:V, reg _in_9:cls, reg type61:*, reg type62:V, reg p178:p(V +), reg r692:V, reg c428:L, reg c429:L, reg c430:V, reg startsWith3:cls, reg type63:*, reg type64:V, reg p179:p(V +), reg r694:V, reg c433:L, reg c434:V, reg c437:L, reg c438:V, reg c440:L, reg sym65:cls, reg base65:cls, reg guard65:L, reg r695:V, reg r696:V, reg missing10:cls, reg r697:V, reg c441:L, reg c443:V, reg sym66:cls, reg base66:cls, reg guard66:L, reg r698:V, reg c446:L, reg r699:V, reg available23:*, reg available24:V, reg c447:V, reg c448:L, reg c449:V, reg c451:L, reg c453:V, reg sym67:cls, reg base67:cls, reg guard67:L, reg r700:V, reg c456:L, reg r701:V, reg repos17:*, reg repos18:V, reg c457:V, reg r702:V, reg c458:L, reg c459:V, reg c461:L, reg contrib_url5:cls, reg repos19:*, reg repos20:V, reg p180:p(V +), reg r704:V, reg sym68:cls, reg base68:cls, reg guard68:L, reg r705:V, reg r706:V, reg missing11:cls, reg r707:V, reg c462:L, reg getOption10:cls, reg r708:V, reg tryCatch:cls, reg suppressWarnings1:cls, reg available_packages3:cls, reg contriburl5:*, reg contriburl6:V, reg p181:p(V +), reg method13:*, reg method14:V, reg p182:p(V +), reg ddd8:dots?, reg r712:V, reg p183:p(V +), reg r714:V, reg p184:p(V +), reg r716:cls, reg p185:p(V +), reg r718:V, reg sym69:cls, reg base69:cls, reg guard69:L, reg r719:V, reg r720:V, reg av22:*, reg av23:V, reg inherits2:cls, reg r721:V, reg c463:L, reg message7:cls, reg r722:V, reg available_packages4:cls, reg contrib_url6:cls, reg repos21:*, reg repos22:V, reg p186:p(V +), reg type65:*, reg type66:V, reg p187:p(V +), reg r725:V, reg p188:p(V +), reg method15:*, reg method16:V, reg p189:p(V +), reg ddd9:dots?, reg r728:V, reg r729:V, reg pkgs69:*, reg pkgs70:V, reg c464:L, reg pkgs72:V, reg dr54:V, reg dc27:L, reg dx56:V, reg dx57:V, reg _in_10:cls, reg pkgs73:*, reg pkgs74:V, reg p190:p(V +), reg row_names1:cls, reg av24:*, reg av25:V, reg p191:p(V +), reg r732:V, reg p192:p(V +), reg r734:V, reg __18:cls, reg r735:V, reg available_packages5:cls, reg contrib_url7:cls, reg repos23:*, reg repos24:V, reg p193:p(V +), reg type67:*, reg type68:V, reg p194:p(V +), reg r738:V, reg p195:p(V +), reg method17:*, reg method18:V, reg p196:p(V +), reg ddd10:dots?, reg r741:V, reg pkgs75:*, reg pkgs76:V, reg c465:L, reg pkgs78:V, reg dr56:V, reg dc28:L, reg dx58:V, reg dx59:V, reg _in_11:cls, reg pkgs79:*, reg pkgs80:V, reg p197:p(V +), reg row_names2:cls, reg available25:*, reg available26:V, reg p198:p(V +), reg r744:V, reg p199:p(V +), reg r746:V, reg __19:cls, reg r747:V, reg srcpkgs:*, reg srcpkgs1:V, reg c466:L, reg srcpkgs3:V, reg dr58:V, reg dc29:L, reg dx60:V, reg dx61:V, reg _in_12:cls, reg srcpkgs4:*, reg srcpkgs5:V, reg p200:p(V +), reg bins26:*, reg bins27:V, reg p201:p(V +), reg r750:V, reg r751:V, reg __20:cls, reg r752:V, reg sym70:cls, reg base70:cls, reg guard70:L, reg r753:V, reg r754:V, reg na:*, reg na1:V, reg length18:cls, reg r755:V, reg c467:L, reg sprintf4:cls, reg ngettext7:cls, reg sym71:cls, reg base71:cls, reg guard71:L, reg r756:V, reg r757:V, reg na2:*, reg na3:V, reg length19:cls, reg r758:V, reg p202:p(V +), reg r760:V, reg p203:p(V +), reg paste8:cls, reg sQuote9:cls, reg na4:*, reg na5:V, reg p204:p(V +), reg r763:V, reg p205:p(V +), reg r765:V, reg p206:p(V +), reg r767:V, reg cat4:cls, reg msg10:*, reg msg11:V, reg p207:p(V +), reg r769:V, reg available27:*, reg available28:V, reg c468:L, reg available30:V, reg dr60:V, reg dc30:L, reg dx62:V, reg dx63:V, reg bins28:*, reg bins29:V, reg __21:cls, reg r771:V, reg binvers4:*, reg binvers5:V, reg _in_13:cls, reg bins30:*, reg bins31:V, reg p208:p(V +), reg srcpkgs6:*, reg srcpkgs7:V, reg p209:p(V +), reg r774:V, reg av26:*, reg av27:V, reg c469:L, reg av29:V, reg dr62:V, reg dc31:L, reg dx64:V, reg dx65:V, reg bins32:*, reg bins33:V, reg c470:L, reg av31:V, reg bins35:V, reg dr64:V, reg dc32:L, reg dx66:V, reg av33:V, reg dx67:V, reg OK:*, reg OK1:V, reg __22:cls, reg r775:V, reg __23:cls, reg r776:V, reg l10:*, reg c471:L, reg dx69:V, reg l12:*, reg dr66:V, reg dc33:L, reg dx71:V, reg dx73:V, reg OK2:*, reg OK3:V, reg ___3:cls, reg r777:V, reg as_numeric_version1:cls, reg binvers6:*, reg binvers7:V, reg p210:p(V +), reg r779:V, reg srcvers4:*, reg srcvers5:V, reg r780:V, reg sym72:cls, reg base72:cls, reg guard72:L, reg r781:V, reg r782:V, reg later18:*, reg later19:V, reg any6:cls, reg r783:V, reg c472:L, reg ngettext8:cls, reg sym73:cls, reg base73:cls, reg guard73:L, reg r784:V, reg r785:V, reg later20:*, reg later21:V, reg sum4:cls, reg r786:V, reg p211:p(V +), reg r788:V, reg cat5:cls, reg paste9:cls, reg strwrap2:cls, reg msg12:*, reg msg13:V, reg p212:p(V +), reg r790:V, reg p213:p(V +), reg r792:V, reg p214:p(V +), reg r794:V, reg print1:cls, reg data_frame1:cls, reg binvers8:*, reg binvers9:V, reg p215:p(V +), reg srcvers6:*, reg srcvers7:V, reg p216:p(V +), reg bins36:*, reg bins37:V, reg p217:p(V +), reg r798:V, reg c473:L, reg dr68:V, reg dc34:L, reg dx74:V, reg dx75:V, reg later22:*, reg later23:V, reg __24:cls, reg r801:V, reg p218:p(V +), reg r803:V, reg cat6:cls, reg r804:V, reg r805:V, reg _Platform24:*, reg _Platform25:V, reg c474:L, reg _Platform27:V, reg dr70:V, reg dc35:L, reg dx76:V, reg dx77:V, reg r806:V, reg r807:V, reg c475:L, reg startsWith4:cls, reg type69:*, reg type70:V, reg p219:p(V +), reg r809:V, reg c476:L, reg stop15:cls, reg r810:V, reg _in_14:cls, reg type71:*, reg type72:V, reg p220:p(V +), reg r813:V, reg c477:L, reg _install_winbinary1:cls, reg pkgs81:*, reg pkgs82:V, reg p221:p(V +), reg lib35:*, reg lib36:V, reg p222:p(V +), reg contriburl7:*, reg contriburl8:V, reg p223:p(V +), reg method19:*, reg method20:V, reg p224:p(V +), reg available31:*, reg available32:V, reg p225:p(V +), reg destdir9:*, reg destdir10:V, reg p226:p(V +), reg dependencies7:*, reg dependencies8:V, reg p227:p(V +), reg libs_only3:*, reg libs_only4:V, reg p228:p(V +), reg quiet7:*, reg quiet8:V, reg p229:p(V +), reg ddd11:dots?, reg r823:V, reg sym74:cls, reg base74:cls, reg guard74:L, reg r824:V, reg r825:V, reg invisible2:cls, reg r826:V, reg grep1:cls, reg pkgs83:*, reg pkgs84:V, reg p230:p(V +), reg r830:V, reg sym75:cls, reg base75:cls, reg guard75:L, reg r831:V, reg r832:V, reg have_spaces:*, reg have_spaces1:V, reg length20:cls, reg r833:V, reg c478:L, reg pkgs85:*, reg pkgs86:V, reg c479:L, reg pkgs88:V, reg dr72:V, reg dc36:L, reg dx78:V, reg dx79:V, reg have_spaces2:*, reg have_spaces3:V, reg __25:cls, reg r834:V, reg shortPathName:cls, reg dirname:cls, reg p231:*, reg p232:V, reg p233:p(V +), reg r836:V, reg p234:p(V +), reg r838:V, reg file_path3:cls, reg dirs:*, reg dirs1:V, reg p235:p(V +), reg basename1:cls, reg p236:*, reg p237:V, reg p238:p(V +), reg r841:V, reg p239:p(V +), reg r843:V, reg l13:*, reg c480:L, reg r845:V, reg l15:*, reg dr74:V, reg dc37:L, reg dx80:V, reg r847:V, reg dx81:V, reg have_spaces4:*, reg have_spaces5:V, reg ___4:cls, reg r848:V, reg gsub:cls, reg pkgs89:*, reg pkgs90:V, reg p240:p(V +), reg r851:V, reg startsWith5:cls, reg type73:*, reg type74:V, reg p241:p(V +), reg r854:V, reg c481:L, reg grepl5:cls, reg R_version4:*, reg R_version5:V, reg c482:L, reg R_version7:V, reg dr76:V, reg dc38:L, reg dx82:V, reg dx83:V, reg r855:V, reg p242:p(V +), reg r857:V, reg r858:V, reg c483:L, reg stop16:cls, reg r859:V, reg _install_macbinary1:cls, reg pkgs91:*, reg pkgs92:V, reg p243:p(V +), reg lib37:*, reg lib38:V, reg p244:p(V +), reg contriburl9:*, reg contriburl10:V, reg p245:p(V +), reg method21:*, reg method22:V, reg p246:p(V +), reg available33:*, reg available34:V, reg p247:p(V +), reg destdir11:*, reg destdir12:V, reg p248:p(V +), reg dependencies9:*, reg dependencies10:V, reg p249:p(V +), reg quiet9:*, reg quiet10:V, reg p250:p(V +), reg ddd12:dots?, reg r869:V, reg sym76:cls, reg base76:cls, reg guard76:L, reg r870:V, reg r871:V, reg invisible3:cls, reg r872:V, reg _in_15:cls, reg type75:*, reg type76:V, reg p251:p(V +), reg r876:V, reg c484:L, reg stop17:cls, reg r877:V, reg file_exists2:cls, reg file_path4:cls, reg R_home:cls, reg r879:V, reg p252:p(V +), reg r881:V, reg p253:p(V +), reg r883:V, reg r884:V, reg c485:L, reg stop18:cls, reg r885:V, reg file_path5:cls, reg R_home1:cls, reg r886:V, reg p254:p(V +), reg r888:V, reg sym77:cls, reg base77:cls, reg guard77:L, reg r889:V, reg r890:V, reg c486:cls, reg r891:V, reg quiet11:*, reg quiet12:V, reg c487:L, reg r892:V, reg character:cls, reg r893:V, reg Sys_getenv2:cls, reg r894:V, reg sym78:cls, reg base78:cls, reg guard78:L, reg r895:V, reg r896:V, reg tlim:*, reg tlim1:V, reg nzchar1:cls, reg r897:V, reg r898:V, reg c488:L, reg r899:V, reg ___5:cls, reg r900:V, reg r901:cls, reg tlim2:*, reg tlim3:V, reg p255:p(V +), reg r903:V, reg getwd:cls, reg r904:V, reg sym79:cls, reg base79:cls, reg guard79:L, reg r905:V, reg r906:V, reg keep_outputs1:*, reg keep_outputs2:V, reg c489:L, reg c490:L, reg sym80:cls, reg base80:cls, reg guard80:L, reg r907:V, reg r908:V, reg keep_outputs3:*, reg keep_outputs4:V, reg is_na4:cls, reg r909:V, reg c491:L, reg r910:V, reg sym81:cls, reg base81:cls, reg guard81:L, reg r912:V, reg r913:V, reg keep_outputs5:*, reg keep_outputs6:V, reg c492:L, reg c493:L, reg c495:V, reg sym82:cls, reg base82:cls, reg guard82:L, reg r914:V, reg c498:L, reg r915:V, reg keep_outputs7:*, reg keep_outputs8:V, reg length21:cls, reg r916:V, reg r917:V, reg c499:L, reg c500:V, reg c502:L, reg dir_exists2:cls, reg keep_outputs9:*, reg keep_outputs10:V, reg p256:p(V +), reg r919:V, reg r920:V, reg c503:L, reg c505:V, reg dir_create3:cls, reg keep_outputs11:*, reg keep_outputs12:V, reg p257:p(V +), reg r922:V, reg r923:V, reg c506:L, reg c507:V, reg c509:L, reg stop19:cls, reg gettextf5:cls, reg sQuote10:cls, reg keep_outputs13:*, reg keep_outputs14:V, reg p258:p(V +), reg r925:V, reg p259:p(V +), reg r927:V, reg p260:p(V +), reg r929:V, reg normalizePath1:cls, reg keep_outputs15:*, reg keep_outputs16:V, reg p261:p(V +), reg r932:V, reg stop20:cls, reg gettextf6:cls, reg sQuote11:cls, reg r933:V, reg p262:p(V +), reg r935:V, reg p263:p(V +), reg r937:V, reg sym83:cls, reg base83:cls, reg guard83:L, reg r938:V, reg r939:V, reg _R_LIBS:cls, reg r940:V, reg length22:cls, reg r941:V, reg c510:L, reg _Platform28:*, reg _Platform29:V, reg c511:L, reg _Platform31:V, reg dr78:V, reg dc39:L, reg dx84:V, reg dx85:V, reg r942:V, reg r943:V, reg c512:L, reg Sys_getenv3:cls, reg r944:V, reg Sys_setenv:cls, reg libpath:*, reg libpath1:V, reg p264:p(V +), reg r946:V, reg sym84:cls, reg base84:cls, reg guard84:L, reg r947:V, reg r948:V, reg on_exit:cls, reg r949:V, reg r950:V, reg paste10:cls, reg shQuote:cls, reg libpath2:*, reg libpath3:V, reg p265:p(V +), reg r952:V, reg p266:p(V +), reg r954:V, reg sym85:cls, reg base85:cls, reg guard85:L, reg r956:V, reg r957:V, reg clean5:*, reg clean6:V, reg c513:L, reg c514:L, reg sym86:cls, reg base86:cls, reg guard86:L, reg r958:V, reg r959:V, reg args0:*, reg args1:V, reg clean7:*, reg clean8:V, reg c515:cls, reg r960:V, reg libs_only5:*, reg libs_only6:V, reg c516:L, reg sym87:cls, reg base87:cls, reg guard87:L, reg r962:V, reg r963:V, reg args2:*, reg args3:V, reg c517:cls, reg r964:V, reg sym88:cls, reg base88:cls, reg guard88:L, reg r966:V, reg r967:V, reg missing12:cls, reg r968:V, reg r969:V, reg c518:L, reg sym89:cls, reg base89:cls, reg guard89:L, reg r970:V, reg r971:V, reg INSTALL_opts1:*, reg INSTALL_opts2:V, reg is_list:cls, reg r972:V, reg r973:V, reg c519:L, reg sym90:cls, reg base90:cls, reg guard90:L, reg r974:V, reg r975:V, reg args4:*, reg args5:V, reg paste11:cls, reg INSTALL_opts3:*, reg INSTALL_opts4:V, reg p267:p(V +), reg r977:V, reg c520:cls, reg r978:V, reg sym91:cls, reg base91:cls, reg guard91:L, reg r979:V, reg r980:V, reg list:cls, reg r981:V, reg r982:V, reg sym92:cls, reg base92:cls, reg guard92:L, reg r984:V, reg r985:V, reg list1:cls, reg r986:V, reg verbose1:*, reg verbose2:V, reg c521:L, reg message8:cls, reg gettextf7:cls, reg paste12:cls, reg sym93:cls, reg base93:cls, reg guard93:L, reg r987:V, reg r988:V, reg cmd0:*, reg cmd1:V, reg args6:*, reg args7:V, reg c522:cls, reg r989:V, reg p268:p(V +), reg r991:V, reg p269:p(V +), reg r993:V, reg p270:p(V +), reg r995:V, reg sym94:cls, reg base94:cls, reg guard94:L, reg r997:V, reg r998:V, reg repos25:*, reg repos26:V, reg c523:V, reg c524:L, reg c526:V, reg sym95:cls, reg base95:cls, reg guard95:L, reg r999:V, reg c529:L, reg r1000:V, reg missing13:cls, reg r1001:V, reg c530:L, reg c531:V, reg c533:L, reg cbind:cls, reg path_expand:cls, reg pkgs93:*, reg pkgs94:V, reg p271:p(V +), reg r1003:V, reg p272:p(V +), reg lib39:*, reg lib40:V, reg p273:p(V +), reg r1006:V, reg sym96:cls, reg base96:cls, reg guard96:L, reg r1007:V, reg r1008:V, reg nrow:cls, reg update:*, reg update1:V, reg p274:p(V +), reg r1010:V, reg r1011:I, reg s12:V, reg l16:I, reg i24:I, reg i25:I, reg i26:I, reg c534:L, reg x1:V, reg sym97:cls, reg base97:cls, reg guard97:L, reg r1012:V, reg i31:I, reg r1013:V, reg update2:*, reg update3:V, reg c535:L, reg i33:I, reg update5:V, reg dr80:V, reg dc40:L, reg dx86:V, reg i35:I, reg dx87:V, reg i36:*, reg i37:V, reg __26:cls, reg r1014:V, reg is_na5:cls, reg r1015:V, reg c536:L, reg sym98:cls, reg base98:cls, reg guard98:L, reg r1017:V, reg i44:I, reg r1018:V, reg args8:*, reg args9:V, reg get_install_opts:cls, reg update6:*, reg update7:V, reg c537:L, reg update9:V, reg dr82:V, reg dc41:L, reg dx88:V, reg dx89:V, reg i45:*, reg i46:V, reg __27:cls, reg r1019:V, reg p275:p(V +), reg r1021:V, reg shQuote1:cls, reg update10:*, reg update11:V, reg c538:L, reg update13:V, reg dr84:V, reg dc42:L, reg dx90:V, reg dx91:V, reg i47:*, reg i48:V, reg __28:cls, reg r1022:V, reg p276:p(V +), reg r1024:V, reg getConfigureArgs:cls, reg update14:*, reg update15:V, reg c539:L, reg update17:V, reg dr86:V, reg dc43:L, reg dx92:V, reg dx93:V, reg i49:*, reg i50:V, reg __29:cls, reg r1025:V, reg p277:p(V +), reg r1027:V, reg getConfigureVars:cls, reg update18:*, reg update19:V, reg c540:L, reg update21:V, reg dr88:V, reg dc44:L, reg dx94:V, reg dx95:V, reg i51:*, reg i52:V, reg __30:cls, reg r1028:V, reg p278:p(V +), reg r1030:V, reg shQuote2:cls, reg update22:*, reg update23:V, reg c541:L, reg update25:V, reg dr90:V, reg dc45:L, reg dx96:V, reg dx97:V, reg i53:*, reg i54:V, reg __31:cls, reg r1031:V, reg p279:p(V +), reg r1033:V, reg c542:cls, reg r1034:V, reg system2:cls, reg cmd2:*, reg cmd3:V, reg p280:p(V +), reg args10:*, reg args11:V, reg p281:p(V +), reg env:*, reg env1:V, reg p282:p(V +), reg output:*, reg output1:V, reg p283:p(V +), reg output2:*, reg output3:V, reg p284:p(V +), reg tlim4:*, reg tlim5:V, reg p285:p(V +), reg r1041:V, reg status:*, reg status1:V, reg r1042:V, reg c543:L, reg warning2:cls, reg gettextf8:cls, reg sQuote12:cls, reg update26:*, reg update27:V, reg c544:L, reg update29:V, reg dr92:V, reg dc46:L, reg dx98:V, reg dx99:V, reg i57:*, reg i58:V, reg __32:cls, reg r1043:V, reg p286:p(V +), reg r1045:V, reg p287:p(V +), reg r1047:V, reg p288:p(V +), reg r1049:V, reg i59:I, reg verbose3:*, reg verbose4:V, reg c545:L, reg paste13:cls, reg sym99:cls, reg base99:cls, reg guard99:L, reg r1051:V, reg r1052:V, reg cmd4:*, reg cmd5:V, reg args12:*, reg args13:V, reg c546:cls, reg r1053:V, reg p289:p(V +), reg r1055:V, reg message9:cls, reg sprintf5:cls, reg i62:*, reg i63:V, reg p290:p(V +), reg cmd6:*, reg cmd7:V, reg p291:p(V +), reg r1058:V, reg p292:p(V +), reg r1060:V, reg sym100:cls, reg base100:cls, reg guard100:L, reg r1061:V, reg r1062:V, reg invisible4:cls, reg r1063:V, reg destdir13:*, reg destdir14:V, reg sym101:cls, reg base101:cls, reg guard101:L, reg r1066:V, reg r1067:V, reg startsWith6:cls, reg contriburl11:*, reg contriburl12:V, reg p293:p(V +), reg r1069:V, reg all:cls, reg r1070:V, reg r1071:V, reg sym102:cls, reg base102:cls, reg guard102:L, reg r1072:V, reg r1073:V, reg destdir15:*, reg destdir16:V, reg c547:V, reg c548:L, reg c550:V, reg nonlocalrepos4:*, reg nonlocalrepos5:V, reg c551:L, reg c552:V, reg c554:L, reg file_path6:cls, reg tempdir1:cls, reg r1074:V, reg p294:p(V +), reg r1076:V, reg file_exists3:cls, reg tmpd8:*, reg tmpd9:V, reg p295:p(V +), reg r1078:V, reg r1079:V, reg c555:L, reg c557:V, reg dir_create4:cls, reg tmpd10:*, reg tmpd11:V, reg p296:p(V +), reg r1081:V, reg r1082:V, reg c558:L, reg c559:V, reg c561:L, reg stop21:cls, reg gettextf9:cls, reg sQuote13:cls, reg tmpd12:*, reg tmpd13:V, reg p297:p(V +), reg r1084:V, reg p298:p(V +), reg r1086:V, reg p299:p(V +), reg r1088:V, reg r1089:V, reg sym103:cls, reg base103:cls, reg guard103:L, reg r1091:V, reg r1092:V, reg available35:*, reg available36:V, reg c562:V, reg c563:L, reg getOption11:cls, reg r1093:V, reg sym104:cls, reg base104:cls, reg guard104:L, reg r1094:V, reg r1095:V, reg filters:*, reg filters1:V, reg c564:V, reg r1096:V, reg c565:L, reg c566:V, reg sym105:cls, reg base105:cls, reg guard105:L, reg r1097:V, reg c570:L, reg r1098:V, reg sym106:cls, reg base106:cls, reg guard106:L, reg r1099:V, reg c573:L, reg r1100:V, reg pmatch:cls, reg sym107:cls, reg base107:cls, reg guard107:L, reg r1101:V, reg r1102:V, reg ___names:cls, reg r1103:V, reg p300:p(V +), reg r1105:V, reg is_na6:cls, reg r1106:V, reg r1107:V, reg any7:cls, reg r1108:V, reg c574:L, reg c575:V, reg c577:L, reg available_packages6:cls, reg contriburl13:*, reg contriburl14:V, reg p301:p(V +), reg method23:*, reg method24:V, reg p302:p(V +), reg ddd13:dots?, reg r1111:V, reg r1112:V, reg setdiff3:cls, reg available_packages_filters_default:*, reg available_packages_filters_default1:V, reg p303:p(V +), reg sym108:cls, reg base108:cls, reg guard108:L, reg r1114:V, reg r1115:V, reg c578:cls, reg r1116:V, reg p304:p(V +), reg r1118:V, reg available_packages7:cls, reg contriburl15:*, reg contriburl16:V, reg p305:p(V +), reg f:*, reg f1:V, reg p306:p(V +), reg method25:*, reg method26:V, reg p307:p(V +), reg ddd14:dots?, reg r1122:V, reg available_packages_filters_db:*, reg available_packages_filters_db1:V, reg c579:L, reg available_packages_filters_db3:V, reg dr94:V, reg dc47:L, reg dx100:V, reg dx101:V, reg __33:cls, reg r1123:V, reg available_packages_filters_db4:*, reg available_packages_filters_db5:V, reg c580:L, reg available_packages_filters_db7:V, reg dr96:V, reg dc48:L, reg dx102:V, reg dx103:V, reg __34:cls, reg r1124:V, reg f2:cls, reg f3:cls, reg av34:*, reg av35:V, reg p308:p(V +), reg r1126:V, reg p309:p(V +), reg r1128:V, reg getDeps:*, reg getDeps1:V, reg c581:L, reg getDependencies1:cls, reg pkgs95:*, reg pkgs96:V, reg p310:p(V +), reg dependencies11:*, reg dependencies12:V, reg p311:p(V +), reg available37:*, reg available38:V, reg p312:p(V +), reg lib41:*, reg lib42:V, reg p313:p(V +), reg ddd15:dots?, reg av36:*, reg av37:V, reg p314:p(V +), reg r1135:V, reg download_packages:cls, reg pkgs97:*, reg pkgs98:V, reg p315:p(V +), reg tmpd14:*, reg tmpd15:V, reg p316:p(V +), reg available39:*, reg available40:V, reg p317:p(V +), reg contriburl17:*, reg contriburl18:V, reg p318:p(V +), reg method27:*, reg method28:V, reg p319:p(V +), reg quiet13:*, reg quiet14:V, reg p320:p(V +), reg ddd16:dots?, reg r1143:V, reg sym109:cls, reg base109:cls, reg guard109:L, reg r1144:V, reg r1145:V, reg foundpkgs:*, reg foundpkgs1:V, reg length23:cls, reg r1146:V, reg c582:L, reg verbose5:*, reg verbose6:V, reg c583:L, reg message10:cls, reg gettextf10:cls, reg paste14:cls, reg foundpkgs2:*, reg foundpkgs3:V, reg p321:p(V +), reg r1148:V, reg p322:p(V +), reg r1150:V, reg p323:p(V +), reg r1152:V, reg unique2:cls, reg cbind1:cls, reg pkgs99:*, reg pkgs100:V, reg p324:p(V +), reg lib43:*, reg lib44:V, reg p325:p(V +), reg r1156:V, reg p326:p(V +), reg r1158:V, reg sym110:cls, reg base110:cls, reg guard110:L, reg r1159:V, reg r1160:V, reg c584:cls, reg r1161:V, reg l17:*, reg colnames__:cls, reg r1162:V, reg _in_16:cls, reg pkgs101:*, reg pkgs102:V, reg p327:p(V +), reg foundpkgs4:*, reg foundpkgs5:V, reg c585:L, reg dr98:V, reg dc49:L, reg dx104:V, reg dx105:V, reg __35:cls, reg r1164:V, reg p328:p(V +), reg r1166:V, reg foundpkgs8:*, reg foundpkgs9:V, reg c586:L, reg foundpkgs11:V, reg dr100:V, reg dc50:L, reg dx106:V, reg dx107:V, reg sym111:cls, reg base111:cls, reg guard111:L, reg r1167:V, reg foundpkgs14:V, reg r1168:V, reg pkgs103:*, reg pkgs104:V, reg c587:L, reg foundpkgs16:V, reg pkgs106:V, reg dr102:V, reg dc51:L, reg dx108:V, reg foundpkgs18:V, reg dx109:V, reg found:*, reg found1:V, reg __36:cls, reg r1169:V, reg foundpkgs19:*, reg foundpkgs20:V, reg c588:L, reg foundpkgs23:V, reg dr104:V, reg dc52:L, reg dx110:V, reg foundpkgs26:V, reg dx111:V, reg __37:cls, reg r1170:V, reg match:cls, reg r1171:V, reg __38:cls, reg r1172:V, reg verbose7:*, reg verbose8:V, reg c589:L, reg message11:cls, reg gettextf11:cls, reg paste15:cls, reg files:*, reg files1:V, reg p329:p(V +), reg r1174:V, reg p330:p(V +), reg r1176:V, reg p331:p(V +), reg r1178:V, reg cbind2:cls, reg update30:*, reg update31:V, reg c590:L, reg dr106:V, reg dc53:L, reg dx112:V, reg dx113:V, reg found2:*, reg found3:V, reg __39:cls, reg r1180:V, reg p332:p(V +), reg files2:*, reg files3:V, reg p333:p(V +), reg r1183:V, reg nrow1:cls, reg update34:*, reg update35:V, reg p334:p(V +), reg r1185:V, reg r1186:V, reg c591:L, reg unique3:cls, reg update36:*, reg update37:V, reg c592:L, reg dr108:V, reg dc54:L, reg dx114:V, reg dx115:V, reg __40:cls, reg r1187:V, reg p335:p(V +), reg r1189:V, reg _make_dependency_list:cls, reg upkgs:*, reg upkgs1:V, reg p336:p(V +), reg available41:*, reg available42:V, reg p337:p(V +), reg r1192:V, reg _find_install_order:cls, reg upkgs2:*, reg upkgs3:V, reg p338:p(V +), reg DL:*, reg DL1:V, reg p339:p(V +), reg r1195:V, reg update40:*, reg update41:V, reg c593:L, reg update43:V, reg dr110:V, reg dc55:L, reg dx116:V, reg dx117:V, reg sort_list:cls, reg sym112:cls, reg base112:cls, reg guard112:L, reg r1196:V, reg r1197:V, reg pkgs107:*, reg pkgs108:V, reg p340:*, reg p341:V, reg match1:cls, reg r1198:V, reg p342:p(V +), reg r1200:V, reg __41:cls, reg r1201:V, reg Ncpus1:*, reg Ncpus2:V, reg r1202:V, reg c594:L, reg c596:V, reg nrow2:cls, reg update44:*, reg update45:V, reg p343:p(V +), reg r1204:V, reg r1205:V, reg c597:L, reg c598:V, reg c600:L, reg character1:cls, reg r1206:V, reg tlim6:*, reg tlim7:V, reg r1207:V, reg c601:L, reg _Platform32:*, reg _Platform33:V, reg c602:L, reg _Platform35:V, reg dr112:V, reg dc56:L, reg dx119:V, reg dx120:V, reg r1208:V, reg r1209:V, reg c603:L, reg c605:V, reg sym113:cls, reg base113:cls, reg guard113:L, reg r1210:V, reg c608:L, reg r1211:V, reg Sys_getenv4:cls, reg r1212:V, reg nzchar2:cls, reg r1213:V, reg r1214:V, reg c609:L, reg c610:V, reg c612:L, reg c614:V, reg grepl6:cls, reg tolower:cls, reg Sys_which1:cls, reg r1215:V, reg p344:p(V +), reg r1217:V, reg p345:p(V +), reg r1219:V, reg c615:L, reg c616:V, reg c618:L, reg warning3:cls, reg r1220:V, reg r1221:V, reg sym114:cls, reg base114:cls, reg guard114:L, reg r1222:V, reg r1223:V, reg Sys_which2:cls, reg Sys_getenv5:cls, reg r1224:V, reg p346:p(V +), reg r1226:V, reg nzchar3:cls, reg r1227:V, reg c619:L, reg sym115:cls, reg base115:cls, reg guard115:L, reg r1228:V, reg r1229:V, reg shQuote3:cls, reg timeout:*, reg timeout1:V, reg p347:p(V +), reg r1231:V, reg tlim8:*, reg tlim9:V, reg c620:cls, reg r1232:V, reg warning4:cls, reg r1233:V, reg sym116:cls, reg base116:cls, reg guard116:L, reg r1235:V, reg r1236:V, reg args14:*, reg args15:V, reg c621:cls, reg r1237:V, reg file_path7:cls, reg tempdir2:cls, reg r1238:V, reg p348:p(V +), reg r1240:V, reg file_exists4:cls, reg tmpd16:*, reg tmpd17:V, reg p349:p(V +), reg r1242:V, reg r1243:V, reg c622:L, reg c624:V, reg dir_create5:cls, reg tmpd18:*, reg tmpd19:V, reg p350:p(V +), reg r1245:V, reg r1246:V, reg c625:L, reg c626:V, reg c628:L, reg stop22:cls, reg gettextf12:cls, reg sQuote14:cls, reg tmpd20:*, reg tmpd21:V, reg p351:p(V +), reg r1248:V, reg p352:p(V +), reg r1250:V, reg p353:p(V +), reg r1252:V, reg file_path8:cls, reg tmpd22:*, reg tmpd23:V, reg p354:p(V +), reg r1255:V, reg file:cls, reg mfile:*, reg mfile1:V, reg p355:p(V +), reg r1257:V, reg paste16:cls, reg paste17:cls, reg update46:*, reg update47:V, reg c629:L, reg dr114:V, reg dc57:L, reg dx121:V, reg dx122:V, reg __42:cls, reg r1258:V, reg p356:p(V +), reg r1260:V, reg p357:p(V +), reg r1262:V, reg strwrap3:cls, reg deps:*, reg deps1:V, reg p358:p(V +), reg r1264:V, reg paste18:cls, reg deps2:*, reg deps3:V, reg p359:p(V +), reg r1266:V, reg cat7:cls, reg deps4:*, reg deps5:V, reg p360:p(V +), reg conn:*, reg conn1:V, reg p361:p(V +), reg r1269:V, reg _make_dependency_list1:cls, reg upkgs4:*, reg upkgs5:V, reg p362:p(V +), reg available43:*, reg available44:V, reg p363:p(V +), reg r1272:V, reg sym117:cls, reg base117:cls, reg guard117:L, reg r1273:V, reg r1274:V, reg nrow3:cls, reg update50:*, reg update51:V, reg p364:p(V +), reg r1276:V, reg r1277:I, reg s13:V, reg l18:I, reg i64:I, reg i65:I, reg i66:I, reg c630:L, reg x2:V, reg update52:*, reg update53:V, reg c631:L, reg i70:I, reg update55:V, reg dr116:V, reg dc58:L, reg dx123:V, reg i72:I, reg dx124:V, reg i73:*, reg i74:V, reg __43:cls, reg r1278:V, reg update56:*, reg update57:V, reg c632:L, reg i76:I, reg update59:V, reg dr118:V, reg dc59:L, reg dx125:V, reg i78:I, reg dx126:V, reg i79:*, reg i80:V, reg __44:cls, reg r1279:V, reg sym118:cls, reg base118:cls, reg guard118:L, reg r1280:V, reg i83:I, reg r1281:V, reg args16:*, reg args17:V, reg get_install_opts1:cls, reg fil:*, reg fil1:V, reg p365:p(V +), reg r1283:V, reg shQuote4:cls, reg update60:*, reg update61:V, reg c633:L, reg update63:V, reg dr120:V, reg dc60:L, reg dx127:V, reg dx128:V, reg i84:*, reg i85:V, reg __45:cls, reg r1284:V, reg p366:p(V +), reg r1286:V, reg getConfigureArgs1:cls, reg fil2:*, reg fil3:V, reg p367:p(V +), reg r1288:V, reg getConfigureVars1:cls, reg fil4:*, reg fil5:V, reg p368:p(V +), reg r1290:V, reg shQuote5:cls, reg fil6:*, reg fil7:V, reg p369:p(V +), reg r1292:V, reg paste19:cls, reg pkg:*, reg pkg1:V, reg p370:p(V +), reg r1294:V, reg c634:cls, reg r1295:V, reg paste20:cls, reg sym119:cls, reg base119:cls, reg guard119:L, reg r1296:V, reg r1297:V, reg tlim_cmd:*, reg tlim_cmd1:V, reg shQuote6:cls, reg cmd8:*, reg cmd9:V, reg p371:p(V +), reg r1299:V, reg args18:*, reg args19:V, reg c635:cls, reg r1300:V, reg p372:p(V +), reg r1302:V, reg aDL:*, reg aDL1:V, reg c636:L, reg i87:I, reg aDL3:V, reg dr122:V, reg dc61:L, reg dx129:V, reg i89:I, reg dx130:V, reg pkg2:*, reg pkg3:V, reg __46:cls, reg r1303:V, reg deps6:*, reg deps7:V, reg c637:L, reg i91:I, reg deps9:V, reg dr124:V, reg dc62:L, reg dx131:V, reg i93:I, reg dx132:V, reg _in_17:cls, reg deps10:*, reg deps11:V, reg p373:p(V +), reg upkgs6:*, reg upkgs7:V, reg p374:p(V +), reg r1306:V, reg __47:cls, reg r1307:V, reg sym120:cls, reg base120:cls, reg guard120:L, reg r1308:V, reg i96:I, reg r1309:V, reg deps12:*, reg deps13:V, reg length24:cls, reg r1310:V, reg c638:L, reg paste21:cls, reg paste22:cls, reg deps14:*, reg deps15:V, reg p375:p(V +), reg r1312:V, reg p376:p(V +), reg r1314:V, reg i99:I, reg r1315:V, reg cat8:cls, reg paste23:cls, reg pkg4:*, reg pkg5:V, reg p377:p(V +), reg deps16:*, reg deps17:V, reg p378:p(V +), reg r1318:V, reg p379:p(V +), reg paste24:cls, reg sQuote15:cls, reg pkg6:*, reg pkg7:V, reg p380:p(V +), reg r1321:V, reg p381:p(V +), reg r1323:V, reg p382:p(V +), reg paste25:cls, reg cmd10:*, reg cmd11:V, reg p383:p(V +), reg pkg8:*, reg pkg9:V, reg p384:p(V +), reg r1327:V, reg p385:p(V +), reg paste26:cls, reg pkg10:*, reg pkg11:V, reg p386:p(V +), reg r1330:V, reg p387:p(V +), reg conn2:*, reg conn3:V, reg p388:p(V +), reg r1333:V, reg close:cls, reg conn4:*, reg conn5:V, reg p389:p(V +), reg r1335:V, reg setwd:cls, reg tmpd24:*, reg tmpd25:V, reg p390:p(V +), reg r1337:V, reg sym121:cls, reg base121:cls, reg guard121:L, reg r1338:V, reg on_exit1:cls, reg r1340:V, reg system3:cls, reg Sys_getenv6:cls, reg r1341:V, reg p391:p(V +), reg sym122:cls, reg base122:cls, reg guard122:L, reg r1343:V, reg r1344:V, reg Ncpus3:*, reg Ncpus4:V, reg c639:cls, reg r1345:V, reg p392:p(V +), reg output4:*, reg output5:V, reg p393:p(V +), reg output6:*, reg output7:V, reg p394:p(V +), reg env2:*, reg env3:V, reg p395:p(V +), reg r1350:V, reg status2:*, reg status3:V, reg r1351:V, reg c640:L, reg update64:*, reg update65:V, reg c641:L, reg dr126:V, reg dc63:L, reg dx133:V, reg dx134:V, reg __48:cls, reg r1352:V, reg sub1:cls, reg dir:cls, reg r1353:V, reg p396:p(V +), reg r1355:V, reg pkgs109:*, reg pkgs110:V, reg c642:L, reg pkgs112:V, reg dr128:V, reg dc64:L, reg dx135:V, reg dx136:V, reg _in_18:cls, reg pkgs113:*, reg pkgs114:V, reg p397:p(V +), reg tss:*, reg tss1:V, reg p398:p(V +), reg r1358:V, reg r1359:V, reg __49:cls, reg r1360:V, reg failed:*, reg failed1:V, reg s14:V, reg l19:I, reg i100:I, reg i101:I, reg i102:I, reg c643:L, reg x3:V, reg file_exists5:cls, reg paste27:cls, reg pkg12:*, reg pkg13:V, reg p399:p(V +), reg r1362:V, reg p400:p(V +), reg r1364:V, reg c644:L, reg system4:cls, reg outfile:*, reg outfile1:V, reg p401:p(V +), reg r1366:V, reg i107:I, reg sym123:cls, reg base123:cls, reg guard123:L, reg r1368:V, reg r1369:V, reg failed2:*, reg failed3:V, reg length25:cls, reg r1370:V, reg n:*, reg n1:V, reg r1371:V, reg c645:L, reg warning5:cls, reg gettextf13:cls, reg sQuote16:cls, reg failed4:*, reg failed5:V, reg p402:p(V +), reg r1373:V, reg p403:p(V +), reg r1375:V, reg p404:p(V +), reg r1377:V, reg r1378:V, reg n2:*, reg n3:V, reg r1379:V, reg c646:L, reg paste28:cls, reg sQuote17:cls, reg failed6:*, reg failed7:V, reg p405:p(V +), reg r1381:V, reg p406:p(V +), reg r1383:V, reg sym124:cls, reg base124:cls, reg guard124:L, reg r1384:V, reg r1385:V, reg msg14:*, reg msg15:V, reg nchar:cls, reg r1386:V, reg r1387:V, reg c647:L, reg warning6:cls, reg gettextf14:cls, reg n4:*, reg n5:V, reg p407:p(V +), reg msg16:*, reg msg17:V, reg p408:p(V +), reg r1390:V, reg p409:p(V +), reg r1392:V, reg r1393:V, reg warning7:cls, reg gettextf15:cls, reg n6:*, reg n7:V, reg p410:p(V +), reg msg18:*, reg msg19:V, reg p411:p(V +), reg r1396:V, reg p412:p(V +), reg r1398:V, reg keep_outputs17:*, reg keep_outputs18:V, reg c648:L, reg paste29:cls, reg update68:*, reg update69:V, reg c649:L, reg dr130:V, reg dc65:L, reg dx137:V, reg dx138:V, reg __50:cls, reg r1400:V, reg p413:p(V +), reg r1402:V, reg file_copy:cls, reg outfiles:*, reg outfiles1:V, reg c650:L, reg outfiles3:V, reg dr132:V, reg dc66:L, reg dx139:V, reg dx140:V, reg file_exists6:cls, reg outfiles4:*, reg outfiles5:V, reg p414:p(V +), reg r1404:V, reg __51:cls, reg r1405:V, reg p415:p(V +), reg outdir:*, reg outdir1:V, reg p416:p(V +), reg r1408:V, reg file_copy1:cls, reg Sys_glob:cls, reg paste30:cls, reg update72:*, reg update73:V, reg c651:L, reg dr134:V, reg dc67:L, reg dx141:V, reg dx142:V, reg __52:cls, reg r1410:V, reg p417:p(V +), reg r1412:V, reg p418:p(V +), reg r1414:V, reg p419:p(V +), reg cwd:*, reg cwd1:V, reg p420:p(V +), reg r1417:V, reg file_copy2:cls, reg Sys_glob1:cls, reg paste31:cls, reg update76:*, reg update77:V, reg c652:L, reg dr136:V, reg dc68:L, reg dx143:V, reg dx144:V, reg __53:cls, reg r1418:V, reg p421:p(V +), reg r1420:V, reg p422:p(V +), reg r1422:V, reg p423:p(V +), reg cwd2:*, reg cwd3:V, reg p424:p(V +), reg r1425:V, reg file_copy3:cls, reg Sys_glob2:cls, reg paste32:cls, reg update80:*, reg update81:V, reg c653:L, reg dr138:V, reg dc69:L, reg dx145:V, reg dx146:V, reg __54:cls, reg r1426:V, reg p425:p(V +), reg r1428:V, reg p426:p(V +), reg r1430:V, reg p427:p(V +), reg cwd4:*, reg cwd5:V, reg p428:p(V +), reg r1433:V, reg setwd1:cls, reg cwd6:*, reg cwd7:V, reg p429:p(V +), reg r1435:V, reg sym125:cls, reg base125:cls, reg guard125:L, reg r1436:V, reg on_exit2:cls, reg r1438:V, reg unlink2:cls, reg tmpd26:*, reg tmpd27:V, reg p430:p(V +), reg r1440:V, reg tempfile:cls, reg r1442:V, reg dir_create6:cls, reg tmpd28:*, reg tmpd29:V, reg p431:p(V +), reg r1444:V, reg r1445:V, reg c654:L, reg stop23:cls, reg gettextf16:cls, reg sQuote18:cls, reg tmpd30:*, reg tmpd31:V, reg p432:p(V +), reg r1447:V, reg p433:p(V +), reg r1449:V, reg p434:p(V +), reg r1451:V, reg file_path9:cls, reg tmpd32:*, reg tmpd33:V, reg p435:p(V +), reg paste33:cls, reg update84:*, reg update85:V, reg c655:L, reg dr140:V, reg dc70:L, reg dx147:V, reg dx148:V, reg __55:cls, reg r1454:V, reg p436:p(V +), reg r1456:V, reg p437:p(V +), reg r1458:V, reg sym126:cls, reg base126:cls, reg guard126:L, reg r1459:V, reg r1460:V, reg nrow4:cls, reg update88:*, reg update89:V, reg p438:p(V +), reg r1462:V, reg r1463:I, reg s15:V, reg l20:I, reg i108:I, reg i109:I, reg i110:I, reg c656:L, reg x4:V, reg keep_outputs19:*, reg keep_outputs20:V, reg c657:L, reg outfiles6:*, reg outfiles7:V, reg c658:L, reg i116:I, reg outfiles9:V, reg dr142:V, reg dc71:L, reg dx149:V, reg i118:I, reg dx150:V, reg i119:*, reg i120:V, reg __56:cls, reg r1464:V, reg i121:I, reg dx151:V, reg output8:*, reg output9:V, reg update90:*, reg update91:V, reg c659:L, reg i123:I, reg update93:V, reg dr144:V, reg dc72:L, reg dx152:V, reg i125:I, reg dx153:V, reg i126:*, reg i127:V, reg __57:cls, reg r1465:V, reg sym127:cls, reg base127:cls, reg guard127:L, reg r1466:V, reg i130:I, reg r1467:V, reg args20:*, reg args21:V, reg get_install_opts2:cls, reg fil8:*, reg fil9:V, reg p439:p(V +), reg r1469:V, reg shQuote7:cls, reg update94:*, reg update95:V, reg c660:L, reg update97:V, reg dr146:V, reg dc73:L, reg dx154:V, reg dx155:V, reg i131:*, reg i132:V, reg __58:cls, reg r1470:V, reg p440:p(V +), reg r1472:V, reg getConfigureArgs2:cls, reg fil10:*, reg fil11:V, reg p441:p(V +), reg r1474:V, reg getConfigureVars2:cls, reg fil12:*, reg fil13:V, reg p442:p(V +), reg r1476:V, reg shQuote8:cls, reg fil14:*, reg fil15:V, reg p443:p(V +), reg r1478:V, reg c661:cls, reg r1479:V, reg system5:cls, reg cmd12:*, reg cmd13:V, reg p444:p(V +), reg args22:*, reg args23:V, reg p445:p(V +), reg env4:*, reg env5:V, reg p446:p(V +), reg outfile2:*, reg outfile3:V, reg p447:p(V +), reg outfile4:*, reg outfile5:V, reg p448:p(V +), reg tlim10:*, reg tlim11:V, reg p449:p(V +), reg r1486:V, reg quiet15:*, reg quiet16:V, reg r1487:V, reg c662:L, reg i134:I, reg c664:V, reg keep_outputs21:*, reg keep_outputs22:V, reg c665:L, reg c666:V, reg c668:L, reg writeLines:cls, reg readLines:cls, reg outfile6:*, reg outfile7:V, reg p450:p(V +), reg r1489:V, reg p451:p(V +), reg r1491:V, reg i138:I, reg status4:*, reg status5:V, reg r1493:V, reg c669:L, reg warning8:cls, reg gettextf17:cls, reg sQuote19:cls, reg update98:*, reg update99:V, reg c670:L, reg update101:V, reg dr148:V, reg dc74:L, reg dx156:V, reg dx157:V, reg i141:*, reg i142:V, reg __59:cls, reg r1494:V, reg p452:p(V +), reg r1496:V, reg p453:p(V +), reg r1498:V, reg p454:p(V +), reg r1500:V, reg i143:I, reg verbose9:*, reg verbose10:V, reg c671:L, reg paste34:cls, reg sym128:cls, reg base128:cls, reg guard128:L, reg r1502:V, reg r1503:V, reg cmd14:*, reg cmd15:V, reg args24:*, reg args25:V, reg c672:cls, reg r1504:V, reg p455:p(V +), reg r1506:V, reg message12:cls, reg sprintf6:cls, reg i146:*, reg i147:V, reg p456:p(V +), reg cmd16:*, reg cmd17:V, reg p457:p(V +), reg r1509:V, reg p458:p(V +), reg r1511:V, reg keep_outputs23:*, reg keep_outputs24:V, reg c673:L, reg file_copy4:cls, reg outfiles10:*, reg outfiles11:V, reg p459:p(V +), reg outdir2:*, reg outdir3:V, reg p460:p(V +), reg r1514:V, reg unlink3:cls, reg tmpd34:*, reg tmpd35:V, reg p461:p(V +), reg r1517:V, reg quiet17:*, reg quiet18:V, reg r1518:V, reg c674:L, reg c676:V, reg nonlocalrepos6:*, reg nonlocalrepos7:V, reg c677:L, reg c678:V, reg c680:L, reg c682:V, reg sym129:cls, reg base129:cls, reg guard129:L, reg r1519:V, reg c685:L, reg r1520:V, reg tmpd36:*, reg tmpd37:V, reg c686:V, reg r1521:V, reg c687:L, reg c688:V, reg c690:L, reg c692:V, reg sym130:cls, reg base130:cls, reg guard130:L, reg r1522:V, reg c695:L, reg r1523:V, reg destdir17:*, reg destdir18:V, reg c696:V, reg c697:L, reg c698:V, reg c700:L, reg cat9:cls, reg gettextf18:cls, reg sQuote20:cls, reg normalizePath2:cls, reg tmpd38:*, reg tmpd39:V, reg p462:p(V +), reg r1525:V, reg p463:p(V +), reg r1527:V, reg p464:p(V +), reg r1529:V, reg p465:p(V +), reg stderr:cls, reg r1531:V, reg p466:p(V +), reg r1533:V, reg unique4:cls, reg update102:*, reg update103:V, reg c701:L, reg dr150:V, reg dc75:L, reg dx158:V, reg dx159:V, reg __60:cls, reg r1535:V, reg p467:p(V +), reg r1537:V, reg _Platform36:*, reg _Platform37:V, reg c702:L, reg _Platform39:V, reg dr152:V, reg dc76:L, reg dx160:V, reg dx161:V, reg r1538:V, reg r1539:V, reg c703:L, reg c705:V, reg _in_19:cls, reg _Library:*, reg _Library1:V, reg p468:p(V +), reg libs_used:*, reg libs_used1:V, reg p469:p(V +), reg r1542:V, reg c706:L, reg c707:V, reg c709:L, reg message13:cls, reg r1543:V, reg make_packages_html:cls, reg _Library2:*, reg _Library3:V, reg p470:p(V +), reg r1545:V, reg r1546:V, reg sym131:cls, reg base131:cls, reg guard131:L, reg r1548:V, reg r1549:V, reg tmpd40:*, reg tmpd41:V, reg c710:V, reg r1550:V, reg c711:L, reg c713:V, reg sym132:cls, reg base132:cls, reg guard132:L, reg r1551:V, reg c716:L, reg r1552:V, reg destdir19:*, reg destdir20:V, reg c717:V, reg c718:L, reg c719:V, reg c721:L, reg unlink4:cls, reg tmpd42:*, reg tmpd43:V, reg p471:p(V +), reg r1554:V, reg sym133:cls, reg base133:cls, reg guard133:L, reg r1555:V, reg r1556:V, reg invisible5:cls, reg r1557:V |
    mkenv;
    st pkgs = pkgs;
    st lib = lib;
    repos_isMissing = missing.0(repos);
    if repos_isMissing then L0() else L1(repos);
  L0():
    p = prom<V +>{
      getOption = ldf getOption;
      r = dyn getOption("repos");
      return r;
    };
    goto L1(p);
  L1(repos_orDefault):
    st repos = repos_orDefault;
    contriburl_isMissing = missing.0(contriburl);
    if contriburl_isMissing then L2() else L3(contriburl);
  L2():
    p3 = prom<V +>{
      contrib_url = ldf `contrib.url`;
      p1 = prom<V +>{
        repos1 = ld repos;
        repos2 = force? repos1;
        checkMissing(repos2);
        return repos2;
      };
      p2 = prom<V +>{
        type1 = ld type;
        type2 = force? type1;
        checkMissing(type2);
        return type2;
      };
      r4 = dyn contrib_url(p1, p2);
      return r4;
    };
    goto L3(p3);
  L3(contriburl_orDefault):
    st contriburl = contriburl_orDefault;
    st method = method;
    available_isMissing = missing.0(available);
    if available_isMissing then L4(NULL) else L4(available);
  L4(available_orDefault):
    st available = available_orDefault;
    destdir_isMissing = missing.0(destdir);
    if destdir_isMissing then L5(NULL) else L5(destdir);
  L5(destdir_orDefault):
    st destdir = destdir_orDefault;
    dependencies_isMissing = missing.0(dependencies);
    if dependencies_isMissing then L6(NA_LGL) else L6(dependencies);
  L6(dependencies_orDefault):
    st dependencies = dependencies_orDefault;
    type_isMissing = missing.0(type);
    if type_isMissing then L7() else L8(type);
  L7():
    p4 = prom<V +>{
      getOption1 = ldf getOption;
      r6 = dyn getOption1("pkgType");
      return r6;
    };
    goto L8(p4);
  L8(type_orDefault):
    st type = type_orDefault;
    configure_args_isMissing = missing.0(configure_args);
    if configure_args_isMissing then L9() else L10(configure_args);
  L9():
    p5 = prom<V +>{
      getOption2 = ldf getOption;
      r8 = dyn getOption2("configure.args");
      return r8;
    };
    goto L10(p5);
  L10(configure_args_orDefault):
    st `configure.args` = configure_args_orDefault;
    configure_vars_isMissing = missing.0(configure_vars);
    if configure_vars_isMissing then L11() else L12(configure_vars);
  L11():
    p6 = prom<V +>{
      getOption3 = ldf getOption;
      r10 = dyn getOption3("configure.vars");
      return r10;
    };
    goto L12(p6);
  L12(configure_vars_orDefault):
    st `configure.vars` = configure_vars_orDefault;
    clean_isMissing = missing.0(clean);
    if clean_isMissing then L13(FALSE) else L13(clean);
  L13(clean_orDefault):
    st clean = clean_orDefault;
    Ncpus_isMissing = missing.0(Ncpus);
    if Ncpus_isMissing then L14() else L15(Ncpus);
  L14():
    p7 = prom<V +>{
      getOption4 = ldf getOption;
      r12 = dyn getOption4("Ncpus", 1);
      return r12;
    };
    goto L15(p7);
  L15(Ncpus_orDefault):
    st Ncpus = Ncpus_orDefault;
    verbose_isMissing = missing.0(verbose);
    if verbose_isMissing then L16() else L17(verbose);
  L16():
    p8 = prom<V +>{
      getOption5 = ldf getOption;
      r14 = dyn getOption5("verbose");
      return r14;
    };
    goto L17(p8);
  L17(verbose_orDefault):
    st verbose = verbose_orDefault;
    libs_only_isMissing = missing.0(libs_only);
    if libs_only_isMissing then L18(FALSE) else L18(libs_only);
  L18(libs_only_orDefault):
    st libs_only = libs_only_orDefault;
    st INSTALL_opts = INSTALL_opts;
    quiet_isMissing = missing.0(quiet);
    if quiet_isMissing then L19(FALSE) else L19(quiet);
  L19(quiet_orDefault):
    st quiet = quiet_orDefault;
    keep_outputs_isMissing = missing.0(keep_outputs);
    if keep_outputs_isMissing then L20(FALSE) else L20(keep_outputs);
  L20(keep_outputs_orDefault):
    st keep_outputs = keep_outputs_orDefault;
    st `...` = ddd;
    sym = ldf `is.character`;
    base = ldf `is.character` in base;
    guard = `==`.4(sym, base);
    if guard then L484() else L485();
  L21(r17):
    c1 = `as.logical`(r17);
    if c1 then L487() else L22(c1);
  L484():
    type3 = ld type;
    check L486() else D0();
  L485():
    r16 = dyn base(<sym type>);
    goto L21(r16);
  D0():
    deopt 1 [type3];
  L22(c3):
    r22 = `!`(c3);
    c10 = `as.logical`(r22);
    if c10 then L493() else L24();
  L486():
    type4 = force? type3;
    checkMissing(type4);
    c = `is.character`(type4);
    goto L21(c);
  L487():
    sym1 = ldf length;
    base1 = ldf length in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L488() else L489();
  L23(c6, r19):
    r21 = `==`(r19, 1);
    c7 = `as.logical`(r21);
    c8 = `&&`(c6, c7);
    goto L22(c8);
  L24():
    goto L25();
  L25():
    _Platform = ld `.Platform`;
    check L497() else D5();
  L488():
    type5 = ld type;
    check L490() else D1();
  L489():
    r18 = dyn base1(<sym type>);
    goto L23(c1, r18);
  L493():
    stop = ldf stop;
    check L494() else D3();
  D1():
    deopt 6 [c1, type5];
  D3():
    deopt 15 [];
  D5():
    deopt 22 [_Platform];
  L490():
    type6 = force? type5;
    checkMissing(type6);
    length = ldf length in base;
    r20 = dyn length(type6);
    check L491() else D2();
  L494():
    p9 = prom<V +>{
      gettextf = ldf gettextf;
      r23 = dyn gettextf("'%s' must be a character string", "type");
      return r23;
    };
    r25 = dyn stop[, domain](p9, NA_LGL);
    check L495() else D4();
  L497():
    _Platform1 = force? _Platform;
    checkMissing(_Platform1);
    c11 = `is.object`(_Platform1);
    if c11 then L499() else L500(_Platform1);
  D2():
    deopt 9 [c1, r20];
  D4():
    deopt 19 [r25];
  L491():
    goto L23(c1, r20);
  L495():
    goto L25();
  L498(dx1):
    st type2 = dx1;
    type7 = ld type;
    check L502() else D6();
  L499():
    dr = tryDispatchBuiltin.1("$", _Platform1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L501() else L500(dr);
  L500(_Platform3):
    r27 = `$`(_Platform3, <sym pkgType>);
    goto L498(r27);
  D6():
    deopt 26 [type7];
  L501():
    dx = getTryDispatchBuiltinValue(dr);
    goto L498(dx);
  L502():
    type8 = force? type7;
    checkMissing(type8);
    r28 = `==`(type8, "binary");
    c12 = `as.logical`(r28);
    if c12 then L503() else L26();
  L26():
    goto L35();
  L35():
    sym4 = ldf `is.logical`;
    base4 = ldf `is.logical` in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L525() else L526();
  L503():
    type9 = ld type2;
    check L504() else D7();
  D7():
    deopt 30 [type9];
  L36(r44):
    c41 = `as.logical`(r44);
    if c41 then L528() else L37(c41);
  L504():
    type10 = force? type9;
    checkMissing(type10);
    r29 = `==`(type10, "source");
    c13 = `as.logical`(r29);
    if c13 then L505() else L27();
  L525():
    clean1 = ld clean;
    check L527() else D15();
  L526():
    r43 = dyn base4(<sym clean>);
    goto L36(r43);
  D15():
    deopt 65 [clean1];
  L27():
    type11 = ld type2;
    check L509() else D10();
  L28():
    type13 = ld type;
    check L510() else D11();
  L37(c43):
    c47 = `as.logical`(c43);
    if c47 then L531() else L38();
  L505():
    stop1 = ldf stop;
    check L506() else D8();
  L527():
    clean2 = force? clean1;
    checkMissing(clean2);
    c40 = `is.logical`(clean2);
    goto L36(c40);
  L528():
    clean3 = ld clean;
    check L529() else D16();
  D8():
    deopt 35 [];
  D10():
    deopt 38 [type11];
  D11():
    deopt 41 [type13];
  D16():
    deopt 68 [c41, clean3];
  L38():
    goto L39();
  L39():
    sym5 = ldf `is.logical`;
    base5 = ldf `is.logical` in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L533() else L534();
  L506():
    r30 = dyn stop1("type 'binary' is not supported on this platform");
    check L507() else D9();
  L509():
    type12 = force? type11;
    checkMissing(type12);
    st type = type12;
    goto L28();
  L510():
    type14 = force? type13;
    checkMissing(type14);
    r32 = `==`(type14, "both");
    c14 = `as.logical`(r32);
    if c14 then L511() else L29(c14);
  L529():
    clean4 = force? clean3;
    checkMissing(clean4);
    c44 = `as.logical`(clean4);
    c45 = `&&`(c41, c44);
    goto L37(c45);
  L531():
    st clean = "--clean";
    goto L39();
  D9():
    deopt 37 [r30];
  L29(c16):
    c39 = `as.logical`(c16);
    if c39 then L520() else L33();
  L40(r47):
    c49 = `as.logical`(r47);
    if c49 then L536() else L41(c49);
  L507():
    goto L28();
  L511():
    sym2 = ldf missing;
    base2 = ldf missing in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L512() else L513();
  L533():
    dependencies1 = ld dependencies;
    check L535() else D17();
  L534():
    r46 = dyn base5(<sym dependencies>);
    goto L40(r46);
  D17():
    deopt 77 [dependencies1];
  L30(c19, r34):
    r36 = `!`(r34);
    c20 = `as.logical`(r36);
    if c20 then L31(c19, c20) else L514();
  L33():
    goto L34(NULL);
  L34(r41):
    goto L35();
  L41(c51):
    c58 = `as.logical`(c51);
    if c58 then L542() else L43();
  L512():
    missing = ldf missing in base;
    r35 = dyn missing(<sym contriburl>);
    goto L30(c14, r35);
  L513():
    r33 = dyn base2(<sym contriburl>);
    goto L30(c14, r33);
  L520():
    stop2 = ldf stop;
    check L521() else D13();
  L535():
    dependencies2 = force? dependencies1;
    checkMissing(dependencies2);
    c48 = `is.logical`(dependencies2);
    goto L40(c48);
  L536():
    sym6 = ldf `is.na`;
    base6 = ldf `is.na` in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L537() else L538();
  D13():
    deopt 57 [];
  L31(c21, c22):
    c36 = `as.logical`(c22);
    c37 = `&&`(c21, c36);
    goto L29(c37);
  L42(c54, r49):
    c55 = `as.logical`(r49);
    c56 = `&&`(c54, c55);
    goto L41(c56);
  L43():
    goto L49();
  L49():
    r63 = clos inner423301576;
    st get_package_name = r63;
    r64 = clos inner423301576;
    st getConfigureArgs = r64;
    r65 = clos inner423301576;
    st getConfigureVars = r65;
    r66 = clos inner423301576;
    st get_install_opts = r66;
    sym10 = ldf missing;
    base10 = ldf missing in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L557() else L558();
  L514():
    sym3 = ldf `is.null`;
    base3 = ldf `is.null` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L515() else L516();
  L521():
    r40 = dyn stop2("specifying 'contriburl' or 'available' requires a single type, not type = \"both\"");
    check L522() else D14();
  L537():
    dependencies3 = ld dependencies;
    check L539() else D18();
  L538():
    r48 = dyn base6(<sym dependencies>);
    goto L42(c49, r48);
  L542():
    sym7 = ldf missing;
    base7 = ldf missing in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L543() else L544();
  D14():
    deopt 59 [r40];
  D18():
    deopt 82 [c49, dependencies3];
  L32(c29, c30, r38):
    r39 = `!`(r38);
    c32 = `as.logical`(r39);
    c33 = `||`(c30, c32);
    goto L31(c29, c33);
  L44(r52):
    r54 = `!`(r52);
    c59 = `as.logical`(r54);
    if c59 then L545() else L45(c59);
  L50(r68):
    c70 = `as.logical`(r68);
    if c70 then L559() else L51();
  L515():
    available1 = ld available;
    check L517() else D12();
  L516():
    r37 = dyn base3(<sym available>);
    goto L32(c19, c20, r37);
  L522():
    goto L34(r40);
  L539():
    dependencies4 = force? dependencies3;
    checkMissing(dependencies4);
    is_na = ldf `is.na` in base;
    r50 = dyn is_na(dependencies4);
    check L540() else D19();
  L543():
    missing1 = ldf missing in base;
    r53 = dyn missing1(<sym lib>);
    goto L44(r53);
  L544():
    r51 = dyn base7(<sym lib>);
    goto L44(r51);
  L557():
    missing2 = ldf missing in base;
    r69 = dyn missing2(<sym pkgs>);
    goto L50(r69);
  L558():
    r67 = dyn base10(<sym pkgs>);
    goto L50(r67);
  D12():
    deopt 50 [c19, c20, available1];
  D19():
    deopt 85 [c49, r50];
  L45(c61):
    c68 = `as.logical`(c61);
    if c68 then L551() else L47();
  L51():
    goto L71();
  L71():
    _Platform12 = ld `.Platform`;
    check L620() else D48();
  L517():
    available2 = force? available1;
    checkMissing(available2);
    c31 = `==`(available2, NULL);
    goto L32(c19, c20, c31);
  L540():
    goto L42(c49, r50);
  L545():
    sym8 = ldf length;
    base8 = ldf length in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L546() else L547();
  L559():
    sym11 = ldf interactive;
    base11 = ldf interactive in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L560() else L561();
  D48():
    deopt 224 [_Platform12];
  L46(c64, r56):
    r58 = `>`(r56, 1);
    c65 = `as.logical`(r58);
    c66 = `&&`(c64, c65);
    goto L45(c66);
  L47():
    sym9 = ldf c;
    base9 = ldf c in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L553() else L554();
  L48(r59):
    st dependencies = r59;
    goto L49();
  L52(r71):
    r73 = `!`(r71);
    c71 = `as.logical`(r73);
    if c71 then L563() else L53();
  L546():
    lib1 = ld lib;
    check L548() else D20();
  L547():
    r55 = dyn base8(<sym lib>);
    goto L46(c59, r55);
  L551():
    goto L48(FALSE);
  L560():
    interactive = ldf interactive in base;
    r72 = dyn interactive();
    check L562() else D23();
  L561():
    r70 = dyn base11();
    goto L52(r70);
  L620():
    _Platform13 = force? _Platform12;
    checkMissing(_Platform13);
    c114 = `is.object`(_Platform13);
    if c114 then L622() else L623(_Platform13);
  D20():
    deopt 93 [c59, lib1];
  D23():
    deopt 130 [r72];
  L53():
    goto L54();
  L54():
    _Platform4 = ld `.Platform`;
    check L567() else D26();
  L548():
    lib2 = force? lib1;
    checkMissing(lib2);
    length1 = ldf length in base;
    r57 = dyn length1(lib2);
    check L549() else D21();
  L553():
    c69 = ldf c in base;
    r61 = dyn c69("Depends", "Imports", "LinkingTo");
    check L555() else D22();
  L554():
    r60 = dyn base9("Depends", "Imports", "LinkingTo");
    goto L48(r60);
  L562():
    goto L52(r72);
  L563():
    stop3 = ldf stop;
    check L564() else D24();
  L621(dx7):
    r111 = `==`(dx7, "windows");
    c115 = `as.logical`(r111);
    if c115 then L625() else L72(c115);
  L622():
    dr6 = tryDispatchBuiltin.1("$", _Platform13);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L624() else L623(dr6);
  L623(_Platform15):
    r110 = `$`(_Platform15, <sym OS.type>);
    goto L621(r110);
  D21():
    deopt 96 [c59, r57];
  D22():
    deopt 108 [r61];
  D24():
    deopt 133 [];
  D26():
    deopt 138 [_Platform4];
  L72(c117):
    c124 = `as.logical`(c117);
    if c124 then L631() else L74();
  L549():
    goto L46(c59, r57);
  L555():
    goto L48(r61);
  L564():
    r74 = dyn stop3("no packages were specified");
    check L565() else D25();
  L567():
    _Platform5 = force? _Platform4;
    checkMissing(_Platform5);
    c72 = `is.object`(_Platform5);
    if c72 then L569() else L570(_Platform5);
  L624():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L621(dx6);
  L625():
    sym14 = ldf length;
    base14 = ldf length in base;
    guard14 = `==`.4(sym14, base14);
    if guard14 then L626() else L627();
  D25():
    deopt 135 [r74];
  L73(c120, r113):
    c121 = `as.logical`(r113);
    c122 = `&&`(c120, c121);
    goto L72(c122);
  L74():
    goto L79();
  L79():
    sym17 = ldf length;
    base17 = ldf length in base;
    guard17 = `==`.4(sym17, base17);
    if guard17 then L654() else L655();
  L565():
    goto L54();
  L568(dx3):
    r77 = `==`(dx3, "windows");
    c73 = `as.logical`(r77);
    if c73 then L55(c73) else L572();
  L569():
    dr2 = tryDispatchBuiltin.1("$", _Platform5);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L571() else L570(dr2);
  L570(_Platform7):
    r76 = `$`(_Platform7, <sym OS.type>);
    goto L568(r76);
  L626():
    pkgs1 = ld pkgs;
    check L628() else D49();
  L627():
    r112 = dyn base14(<sym pkgs>);
    goto L73(c115, r112);
  L631():
    get_package_name = ldf get_package_name;
    check L632() else D51();
  D49():
    deopt 231 [c115, pkgs1];
  D51():
    deopt 237 [];
  L55(c74):
    c84 = `as.logical`(c74);
    if c84 then L56(c84) else L579();
  L80(r147):
    r149 = `!`(r147);
    c129 = `as.logical`(r149);
    if c129 then L658() else L81();
  L571():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L568(dx2);
  L572():
    _Platform8 = ld `.Platform`;
    check L573() else D27();
  L628():
    pkgs2 = force? pkgs1;
    checkMissing(pkgs2);
    length2 = ldf length in base;
    r114 = dyn length2(pkgs2);
    check L629() else D50();
  L632():
    p18 = prom<V +>{
      pkgs3 = ld pkgs;
      pkgs4 = force? pkgs3;
      checkMissing(pkgs4);
      return pkgs4;
    };
    r116 = dyn get_package_name(p18);
    check L633() else D52();
  L654():
    pkgs9 = ld pkgs;
    check L656() else D65();
  L655():
    r146 = dyn base17(<sym pkgs>);
    goto L80(r146);
  D27():
    deopt 143 [c73, _Platform8];
  D50():
    deopt 234 [c115, r114];
  D52():
    deopt 239 [r116];
  D65():
    deopt 287 [pkgs9];
  L56(c85):
    c108 = `as.logical`(c85);
    if c108 then L591() else L59();
  L81():
    sym19 = ldf missing;
    base19 = ldf missing in base;
    guard19 = `==`.4(sym19, base19);
    if guard19 then L664() else L665();
  L573():
    _Platform9 = force? _Platform8;
    checkMissing(_Platform9);
    c76 = `is.object`(_Platform9);
    if c76 then L575() else L576(c73, _Platform9);
  L579():
    capabilities = ldf capabilities;
    check L580() else D28();
  L629():
    goto L73(c115, r114);
  L633():
    st pkgnames = r116;
    search = ldf search;
    check L634() else D53();
  L656():
    pkgs10 = force? pkgs9;
    checkMissing(pkgs10);
    length3 = ldf length in base;
    r148 = dyn length3(pkgs10);
    check L657() else D66();
  L658():
    sym18 = ldf invisible;
    base18 = ldf invisible in base;
    guard18 = `==`.4(sym18, base18);
    if guard18 then L659() else L660();
  D28():
    deopt 150 [c84];
  D53():
    deopt 242 [];
  D66():
    deopt 290 [r148];
  L59():
    stop4 = ldf stop;
    check L593() else D34();
  L60():
    sym12 = ldf `is.null`;
    base12 = ldf `is.null` in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L595() else L596();
  L82(r151):
    popenv;
    return r151;
  L84(r156):
    c130 = `as.logical`(r156);
    if c130 then L85(c130) else L666();
  L574(c80, dx5):
    r79 = `==`(dx5, "AQUA");
    c81 = `as.logical`(r79);
    c82 = `||`(c80, c81);
    goto L55(c82);
  L575():
    dr4 = tryDispatchBuiltin.1("$", _Platform9);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L577() else L576(c73, dr4);
  L576(c78, _Platform11):
    r78 = `$`(_Platform11, <sym GUI>);
    goto L574(c78, r78);
  L580():
    r80 = dyn capabilities("tcltk");
    check L581() else D29();
  L591():
    goto L60();
  L634():
    r117 = dyn search();
    check L635() else D54();
  L657():
    goto L80(r148);
  L659():
    invisible = ldf invisible in base;
    r152 = dyn invisible();
    check L661() else D67();
  L660():
    r150 = dyn base18();
    goto L82(r150);
  L664():
    missing4 = ldf missing in base;
    r157 = dyn missing4(<sym lib>);
    goto L84(r157);
  L665():
    r155 = dyn base19(<sym lib>);
    goto L84(r155);
  D29():
    deopt 152 [c84, r80];
  D34():
    deopt 167 [];
  D54():
    deopt 243 [r117];
  D67():
    deopt 295 [r152];
  L61(r88):
    c110 = `as.logical`(r88);
    if c110 then L598() else L62();
  L85(c131):
    c140 = `as.logical`(c131);
    if c140 then L671() else L87();
  L577():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L574(c73, dx4);
  L581():
    c87 = `as.logical`(r80);
    if c87 then L582() else L57(c84, c87);
  L593():
    r86 = dyn stop4("no packages were specified");
    check L594() else D35();
  L595():
    available3 = ld available;
    check L597() else D36();
  L596():
    r87 = dyn base12(<sym available>);
    goto L61(r87);
  L635():
    st inuse = r117;
    sub = ldf sub;
    check L636() else D55();
  L661():
    goto L82(r152);
  L666():
    sym20 = ldf `is.null`;
    base20 = ldf `is.null` in base;
    guard20 = `==`.4(sym20, base20);
    if guard20 then L667() else L668();
  D35():
    deopt 169 [r86];
  D36():
    deopt 171 [available3];
  D55():
    deopt 246 [];
  L57(c90, c91):
    c96 = `as.logical`(c91);
    if c96 then L586() else L58(c90, c96);
  L62():
    available5 = ld available;
    check L612() else D43();
  L68():
    NROW = ldf NROW;
    check L613() else D44();
  L86(c135, r159):
    c137 = `as.logical`(r159);
    c138 = `||`(c135, c137);
    goto L85(c138);
  L87():
    goto L93();
  L93():
    dir_exists = ldf `dir.exists`;
    check L690() else D77();
  L582():
    capabilities1 = ldf capabilities;
    check L583() else D30();
  L594():
    goto L60();
  L597():
    available4 = force? available3;
    checkMissing(available4);
    c109 = `==`(available4, NULL);
    goto L61(c109);
  L598():
    available_packages = ldf `available.packages`;
    check L599() else D37();
  L636():
    p20 = prom<V +>{
      inuse = ld inuse;
      inuse1 = force? inuse;
      checkMissing(inuse1);
      c125 = `is.object`(inuse1);
      if c125 then L1() else L2(inuse1);
    L0(dx9):
      return dx9;
    L1():
      dr8 = tryDispatchBuiltin.1("[", inuse1);
      dc4 = getTryDispatchBuiltinDispatched(dr8);
      if dc4 then L3() else L2(dr8);
    L2(inuse3):
      grep = ldf grep;
      p19 = prom<V +>{
        inuse4 = ld inuse;
        inuse5 = force? inuse4;
        checkMissing(inuse5);
        return inuse5;
      };
      r119 = dyn grep("^package:", p19);
      __1 = ldf `[` in base;
      r120 = dyn __1(inuse3, r119);
      goto L0(r120);
    L3():
      dx8 = getTryDispatchBuiltinValue(dr8);
      goto L0(dx8);
    };
    r122 = dyn sub("^package:", "", p20);
    check L637() else D56();
  L667():
    lib3 = ld lib;
    check L669() else D68();
  L668():
    r158 = dyn base20(<sym lib>);
    goto L86(c130, r158);
  L671():
    _libPaths = ldf `.libPaths`;
    check L672() else D69();
  D30():
    deopt 154 [c84, c87];
  D37():
    deopt 175 [];
  D43():
    deopt 202 [available5];
  D44():
    deopt 206 [];
  D56():
    deopt 250 [r122];
  D68():
    deopt 303 [c130, lib3];
  D69():
    deopt 308 [];
  D77():
    deopt 338 [];
  L58(c99, c100):
    c105 = `as.logical`(c100);
    c106 = `||`(c99, c105);
    goto L56(c106);
  L583():
    r81 = dyn capabilities1("X11");
    check L584() else D31();
  L586():
    suppressWarnings = ldf suppressWarnings;
    check L587() else D32();
  L599():
    p11 = prom<V +>{
      contriburl1 = ld contriburl;
      contriburl2 = force? contriburl1;
      checkMissing(contriburl2);
      return contriburl2;
    };
    p12 = prom<V +>{
      method1 = ld method;
      method2 = force? method1;
      checkMissing(method2);
      return method2;
    };
    ddd1 = ld `...`;
    r91 = dyn available_packages[contriburl, method, `...`](p11, p12, ddd1);
    check L600() else D38();
  L612():
    available6 = force? available5;
    checkMissing(available6);
    st av = available6;
    goto L68();
  L613():
    p13 = prom<V +>{
      av4 = ld av;
      av5 = force? av4;
      checkMissing(av5);
      return av5;
    };
    r99 = dyn NROW(p13);
    check L614() else D45();
  L637():
    st inuse = r122;
    _in_ = ldf `%in%`;
    check L638() else D57();
  L669():
    lib4 = force? lib3;
    checkMissing(lib4);
    c136 = `==`(lib4, NULL);
    goto L86(c130, c136);
  L672():
    r160 = dyn _libPaths();
    check L673() else D70();
  L690():
    p35 = prom<V +>{
      lib7 = ld lib;
      lib8 = force? lib7;
      checkMissing(lib8);
      return lib8;
    };
    r187 = dyn dir_exists(p35);
    check L691() else D78();
  D31():
    deopt 156 [c84, c87, r81];
  D32():
    deopt 159 [c90, c96];
  D38():
    deopt 181 [r91];
  D45():
    deopt 208 [r99];
  D57():
    deopt 253 [];
  D70():
    deopt 309 [r160];
  D78():
    deopt 340 [r187];
  L584():
    c92 = `as.logical`(r81);
    c93 = `&&`(c87, c92);
    goto L57(c84, c93);
  L587():
    p10 = prom<V +>{
      __ = ldf `::`;
      r82 = dyn __("tcltk", ".TkUp");
      return r82;
    };
    r84 = dyn suppressWarnings(p10);
    check L588() else D33();
  L600():
    st av = r91;
    sym13 = ldf missing;
    base13 = ldf missing in base;
    guard13 = `==`.4(sym13, base13);
    if guard13 then L601() else L602();
  L614():
    c113 = `as.logical`(r99);
    if c113 then L615() else L69();
  L638():
    p21 = prom<V +>{
      pkgnames = ld pkgnames;
      pkgnames1 = force? pkgnames;
      checkMissing(pkgnames1);
      return pkgnames1;
    };
    p22 = prom<V +>{
      inuse6 = ld inuse;
      inuse7 = force? inuse6;
      checkMissing(inuse7);
      return inuse7;
    };
    r125 = dyn _in_(p21, p22);
    check L639() else D58();
  L673():
    c141 = `is.object`(r160);
    if c141 then L674() else L675(r160);
  L691():
    file_access = ldf `file.access`;
    check L692() else D79();
  D33():
    deopt 161 [c90, c96, r84];
  D58():
    deopt 256 [r125];
  D79():
    deopt 341 [r187];
  L63(r93):
    c111 = `as.logical`(r93);
    if c111 then L603() else L64();
  L69():
    goto L70(NULL);
  L70(r108):
    goto L71();
  L88(dx17):
    st lib = dx17;
    quiet1 = ld quiet;
    check L677() else D71();
  L588():
    c101 = `as.logical`(r84);
    c102 = `&&`(c96, c101);
    goto L58(c90, c102);
  L601():
    missing3 = ldf missing in base;
    r94 = dyn missing3(<sym repos>);
    goto L63(r94);
  L602():
    r92 = dyn base13(<sym repos>);
    goto L63(r92);
  L615():
    select_list = ldf `select.list`;
    check L616() else D46();
  L639():
    st inuse = r125;
    sym15 = ldf any;
    base15 = ldf any in base;
    guard15 = `==`.4(sym15, base15);
    if guard15 then L640() else L641();
  L674():
    dr14 = tryDispatchBuiltin.1("[", r160);
    dc7 = getTryDispatchBuiltinDispatched(dr14);
    if dc7 then L676() else L675(dr14);
  L675(r162):
    __4 = ldf `[` in base;
    r163 = dyn __4(r162, 1);
    goto L88(r163);
  L692():
    p36 = prom<V +>{
      lib9 = ld lib;
      lib10 = force? lib9;
      checkMissing(lib10);
      return lib10;
    };
    r189 = dyn file_access(p36, 2.0);
    check L693() else D80();
  D46():
    deopt 210 [];
  D71():
    deopt 314 [quiet1];
  D80():
    deopt 344 [r187, r189];
  L64():
    goto L65();
  L65():
    type15 = ld type;
    check L607() else D41();
  L75(r127):
    c126 = `as.logical`(r127);
    if c126 then L644() else L76();
  L603():
    getOption6 = ldf getOption;
    check L604() else D39();
  L616():
    p17 = prom<V +>{
      sort = ldf sort;
      p16 = prom<V +>{
        unique = ldf unique;
        p15 = prom<V +>{
          rownames = ldf rownames;
          p14 = prom<V +>{
            av6 = ld av;
            av7 = force? av6;
            checkMissing(av7);
            return av7;
          };
          r101 = dyn rownames(p14);
          return r101;
        };
        r103 = dyn unique(p15);
        return r103;
      };
      r105 = dyn sort(p16);
      return r105;
    };
    r107 = dyn select_list[, multiple, title, graphics](p17, TRUE, "Packages", TRUE);
    check L617() else D47();
  L640():
    inuse8 = ld inuse;
    check L642() else D59();
  L641():
    r126 = dyn base15(<sym inuse>);
    goto L75(r126);
  L676():
    dx16 = getTryDispatchBuiltinValue(dr14);
    goto L88(dx16);
  L677():
    quiet2 = force? quiet1;
    checkMissing(quiet2);
    r164 = `!`(quiet2);
    c142 = `as.logical`(r164);
    if c142 then L678() else L89(c142);
  L693():
    r190 = `==`(r189, 0);
    r191 = `&&`(r187, r190);
    st ok = r191;
    sym23 = ldf length;
    base23 = ldf length in base;
    guard23 = `==`.4(sym23, base23);
    if guard23 then L694() else L695();
  D39():
    deopt 187 [];
  D41():
    deopt 193 [type15];
  D47():
    deopt 218 [r107];
  D59():
    deopt 260 [inuse8];
  L76():
    goto L78(NULL);
  L78(dx14):
    goto L79();
  L89(c144):
    c151 = `as.logical`(c144);
    if c151 then L685() else L91();
  L94(r193):
    r195 = `>`(r193, 1.0);
    c152 = `as.logical`(r195);
    if c152 then L698() else L95(c152);
  L604():
    r95 = dyn getOption6("repos");
    check L605() else D40();
  L607():
    type16 = force? type15;
    checkMissing(type16);
    r97 = `!=`(type16, "both");
    c112 = `as.logical`(r97);
    if c112 then L608() else L66();
  L617():
    st pkgs = r107;
    goto L70(r107);
  L642():
    inuse9 = force? inuse8;
    checkMissing(inuse9);
    any = ldf any in base;
    r128 = dyn any(inuse9);
    check L643() else D60();
  L644():
    warning = ldf warning;
    check L645() else D61();
  L678():
    sym21 = ldf length;
    base21 = ldf length in base;
    guard21 = `==`.4(sym21, base21);
    if guard21 then L679() else L680();
  L694():
    lib11 = ld lib;
    check L696() else D81();
  L695():
    r192 = dyn base23(<sym lib>);
    goto L94(r192);
  D40():
    deopt 189 [r95];
  D60():
    deopt 263 [r128];
  D61():
    deopt 265 [];
  D81():
    deopt 351 [lib11];
  L66():
    goto L67(NULL);
  L67(av2):
    goto L68();
  L90(c147, r166):
    r169 = `>`(r166, 1);
    c148 = `as.logical`(r169);
    c149 = `&&`(c147, c148);
    goto L89(c149);
  L91():
    goto L92(NULL);
  L92(r184):
    goto L93();
  L95(c154):
    c161 = `as.logical`(c154);
    if c161 then L704() else L97();
  L605():
    st repos = r95;
    goto L65();
  L608():
    av = ld av;
    check L609() else D42();
  L643():
    goto L75(r128);
  L645():
    p28 = prom<V +>{
      sprintf = ldf sprintf;
      p24 = prom<V +>{
        ngettext = ldf ngettext;
        p23 = prom<V +>{
          sym16 = ldf sum;
          base16 = ldf sum in base;
          guard16 = `==`.4(sym16, base16);
          if guard16 then L1() else L2();
        L0(r130):
          return r130;
        L1():
          inuse10 = ld inuse;
          inuse11 = force? inuse10;
          checkMissing(inuse11);
          sum = ldf sum in base;
          r131 = dyn sum(inuse11);
          goto L0(r131);
        L2():
          r129 = dyn base16(<sym inuse>);
          goto L0(r129);
        };
        r133 = dyn ngettext(p23, "package %s is in use and will not be installed", "packages %s are in use and will not be installed");
        return r133;
      };
      p27 = prom<V +>{
        paste = ldf paste;
        p26 = prom<V +>{
          sQuote = ldf sQuote;
          p25 = prom<V +>{
            pkgnames2 = ld pkgnames;
            pkgnames3 = force? pkgnames2;
            checkMissing(pkgnames3);
            c127 = `is.object`(pkgnames3);
            if c127 then L1() else L2(pkgnames3);
          L0(dx11):
            return dx11;
          L1():
            dr10 = tryDispatchBuiltin.1("[", pkgnames3);
            dc5 = getTryDispatchBuiltinDispatched(dr10);
            if dc5 then L3() else L2(dr10);
          L2(pkgnames5):
            inuse12 = ld inuse;
            inuse13 = force? inuse12;
            __2 = ldf `[` in base;
            r135 = dyn __2(pkgnames5, inuse13);
            goto L0(r135);
          L3():
            dx10 = getTryDispatchBuiltinValue(dr10);
            goto L0(dx10);
          };
          r137 = dyn sQuote(p25);
          return r137;
        };
        r139 = dyn paste[, collapse](p26, ", ");
        return r139;
      };
      r141 = dyn sprintf(p24, p27);
      return r141;
    };
    r143 = dyn warning[, `call.`, domain, `immediate.`](p28, FALSE, NA_LGL, TRUE);
    check L646() else D62();
  L679():
    _libPaths1 = ldf `.libPaths`;
    check L681() else D72();
  L680():
    r165 = dyn base21(<lang .libPaths()>);
    goto L90(c142, r165);
  L685():
    message = ldf message;
    check L686() else D75();
  L696():
    lib12 = force? lib11;
    checkMissing(lib12);
    length6 = ldf length in base;
    r194 = dyn length6(lib12);
    check L697() else D82();
  L698():
    sym24 = ldf any;
    base24 = ldf any in base;
    guard24 = `==`.4(sym24, base24);
    if guard24 then L699() else L700();
  D42():
    deopt 197 [av];
  D62():
    deopt 273 [r143];
  D72():
    deopt 320 [c142];
  D75():
    deopt 328 [];
  D82():
    deopt 354 [r194];
  L96(c157, r197):
    c158 = `as.logical`(r197);
    c159 = `&&`(c157, c158);
    goto L95(c159);
  L97():
    goto L98();
  L98():
    sym26 = ldf length;
    base26 = ldf length in base;
    guard26 = `==`.4(sym26, base26);
    if guard26 then L708() else L709();
  L609():
    av1 = force? av;
    checkMissing(av1);
    st available = av1;
    goto L67(av1);
  L646():
    pkgs5 = ld pkgs;
    check L647() else D63();
  L681():
    r167 = dyn _libPaths1();
    check L682() else D73();
  L686():
    p34 = prom<V +>{
      sprintf1 = ldf sprintf;
      p30 = prom<V +>{
        ngettext1 = ldf ngettext;
        p29 = prom<V +>{
          sym22 = ldf length;
          base22 = ldf length in base;
          guard22 = `==`.4(sym22, base22);
          if guard22 then L1() else L2();
        L0(r171):
          return r171;
        L1():
          pkgs11 = ld pkgs;
          pkgs12 = force? pkgs11;
          checkMissing(pkgs12);
          length5 = ldf length in base;
          r172 = dyn length5(pkgs12);
          goto L0(r172);
        L2():
          r170 = dyn base22(<sym pkgs>);
          goto L0(r170);
        };
        r174 = dyn ngettext1(p29, "Installing package into %s\n(as %s is unspecified)", "Installing packages into %s\n(as %s is unspecified)");
        return r174;
      };
      p32 = prom<V +>{
        sQuote1 = ldf sQuote;
        p31 = prom<V +>{
          lib5 = ld lib;
          lib6 = force? lib5;
          checkMissing(lib6);
          return lib6;
        };
        r177 = dyn sQuote1(p31);
        return r177;
      };
      p33 = prom<V +>{
        sQuote2 = ldf sQuote;
        r179 = dyn sQuote2("lib");
        return r179;
      };
      r181 = dyn sprintf1(p30, p32, p33);
      return r181;
    };
    r183 = dyn message[, domain](p34, NA_LGL);
    check L687() else D76();
  L697():
    goto L94(r194);
  L699():
    ok = ld ok;
    check L701() else D83();
  L700():
    r196 = dyn base24(<lang `!`(ok)>);
    goto L96(c152, r196);
  L704():
    stop5 = ldf stop;
    check L705() else D85();
  D63():
    deopt 274 [pkgs5];
  D73():
    deopt 321 [c142, r167];
  D76():
    deopt 332 [r183];
  D83():
    deopt 359 [c152, ok];
  D85():
    deopt 366 [];
  L99(r219):
    r221 = `==`(r219, 1);
    c163 = `as.logical`(r221);
    if c163 then L712() else L100(c163);
  L647():
    pkgs6 = force? pkgs5;
    checkMissing(pkgs6);
    c128 = `is.object`(pkgs6);
    if c128 then L648() else L649(pkgs6);
  L682():
    length4 = ldf length in base;
    r168 = dyn length4(r167);
    check L683() else D74();
  L687():
    goto L92(r183);
  L701():
    ok1 = force? ok;
    checkMissing(ok1);
    r198 = `!`(ok1);
    any1 = ldf any in base;
    r199 = dyn any1(r198);
    check L702() else D84();
  L705():
    p42 = prom<V +>{
      sprintf2 = ldf sprintf;
      p38 = prom<V +>{
        ngettext2 = ldf ngettext;
        p37 = prom<V +>{
          sym25 = ldf sum;
          base25 = ldf sum in base;
          guard25 = `==`.4(sym25, base25);
          if guard25 then L1() else L2();
        L0(r201):
          return r201;
        L1():
          ok2 = ld ok;
          ok3 = force? ok2;
          checkMissing(ok3);
          r202 = `!`(ok3);
          sum1 = ldf sum in base;
          r203 = dyn sum1(r202);
          goto L0(r203);
        L2():
          r200 = dyn base25(<lang `!`(ok)>);
          goto L0(r200);
        };
        r205 = dyn ngettext2(p37, "'lib' element %s is not a writable directory", "'lib' elements %s are not writable directories");
        return r205;
      };
      p41 = prom<V +>{
        paste1 = ldf paste;
        p40 = prom<V +>{
          sQuote3 = ldf sQuote;
          p39 = prom<V +>{
            lib13 = ld lib;
            lib14 = force? lib13;
            checkMissing(lib14);
            c162 = `is.object`(lib14);
            if c162 then L1() else L2(lib14);
          L0(dx19):
            return dx19;
          L1():
            dr16 = tryDispatchBuiltin.1("[", lib14);
            dc8 = getTryDispatchBuiltinDispatched(dr16);
            if dc8 then L3() else L2(dr16);
          L2(lib16):
            ok4 = ld ok;
            ok5 = force? ok4;
            checkMissing(ok5);
            r207 = `!`(ok5);
            __5 = ldf `[` in base;
            r208 = dyn __5(lib16, r207);
            goto L0(r208);
          L3():
            dx18 = getTryDispatchBuiltinValue(dr16);
            goto L0(dx18);
          };
          r210 = dyn sQuote3(p39);
          return r210;
        };
        r212 = dyn paste1[, collapse](p40, ", ");
        return r212;
      };
      r214 = dyn sprintf2(p38, p41);
      return r214;
    };
    r216 = dyn stop5[, domain](p42, NA_LGL);
    check L706() else D86();
  L708():
    lib17 = ld lib;
    check L710() else D87();
  L709():
    r218 = dyn base26(<sym lib>);
    goto L99(r218);
  D74():
    deopt 323 [c142, r168];
  D84():
    deopt 363 [c152, r199];
  D86():
    deopt 370 [r216];
  D87():
    deopt 375 [lib17];
  L77(dx13):
    st pkgs = dx13;
    goto L78(dx13);
  L100(c165):
    c174 = `as.logical`(c165);
    if c174 then L719() else L101();
  L648():
    dr12 = tryDispatchBuiltin.1("[", pkgs6);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L650() else L649(dr12);
  L649(pkgs8):
    inuse14 = ld inuse;
    check L651() else D64();
  L683():
    goto L90(c142, r168);
  L702():
    goto L96(c152, r199);
  L706():
    goto L98();
  L710():
    lib18 = force? lib17;
    checkMissing(lib18);
    length7 = ldf length in base;
    r220 = dyn length7(lib18);
    check L711() else D88();
  L712():
    _Platform16 = ld `.Platform`;
    check L713() else D89();
  D64():
    deopt 276 [pkgs8, inuse14];
  D88():
    deopt 378 [r220];
  D89():
    deopt 381 [c163, _Platform16];
  L101():
    goto L108();
  L108():
    sym28 = ldf length;
    base28 = ldf length in base;
    guard28 = `==`.4(sym28, base28);
    if guard28 then L743() else L744();
  L650():
    dx12 = getTryDispatchBuiltinValue(dr12);
    goto L77(dx12);
  L651():
    inuse15 = force? inuse14;
    checkMissing(inuse15);
    r144 = `!`(inuse15);
    __3 = ldf `[` in base;
    r145 = dyn __3(pkgs8, r144);
    goto L77(r145);
  L711():
    goto L99(r220);
  L713():
    _Platform17 = force? _Platform16;
    checkMissing(_Platform17);
    c166 = `is.object`(_Platform17);
    if c166 then L715() else L716(c163, _Platform17);
  L719():
    dir_exists1 = ldf `dir.exists`;
    check L720() else D90();
  D90():
    deopt 388 [];
  L109(r248):
    r250 = `==`(r248, 1);
    c183 = `as.logical`(r250);
    if c183 then L747() else L110(c183);
  L714(c170, dx21):
    r223 = `==`(dx21, "windows");
    c171 = `as.logical`(r223);
    c172 = `&&`(c170, c171);
    goto L100(c172);
  L715():
    dr18 = tryDispatchBuiltin.1("$", _Platform17);
    dc9 = getTryDispatchBuiltinDispatched(dr18);
    if dc9 then L717() else L716(c163, dr18);
  L716(c168, _Platform19):
    r222 = `$`(_Platform19, <sym OS.type>);
    goto L714(c168, r222);
  L720():
    p43 = prom<V +>{
      lib19 = ld lib;
      lib20 = force? lib19;
      checkMissing(lib20);
      return lib20;
    };
    r225 = dyn dir_exists1(p43);
    check L721() else D91();
  L743():
    lib23 = ld lib;
    check L745() else D104();
  L744():
    r247 = dyn base28(<sym lib>);
    goto L109(r247);
  D91():
    deopt 390 [r225];
  D104():
    deopt 438 [lib23];
  L110(c185):
    c189 = `as.logical`(c185);
    if c189 then L750() else L111();
  L717():
    dx20 = getTryDispatchBuiltinValue(dr18);
    goto L714(c163, dx20);
  L721():
    st ok = r225;
    ok6 = ld ok;
    check L722() else D92();
  L745():
    lib24 = force? lib23;
    checkMissing(lib24);
    length8 = ldf length in base;
    r249 = dyn length8(lib24);
    check L746() else D105();
  L747():
    ok8 = ld ok;
    check L748() else D106();
  D92():
    deopt 392 [ok6];
  D105():
    deopt 441 [r249];
  D106():
    deopt 444 [c183, ok8];
  L111():
    goto L124();
  L124():
    normalizePath = ldf normalizePath;
    check L795() else D135();
  L722():
    ok7 = force? ok6;
    checkMissing(ok7);
    c175 = `as.logical`(ok7);
    if c175 then L723() else L102();
  L746():
    goto L109(r249);
  L748():
    ok9 = force? ok8;
    checkMissing(ok9);
    r251 = `!`(ok9);
    c186 = `as.logical`(r251);
    c187 = `&&`(c183, c186);
    goto L110(c187);
  L750():
    warning1 = ldf warning;
    check L751() else D107();
  D107():
    deopt 449 [];
  D135():
    deopt 540 [];
  L102():
    goto L107(NULL);
  L107(r245):
    goto L108();
  L723():
    file_path = ldf `file.path`;
    check L724() else D93();
  L751():
    p52 = prom<V +>{
      gettextf1 = ldf gettextf;
      p51 = prom<V +>{
        lib25 = ld lib;
        lib26 = force? lib25;
        checkMissing(lib26);
        return lib26;
      };
      r253 = dyn gettextf1("'lib = \"%s\"' is not writable", p51);
      return r253;
    };
    r255 = dyn warning1[, domain, `immediate.`](p52, NA_LGL, TRUE);
    check L752() else D108();
  L795():
    p68 = prom<V +>{
      lib27 = ld lib;
      lib28 = force? lib27;
      checkMissing(lib28);
      return lib28;
    };
    r312 = dyn normalizePath(p68);
    check L796() else D136();
  D93():
    deopt 395 [];
  D108():
    deopt 455 [r255];
  D136():
    deopt 542 [r312];
  L724():
    p44 = prom<V +>{
      lib21 = ld lib;
      lib22 = force? lib21;
      checkMissing(lib22);
      return lib22;
    };
    p46 = prom<V +>{
      paste2 = ldf paste0;
      p45 = prom<V +>{
        Sys_getpid = ldf `Sys.getpid`;
        r227 = dyn Sys_getpid();
        return r227;
      };
      r229 = dyn paste2("_test_dir_", p45);
      return r229;
    };
    r231 = dyn file_path(p44, p46);
    check L725() else D94();
  L752():
    unlist = ldf unlist;
    check L753() else D109();
  L796():
    st lib = r312;
    sym31 = ldf length;
    base31 = ldf length in base;
    guard31 = `==`.4(sym31, base31);
    if guard31 then L797() else L798();
  D94():
    deopt 398 [r231];
  D109():
    deopt 457 [];
  L125(r314):
    r316 = `==`(r314, 1);
    c198 = `as.logical`(r316);
    if c198 then L801() else L126(c198);
  L725():
    st fn = r231;
    unlink = ldf unlink;
    check L726() else D95();
  L753():
    p55 = prom<V +>{
      strsplit = ldf strsplit;
      p53 = prom<V +>{
        Sys_getenv = ldf `Sys.getenv`;
        r256 = dyn Sys_getenv("R_LIBS_USER");
        return r256;
      };
      p54 = prom<V +>{
        _Platform20 = ld `.Platform`;
        _Platform21 = force? _Platform20;
        checkMissing(_Platform21);
        c190 = `is.object`(_Platform21);
        if c190 then L1() else L2(_Platform21);
      L0(dx23):
        return dx23;
      L1():
        dr20 = tryDispatchBuiltin.1("$", _Platform21);
        dc10 = getTryDispatchBuiltinDispatched(dr20);
        if dc10 then L3() else L2(dr20);
      L2(_Platform23):
        r258 = `$`(_Platform23, <sym path.sep>);
        goto L0(r258);
      L3():
        dx22 = getTryDispatchBuiltinValue(dr20);
        goto L0(dx22);
      };
      r260 = dyn strsplit(p53, p54);
      return r260;
    };
    r262 = dyn unlist(p55);
    check L754() else D110();
  L797():
    pkgs13 = ld pkgs;
    check L799() else D137();
  L798():
    r313 = dyn base31(<sym pkgs>);
    goto L125(r313);
  D95():
    deopt 401 [];
  D110():
    deopt 459 [r262];
  D137():
    deopt 546 [pkgs13];
  L126(c200):
    c207 = `as.logical`(c200);
    if c207 then L805() else L128(c207);
  L726():
    p47 = prom<V +>{
      fn = ld fn;
      fn1 = force? fn;
      checkMissing(fn1);
      return fn1;
    };
    r233 = dyn unlink[, recursive](p47, TRUE);
    check L727() else D96();
  L754():
    c191 = `is.object`(r262);
    if c191 then L755() else L756(r262);
  L799():
    pkgs14 = force? pkgs13;
    checkMissing(pkgs14);
    length9 = ldf length in base;
    r315 = dyn length9(pkgs14);
    check L800() else D138();
  L801():
    sym32 = ldf missing;
    base32 = ldf missing in base;
    guard32 = `==`.4(sym32, base32);
    if guard32 then L802() else L803();
  D96():
    deopt 405 [r233];
  D138():
    deopt 549 [r315];
  L112(dx25):
    st userdir = dx25;
    sym29 = ldf interactive;
    base29 = ldf interactive in base;
    guard29 = `==`.4(sym29, base29);
    if guard29 then L758() else L759();
  L127(c203, r318):
    c204 = `as.logical`(r318);
    c205 = `&&`(c203, c204);
    goto L126(c205);
  L128(c209):
    c216 = `as.logical`(c209);
    if c216 then L809() else L130();
  L727():
    try = ldf try;
    check L728() else D97();
  L755():
    dr22 = tryDispatchBuiltin.1("[", r262);
    dc11 = getTryDispatchBuiltinDispatched(dr22);
    if dc11 then L757() else L756(dr22);
  L756(r264):
    __6 = ldf `[` in base;
    r265 = dyn __6(r264, 1);
    goto L112(r265);
  L800():
    goto L125(r315);
  L802():
    missing5 = ldf missing in base;
    r319 = dyn missing5(<sym repos>);
    goto L127(c198, r319);
  L803():
    r317 = dyn base32(<sym repos>);
    goto L127(c198, r317);
  L805():
    sym33 = ldf missing;
    base33 = ldf missing in base;
    guard33 = `==`.4(sym33, base33);
    if guard33 then L806() else L807();
  D97():
    deopt 407 [];
  L113(r267):
    c192 = `as.logical`(r267);
    if c192 then L761() else L114();
  L129(c212, r321):
    c213 = `as.logical`(r321);
    c214 = `&&`(c212, c213);
    goto L128(c214);
  L130():
    goto L147();
  L147():
    sym35 = ldf length;
    base35 = ldf length in base;
    guard35 = `==`.4(sym35, base35);
    if guard35 then L870() else L871();
  L728():
    p49 = prom<V +>{
      dir_create = ldf `dir.create`;
      p48 = prom<V +>{
        fn2 = ld fn;
        fn3 = force? fn2;
        checkMissing(fn3);
        return fn3;
      };
      r235 = dyn dir_create[, showWarnings](p48, FALSE);
      return r235;
    };
    r237 = dyn try(p49);
    check L729() else D98();
  L757():
    dx24 = getTryDispatchBuiltinValue(dr22);
    goto L112(dx24);
  L758():
    interactive1 = ldf interactive in base;
    r268 = dyn interactive1();
    check L760() else D111();
  L759():
    r266 = dyn base29();
    goto L113(r266);
  L806():
    missing6 = ldf missing in base;
    r322 = dyn missing6(<sym contriburl>);
    goto L129(c207, r322);
  L807():
    r320 = dyn base33(<sym contriburl>);
    goto L129(c207, r320);
  L809():
    type17 = ld type;
    check L810() else D139();
  D98():
    deopt 409 [r237];
  D111():
    deopt 467 [r268];
  D139():
    deopt 560 [type17];
  L114():
    stop9 = ldf stop;
    check L792() else D133();
  L123(r308):
    goto L124();
  L148(r357):
    r359 = `==`(r357, 1);
    c273 = `as.logical`(r359);
    if c273 then L874() else L149(c273);
  L729():
    st res = r237;
    sym27 = ldf inherits;
    base27 = ldf inherits in base;
    guard27 = `==`.4(sym27, base27);
    if guard27 then L730() else L731();
  L760():
    goto L113(r268);
  L761():
    askYesNo = ldf askYesNo;
    check L762() else D112();
  L810():
    type18 = force? type17;
    checkMissing(type18);
    r323 = `==`(type18, "source");
    c217 = `as.logical`(r323);
    if c217 then L811() else L131(c217);
  L870():
    pkgs27 = ld pkgs;
    check L872() else D172();
  L871():
    r356 = dyn base35(<sym pkgs>);
    goto L148(r356);
  D112():
    deopt 469 [];
  D133():
    deopt 534 [];
  D172():
    deopt 676 [pkgs27];
  L103(r239):
    c176 = `as.logical`(r239);
    if c176 then L104(c176) else L734();
  L131(c219):
    c226 = `as.logical`(c219);
    if c226 then L133(c226) else L818();
  L149(c275):
    c283 = `as.logical`(c275);
    if c283 then L879() else L151(c283);
  L730():
    res = ld res;
    check L732() else D99();
  L731():
    r238 = dyn base27(<sym res>, "try-error");
    goto L103(r238);
  L762():
    p56 = prom<V +>{
      gettext = ldf gettext;
      r269 = dyn gettext("Would you like to use a personal library instead?");
      return r269;
    };
    r271 = dyn askYesNo[, default](p56, FALSE);
    check L763() else D113();
  L792():
    r309 = dyn stop9("unable to install packages");
    check L793() else D134();
  L811():
    sym34 = ldf any;
    base34 = ldf any in base;
    guard34 = `==`.4(sym34, base34);
    if guard34 then L812() else L813();
  L872():
    pkgs28 = force? pkgs27;
    checkMissing(pkgs28);
    length10 = ldf length in base;
    r358 = dyn length10(pkgs28);
    check L873() else D173();
  L874():
    sym36 = ldf `is.null`;
    base36 = ldf `is.null` in base;
    guard36 = `==`.4(sym36, base36);
    if guard36 then L875() else L876();
  D99():
    deopt 413 [res];
  D113():
    deopt 473 [r271];
  D134():
    deopt 536 [r309];
  D173():
    deopt 679 [r358];
  L104(c177):
    c182 = `as.logical`(c177);
    if c182 then L737() else L105();
  L132(c222, r325):
    c223 = `as.logical`(r325);
    c224 = `&&`(c222, c223);
    goto L131(c224);
  L133(c227):
    c241 = `as.logical`(c227);
    if c241 then L135(c241) else L826();
  L150(c278, r361):
    c280 = `as.logical`(r361);
    c281 = `&&`(c278, c280);
    goto L149(c281);
  L151(c285):
    c289 = `as.logical`(c285);
    if c289 then L882() else L152();
  L732():
    res1 = force? res;
    checkMissing(res1);
    inherits = ldf inherits in base;
    r240 = dyn inherits(res1, "try-error", FALSE);
    check L733() else D100();
  L734():
    res2 = ld res;
    check L735() else D101();
  L763():
    st ans = r271;
    isTRUE = ldf isTRUE;
    check L764() else D114();
  L793():
    goto L123(r309);
  L812():
    grepl = ldf grepl;
    check L814() else D140();
  L813():
    r324 = dyn base34(<lang grepl("[.]tar[.](gz|bz2|xz)$", pkgs)>);
    goto L132(c217, r324);
  L818():
    _in_1 = ldf `%in%`;
    check L819() else D143();
  L873():
    goto L148(r358);
  L875():
    repos3 = ld repos;
    check L877() else D174();
  L876():
    r360 = dyn base36(<sym repos>);
    goto L150(c273, r360);
  L879():
    type33 = ld type;
    check L880() else D175();
  D100():
    deopt 418 [r240];
  D101():
    deopt 419 [c176, res2];
  D114():
    deopt 476 [];
  D140():
    deopt 567 [c217];
  D143():
    deopt 575 [c226];
  D174():
    deopt 683 [c273, repos3];
  D175():
    deopt 687 [c283, type33];
  L105():
    unlink1 = ldf unlink;
    check L739() else D102();
  L106(r242):
    goto L107(r242);
  L135(c242):
    c256 = `as.logical`(c242);
    if c256 then L834() else L137();
  L152():
    goto L159();
  L159():
    sym37 = ldf `is.null`;
    base37 = ldf `is.null` in base;
    guard37 = `==`.4(sym37, base37);
    if guard37 then L905() else L906();
  L733():
    goto L103(r240);
  L735():
    res3 = force? res2;
    checkMissing(res3);
    r241 = `!`(res3);
    c179 = `as.logical`(r241);
    c180 = `||`(c176, c179);
    goto L104(c180);
  L737():
    st ok = FALSE;
    goto L106(FALSE);
  L764():
    p57 = prom<V +>{
      ans = ld ans;
      ans1 = force? ans;
      checkMissing(ans1);
      return ans1;
    };
    r273 = dyn isTRUE(p57);
    check L765() else D115();
  L814():
    p69 = prom<V +>{
      pkgs15 = ld pkgs;
      pkgs16 = force? pkgs15;
      checkMissing(pkgs16);
      return pkgs16;
    };
    r327 = dyn grepl("[.]tar[.](gz|bz2|xz)$", p69);
    check L815() else D141();
  L819():
    p70 = prom<V +>{
      type19 = ld type;
      type20 = force? type19;
      checkMissing(type20);
      return type20;
    };
    r330 = dyn _in_1(p70, "win.binary");
    check L820() else D144();
  L826():
    startsWith = ldf startsWith;
    check L827() else D147();
  L877():
    repos4 = force? repos3;
    checkMissing(repos4);
    c279 = `==`(repos4, NULL);
    goto L150(c273, c279);
  L880():
    type34 = force? type33;
    checkMissing(type34);
    r362 = `==`(type34, "both");
    c286 = `as.logical`(r362);
    c287 = `&&`(c283, c286);
    goto L151(c287);
  L882():
    _in_3 = ldf `%in%`;
    check L883() else D176();
  D102():
    deopt 427 [];
  D115():
    deopt 478 [r273];
  D141():
    deopt 570 [c217, r327];
  D144():
    deopt 578 [c226, r330];
  D147():
    deopt 587 [c241];
  D176():
    deopt 693 [];
  L137():
    goto L138();
  L138():
    type23 = ld type;
    check L838() else D153();
  L160(r374):
    c314 = `as.logical`(r374);
    if c314 then L908() else L161(c314);
  L739():
    p50 = prom<V +>{
      fn4 = ld fn;
      fn5 = force? fn4;
      checkMissing(fn5);
      return fn5;
    };
    r244 = dyn unlink1[, recursive](p50, TRUE);
    check L740() else D103();
  L765():
    r274 = `!`(r273);
    c193 = `as.logical`(r274);
    if c193 then L766() else L115();
  L815():
    any2 = ldf any in base;
    r328 = dyn any2(r327);
    check L816() else D142();
  L820():
    c229 = `as.logical`(r330);
    if c229 then L821() else L134(c226, c229);
  L827():
    p72 = prom<V +>{
      type21 = ld type;
      type22 = force? type21;
      checkMissing(type22);
      return type22;
    };
    r334 = dyn startsWith(p72, "mac.binary");
    check L828() else D148();
  L834():
    st repos = NULL;
    message1 = ldf message;
    check L835() else D151();
  L883():
    p79 = prom<V +>{
      type35 = ld type2;
      type36 = force? type35;
      checkMissing(type36);
      return type36;
    };
    r364 = dyn _in_3(p79, "win.binary");
    check L884() else D177();
  L905():
    repos5 = ld repos;
    check L907() else D187();
  L906():
    r373 = dyn base37(<sym repos>);
    goto L160(r373);
  D103():
    deopt 431 [r244];
  D142():
    deopt 572 [c217, r328];
  D148():
    deopt 590 [c241, r334];
  D151():
    deopt 602 [];
  D153():
    deopt 607 [type23];
  D177():
    deopt 696 [r364];
  D187():
    deopt 731 [repos5];
  L115():
    goto L116();
  L116():
    userdir = ld userdir;
    check L770() else D118();
  L134(c232, c233):
    c238 = `as.logical`(c233);
    c239 = `||`(c232, c238);
    goto L133(c239);
  L161(c316):
    c323 = `as.logical`(c316);
    if c323 then L912() else L163();
  L740():
    goto L106(r244);
  L766():
    stop6 = ldf stop;
    check L767() else D116();
  L816():
    goto L132(c217, r328);
  L821():
    endsWith = ldf endsWith;
    check L822() else D145();
  L828():
    c244 = `as.logical`(r334);
    if c244 then L829() else L136(c241, c244);
  L835():
    r337 = dyn message1("inferring 'repos = NULL' from 'pkgs'");
    check L836() else D152();
  L838():
    type24 = force? type23;
    checkMissing(type24);
    r339 = `==`(type24, "both");
    c257 = `as.logical`(r339);
    if c257 then L839() else L139();
  L884():
    c290 = `as.logical`(r364);
    if c290 then L885() else L153(c290);
  L907():
    repos6 = force? repos5;
    checkMissing(repos6);
    c313 = `==`(repos6, NULL);
    goto L160(c313);
  L908():
    sym38 = ldf missing;
    base38 = ldf missing in base;
    guard38 = `==`.4(sym38, base38);
    if guard38 then L909() else L910();
  D116():
    deopt 481 [];
  D118():
    deopt 486 [userdir];
  D145():
    deopt 580 [c226, c229];
  D152():
    deopt 604 [r337];
  L136(c247, c248):
    c253 = `as.logical`(c248);
    c254 = `||`(c247, c253);
    goto L135(c254);
  L139():
    goto L146(NULL);
  L146(r354):
    goto L147();
  L153(c292):
    c296 = `as.logical`(c292);
    if c296 then L154(c296) else L889();
  L162(c319, r376):
    c320 = `as.logical`(r376);
    c321 = `&&`(c319, c320);
    goto L161(c321);
  L163():
    goto L183();
  L183():
    type43 = ld type;
    check L975() else D219();
  L767():
    r275 = dyn stop6("unable to install packages");
    check L768() else D117();
  L770():
    userdir1 = force? userdir;
    checkMissing(userdir1);
    st lib = userdir1;
    file_exists = ldf `file.exists`;
    check L771() else D119();
  L822():
    p71 = prom<V +>{
      pkgs17 = ld pkgs;
      pkgs18 = force? pkgs17;
      checkMissing(pkgs18);
      return pkgs18;
    };
    r332 = dyn endsWith(p71, ".zip");
    check L823() else D146();
  L829():
    endsWith1 = ldf endsWith;
    check L830() else D149();
  L836():
    goto L138();
  L839():
    _in_2 = ldf `%in%`;
    check L840() else D154();
  L885():
    endsWith4 = ldf endsWith;
    check L886() else D178();
  L909():
    missing7 = ldf missing in base;
    r377 = dyn missing7(<sym contriburl>);
    goto L162(c314, r377);
  L910():
    r375 = dyn base38(<sym contriburl>);
    goto L162(c314, r375);
  L912():
    destdir1 = ld destdir;
    check L913() else D188();
  D117():
    deopt 483 [r275];
  D119():
    deopt 490 [];
  D146():
    deopt 583 [c226, c229, r332];
  D149():
    deopt 592 [c241, c244];
  D154():
    deopt 612 [];
  D178():
    deopt 698 [c290];
  D188():
    deopt 738 [destdir1];
  D219():
    deopt 852 [type43];
  L154(c297):
    c311 = `as.logical`(c297);
    if c311 then L897() else L156();
  L768():
    goto L116();
  L771():
    p58 = prom<V +>{
      userdir2 = ld userdir;
      userdir3 = force? userdir2;
      checkMissing(userdir3);
      return userdir3;
    };
    r278 = dyn file_exists(p58);
    check L772() else D120();
  L823():
    c234 = `as.logical`(r332);
    c235 = `&&`(c229, c234);
    goto L134(c226, c235);
  L830():
    p73 = prom<V +>{
      pkgs19 = ld pkgs;
      pkgs20 = force? pkgs19;
      checkMissing(pkgs20);
      return pkgs20;
    };
    r336 = dyn endsWith1(p73, ".tgz");
    check L831() else D150();
  L840():
    p74 = prom<V +>{
      type25 = ld type2;
      type26 = force? type25;
      checkMissing(type26);
      return type26;
    };
    r341 = dyn _in_2(p74, "win.binary");
    check L841() else D155();
  L886():
    p80 = prom<V +>{
      pkgs29 = ld pkgs;
      pkgs30 = force? pkgs29;
      checkMissing(pkgs30);
      return pkgs30;
    };
    r366 = dyn endsWith4(p80, ".zip");
    check L887() else D179();
  L889():
    startsWith2 = ldf startsWith;
    check L890() else D180();
  L913():
    destdir2 = force? destdir1;
    checkMissing(destdir2);
    st tmpd = destdir2;
    sym39 = ldf any;
    base39 = ldf any in base;
    guard39 = `==`.4(sym39, base39);
    if guard39 then L914() else L915();
  L975():
    type44 = force? type43;
    checkMissing(type44);
    r429 = `==`(type44, "both");
    c351 = `as.logical`(r429);
    if c351 then L976() else L184();
  D120():
    deopt 492 [r278];
  D150():
    deopt 595 [c241, c244, r336];
  D155():
    deopt 615 [r341];
  D179():
    deopt 701 [c290, r366];
  D180():
    deopt 704 [c296];
  L156():
    grepl2 = ldf grepl;
    check L900() else D185();
  L157(type41):
    goto L159();
  L164(r379):
    st nonlocalrepos = r379;
    sym40 = ldf `is.null`;
    base40 = ldf `is.null` in base;
    guard40 = `==`.4(sym40, base40);
    if guard40 then L919() else L920();
  L184():
    goto L192();
  L192():
    st getDeps = TRUE;
    type51 = ld type;
    check L993() else D225();
  L772():
    r279 = `!`(r278);
    c194 = `as.logical`(r279);
    if c194 then L773() else L117();
  L831():
    c249 = `as.logical`(r336);
    c250 = `&&`(c244, c249);
    goto L136(c241, c250);
  L841():
    c258 = `as.logical`(r341);
    if c258 then L842() else L140(c258);
  L887():
    c293 = `as.logical`(r366);
    c294 = `&&`(c290, c293);
    goto L153(c294);
  L890():
    p81 = prom<V +>{
      type37 = ld type2;
      type38 = force? type37;
      checkMissing(type38);
      return type38;
    };
    r368 = dyn startsWith2(p81, "mac.binary");
    check L891() else D181();
  L897():
    type39 = ld type2;
    check L898() else D184();
  L914():
    grepl3 = ldf grepl;
    check L916() else D189();
  L915():
    r378 = dyn base39(<lang `<-`(web, grepl("^(http|https|ftp)://", pkgs))>);
    goto L164(r378);
  L976():
    type45 = ld type2;
    check L977() else D220();
  D181():
    deopt 707 [c296, r368];
  D184():
    deopt 715 [type39];
  D185():
    deopt 719 [];
  D189():
    deopt 744 [];
  D220():
    deopt 856 [type45];
  D225():
    deopt 886 [type51];
  L117():
    goto L122(NULL);
  L122(r307):
    goto L123(r307);
  L140(c260):
    c264 = `as.logical`(c260);
    if c264 then L846() else L141();
  L165(r384):
    c325 = `as.logical`(r384);
    if c325 then L922() else L166(c325);
  L773():
    askYesNo1 = ldf askYesNo;
    check L774() else D121();
  L842():
    endsWith2 = ldf endsWith;
    check L843() else D156();
  L891():
    c299 = `as.logical`(r368);
    if c299 then L892() else L155(c296, c299);
  L898():
    type40 = force? type39;
    checkMissing(type40);
    st type = type40;
    goto L157(type40);
  L900():
    p83 = prom<V +>{
      pkgs33 = ld pkgs;
      pkgs34 = force? pkgs33;
      checkMissing(pkgs34);
      return pkgs34;
    };
    r372 = dyn grepl2("[.]tar[.](gz|bz2|xz)$", p83);
    check L901() else D186();
  L916():
    p84 = prom<V +>{
      pkgs35 = ld pkgs;
      pkgs36 = force? pkgs35;
      checkMissing(pkgs36);
      return pkgs36;
    };
    r381 = dyn grepl3("^(http|https|ftp)://", p84);
    check L917() else D190();
  L919():
    destdir3 = ld destdir;
    check L921() else D192();
  L920():
    r383 = dyn base40(<sym destdir>);
    goto L165(r383);
  L977():
    type46 = force? type45;
    checkMissing(type46);
    r430 = `==`(type46, "source");
    c352 = `as.logical`(r430);
    if c352 then L978() else L185();
  L993():
    type52 = force? type51;
    checkMissing(type52);
    r440 = `==`(type52, "both");
    c364 = `as.logical`(r440);
    if c364 then L994() else L193();
  D121():
    deopt 495 [];
  D156():
    deopt 617 [c258];
  D186():
    deopt 722 [r372];
  D190():
    deopt 747 [r381];
  D192():
    deopt 753 [destdir3];
  L141():
    startsWith1 = ldf startsWith;
    check L851() else D161();
  L142(r345):
    goto L146(r345);
  L155(c302, c303):
    c308 = `as.logical`(c303);
    c309 = `||`(c302, c308);
    goto L154(c309);
  L166(c327):
    c331 = `as.logical`(c327);
    if c331 then L925() else L167();
  L185():
    goto L186();
  L186():
    sym42 = ldf missing;
    base42 = ldf missing in base;
    guard42 = `==`.4(sym42, base42);
    if guard42 then L982() else L983();
  L193():
    _in_8 = ldf `%in%`;
    check L1235() else D359();
  L259():
    _Platform24 = ld `.Platform`;
    check L1349() else D418();
  L774():
    p61 = prom<V +>{
      gettextf2 = ldf gettextf;
      p60 = prom<V +>{
        sQuote4 = ldf sQuote;
        p59 = prom<V +>{
          userdir4 = ld userdir;
          userdir5 = force? userdir4;
          checkMissing(userdir5);
          return userdir5;
        };
        r281 = dyn sQuote4(p59);
        return r281;
      };
      r283 = dyn gettextf2("Would you like to create a personal library\n%s\nto install packages into?", p60);
      return r283;
    };
    r285 = dyn askYesNo1[, default](p61, FALSE);
    check L775() else D122();
  L843():
    p75 = prom<V +>{
      pkgs21 = ld pkgs;
      pkgs22 = force? pkgs21;
      checkMissing(pkgs22);
      return pkgs22;
    };
    r343 = dyn endsWith2(p75, ".zip");
    check L844() else D157();
  L846():
    st repos = NULL;
    type27 = ld type2;
    check L847() else D158();
  L892():
    endsWith5 = ldf endsWith;
    check L893() else D182();
  L901():
    c312 = `as.logical`(r372);
    if c312 then L902() else L158();
  L917():
    st web = r381;
    any3 = ldf any in base;
    r382 = dyn any3(r381);
    check L918() else D191();
  L921():
    destdir4 = force? destdir3;
    checkMissing(destdir4);
    c324 = `==`(destdir4, NULL);
    goto L165(c324);
  L922():
    nonlocalrepos = ld nonlocalrepos;
    check L923() else D193();
  L978():
    stop11 = ldf stop;
    check L979() else D221();
  L994():
    sym44 = ldf `is.null`;
    base44 = ldf `is.null` in base;
    guard44 = `==`.4(sym44, base44);
    if guard44 then L995() else L996();
  D122():
    deopt 499 [r285];
  D157():
    deopt 620 [c258, r343];
  D158():
    deopt 625 [type27];
  D161():
    deopt 633 [];
  D182():
    deopt 709 [c296, c299];
  D191():
    deopt 750 [r382];
  D193():
    deopt 756 [c325, nonlocalrepos];
  D221():
    deopt 861 [];
  D359():
    deopt 1391 [];
  D418():
    deopt 1596 [_Platform24];
  L158():
    goto L157(NULL);
  L167():
    goto L171();
  L171():
    nonlocalrepos2 = ld nonlocalrepos;
    check L939() else D202();
  L187(r434):
    r436 = `!`(r434);
    c353 = `as.logical`(r436);
    if c353 then L188(c353) else L984();
  L194(r442):
    c366 = `as.logical`(r442);
    if c366 then L998() else L195();
  L775():
    st ans = r285;
    isTRUE1 = ldf isTRUE;
    check L776() else D123();
  L844():
    c261 = `as.logical`(r343);
    c262 = `&&`(c258, c261);
    goto L140(c262);
  L847():
    type28 = force? type27;
    checkMissing(type28);
    st type = type28;
    message2 = ldf message;
    check L848() else D159();
  L851():
    p76 = prom<V +>{
      type29 = ld type2;
      type30 = force? type29;
      checkMissing(type30);
      return type30;
    };
    r347 = dyn startsWith1(p76, "mac.binary");
    check L852() else D162();
  L893():
    p82 = prom<V +>{
      pkgs31 = ld pkgs;
      pkgs32 = force? pkgs31;
      checkMissing(pkgs32);
      return pkgs32;
    };
    r370 = dyn endsWith5(p82, ".tgz");
    check L894() else D183();
  L902():
    st type = "source";
    goto L157("source");
  L918():
    goto L164(r382);
  L923():
    nonlocalrepos1 = force? nonlocalrepos;
    checkMissing(nonlocalrepos1);
    c328 = `as.logical`(nonlocalrepos1);
    c329 = `&&`(c325, c328);
    goto L166(c329);
  L925():
    file_path1 = ldf `file.path`;
    check L926() else D194();
  L979():
    r431 = dyn stop11("type == \"both\" can only be used on Windows or a CRAN build for macOS");
    check L980() else D222();
  L982():
    missing8 = ldf missing in base;
    r435 = dyn missing8(<sym contriburl>);
    goto L187(r435);
  L983():
    r433 = dyn base42(<sym contriburl>);
    goto L187(r433);
  L995():
    repos7 = ld repos;
    check L997() else D226();
  L996():
    r441 = dyn base44(<sym repos>);
    goto L194(r441);
  L1235():
    p177 = prom<V +>{
      getOption9 = ldf getOption;
      r688 = dyn getOption9("install.packages.check.source", "yes");
      return r688;
    };
    r690 = dyn _in_8(p177, "yes");
    check L1236() else D360();
  L1349():
    _Platform25 = force? _Platform24;
    checkMissing(_Platform25);
    c474 = `is.object`(_Platform25);
    if c474 then L1351() else L1352(_Platform25);
  D123():
    deopt 502 [];
  D159():
    deopt 629 [];
  D162():
    deopt 636 [r347];
  D183():
    deopt 712 [c296, c299, r370];
  D194():
    deopt 760 [];
  D202():
    deopt 786 [nonlocalrepos2];
  D222():
    deopt 863 [r431];
  D226():
    deopt 891 [repos7];
  D360():
    deopt 1394 [r690];
  L188(c354):
    c363 = `as.logical`(c354);
    if c363 then L989() else L190();
  L195():
    goto L196();
  L196():
    st type = "source";
    contrib_url1 = ldf `contrib.url`;
    check L1002() else D229();
  L776():
    p62 = prom<V +>{
      ans2 = ld ans;
      ans3 = force? ans2;
      checkMissing(ans3);
      return ans3;
    };
    r287 = dyn isTRUE1(p62);
    check L777() else D124();
  L848():
    r344 = dyn message2("inferring 'repos = NULL' from 'pkgs'");
    check L849() else D160();
  L852():
    c265 = `as.logical`(r347);
    if c265 then L853() else L143(c265);
  L894():
    c304 = `as.logical`(r370);
    c305 = `&&`(c299, c304);
    goto L155(c296, c305);
  L926():
    p85 = prom<V +>{
      tempdir = ldf tempdir;
      r385 = dyn tempdir();
      return r385;
    };
    r387 = dyn file_path1(p85, "downloaded_packages");
    check L927() else D195();
  L939():
    nonlocalrepos3 = force? nonlocalrepos2;
    checkMissing(nonlocalrepos3);
    c339 = `as.logical`(nonlocalrepos3);
    if c339 then L940() else L172();
  L980():
    goto L186();
  L984():
    sym43 = ldf `is.null`;
    base43 = ldf `is.null` in base;
    guard43 = `==`.4(sym43, base43);
    if guard43 then L985() else L986();
  L997():
    repos8 = force? repos7;
    checkMissing(repos8);
    c365 = `==`(repos8, NULL);
    goto L194(c365);
  L998():
    stop12 = ldf stop;
    check L999() else D227();
  L1236():
    c425 = `as.logical`(r690);
    if c425 then L1237() else L260(c425);
  L1350(dx77):
    r807 = `==`(dx77, "windows");
    c475 = `as.logical`(r807);
    if c475 then L1354() else L288();
  L1351():
    dr70 = tryDispatchBuiltin.1("$", _Platform25);
    dc35 = getTryDispatchBuiltinDispatched(dr70);
    if dc35 then L1353() else L1352(dr70);
  L1352(_Platform27):
    r806 = `$`(_Platform27, <sym OS.type>);
    goto L1350(r806);
  D124():
    deopt 504 [r287];
  D160():
    deopt 631 [r344];
  D195():
    deopt 763 [r387];
  D227():
    deopt 895 [];
  D229():
    deopt 904 [];
  L143(c267):
    c271 = `as.logical`(c267);
    if c271 then L857() else L144();
  L172():
    goto L182(NULL);
  L182(i22):
    goto L183();
  L189(c358, r438):
    r439 = `!`(r438);
    c360 = `as.logical`(r439);
    c361 = `||`(c358, c360);
    goto L188(c361);
  L190():
    goto L191(NULL);
  L191(type49):
    goto L192();
  L260(c427):
    c440 = `as.logical`(c427);
    if c440 then L1245() else L262();
  L288():
    startsWith5 = ldf startsWith;
    check L1395() else D441();
  L299():
    file_path5 = ldf `file.path`;
    check L1423() else D458();
  L777():
    r288 = `!`(r287);
    c195 = `as.logical`(r288);
    if c195 then L778() else L118();
  L849():
    goto L142(r344);
  L853():
    endsWith3 = ldf endsWith;
    check L854() else D163();
  L927():
    st tmpd = r387;
    file_exists1 = ldf `file.exists`;
    check L928() else D196();
  L940():
    r402 = clos inner2350928483;
    st df = r402;
    pkgs37 = ld pkgs;
    check L941() else D203();
  L985():
    available7 = ld available;
    check L987() else D223();
  L986():
    r437 = dyn base43(<sym available>);
    goto L189(c353, r437);
  L989():
    type47 = ld type2;
    check L990() else D224();
  L999():
    r443 = dyn stop12("type == \"both\" cannot be used with 'repos = NULL'");
    check L1000() else D228();
  L1002():
    p105 = prom<V +>{
      repos9 = ld repos;
      repos10 = force? repos9;
      checkMissing(repos10);
      return repos10;
    };
    r446 = dyn contrib_url1(p105, "source");
    check L1003() else D230();
  L1237():
    _in_9 = ldf `%in%`;
    check L1238() else D361();
  L1353():
    dx76 = getTryDispatchBuiltinValue(dr70);
    goto L1350(dx76);
  L1354():
    startsWith4 = ldf startsWith;
    check L1355() else D419();
  D163():
    deopt 638 [c265];
  D196():
    deopt 766 [];
  D203():
    deopt 791 [pkgs37];
  D223():
    deopt 871 [c353, available7];
  D224():
    deopt 876 [type47];
  D228():
    deopt 897 [r443];
  D230():
    deopt 907 [r446];
  D361():
    deopt 1396 [c425];
  D419():
    deopt 1602 [];
  D441():
    deopt 1691 [];
  D458():
    deopt 1757 [];
  L118():
    goto L119();
  L119():
    dir_create1 = ldf `dir.create`;
    check L782() else D127();
  L144():
    grepl1 = ldf grepl;
    check L862() else D168();
  L262():
    goto L259();
  L778():
    stop7 = ldf stop;
    check L779() else D125();
  L854():
    p77 = prom<V +>{
      pkgs23 = ld pkgs;
      pkgs24 = force? pkgs23;
      checkMissing(pkgs24);
      return pkgs24;
    };
    r349 = dyn endsWith3(p77, ".tgz");
    check L855() else D164();
  L857():
    st repos = NULL;
    type31 = ld type2;
    check L858() else D165();
  L928():
    p86 = prom<V +>{
      tmpd = ld tmpd;
      tmpd1 = force? tmpd;
      checkMissing(tmpd1);
      return tmpd1;
    };
    r389 = dyn file_exists1(p86);
    check L929() else D197();
  L941():
    pkgs38 = force? pkgs37;
    checkMissing(pkgs38);
    c340 = `is.object`(pkgs38);
    if c340 then L942() else L943(pkgs38);
  L987():
    available8 = force? available7;
    checkMissing(available8);
    c359 = `==`(available8, NULL);
    goto L189(c353, c359);
  L990():
    type48 = force? type47;
    checkMissing(type48);
    st type = type48;
    goto L191(type48);
  L1000():
    goto L196();
  L1003():
    st contriburl = r446;
    sym45 = ldf missing;
    base45 = ldf missing in base;
    guard45 = `==`.4(sym45, base45);
    if guard45 then L1004() else L1005();
  L1238():
    p178 = prom<V +>{
      type61 = ld type;
      type62 = force? type61;
      checkMissing(type62);
      return type62;
    };
    r692 = dyn _in_9(p178, "win.binary");
    check L1239() else D362();
  L1245():
    sym65 = ldf missing;
    base65 = ldf missing in base;
    guard65 = `==`.4(sym65, base65);
    if guard65 then L1246() else L1247();
  L1355():
    p219 = prom<V +>{
      type69 = ld type;
      type70 = force? type69;
      checkMissing(type70);
      return type70;
    };
    r809 = dyn startsWith4(p219, "mac.binary");
    check L1356() else D420();
  L1395():
    p241 = prom<V +>{
      type73 = ld type;
      type74 = force? type73;
      checkMissing(type74);
      return type74;
    };
    r854 = dyn startsWith5(p241, "mac.binary");
    check L1396() else D442();
  L1423():
    p254 = prom<V +>{
      R_home1 = ldf `R.home`;
      r886 = dyn R_home1("bin");
      return r886;
    };
    r888 = dyn file_path5(p254, "R");
    check L1424() else D459();
  D125():
    deopt 507 [];
  D127():
    deopt 513 [];
  D164():
    deopt 641 [c265, r349];
  D165():
    deopt 646 [type31];
  D168():
    deopt 654 [];
  D197():
    deopt 768 [r389];
  D362():
    deopt 1399 [c425, r692];
  D420():
    deopt 1605 [r809];
  D442():
    deopt 1694 [r854];
  D459():
    deopt 1760 [r888];
  L173(dx27):
    st urls = dx27;
    unique1 = ldf unique;
    check L946() else D205();
  L197(r448):
    c367 = `as.logical`(r448);
    if c367 then L1006() else L198();
  L263(r696):
    c441 = `as.logical`(r696);
    if c441 then L1248() else L264(c441);
  L779():
    r289 = dyn stop7("unable to install packages");
    check L780() else D126();
  L782():
    p63 = prom<V +>{
      userdir6 = ld userdir;
      userdir7 = force? userdir6;
      checkMissing(userdir7);
      return userdir7;
    };
    r292 = dyn dir_create1[, recursive](p63, TRUE);
    check L783() else D128();
  L855():
    c268 = `as.logical`(r349);
    c269 = `&&`(c265, c268);
    goto L143(c269);
  L858():
    type32 = force? type31;
    checkMissing(type32);
    st type = type32;
    message3 = ldf message;
    check L859() else D166();
  L862():
    p78 = prom<V +>{
      pkgs25 = ld pkgs;
      pkgs26 = force? pkgs25;
      checkMissing(pkgs26);
      return pkgs26;
    };
    r352 = dyn grepl1("[.]tar[.](gz|bz2|xz)$", p78);
    check L863() else D169();
  L929():
    r390 = `!`(r389);
    c332 = `as.logical`(r390);
    if c332 then L930() else L168(c332);
  L942():
    dr24 = tryDispatchBuiltin.1("[", pkgs38);
    dc12 = getTryDispatchBuiltinDispatched(dr24);
    if dc12 then L944() else L943(dr24);
  L943(pkgs40):
    web = ld web;
    check L945() else D204();
  L1004():
    missing9 = ldf missing in base;
    r449 = dyn missing9(<sym repos>);
    goto L197(r449);
  L1005():
    r447 = dyn base45(<sym repos>);
    goto L197(r447);
  L1239():
    c428 = `as.logical`(r692);
    if c428 then L261(c425, c428) else L1240();
  L1246():
    missing10 = ldf missing in base;
    r697 = dyn missing10(<sym contriburl>);
    goto L263(r697);
  L1247():
    r695 = dyn base65(<sym contriburl>);
    goto L263(r695);
  L1356():
    c476 = `as.logical`(r809);
    if c476 then L1357() else L289();
  L1396():
    c481 = `as.logical`(r854);
    if c481 then L1397() else L300();
  L1424():
    st cmd0 = r888;
    sym77 = ldf c;
    base77 = ldf c in base;
    guard77 = `==`.4(sym77, base77);
    if guard77 then L1425() else L1426();
  D126():
    deopt 509 [r289];
  D128():
    deopt 517 [r292];
  D166():
    deopt 650 [];
  D169():
    deopt 657 [r352];
  D204():
    deopt 793 [pkgs40, web];
  D205():
    deopt 798 [];
  L168(c334):
    c338 = `as.logical`(c334);
    if c338 then L934() else L169();
  L198():
    goto L199();
  L199():
    available_packages1 = ldf `available.packages`;
    check L1010() else D233();
  L261(c429, c430):
    c437 = `as.logical`(c430);
    c438 = `&&`(c429, c437);
    goto L260(c438);
  L264(c443):
    c451 = `as.logical`(c443);
    if c451 then L1253() else L266(c451);
  L289():
    goto L290();
  L290():
    _in_14 = ldf `%in%`;
    check L1361() else D423();
  L300():
    _in_15 = ldf `%in%`;
    check L1411() else D450();
  L308(r890):
    st args0 = r890;
    quiet11 = ld quiet;
    check L1428() else D461();
  L780():
    goto L119();
  L783():
    r293 = `!`(r292);
    c196 = `as.logical`(r293);
    if c196 then L784() else L120();
  L859():
    r350 = dyn message3("inferring 'repos = NULL' from 'pkgs'");
    check L860() else D167();
  L863():
    c272 = `as.logical`(r352);
    if c272 then L864() else L145();
  L930():
    dir_create2 = ldf `dir.create`;
    check L931() else D198();
  L944():
    dx26 = getTryDispatchBuiltinValue(dr24);
    goto L173(dx26);
  L945():
    web1 = force? web;
    __7 = ldf `[` in base;
    r403 = dyn __7(pkgs40, web1);
    goto L173(r403);
  L946():
    p91 = prom<V +>{
      urls = ld urls;
      urls1 = force? urls;
      checkMissing(urls1);
      return urls1;
    };
    r405 = dyn unique1(p91);
    check L947() else D206();
  L1006():
    getOption7 = ldf getOption;
    check L1007() else D231();
  L1240():
    startsWith3 = ldf startsWith;
    check L1241() else D363();
  L1248():
    sym66 = ldf `is.null`;
    base66 = ldf `is.null` in base;
    guard66 = `==`.4(sym66, base66);
    if guard66 then L1249() else L1250();
  L1357():
    stop15 = ldf stop;
    check L1358() else D421();
  L1397():
    grepl5 = ldf grepl;
    check L1398() else D443();
  L1425():
    c486 = ldf c in base;
    r891 = dyn c486("CMD", "INSTALL");
    check L1427() else D460();
  L1426():
    r889 = dyn base77("CMD", "INSTALL");
    goto L308(r889);
  D167():
    deopt 652 [r350];
  D198():
    deopt 771 [c332];
  D206():
    deopt 800 [r405];
  D231():
    deopt 913 [];
  D233():
    deopt 920 [];
  D363():
    deopt 1401 [c425, c428];
  D421():
    deopt 1607 [];
  D423():
    deopt 1613 [];
  D443():
    deopt 1696 [];
  D450():
    deopt 1735 [];
  D460():
    deopt 1767 [r891];
  D461():
    deopt 1769 [quiet11];
  L120():
    goto L121();
  L121():
    _libPaths2 = ldf `.libPaths`;
    check L788() else D131();
  L145():
    goto L142(NULL);
  L169():
    goto L170(NULL);
  L170(r400):
    goto L171();
  L265(c446, r699):
    c448 = `as.logical`(r699);
    c449 = `&&`(c446, c448);
    goto L264(c449);
  L266(c453):
    c461 = `as.logical`(c453);
    if c461 then L1258() else L268();
  L784():
    stop8 = ldf stop;
    check L785() else D129();
  L860():
    goto L142(r350);
  L864():
    st repos = NULL;
    st type = "source";
    message4 = ldf message;
    check L865() else D170();
  L931():
    p87 = prom<V +>{
      tmpd2 = ld tmpd;
      tmpd3 = force? tmpd2;
      checkMissing(tmpd3);
      return tmpd3;
    };
    r392 = dyn dir_create2(p87);
    check L932() else D199();
  L934():
    stop10 = ldf stop;
    check L935() else D200();
  L947():
    s = toForSeq(r405);
    l = length(s);
    i = 0;
    goto L174(i);
  L1007():
    r450 = dyn getOption7("repos");
    check L1008() else D232();
  L1010():
    p106 = prom<V +>{
      contriburl3 = ld contriburl;
      contriburl4 = force? contriburl3;
      checkMissing(contriburl4);
      return contriburl4;
    };
    p107 = prom<V +>{
      method5 = ld method;
      method6 = force? method5;
      checkMissing(method6);
      return method6;
    };
    ddd3 = ld `...`;
    r454 = dyn available_packages1[contriburl, method, fields, `...`](p106, p107, "NeedsCompilation", ddd3);
    check L1011() else D234();
  L1241():
    p179 = prom<V +>{
      type63 = ld type;
      type64 = force? type63;
      checkMissing(type64);
      return type64;
    };
    r694 = dyn startsWith3(p179, "mac.binary");
    check L1242() else D364();
  L1249():
    available23 = ld available;
    check L1251() else D365();
  L1250():
    r698 = dyn base66(<sym available>);
    goto L265(c441, r698);
  L1253():
    sym67 = ldf `is.null`;
    base67 = ldf `is.null` in base;
    guard67 = `==`.4(sym67, base67);
    if guard67 then L1254() else L1255();
  L1358():
    r810 = dyn stop15("cannot install macOS binary packages on Windows");
    check L1359() else D422();
  L1361():
    p220 = prom<V +>{
      type71 = ld type;
      type72 = force? type71;
      checkMissing(type72);
      return type72;
    };
    r813 = dyn _in_14(p220, "win.binary");
    check L1362() else D424();
  L1398():
    p242 = prom<V +>{
      R_version4 = ld `R.version`;
      R_version5 = force? R_version4;
      checkMissing(R_version5);
      c482 = `is.object`(R_version5);
      if c482 then L1() else L2(R_version5);
    L0(dx83):
      return dx83;
    L1():
      dr76 = tryDispatchBuiltin.1("$", R_version5);
      dc38 = getTryDispatchBuiltinDispatched(dr76);
      if dc38 then L3() else L2(dr76);
    L2(R_version7):
      r855 = `$`(R_version7, <sym platform>);
      goto L0(r855);
    L3():
      dx82 = getTryDispatchBuiltinValue(dr76);
      goto L0(dx82);
    };
    r857 = dyn grepl5("darwin", p242);
    check L1399() else D444();
  L1411():
    p251 = prom<V +>{
      type75 = ld type;
      type76 = force? type75;
      checkMissing(type76);
      return type76;
    };
    r876 = dyn _in_15(p251, "win.binary");
    check L1412() else D451();
  L1427():
    goto L308(r891);
  L1428():
    quiet12 = force? quiet11;
    checkMissing(quiet12);
    c487 = `as.logical`(quiet12);
    if c487 then L1429() else L309();
  D129():
    deopt 520 [];
  D131():
    deopt 528 [];
  D170():
    deopt 665 [];
  D199():
    deopt 773 [c332, r392];
  D200():
    deopt 777 [];
  D232():
    deopt 915 [r450];
  D234():
    deopt 928 [r454];
  D364():
    deopt 1404 [c425, c428, r694];
  D365():
    deopt 1411 [c441, available23];
  D422():
    deopt 1609 [r810];
  D424():
    deopt 1616 [r813];
  D444():
    deopt 1699 [r857];
  D451():
    deopt 1738 [r876];
  L174(i1):
    i2 = `+`.1(i1, 1);
    c341 = `<`.1(l, i2);
    if c341 then L948() else L181();
  L267(c456, r701):
    r702 = `!`(r701);
    c458 = `as.logical`(r702);
    c459 = `&&`(c456, c458);
    goto L266(c459);
  L268():
    goto L287(NULL);
  L287(r805):
    goto L259();
  L309():
    goto L310("");
  L310(r892):
    st output = r892;
    character = ldf character;
    check L1431() else D462();
  L785():
    p66 = prom<V +>{
      gettextf3 = ldf gettextf;
      p65 = prom<V +>{
        sQuote5 = ldf sQuote;
        p64 = prom<V +>{
          userdir8 = ld userdir;
          userdir9 = force? userdir8;
          checkMissing(userdir9);
          return userdir9;
        };
        r295 = dyn sQuote5(p64);
        return r295;
      };
      r297 = dyn gettextf3("unable to create %s", p65);
      return r297;
    };
    r299 = dyn stop8[, domain](p66, NA_LGL);
    check L786() else D130();
  L788():
    p67 = prom<V +>{
      sym30 = ldf c;
      base30 = ldf c in base;
      guard30 = `==`.4(sym30, base30);
      if guard30 then L1() else L2();
    L0(r302):
      return r302;
    L1():
      userdir10 = ld userdir;
      userdir11 = force? userdir10;
      checkMissing(userdir11);
      _libPaths3 = ldf `.libPaths`;
      r303 = dyn _libPaths3();
      c197 = ldf c in base;
      r304 = dyn c197(userdir11, r303);
      goto L0(r304);
    L2():
      r301 = dyn base30(<sym userdir>, <lang .libPaths()>);
      goto L0(r301);
    };
    r306 = dyn _libPaths2(p67);
    check L789() else D132();
  L865():
    r353 = dyn message4("inferring 'repos = NULL' from 'pkgs'");
    check L866() else D171();
  L932():
    r393 = `!`(r392);
    c335 = `as.logical`(r393);
    c336 = `&&`(c332, c335);
    goto L168(c336);
  L935():
    p90 = prom<V +>{
      gettextf4 = ldf gettextf;
      p89 = prom<V +>{
        sQuote6 = ldf sQuote;
        p88 = prom<V +>{
          tmpd4 = ld tmpd;
          tmpd5 = force? tmpd4;
          checkMissing(tmpd5);
          return tmpd5;
        };
        r395 = dyn sQuote6(p88);
        return r395;
      };
      r397 = dyn gettextf4("unable to create temporary directory %s", p89);
      return r397;
    };
    r399 = dyn stop10[, domain](p90, NA_LGL);
    check L936() else D201();
  L1008():
    st repos = r450;
    goto L199();
  L1011():
    st available = r454;
    getDependencies = ldf getDependencies;
    check L1012() else D235();
  L1242():
    c433 = `as.logical`(r694);
    c434 = `||`(c428, c433);
    goto L261(c425, c434);
  L1251():
    available24 = force? available23;
    checkMissing(available24);
    c447 = `==`(available24, NULL);
    goto L265(c441, c447);
  L1254():
    repos17 = ld repos;
    check L1256() else D366();
  L1255():
    r700 = dyn base67(<sym repos>);
    goto L267(c451, r700);
  L1258():
    contrib_url5 = ldf `contrib.url`;
    check L1259() else D367();
  L1359():
    goto L290();
  L1362():
    c477 = `as.logical`(r813);
    if c477 then L1363() else L291();
  L1399():
    r858 = `!`(r857);
    c483 = `as.logical`(r858);
    if c483 then L1400() else L301();
  L1412():
    c484 = `as.logical`(r876);
    if c484 then L1413() else L305();
  L1429():
    goto L310(FALSE);
  D130():
    deopt 524 [r299];
  D132():
    deopt 530 [r306];
  D171():
    deopt 667 [r353];
  D201():
    deopt 781 [r399];
  D235():
    deopt 931 [];
  D366():
    deopt 1416 [c451, repos17];
  D367():
    deopt 1422 [];
  D462():
    deopt 1777 [];
  L181():
    x = `[[`(s, i2, NULL, TRUE);
    st p = x;
    pkgs41 = ld pkgs;
    check L949() else D207();
  L291():
    grep1 = ldf grep;
    check L1371() else D428();
  L301():
    goto L302();
  L302():
    _install_macbinary1 = ldf `.install.macbinary`;
    check L1404() else D447();
  L305():
    goto L306();
  L306():
    file_exists2 = ldf `file.exists`;
    check L1417() else D454();
  L786():
    goto L121();
  L789():
    goto L122(r306);
  L866():
    goto L142(r353);
  L936():
    goto L170(r399);
  L948():
    goto L182(i2);
  L1012():
    p108 = prom<V +>{
      pkgs43 = ld pkgs;
      pkgs44 = force? pkgs43;
      checkMissing(pkgs44);
      return pkgs44;
    };
    p109 = prom<V +>{
      dependencies5 = ld dependencies;
      dependencies6 = force? dependencies5;
      checkMissing(dependencies6);
      return dependencies6;
    };
    p110 = prom<V +>{
      available9 = ld available;
      available10 = force? available9;
      checkMissing(available10);
      return available10;
    };
    p111 = prom<V +>{
      lib29 = ld lib;
      lib30 = force? lib29;
      checkMissing(lib30);
      return lib30;
    };
    ddd4 = ld `...`;
    r459 = dyn getDependencies[, , , , `...`](p108, p109, p110, p111, ddd4);
    check L1013() else D236();
  L1256():
    repos18 = force? repos17;
    checkMissing(repos18);
    c457 = `==`(repos18, NULL);
    goto L267(c451, c457);
  L1259():
    p180 = prom<V +>{
      repos19 = ld repos;
      repos20 = force? repos19;
      checkMissing(repos20);
      return repos20;
    };
    r704 = dyn contrib_url5(p180, "source");
    check L1260() else D368();
  L1363():
    _install_winbinary1 = ldf `.install.winbinary`;
    check L1364() else D425();
  L1400():
    stop16 = ldf stop;
    check L1401() else D445();
  L1413():
    stop17 = ldf stop;
    check L1414() else D452();
  L1431():
    r893 = dyn character();
    check L1432() else D463();
  D207():
    deopt 801 [i2, pkgs41];
  D236():
    deopt 937 [r459];
  D368():
    deopt 1425 [r704];
  D425():
    deopt 1618 [];
  D428():
    deopt 1647 [];
  D445():
    deopt 1702 [];
  D447():
    deopt 1708 [];
  D452():
    deopt 1740 [];
  D454():
    deopt 1746 [];
  D463():
    deopt 1778 [r893];
  L949():
    pkgs42 = force? pkgs41;
    checkMissing(pkgs42);
    p92 = ld p;
    check L950() else D208();
  L1013():
    st pkgs = r459;
    st getDeps = FALSE;
    available_packages2 = ldf `available.packages`;
    check L1014() else D237();
  L1260():
    st contriburl2 = r704;
    sym68 = ldf missing;
    base68 = ldf missing in base;
    guard68 = `==`.4(sym68, base68);
    if guard68 then L1261() else L1262();
  L1364():
    p221 = prom<V +>{
      pkgs81 = ld pkgs;
      pkgs82 = force? pkgs81;
      checkMissing(pkgs82);
      return pkgs82;
    };
    p222 = prom<V +>{
      lib35 = ld lib;
      lib36 = force? lib35;
      checkMissing(lib36);
      return lib36;
    };
    p223 = prom<V +>{
      contriburl7 = ld contriburl;
      contriburl8 = force? contriburl7;
      checkMissing(contriburl8);
      return contriburl8;
    };
    p224 = prom<V +>{
      method19 = ld method;
      method20 = force? method19;
      checkMissing(method20);
      return method20;
    };
    p225 = prom<V +>{
      available31 = ld available;
      available32 = force? available31;
      checkMissing(available32);
      return available32;
    };
    p226 = prom<V +>{
      destdir9 = ld destdir;
      destdir10 = force? destdir9;
      checkMissing(destdir10);
      return destdir10;
    };
    p227 = prom<V +>{
      dependencies7 = ld dependencies;
      dependencies8 = force? dependencies7;
      checkMissing(dependencies8);
      return dependencies8;
    };
    p228 = prom<V +>{
      libs_only3 = ld libs_only;
      libs_only4 = force? libs_only3;
      checkMissing(libs_only4);
      return libs_only4;
    };
    p229 = prom<V +>{
      quiet7 = ld quiet;
      quiet8 = force? quiet7;
      checkMissing(quiet8);
      return quiet8;
    };
    ddd11 = ld `...`;
    r823 = dyn _install_winbinary1[pkgs, lib, contriburl, method, available, destdir, dependencies, libs_only, quiet, `...`](p221, p222, p223, p224, p225, p226, p227, p228, p229, ddd11);
    check L1365() else D426();
  L1371():
    p230 = prom<V +>{
      pkgs83 = ld pkgs;
      pkgs84 = force? pkgs83;
      checkMissing(pkgs84);
      return pkgs84;
    };
    r830 = dyn grep1(" ", p230);
    check L1372() else D429();
  L1401():
    r859 = dyn stop16("cannot install macOS binary packages on this platform");
    check L1402() else D446();
  L1404():
    p243 = prom<V +>{
      pkgs91 = ld pkgs;
      pkgs92 = force? pkgs91;
      checkMissing(pkgs92);
      return pkgs92;
    };
    p244 = prom<V +>{
      lib37 = ld lib;
      lib38 = force? lib37;
      checkMissing(lib38);
      return lib38;
    };
    p245 = prom<V +>{
      contriburl9 = ld contriburl;
      contriburl10 = force? contriburl9;
      checkMissing(contriburl10);
      return contriburl10;
    };
    p246 = prom<V +>{
      method21 = ld method;
      method22 = force? method21;
      checkMissing(method22);
      return method22;
    };
    p247 = prom<V +>{
      available33 = ld available;
      available34 = force? available33;
      checkMissing(available34);
      return available34;
    };
    p248 = prom<V +>{
      destdir11 = ld destdir;
      destdir12 = force? destdir11;
      checkMissing(destdir12);
      return destdir12;
    };
    p249 = prom<V +>{
      dependencies9 = ld dependencies;
      dependencies10 = force? dependencies9;
      checkMissing(dependencies10);
      return dependencies10;
    };
    p250 = prom<V +>{
      quiet9 = ld quiet;
      quiet10 = force? quiet9;
      checkMissing(quiet10);
      return quiet10;
    };
    ddd12 = ld `...`;
    r869 = dyn _install_macbinary1[pkgs, lib, contriburl, method, available, destdir, dependencies, quiet, `...`](p243, p244, p245, p246, p247, p248, p249, p250, ddd12);
    check L1405() else D448();
  L1414():
    r877 = dyn stop17("cannot install Windows binary packages on this platform");
    check L1415() else D453();
  L1417():
    p253 = prom<V +>{
      file_path4 = ldf `file.path`;
      p252 = prom<V +>{
        R_home = ldf `R.home`;
        r879 = dyn R_home("bin");
        return r879;
      };
      r881 = dyn file_path4(p252, "INSTALL");
      return r881;
    };
    r883 = dyn file_exists2(p253);
    check L1418() else D455();
  L1432():
    st env = r893;
    Sys_getenv2 = ldf `Sys.getenv`;
    check L1433() else D464();
  D208():
    deopt 802 [i2, pkgs42, p92];
  D237():
    deopt 943 [];
  D426():
    deopt 1638 [r823];
  D429():
    deopt 1650 [r830];
  D446():
    deopt 1704 [r859];
  D448():
    deopt 1726 [r869];
  D453():
    deopt 1742 [r877];
  D455():
    deopt 1748 [r883];
  D464():
    deopt 1781 [];
  L269(r706):
    c462 = `as.logical`(r706);
    if c462 then L1263() else L270();
  L950():
    p93 = force? p92;
    checkMissing(p93);
    r406 = `==`(pkgs42, p93);
    st this = r406;
    file_path2 = ldf `file.path`;
    check L951() else D209();
  L1014():
    p114 = prom<V +>{
      contrib_url2 = ldf `contrib.url`;
      p112 = prom<V +>{
        repos11 = ld repos;
        repos12 = force? repos11;
        checkMissing(repos12);
        return repos12;
      };
      p113 = prom<V +>{
        type53 = ld type2;
        type54 = force? type53;
        checkMissing(type54);
        return type54;
      };
      r462 = dyn contrib_url2(p112, p113);
      return r462;
    };
    p115 = prom<V +>{
      method7 = ld method;
      method8 = force? method7;
      checkMissing(method8);
      return method8;
    };
    ddd5 = ld `...`;
    r465 = dyn available_packages2[contriburl, method, `...`](p114, p115, ddd5);
    check L1015() else D238();
  L1261():
    missing11 = ldf missing in base;
    r707 = dyn missing11(<sym repos>);
    goto L269(r707);
  L1262():
    r705 = dyn base68(<sym repos>);
    goto L269(r705);
  L1365():
    sym74 = ldf invisible;
    base74 = ldf invisible in base;
    guard74 = `==`.4(sym74, base74);
    if guard74 then L1366() else L1367();
  L1372():
    st have_spaces = r830;
    sym75 = ldf length;
    base75 = ldf length in base;
    guard75 = `==`.4(sym75, base75);
    if guard75 then L1373() else L1374();
  L1402():
    goto L302();
  L1405():
    sym76 = ldf invisible;
    base76 = ldf invisible in base;
    guard76 = `==`.4(sym76, base76);
    if guard76 then L1406() else L1407();
  L1415():
    goto L306();
  L1418():
    r884 = `!`(r883);
    c485 = `as.logical`(r884);
    if c485 then L1419() else L307();
  L1433():
    r894 = dyn Sys_getenv2("_R_INSTALL_PACKAGES_ELAPSED_TIMEOUT_");
    check L1434() else D465();
  D209():
    deopt 807 [i2];
  D238():
    deopt 949 [r465];
  D465():
    deopt 1783 [r894];
  L270():
    goto L271();
  L271():
    tryCatch = ldf tryCatch;
    check L1267() else D371();
  L292(r825):
    popenv;
    return r825;
  L294(r832):
    c478 = `as.logical`(r832);
    if c478 then L1377() else L295();
  L303(r871):
    popenv;
    return r871;
  L307():
    goto L299();
  L951():
    p94 = prom<V +>{
      tmpd6 = ld tmpd;
      tmpd7 = force? tmpd6;
      checkMissing(tmpd7);
      return tmpd7;
    };
    p98 = prom<V +>{
      basename = ldf basename;
      p97 = prom<V +>{
        p95 = ld p;
        p96 = force? p95;
        checkMissing(p96);
        return p96;
      };
      r409 = dyn basename(p97);
      return r409;
    };
    r411 = dyn file_path2(p94, p98);
    check L952() else D210();
  L1015():
    st av2 = r465;
    row_names = ldf `row.names`;
    check L1016() else D239();
  L1263():
    getOption10 = ldf getOption;
    check L1264() else D369();
  L1366():
    invisible2 = ldf invisible in base;
    r826 = dyn invisible2();
    check L1368() else D427();
  L1367():
    r824 = dyn base74();
    goto L292(r824);
  L1373():
    have_spaces = ld have_spaces;
    check L1375() else D430();
  L1374():
    r831 = dyn base75(<sym have_spaces>);
    goto L294(r831);
  L1406():
    invisible3 = ldf invisible in base;
    r872 = dyn invisible3();
    check L1408() else D449();
  L1407():
    r870 = dyn base76();
    goto L303(r870);
  L1419():
    stop18 = ldf stop;
    check L1420() else D456();
  L1434():
    st tlim = r894;
    sym78 = ldf nzchar;
    base78 = ldf nzchar in base;
    guard78 = `==`.4(sym78, base78);
    if guard78 then L1435() else L1436();
  D210():
    deopt 810 [i2, r411];
  D239():
    deopt 952 [];
  D369():
    deopt 1431 [];
  D371():
    deopt 1438 [];
  D427():
    deopt 1642 [r826];
  D430():
    deopt 1654 [have_spaces];
  D449():
    deopt 1730 [r872];
  D456():
    deopt 1751 [];
  L295():
    goto L298();
  L298():
    gsub = ldf gsub;
    check L1392() else D439();
  L311(r896):
    r898 = `!`(r896);
    c488 = `as.logical`(r898);
    if c488 then L1439() else L312();
  L952():
    st destfile = r411;
    try1 = ldf try;
    check L953() else D211();
  L1016():
    p116 = prom<V +>{
      av8 = ld av2;
      av9 = force? av8;
      checkMissing(av9);
      return av9;
    };
    r467 = dyn row_names(p116);
    check L1017() else D240();
  L1264():
    r708 = dyn getOption10("repos");
    check L1265() else D370();
  L1267():
    p184 = prom<V +>{
      suppressWarnings1 = ldf suppressWarnings;
      p183 = prom<V +>{
        available_packages3 = ldf `available.packages`;
        p181 = prom<V +>{
          contriburl5 = ld contriburl2;
          contriburl6 = force? contriburl5;
          checkMissing(contriburl6);
          return contriburl6;
        };
        p182 = prom<V +>{
          method13 = ld method;
          method14 = force? method13;
          checkMissing(method14);
          return method14;
        };
        ddd8 = ld `...`;
        r712 = dyn available_packages3[contriburl, method, `...`](p181, p182, ddd8);
        return r712;
      };
      r714 = dyn suppressWarnings1(p183);
      return r714;
    };
    p185 = prom<V +>{
      r716 = clos inner3708401697;
      return r716;
    };
    r718 = dyn tryCatch[, error](p184, p185);
    check L1268() else D372();
  L1368():
    goto L292(r826);
  L1375():
    have_spaces1 = force? have_spaces;
    checkMissing(have_spaces1);
    length20 = ldf length in base;
    r833 = dyn length20(have_spaces1);
    check L1376() else D431();
  L1377():
    pkgs85 = ld pkgs;
    check L1378() else D432();
  L1408():
    goto L303(r872);
  L1420():
    r885 = dyn stop18("This version of R is not set up to install source packages\nIf it was installed from an RPM, you may need the R-devel RPM");
    check L1421() else D457();
  L1435():
    tlim = ld tlim;
    check L1437() else D466();
  L1436():
    r895 = dyn base78(<sym tlim>);
    goto L311(r895);
  D211():
    deopt 813 [i2];
  D240():
    deopt 954 [r467];
  D370():
    deopt 1433 [r708];
  D372():
    deopt 1442 [r718];
  D431():
    deopt 1657 [r833];
  D432():
    deopt 1658 [pkgs85];
  D439():
    deopt 1682 [];
  D457():
    deopt 1753 [r885];
  D466():
    deopt 1787 [tlim];
  L312():
    ___5 = ldf `:::`;
    check L1441() else D468();
  L313(r899):
    st tlim = r899;
    getwd = ldf getwd;
    check L1444() else D471();
  L953():
    p104 = prom<V +>{
      df = ldf df;
      p101 = prom<V +>{
        p99 = ld p;
        p100 = force? p99;
        checkMissing(p100);
        return p100;
      };
      p102 = prom<V +>{
        destfile = ld destfile;
        destfile1 = force? destfile;
        checkMissing(destfile1);
        return destfile1;
      };
      p103 = prom<V +>{
        method3 = ld method;
        method4 = force? method3;
        checkMissing(method4);
        return method4;
      };
      ddd2 = ld `...`;
      r415 = dyn df[, , , `...`](p101, p102, p103, ddd2);
      return r415;
    };
    r417 = dyn try1(p104);
    check L954() else D212();
  L1017():
    st bins = r467;
    pkgs45 = ld pkgs;
    check L1018() else D241();
  L1265():
    st repos = r708;
    goto L271();
  L1268():
    st av1 = r718;
    sym69 = ldf inherits;
    base69 = ldf inherits in base;
    guard69 = `==`.4(sym69, base69);
    if guard69 then L1269() else L1270();
  L1376():
    goto L294(r833);
  L1378():
    pkgs86 = force? pkgs85;
    checkMissing(pkgs86);
    c479 = `is.object`(pkgs86);
    if c479 then L1379() else L1380(pkgs86);
  L1392():
    p240 = prom<V +>{
      pkgs89 = ld pkgs;
      pkgs90 = force? pkgs89;
      checkMissing(pkgs90);
      return pkgs90;
    };
    r851 = dyn gsub[, , , fixed]("\\", "/", p240, TRUE);
    check L1393() else D440();
  L1421():
    goto L299();
  L1437():
    tlim1 = force? tlim;
    checkMissing(tlim1);
    nzchar1 = ldf nzchar in base;
    r897 = dyn nzchar1(tlim1);
    check L1438() else D467();
  L1439():
    goto L313(0.0);
  D212():
    deopt 815 [i2, r417];
  D241():
    deopt 956 [pkgs45];
  D440():
    deopt 1688 [r851];
  D467():
    deopt 1790 [r897];
  D468():
    deopt 1795 [];
  D471():
    deopt 1804 [];
  L272(r720):
    c463 = `as.logical`(r720);
    if c463 then L1273() else L273();
  L296(dx79):
    st p = dx79;
    shortPathName = ldf shortPathName;
    check L1383() else D434();
  L954():
    st res = r417;
    sym41 = ldf inherits;
    base41 = ldf inherits in base;
    guard41 = `==`.4(sym41, base41);
    if guard41 then L955() else L956();
  L1018():
    pkgs46 = force? pkgs45;
    checkMissing(pkgs46);
    c368 = `is.object`(pkgs46);
    if c368 then L1019() else L1020(pkgs46);
  L1269():
    av22 = ld av1;
    check L1271() else D373();
  L1270():
    r719 = dyn base69(<sym av1>, "error");
    goto L272(r719);
  L1379():
    dr72 = tryDispatchBuiltin.1("[", pkgs86);
    dc36 = getTryDispatchBuiltinDispatched(dr72);
    if dc36 then L1381() else L1380(dr72);
  L1380(pkgs88):
    have_spaces2 = ld have_spaces;
    check L1382() else D433();
  L1393():
    st pkgs = r851;
    goto L299();
  L1438():
    goto L311(r897);
  L1441():
    r900 = dyn ___5("tools", "get_timeout");
    check L1442() else D469();
  L1444():
    r904 = dyn getwd();
    check L1445() else D472();
  D373():
    deopt 1446 [av22];
  D433():
    deopt 1660 [pkgs88, have_spaces2];
  D434():
    deopt 1665 [];
  D469():
    deopt 1798 [r900];
  D472():
    deopt 1805 [r904];
  L175(i7, r419):
    r421 = `!`(r419);
    c342 = `as.logical`(r421);
    if c342 then L959() else L176(i7, c342);
  L200(dx33):
    st bins = dx33;
    pkgs51 = ld pkgs;
    check L1024() else D244();
  L273():
    pkgs69 = ld pkgs;
    check L1279() else D379();
  L274(r729):
    goto L287(r729);
  L955():
    res4 = ld res;
    check L957() else D213();
  L956():
    r418 = dyn base41(<sym res>, "try-error");
    goto L175(i2, r418);
  L1019():
    dr30 = tryDispatchBuiltin.1("[", pkgs46);
    dc15 = getTryDispatchBuiltinDispatched(dr30);
    if dc15 then L1021() else L1020(dr30);
  L1020(pkgs48):
    _in_4 = ldf `%in%`;
    check L1022() else D242();
  L1271():
    av23 = force? av22;
    checkMissing(av23);
    inherits2 = ldf inherits in base;
    r721 = dyn inherits2(av23, "error", FALSE);
    check L1272() else D374();
  L1273():
    message7 = ldf message;
    check L1274() else D375();
  L1381():
    dx78 = getTryDispatchBuiltinValue(dr72);
    goto L296(dx78);
  L1382():
    have_spaces3 = force? have_spaces2;
    __25 = ldf `[` in base;
    r834 = dyn __25(pkgs88, have_spaces3);
    goto L296(r834);
  L1383():
    p234 = prom<V +>{
      dirname = ldf dirname;
      p233 = prom<V +>{
        p231 = ld p;
        p232 = force? p231;
        checkMissing(p232);
        return p232;
      };
      r836 = dyn dirname(p233);
      return r836;
    };
    r838 = dyn shortPathName(p234);
    check L1384() else D435();
  L1442():
    checkFun.0(r900);
    r901 = r900 as cls;
    p255 = prom<V +>{
      tlim2 = ld tlim;
      tlim3 = force? tlim2;
      checkMissing(tlim3);
      return tlim3;
    };
    r903 = dyn r901(p255);
    check L1443() else D470();
  L1445():
    st outdir = r904;
    sym79 = ldf `is.logical`;
    base79 = ldf `is.logical` in base;
    guard79 = `==`.4(sym79, base79);
    if guard79 then L1446() else L1447();
  D213():
    deopt 819 [i2, res4];
  D242():
    deopt 959 [pkgs48];
  D244():
    deopt 965 [pkgs51];
  D374():
    deopt 1451 [r721];
  D375():
    deopt 1453 [];
  D379():
    deopt 1465 [pkgs69];
  D435():
    deopt 1667 [r838];
  D470():
    deopt 1801 [r903];
  L176(i9, c344):
    c348 = `as.logical`(c344);
    if c348 then L962() else L177();
  L314(r906):
    c490 = `as.logical`(r906);
    if c490 then L1449() else L315();
  L957():
    res5 = force? res4;
    checkMissing(res5);
    inherits1 = ldf inherits in base;
    r420 = dyn inherits1(res5, "try-error", FALSE);
    check L958() else D214();
  L959():
    res6 = ld res;
    check L960() else D215();
  L1021():
    dx32 = getTryDispatchBuiltinValue(dr30);
    goto L200(dx32);
  L1022():
    p117 = prom<V +>{
      pkgs49 = ld pkgs;
      pkgs50 = force? pkgs49;
      checkMissing(pkgs50);
      return pkgs50;
    };
    p118 = prom<V +>{
      bins = ld bins;
      bins1 = force? bins;
      checkMissing(bins1);
      return bins1;
    };
    r470 = dyn _in_4(p117, p118);
    check L1023() else D243();
  L1024():
    pkgs52 = force? pkgs51;
    checkMissing(pkgs52);
    c369 = `is.object`(pkgs52);
    if c369 then L1025() else L1026(pkgs52);
  L1272():
    goto L272(r721);
  L1274():
    r722 = dyn message7("source repository is unavailable to check versions");
    check L1275() else D376();
  L1279():
    pkgs70 = force? pkgs69;
    checkMissing(pkgs70);
    c464 = `is.object`(pkgs70);
    if c464 then L1280() else L1281(pkgs70);
  L1384():
    st dirs = r838;
    file_path3 = ldf `file.path`;
    check L1385() else D436();
  L1443():
    goto L313(r903);
  L1446():
    keep_outputs1 = ld keep_outputs;
    check L1448() else D473();
  L1447():
    r905 = dyn base79(<sym keep_outputs>);
    goto L314(r905);
  D214():
    deopt 824 [i2, r420];
  D215():
    deopt 826 [i7, c342, res6];
  D243():
    deopt 962 [pkgs48, r470];
  D376():
    deopt 1455 [r722];
  D436():
    deopt 1670 [];
  D473():
    deopt 1808 [keep_outputs1];
  L177():
    l4 = ld pkgs;
    c350 = `is.object`(l4);
    if c350 then L969() else L970(i9, NA_LGL, l4);
  L179(i17):
    goto L174(i17);
  L201(dx35):
    st srcOnly = dx35;
    av10 = ld av2;
    check L1030() else D247();
  L275(dx57):
    st srcpkgs = dx57;
    available_packages5 = ldf `available.packages`;
    check L1285() else D382();
  L315():
    sym81 = ldf `is.character`;
    base81 = ldf `is.character` in base;
    guard81 = `==`.4(sym81, base81);
    if guard81 then L1457() else L1458();
  L319():
    sym83 = ldf length;
    base83 = ldf length in base;
    guard83 = `==`.4(sym83, base83);
    if guard83 then L1482() else L1483();
  L958():
    goto L175(i2, r420);
  L960():
    res7 = force? res6;
    checkMissing(res7);
    r422 = `==`(res7, 0);
    c345 = `as.logical`(r422);
    c346 = `&&`(c342, c345);
    goto L176(i7, c346);
  L962():
    destfile2 = ld destfile;
    check L963() else D216();
  L1023():
    __8 = ldf `[` in base;
    r471 = dyn __8(pkgs48, r470);
    goto L200(r471);
  L1025():
    dr32 = tryDispatchBuiltin.1("[", pkgs52);
    dc16 = getTryDispatchBuiltinDispatched(dr32);
    if dc16 then L1027() else L1026(dr32);
  L1026(pkgs54):
    _in_5 = ldf `%in%`;
    check L1028() else D245();
  L1275():
    available_packages4 = ldf `available.packages`;
    check L1276() else D377();
  L1280():
    dr54 = tryDispatchBuiltin.1("[", pkgs70);
    dc27 = getTryDispatchBuiltinDispatched(dr54);
    if dc27 then L1282() else L1281(dr54);
  L1281(pkgs72):
    _in_10 = ldf `%in%`;
    check L1283() else D380();
  L1385():
    p235 = prom<V +>{
      dirs = ld dirs;
      dirs1 = force? dirs;
      checkMissing(dirs1);
      return dirs1;
    };
    p239 = prom<V +>{
      basename1 = ldf basename;
      p238 = prom<V +>{
        p236 = ld p;
        p237 = force? p236;
        checkMissing(p237);
        return p237;
      };
      r841 = dyn basename1(p238);
      return r841;
    };
    r843 = dyn file_path3(p235, p239);
    check L1386() else D437();
  L1448():
    keep_outputs2 = force? keep_outputs1;
    checkMissing(keep_outputs2);
    c489 = `is.logical`(keep_outputs2);
    goto L314(c489);
  L1449():
    sym80 = ldf `is.na`;
    base80 = ldf `is.na` in base;
    guard80 = `==`.4(sym80, base80);
    if guard80 then L1450() else L1451();
  D216():
    deopt 831 [i9, destfile2];
  D245():
    deopt 968 [pkgs54];
  D247():
    deopt 975 [av10];
  D377():
    deopt 1457 [];
  D380():
    deopt 1468 [pkgs72];
  D382():
    deopt 1475 [];
  D437():
    deopt 1673 [r843];
  L180(i21, r427, dx31):
    st pkgs = dx31;
    goto L179(i21);
  L316(r908):
    c491 = `as.logical`(r908);
    if c491 then L1454() else L317();
  L320(r913):
    c493 = `as.logical`(r913);
    if c493 then L1460() else L321(c493);
  L327(r939):
    c510 = `as.logical`(r939);
    if c510 then L1487() else L328();
  L963():
    destfile3 = force? destfile2;
    checkMissing(destfile3);
    l1 = ld pkgs;
    c349 = `is.object`(l1);
    if c349 then L964() else L965(i9, destfile3, l1);
  L969():
    dr28 = tryDispatchBuiltin.0("[<-", l4, NA_LGL);
    dc14 = getTryDispatchBuiltinDispatched(dr28);
    if dc14 then L971() else L970(i9, NA_LGL, dr28);
  L970(i19, r425, l6):
    this2 = ld this;
    check L972() else D218();
  L1027():
    dx34 = getTryDispatchBuiltinValue(dr32);
    goto L201(dx34);
  L1028():
    p119 = prom<V +>{
      pkgs55 = ld pkgs;
      pkgs56 = force? pkgs55;
      checkMissing(pkgs56);
      return pkgs56;
    };
    p120 = prom<V +>{
      bins2 = ld bins;
      bins3 = force? bins2;
      checkMissing(bins3);
      return bins3;
    };
    r474 = dyn _in_5(p119, p120);
    check L1029() else D246();
  L1030():
    av11 = force? av10;
    checkMissing(av11);
    c370 = `is.object`(av11);
    if c370 then L1031() else L1032(av11);
  L1276():
    p188 = prom<V +>{
      contrib_url6 = ldf `contrib.url`;
      p186 = prom<V +>{
        repos21 = ld repos;
        repos22 = force? repos21;
        checkMissing(repos22);
        return repos22;
      };
      p187 = prom<V +>{
        type65 = ld type;
        type66 = force? type65;
        checkMissing(type66);
        return type66;
      };
      r725 = dyn contrib_url6(p186, p187);
      return r725;
    };
    p189 = prom<V +>{
      method15 = ld method;
      method16 = force? method15;
      checkMissing(method16);
      return method16;
    };
    ddd9 = ld `...`;
    r728 = dyn available_packages4[contriburl, method, `...`](p188, p189, ddd9);
    check L1277() else D378();
  L1282():
    dx56 = getTryDispatchBuiltinValue(dr54);
    goto L275(dx56);
  L1283():
    p190 = prom<V +>{
      pkgs73 = ld pkgs;
      pkgs74 = force? pkgs73;
      checkMissing(pkgs74);
      return pkgs74;
    };
    p192 = prom<V +>{
      row_names1 = ldf `row.names`;
      p191 = prom<V +>{
        av24 = ld av1;
        av25 = force? av24;
        checkMissing(av25);
        return av25;
      };
      r732 = dyn row_names1(p191);
      return r732;
    };
    r734 = dyn _in_10(p190, p192);
    check L1284() else D381();
  L1285():
    p195 = prom<V +>{
      contrib_url7 = ldf `contrib.url`;
      p193 = prom<V +>{
        repos23 = ld repos;
        repos24 = force? repos23;
        checkMissing(repos24);
        return repos24;
      };
      p194 = prom<V +>{
        type67 = ld type;
        type68 = force? type67;
        checkMissing(type68);
        return type68;
      };
      r738 = dyn contrib_url7(p193, p194);
      return r738;
    };
    p196 = prom<V +>{
      method17 = ld method;
      method18 = force? method17;
      checkMissing(method18);
      return method18;
    };
    ddd10 = ld `...`;
    r741 = dyn available_packages5[contriburl, method, `...`](p195, p196, ddd10);
    check L1286() else D383();
  L1386():
    l13 = ld pkgs;
    c480 = `is.object`(l13);
    if c480 then L1387() else L1388(r843, l13);
  L1450():
    keep_outputs3 = ld keep_outputs;
    check L1452() else D474();
  L1451():
    r907 = dyn base80(<sym keep_outputs>);
    goto L316(r907);
  L1457():
    keep_outputs5 = ld keep_outputs;
    check L1459() else D476();
  L1458():
    r912 = dyn base81(<sym keep_outputs>);
    goto L320(r912);
  L1482():
    _R_LIBS = ldf `.R_LIBS`;
    check L1484() else D489();
  L1483():
    r938 = dyn base83(<lang `<-`(libpath, .R_LIBS())>);
    goto L327(r938);
  D218():
    deopt 841 [i19, r425, l6, NA_LGL, this2];
  D246():
    deopt 971 [pkgs54, r474];
  D378():
    deopt 1463 [r728];
  D381():
    deopt 1471 [pkgs72, r734];
  D383():
    deopt 1481 [r741];
  D474():
    deopt 1813 [keep_outputs3];
  D476():
    deopt 1823 [keep_outputs5];
  D489():
    deopt 1873 [];
  L178(i16, destfile7, dx29):
    st pkgs = dx29;
    goto L179(i16);
  L202(dx37):
    st binvers = dx37;
    sym46 = ldf `is.na`;
    base46 = ldf `is.na` in base;
    guard46 = `==`.4(sym46, base46);
    if guard46 then L1035() else L1036();
  L297(r847, dx81):
    st pkgs = dx81;
    goto L298();
  L317():
    goto L318(NULL);
  L318(r910):
    goto L319();
  L321(c495):
    c502 = `as.logical`(c495);
    if c502 then L1466() else L323();
  L328():
    goto L332();
  L332():
    sym85 = ldf `is.character`;
    base85 = ldf `is.character` in base;
    guard85 = `==`.4(sym85, base85);
    if guard85 then L1504() else L1505();
  L964():
    dr26 = tryDispatchBuiltin.0("[<-", l1, destfile3);
    dc13 = getTryDispatchBuiltinDispatched(dr26);
    if dc13 then L966() else L965(i9, destfile3, dr26);
  L965(i14, destfile5, l3):
    this = ld this;
    check L967() else D217();
  L971():
    dx30 = getTryDispatchBuiltinValue(dr28);
    goto L180(i9, NA_LGL, dx30);
  L972():
    this3 = force? this2;
    ___1 = ldf `[<-` in base;
    r428 = dyn ___1(l6, NA_LGL, this3);
    goto L180(i19, r425, r428);
  L1029():
    r475 = `!`(r474);
    __9 = ldf `[` in base;
    r476 = dyn __9(pkgs54, r475);
    goto L201(r476);
  L1031():
    dr34 = tryDispatchBuiltin.1("[", av11);
    dc17 = getTryDispatchBuiltinDispatched(dr34);
    if dc17 then L1033() else L1032(dr34);
  L1032(av13):
    bins4 = ld bins;
    check L1034() else D248();
  L1277():
    st available = r728;
    goto L274(r728);
  L1284():
    __18 = ldf `[` in base;
    r735 = dyn __18(pkgs72, r734);
    goto L275(r735);
  L1286():
    st available = r741;
    pkgs75 = ld pkgs;
    check L1287() else D384();
  L1387():
    dr74 = tryDispatchBuiltin.0("[<-", l13, r843);
    dc37 = getTryDispatchBuiltinDispatched(dr74);
    if dc37 then L1389() else L1388(r843, dr74);
  L1388(r845, l15):
    have_spaces4 = ld have_spaces;
    check L1390() else D438();
  L1452():
    keep_outputs4 = force? keep_outputs3;
    checkMissing(keep_outputs4);
    is_na4 = ldf `is.na` in base;
    r909 = dyn is_na4(keep_outputs4);
    check L1453() else D475();
  L1454():
    st keep_outputs = FALSE;
    goto L318(FALSE);
  L1459():
    keep_outputs6 = force? keep_outputs5;
    checkMissing(keep_outputs6);
    c492 = `is.character`(keep_outputs6);
    goto L320(c492);
  L1460():
    sym82 = ldf length;
    base82 = ldf length in base;
    guard82 = `==`.4(sym82, base82);
    if guard82 then L1461() else L1462();
  L1484():
    r940 = dyn _R_LIBS();
    check L1485() else D490();
  L1487():
    _Platform28 = ld `.Platform`;
    check L1488() else D492();
  D217():
    deopt 834 [i14, destfile5, l3, destfile3, this];
  D248():
    deopt 977 [av13, bins4];
  D384():
    deopt 1483 [pkgs75];
  D438():
    deopt 1675 [r845, l15, r843, have_spaces4];
  D475():
    deopt 1816 [r909];
  D490():
    deopt 1874 [r940];
  D492():
    deopt 1878 [_Platform28];
  L203(r479):
    r482 = `!`(r479);
    st hasArchs = r482;
    _in_6 = ldf `%in%`;
    check L1043() else D252();
  L322(c498, r915):
    r917 = `==`(r915, 1);
    c499 = `as.logical`(r917);
    c500 = `&&`(c498, c499);
    goto L321(c500);
  L323():
    stop20 = ldf stop;
    check L1480() else D487();
  L333(r957):
    c514 = `as.logical`(r957);
    if c514 then L1507() else L334();
  L966():
    dx28 = getTryDispatchBuiltinValue(dr26);
    goto L178(i9, destfile3, dx28);
  L967():
    this1 = force? this;
    ___ = ldf `[<-` in base;
    r423 = dyn ___(l3, destfile3, this1);
    goto L178(i14, destfile5, r423);
  L1033():
    dx36 = getTryDispatchBuiltinValue(dr34);
    goto L202(dx36);
  L1034():
    bins5 = force? bins4;
    __10 = ldf `[` in base;
    r477 = dyn __10(av13, bins5, "Version");
    goto L202(r477);
  L1035():
    av14 = ld av2;
    check L1037() else D249();
  L1036():
    r478 = dyn base46(<lang `[`(av2, bins, "Archs")>);
    goto L203(r478);
  L1287():
    pkgs76 = force? pkgs75;
    checkMissing(pkgs76);
    c465 = `is.object`(pkgs76);
    if c465 then L1288() else L1289(pkgs76);
  L1389():
    dx80 = getTryDispatchBuiltinValue(dr74);
    goto L297(r843, dx80);
  L1390():
    have_spaces5 = force? have_spaces4;
    ___4 = ldf `[<-` in base;
    r848 = dyn ___4(l15, r843, have_spaces5);
    goto L297(r845, r848);
  L1453():
    goto L316(r909);
  L1461():
    keep_outputs7 = ld keep_outputs;
    check L1463() else D477();
  L1462():
    r914 = dyn base82(<sym keep_outputs>);
    goto L322(c493, r914);
  L1466():
    dir_exists2 = ldf `dir.exists`;
    check L1467() else D479();
  L1485():
    st libpath = r940;
    length22 = ldf length in base;
    r941 = dyn length22(r940);
    check L1486() else D491();
  L1488():
    _Platform29 = force? _Platform28;
    checkMissing(_Platform29);
    c511 = `is.object`(_Platform29);
    if c511 then L1490() else L1491(_Platform29);
  L1504():
    clean5 = ld clean;
    check L1506() else D499();
  L1505():
    r956 = dyn base85(<sym clean>);
    goto L333(r956);
  D249():
    deopt 984 [av14];
  D252():
    deopt 995 [];
  D477():
    deopt 1828 [c493, keep_outputs7];
  D479():
    deopt 1836 [];
  D487():
    deopt 1865 [];
  D491():
    deopt 1877 [r941];
  D499():
    deopt 1905 [clean5];
  L276(dx59):
    st bins = dx59;
    srcpkgs = ld srcpkgs;
    check L1293() else D387();
  L334():
    goto L336();
  L336():
    libs_only5 = ld libs_only;
    check L1514() else D503();
  L1037():
    av15 = force? av14;
    checkMissing(av15);
    c371 = `is.object`(av15);
    if c371 then L1038() else L1039(av15);
  L1043():
    p121 = prom<V +>{
      available11 = ld available;
      available12 = force? available11;
      checkMissing(available12);
      c372 = `is.object`(available12);
      if c372 then L1() else L2(available12);
    L0(dx41):
      return dx41;
    L1():
      dr38 = tryDispatchBuiltin.1("[", available12);
      dc19 = getTryDispatchBuiltinDispatched(dr38);
      if dc19 then L3() else L2(dr38);
    L2(available14):
      bins8 = ld bins;
      bins9 = force? bins8;
      __12 = ldf `[` in base;
      r483 = dyn __12(available14, bins9, "NeedsCompilation");
      goto L0(r483);
    L3():
      dx40 = getTryDispatchBuiltinValue(dr38);
      goto L0(dx40);
    };
    r485 = dyn _in_6(p121, "no");
    check L1044() else D253();
  L1288():
    dr56 = tryDispatchBuiltin.1("[", pkgs76);
    dc28 = getTryDispatchBuiltinDispatched(dr56);
    if dc28 then L1290() else L1289(dr56);
  L1289(pkgs78):
    _in_11 = ldf `%in%`;
    check L1291() else D385();
  L1463():
    keep_outputs8 = force? keep_outputs7;
    checkMissing(keep_outputs8);
    length21 = ldf length in base;
    r916 = dyn length21(keep_outputs8);
    check L1464() else D478();
  L1467():
    p256 = prom<V +>{
      keep_outputs9 = ld keep_outputs;
      keep_outputs10 = force? keep_outputs9;
      checkMissing(keep_outputs10);
      return keep_outputs10;
    };
    r919 = dyn dir_exists2(p256);
    check L1468() else D480();
  L1480():
    p263 = prom<V +>{
      gettextf6 = ldf gettextf;
      p262 = prom<V +>{
        sQuote11 = ldf sQuote;
        r933 = dyn sQuote11("keep_outputs");
        return r933;
      };
      r935 = dyn gettextf6("invalid %s argument", p262);
      return r935;
    };
    r937 = dyn stop20[, domain](p263, NA_LGL);
    check L1481() else D488();
  L1486():
    goto L327(r941);
  L1489(dx85):
    r943 = `==`(dx85, "windows");
    c512 = `as.logical`(r943);
    if c512 then L1493() else L329();
  L1490():
    dr78 = tryDispatchBuiltin.1("$", _Platform29);
    dc39 = getTryDispatchBuiltinDispatched(dr78);
    if dc39 then L1492() else L1491(dr78);
  L1491(_Platform31):
    r942 = `$`(_Platform31, <sym OS.type>);
    goto L1489(r942);
  L1506():
    clean6 = force? clean5;
    checkMissing(clean6);
    c513 = `is.character`(clean6);
    goto L333(c513);
  L1507():
    sym86 = ldf c;
    base86 = ldf c in base;
    guard86 = `==`.4(sym86, base86);
    if guard86 then L1508() else L1509();
  D253():
    deopt 998 [r485];
  D385():
    deopt 1486 [pkgs78];
  D387():
    deopt 1492 [srcpkgs];
  D478():
    deopt 1831 [c493, r916];
  D480():
    deopt 1838 [r919];
  D488():
    deopt 1869 [r937];
  D503():
    deopt 1919 [libs_only5];
  L204(dx39):
    is_na1 = ldf `is.na` in base;
    r481 = dyn is_na1(dx39);
    check L1042() else D251();
  L329():
    paste10 = ldf paste0;
    check L1501() else D497();
  L331(r950):
    goto L332();
  L335(r959):
    st args0 = r959;
    goto L336();
  L1038():
    dr36 = tryDispatchBuiltin.1("[", av15);
    dc18 = getTryDispatchBuiltinDispatched(dr36);
    if dc18 then L1040() else L1039(dr36);
  L1039(av17):
    bins6 = ld bins;
    check L1041() else D250();
  L1044():
    r486 = `!`(r485);
    st needsCmp = r486;
    hasArchs = ld hasArchs;
    check L1045() else D254();
  L1290():
    dx58 = getTryDispatchBuiltinValue(dr56);
    goto L276(dx58);
  L1291():
    p197 = prom<V +>{
      pkgs79 = ld pkgs;
      pkgs80 = force? pkgs79;
      checkMissing(pkgs80);
      return pkgs80;
    };
    p199 = prom<V +>{
      row_names2 = ldf `row.names`;
      p198 = prom<V +>{
        available25 = ld available;
        available26 = force? available25;
        checkMissing(available26);
        return available26;
      };
      r744 = dyn row_names2(p198);
      return r744;
    };
    r746 = dyn _in_11(p197, p199);
    check L1292() else D386();
  L1293():
    srcpkgs1 = force? srcpkgs;
    checkMissing(srcpkgs1);
    c466 = `is.object`(srcpkgs1);
    if c466 then L1294() else L1295(srcpkgs1);
  L1464():
    goto L322(c493, r916);
  L1468():
    r920 = `!`(r919);
    c503 = `as.logical`(r920);
    if c503 then L1469() else L324(c503);
  L1481():
    goto L319();
  L1492():
    dx84 = getTryDispatchBuiltinValue(dr78);
    goto L1489(dx84);
  L1493():
    Sys_getenv3 = ldf `Sys.getenv`;
    check L1494() else D493();
  L1508():
    args0 = ld args0;
    check L1510() else D500();
  L1509():
    r958 = dyn base86(<sym args0>, <sym clean>);
    goto L335(r958);
  L1514():
    libs_only6 = force? libs_only5;
    checkMissing(libs_only6);
    c516 = `as.logical`(libs_only6);
    if c516 then L1515() else L337();
  D250():
    deopt 986 [av17, bins6];
  D251():
    deopt 991 [r481];
  D254():
    deopt 1001 [hasArchs];
  D386():
    deopt 1489 [pkgs78, r746];
  D493():
    deopt 1884 [];
  D497():
    deopt 1897 [];
  D500():
    deopt 1910 [args0];
  L277(dx61):
    st na = dx61;
    sym70 = ldf length;
    base70 = ldf length in base;
    guard70 = `==`.4(sym70, base70);
    if guard70 then L1299() else L1300();
  L324(c505):
    c509 = `as.logical`(c505);
    if c509 then L1473() else L325();
  L337():
    goto L339();
  L339():
    sym88 = ldf missing;
    base88 = ldf missing in base;
    guard88 = `==`.4(sym88, base88);
    if guard88 then L1521() else L1522();
  L1040():
    dx38 = getTryDispatchBuiltinValue(dr36);
    goto L204(dx38);
  L1041():
    bins7 = force? bins6;
    __11 = ldf `[` in base;
    r480 = dyn __11(av17, bins7, "Archs");
    goto L204(r480);
  L1042():
    goto L203(r481);
  L1045():
    hasArchs1 = force? hasArchs;
    checkMissing(hasArchs1);
    needsCmp = ld needsCmp;
    check L1046() else D255();
  L1292():
    __19 = ldf `[` in base;
    r747 = dyn __19(pkgs78, r746);
    goto L276(r747);
  L1294():
    dr58 = tryDispatchBuiltin.1("[", srcpkgs1);
    dc29 = getTryDispatchBuiltinDispatched(dr58);
    if dc29 then L1296() else L1295(dr58);
  L1295(srcpkgs3):
    _in_12 = ldf `%in%`;
    check L1297() else D388();
  L1469():
    dir_create3 = ldf `dir.create`;
    check L1470() else D481();
  L1494():
    r944 = dyn Sys_getenv3("R_LIBS");
    check L1495() else D494();
  L1501():
    p266 = prom<V +>{
      shQuote = ldf shQuote;
      p265 = prom<V +>{
        libpath2 = ld libpath;
        libpath3 = force? libpath2;
        checkMissing(libpath3);
        return libpath3;
      };
      r952 = dyn shQuote(p265);
      return r952;
    };
    r954 = dyn paste10("R_LIBS=", p266);
    check L1502() else D498();
  L1510():
    args1 = force? args0;
    checkMissing(args1);
    clean7 = ld clean;
    check L1511() else D501();
  L1515():
    sym87 = ldf c;
    base87 = ldf c in base;
    guard87 = `==`.4(sym87, base87);
    if guard87 then L1516() else L1517();
  D255():
    deopt 1002 [hasArchs1, needsCmp];
  D388():
    deopt 1495 [srcpkgs3];
  D481():
    deopt 1841 [c503];
  D494():
    deopt 1886 [r944];
  D498():
    deopt 1900 [r954];
  D501():
    deopt 1912 [clean7];
  L278(r754):
    c467 = `as.logical`(r754);
    if c467 then L1303() else L279();
  L325():
    goto L326();
  L326():
    normalizePath1 = ldf normalizePath;
    check L1477() else D485();
  L338(r963):
    st args0 = r963;
    goto L339();
  L340(r967):
    r969 = `!`(r967);
    c518 = `as.logical`(r969);
    if c518 then L1523() else L341();
  L1046():
    needsCmp1 = force? needsCmp;
    checkMissing(needsCmp1);
    r487 = `||`(hasArchs1, needsCmp1);
    st hasSrc = r487;
    available15 = ld available;
    check L1047() else D256();
  L1296():
    dx60 = getTryDispatchBuiltinValue(dr58);
    goto L277(dx60);
  L1297():
    p200 = prom<V +>{
      srcpkgs4 = ld srcpkgs;
      srcpkgs5 = force? srcpkgs4;
      checkMissing(srcpkgs5);
      return srcpkgs5;
    };
    p201 = prom<V +>{
      bins26 = ld bins;
      bins27 = force? bins26;
      checkMissing(bins27);
      return bins27;
    };
    r750 = dyn _in_12(p200, p201);
    check L1298() else D389();
  L1299():
    na = ld na;
    check L1301() else D390();
  L1300():
    r753 = dyn base70(<sym na>);
    goto L278(r753);
  L1470():
    p257 = prom<V +>{
      keep_outputs11 = ld keep_outputs;
      keep_outputs12 = force? keep_outputs11;
      checkMissing(keep_outputs12);
      return keep_outputs12;
    };
    r922 = dyn dir_create3[, recursive](p257, TRUE);
    check L1471() else D482();
  L1473():
    stop19 = ldf stop;
    check L1474() else D483();
  L1495():
    st oldrlibs = r944;
    Sys_setenv = ldf `Sys.setenv`;
    check L1496() else D495();
  L1502():
    st env = r954;
    goto L331(r954);
  L1511():
    clean8 = force? clean7;
    checkMissing(clean8);
    c515 = ldf c in base;
    r960 = dyn c515(args1, clean8);
    check L1512() else D502();
  L1516():
    args2 = ld args0;
    check L1518() else D504();
  L1517():
    r962 = dyn base87(<sym args0>, "--libs-only");
    goto L338(r962);
  L1521():
    missing12 = ldf missing in base;
    r968 = dyn missing12(<sym INSTALL_opts>);
    goto L340(r968);
  L1522():
    r966 = dyn base88(<sym INSTALL_opts>);
    goto L340(r966);
  D256():
    deopt 1006 [available15];
  D389():
    deopt 1498 [srcpkgs3, r750];
  D390():
    deopt 1504 [na];
  D482():
    deopt 1845 [c503, r922];
  D483():
    deopt 1849 [];
  D485():
    deopt 1857 [];
  D495():
    deopt 1889 [];
  D502():
    deopt 1915 [r960];
  D504():
    deopt 1923 [args2];
  L279():
    goto L280();
  L280():
    available27 = ld available;
    check L1309() else D396();
  L341():
    sym92 = ldf list;
    base92 = ldf list in base;
    guard92 = `==`.4(sym92, base92);
    if guard92 then L1540() else L1541();
  L347():
    verbose1 = ld verbose;
    check L1543() else D514();
  L1047():
    available16 = force? available15;
    checkMissing(available16);
    c373 = `is.object`(available16);
    if c373 then L1048() else L1049(available16);
  L1298():
    r751 = `!`(r750);
    __20 = ldf `[` in base;
    r752 = dyn __20(srcpkgs3, r751);
    goto L277(r752);
  L1301():
    na1 = force? na;
    checkMissing(na1);
    length18 = ldf length in base;
    r755 = dyn length18(na1);
    check L1302() else D391();
  L1303():
    sprintf4 = ldf sprintf;
    check L1304() else D392();
  L1471():
    r923 = `!`(r922);
    c506 = `as.logical`(r923);
    c507 = `&&`(c503, c506);
    goto L324(c507);
  L1474():
    p260 = prom<V +>{
      gettextf5 = ldf gettextf;
      p259 = prom<V +>{
        sQuote10 = ldf sQuote;
        p258 = prom<V +>{
          keep_outputs13 = ld keep_outputs;
          keep_outputs14 = force? keep_outputs13;
          checkMissing(keep_outputs14);
          return keep_outputs14;
        };
        r925 = dyn sQuote10(p258);
        return r925;
      };
      r927 = dyn gettextf5("unable to create %s", p259);
      return r927;
    };
    r929 = dyn stop19[, domain](p260, NA_LGL);
    check L1475() else D484();
  L1477():
    p261 = prom<V +>{
      keep_outputs15 = ld keep_outputs;
      keep_outputs16 = force? keep_outputs15;
      checkMissing(keep_outputs16);
      return keep_outputs16;
    };
    r932 = dyn normalizePath1(p261);
    check L1478() else D486();
  L1496():
    p264 = prom<V +>{
      libpath = ld libpath;
      libpath1 = force? libpath;
      checkMissing(libpath1);
      return libpath1;
    };
    r946 = dyn Sys_setenv[R_LIBS](p264);
    check L1497() else D496();
  L1512():
    goto L335(r960);
  L1518():
    args3 = force? args2;
    checkMissing(args3);
    c517 = ldf c in base;
    r964 = dyn c517(args3, "--libs-only");
    check L1519() else D505();
  L1523():
    sym89 = ldf `is.list`;
    base89 = ldf `is.list` in base;
    guard89 = `==`.4(sym89, base89);
    if guard89 then L1524() else L1525();
  D391():
    deopt 1507 [r755];
  D392():
    deopt 1509 [];
  D396():
    deopt 1524 [available27];
  D484():
    deopt 1853 [r929];
  D486():
    deopt 1859 [r932];
  D496():
    deopt 1892 [r946];
  D505():
    deopt 1927 [r964];
  D514():
    deopt 1967 [verbose1];
  L205(dx43):
    st srcvers = dx43;
    as_numeric_version = ldf `as.numeric_version`;
    check L1052() else D258();
  L342(r971):
    r973 = `!`(r971);
    c519 = `as.logical`(r973);
    if c519 then L1528() else L343();
  L348(r985):
    st INSTALL_opts = r985;
    goto L347();
  L1048():
    dr40 = tryDispatchBuiltin.1("[", available16);
    dc20 = getTryDispatchBuiltinDispatched(dr40);
    if dc20 then L1050() else L1049(dr40);
  L1049(available18):
    bins10 = ld bins;
    check L1051() else D257();
  L1302():
    goto L278(r755);
  L1304():
    p203 = prom<V +>{
      ngettext7 = ldf ngettext;
      p202 = prom<V +>{
        sym71 = ldf length;
        base71 = ldf length in base;
        guard71 = `==`.4(sym71, base71);
        if guard71 then L1() else L2();
      L0(r757):
        return r757;
      L1():
        na2 = ld na;
        na3 = force? na2;
        checkMissing(na3);
        length19 = ldf length in base;
        r758 = dyn length19(na3);
        goto L0(r758);
      L2():
        r756 = dyn base71(<sym na>);
        goto L0(r756);
      };
      r760 = dyn ngettext7(p202, "package %s is available as a source package but not as a binary", "packages %s are available as source packages but not as binaries");
      return r760;
    };
    p206 = prom<V +>{
      paste8 = ldf paste;
      p205 = prom<V +>{
        sQuote9 = ldf sQuote;
        p204 = prom<V +>{
          na4 = ld na;
          na5 = force? na4;
          checkMissing(na5);
          return na5;
        };
        r763 = dyn sQuote9(p204);
        return r763;
      };
      r765 = dyn paste8[, collapse](p205, ", ");
      return r765;
    };
    r767 = dyn sprintf4(p203, p206);
    check L1305() else D393();
  L1309():
    available28 = force? available27;
    checkMissing(available28);
    c468 = `is.object`(available28);
    if c468 then L1310() else L1311(available28);
  L1475():
    goto L326();
  L1478():
    st outdir = r932;
    st keep_outputs = TRUE;
    goto L319();
  L1497():
    sym84 = ldf `on.exit`;
    base84 = ldf `on.exit` in base;
    guard84 = `==`.4(sym84, base84);
    if guard84 then L1498() else L1499();
  L1519():
    goto L338(r964);
  L1524():
    INSTALL_opts1 = ld INSTALL_opts;
    check L1526() else D506();
  L1525():
    r970 = dyn base89(<sym INSTALL_opts>);
    goto L342(r970);
  L1540():
    list1 = ldf list in base;
    r986 = dyn list1();
    check L1542() else D513();
  L1541():
    r984 = dyn base92();
    goto L348(r984);
  L1543():
    verbose2 = force? verbose1;
    checkMissing(verbose2);
    c521 = `as.logical`(verbose2);
    if c521 then L1544() else L349();
  D257():
    deopt 1008 [available18, bins10];
  D258():
    deopt 1014 [];
  D393():
    deopt 1512 [r767];
  D506():
    deopt 1937 [INSTALL_opts1];
  D513():
    deopt 1965 [r986];
  L281(dx63):
    st binvers = dx63;
    binvers4 = ld binvers;
    check L1314() else D398();
  L330(r948):
    goto L331(r948);
  L343():
    goto L346(NULL);
  L346(r982):
    goto L347();
  L349():
    goto L350();
  L350():
    sym94 = ldf `is.null`;
    base94 = ldf `is.null` in base;
    guard94 = `==`.4(sym94, base94);
    if guard94 then L1548() else L1549();
  L1050():
    dx42 = getTryDispatchBuiltinValue(dr40);
    goto L205(dx42);
  L1051():
    bins11 = force? bins10;
    __13 = ldf `[` in base;
    r488 = dyn __13(available18, bins11, "Version");
    goto L205(r488);
  L1052():
    p122 = prom<V +>{
      binvers = ld binvers;
      binvers1 = force? binvers;
      checkMissing(binvers1);
      return binvers1;
    };
    r490 = dyn as_numeric_version(p122);
    check L1053() else D259();
  L1305():
    st msg = r767;
    cat4 = ldf cat;
    check L1306() else D394();
  L1310():
    dr60 = tryDispatchBuiltin.1("[", available28);
    dc30 = getTryDispatchBuiltinDispatched(dr60);
    if dc30 then L1312() else L1311(dr60);
  L1311(available30):
    bins28 = ld bins;
    check L1313() else D397();
  L1498():
    on_exit = ldf `on.exit` in base;
    r949 = dyn on_exit(<lang Sys.setenv(R_LIBS=oldrlibs)>);
    goto L330(r949);
  L1499():
    r947 = dyn base84(<lang Sys.setenv(R_LIBS=oldrlibs)>);
    goto L330(r947);
  L1526():
    INSTALL_opts2 = force? INSTALL_opts1;
    checkMissing(INSTALL_opts2);
    is_list = ldf `is.list` in base;
    r972 = dyn is_list(INSTALL_opts2);
    check L1527() else D507();
  L1528():
    sym90 = ldf c;
    base90 = ldf c in base;
    guard90 = `==`.4(sym90, base90);
    if guard90 then L1529() else L1530();
  L1542():
    goto L348(r986);
  L1544():
    message8 = ldf message;
    check L1545() else D515();
  D259():
    deopt 1016 [r490];
  D394():
    deopt 1515 [];
  D397():
    deopt 1526 [available30, bins28];
  D398():
    deopt 1531 [binvers4];
  D507():
    deopt 1940 [r972];
  D515():
    deopt 1970 [];
  L344(r975):
    st args0 = r975;
    sym91 = ldf list;
    base91 = ldf list in base;
    guard91 = `==`.4(sym91, base91);
    if guard91 then L1535() else L1536();
  L351(r998):
    c524 = `as.logical`(r998);
    if c524 then L1551() else L352(c524);
  L1053():
    srcvers = ld srcvers;
    check L1054() else D260();
  L1306():
    p207 = prom<V +>{
      msg10 = ld msg;
      msg11 = force? msg10;
      checkMissing(msg11);
      return msg11;
    };
    r769 = dyn cat4[, , , sep]("\n   ", p207, "\n\n", "");
    check L1307() else D395();
  L1312():
    dx62 = getTryDispatchBuiltinValue(dr60);
    goto L281(dx62);
  L1313():
    bins29 = force? bins28;
    __21 = ldf `[` in base;
    r771 = dyn __21(available30, bins29, "Version");
    goto L281(r771);
  L1314():
    binvers5 = force? binvers4;
    checkMissing(binvers5);
    st srcvers = binvers5;
    _in_13 = ldf `%in%`;
    check L1315() else D399();
  L1527():
    goto L342(r972);
  L1529():
    args4 = ld args0;
    check L1531() else D508();
  L1530():
    r974 = dyn base90(<sym args0>, <lang paste(INSTALL_opts, collapse=" ")>);
    goto L344(r974);
  L1545():
    p270 = prom<V +>{
      gettextf7 = ldf gettextf;
      p269 = prom<V +>{
        paste12 = ldf paste;
        p268 = prom<V +>{
          sym93 = ldf c;
          base93 = ldf c in base;
          guard93 = `==`.4(sym93, base93);
          if guard93 then L1() else L2();
        L0(r988):
          return r988;
        L1():
          cmd0 = ld cmd0;
          cmd1 = force? cmd0;
          checkMissing(cmd1);
          args6 = ld args0;
          args7 = force? args6;
          checkMissing(args7);
          c522 = ldf c in base;
          r989 = dyn c522(cmd1, args7);
          goto L0(r989);
        L2():
          r987 = dyn base93(<sym cmd0>, <sym args0>);
          goto L0(r987);
        };
        r991 = dyn paste12[, collapse](p268, " ");
        return r991;
      };
      r993 = dyn gettextf7("system (cmd0): %s", p269);
      return r993;
    };
    r995 = dyn message8[, domain](p270, NA_LGL);
    check L1546() else D516();
  L1548():
    repos25 = ld repos;
    check L1550() else D517();
  L1549():
    r997 = dyn base94(<sym repos>);
    goto L351(r997);
  D260():
    deopt 1016 [r490, srcvers];
  D395():
    deopt 1521 [r769];
  D399():
    deopt 1535 [];
  D508():
    deopt 1944 [args4];
  D516():
    deopt 1974 [r995];
  D517():
    deopt 1978 [repos25];
  L345(r980):
    st INSTALL_opts = r980;
    goto L346(r980);
  L352(c526):
    c533 = `as.logical`(c526);
    if c533 then L1555() else L354();
  L1054():
    srcvers1 = force? srcvers;
    checkMissing(srcvers1);
    r491 = `<`(r490, srcvers1);
    st later = r491;
    getOption8 = ldf getOption;
    check L1055() else D261();
  L1307():
    goto L280();
  L1315():
    p208 = prom<V +>{
      bins30 = ld bins;
      bins31 = force? bins30;
      checkMissing(bins31);
      return bins31;
    };
    p209 = prom<V +>{
      srcpkgs6 = ld srcpkgs;
      srcpkgs7 = force? srcpkgs6;
      checkMissing(srcpkgs7);
      return srcpkgs7;
    };
    r774 = dyn _in_13(p208, p209);
    check L1316() else D400();
  L1531():
    args5 = force? args4;
    checkMissing(args5);
    paste11 = ldf paste;
    check L1532() else D509();
  L1535():
    list = ldf list in base;
    r981 = dyn list();
    check L1537() else D512();
  L1536():
    r979 = dyn base91();
    goto L345(r979);
  L1546():
    goto L350();
  L1550():
    repos26 = force? repos25;
    checkMissing(repos26);
    c523 = `==`(repos26, NULL);
    goto L351(c523);
  L1551():
    sym95 = ldf missing;
    base95 = ldf missing in base;
    guard95 = `==`.4(sym95, base95);
    if guard95 then L1552() else L1553();
  D261():
    deopt 1021 [];
  D400():
    deopt 1538 [r774];
  D509():
    deopt 1947 [];
  D512():
    deopt 1958 [r981];
  L353(c529, r1000):
    c530 = `as.logical`(r1000);
    c531 = `&&`(c529, c530);
    goto L352(c531);
  L354():
    destdir13 = ld destdir;
    check L1607() else D548();
  L1055():
    r492 = dyn getOption8("install.packages.compile.from.source", "interactive");
    check L1056() else D262();
  L1316():
    st OK = r774;
    av26 = ld av1;
    check L1317() else D401();
  L1532():
    p267 = prom<V +>{
      INSTALL_opts3 = ld INSTALL_opts;
      INSTALL_opts4 = force? INSTALL_opts3;
      checkMissing(INSTALL_opts4);
      return INSTALL_opts4;
    };
    r977 = dyn paste11[, collapse](p267, " ");
    check L1533() else D510();
  L1537():
    goto L345(r981);
  L1552():
    missing13 = ldf missing in base;
    r1001 = dyn missing13(<sym contriburl>);
    goto L353(c524, r1001);
  L1553():
    r999 = dyn base95(<sym contriburl>);
    goto L353(c524, r999);
  L1555():
    cbind = ldf cbind;
    check L1556() else D518();
  D262():
    deopt 1024 [r492];
  D401():
    deopt 1540 [av26];
  D510():
    deopt 1951 [r977];
  D518():
    deopt 1986 [];
  D548():
    deopt 2090 [destdir13];
  L1056():
    st action = r492;
    sym47 = ldf nzchar;
    base47 = ldf nzchar in base;
    guard47 = `==`.4(sym47, base47);
    if guard47 then L1057() else L1058();
  L1317():
    av27 = force? av26;
    checkMissing(av27);
    c469 = `is.object`(av27);
    if c469 then L1318() else L1319(av27);
  L1533():
    c520 = ldf c in base;
    r978 = dyn c520(args5, r977);
    check L1534() else D511();
  L1556():
    p272 = prom<V +>{
      path_expand = ldf `path.expand`;
      p271 = prom<V +>{
        pkgs93 = ld pkgs;
        pkgs94 = force? pkgs93;
        checkMissing(pkgs94);
        return pkgs94;
      };
      r1003 = dyn path_expand(p271);
      return r1003;
    };
    p273 = prom<V +>{
      lib39 = ld lib;
      lib40 = force? lib39;
      checkMissing(lib40);
      return lib40;
    };
    r1006 = dyn cbind(p272, p273);
    check L1557() else D519();
  L1607():
    destdir14 = force? destdir13;
    checkMissing(destdir14);
    st tmpd = destdir14;
    sym101 = ldf all;
    base101 = ldf all in base;
    guard101 = `==`.4(sym101, base101);
    if guard101 then L1608() else L1609();
  D511():
    deopt 1953 [r978];
  D519():
    deopt 1989 [r1006];
  L206(r494):
    r499 = `!`(r494);
    c374 = `as.logical`(r499);
    if c374 then L1062() else L207();
  L282(dx65):
    l10 = ld srcvers;
    c471 = `is.object`(l10);
    if c471 then L1326() else L1327(dx65, l10);
  L368(r1067):
    r1071 = `!`(r1067);
    st nonlocalrepos = r1071;
    sym102 = ldf `is.null`;
    base102 = ldf `is.null` in base;
    guard102 = `==`.4(sym102, base102);
    if guard102 then L1613() else L1614();
  L1057():
    Sys_which = ldf `Sys.which`;
    check L1059() else D263();
  L1058():
    r493 = dyn base47(<lang Sys.which(Sys.getenv("MAKE", "make"))>);
    goto L206(r493);
  L1318():
    dr62 = tryDispatchBuiltin.1("[", av27);
    dc31 = getTryDispatchBuiltinDispatched(dr62);
    if dc31 then L1320() else L1319(dr62);
  L1319(av29):
    bins32 = ld bins;
    check L1321() else D402();
  L1534():
    goto L344(r978);
  L1557():
    st update = r1006;
    sym96 = ldf seq_len;
    base96 = ldf seq_len in base;
    guard96 = `==`.4(sym96, base96);
    if guard96 then L1558() else L1559();
  L1608():
    startsWith6 = ldf startsWith;
    check L1610() else D549();
  L1609():
    r1066 = dyn base101(<lang startsWith(contriburl, "file:")>);
    goto L368(r1066);
  D263():
    deopt 1029 [];
  D402():
    deopt 1542 [av29, bins32];
  D549():
    deopt 2096 [];
  L207():
    goto L208();
  L208():
    grepl4 = ldf grepl;
    check L1064() else D266();
  L284(dx73):
    st srcvers = dx73;
    as_numeric_version1 = ldf `as.numeric_version`;
    check L1330() else D405();
  L355(r1008):
    s12 = toForSeq(r1008);
    l16 = length(s12);
    i24 = 0;
    goto L356(i24);
  L369(r1073):
    c548 = `as.logical`(r1073);
    if c548 then L1616() else L370(c548);
  L1059():
    p123 = prom<V +>{
      Sys_getenv1 = ldf `Sys.getenv`;
      r495 = dyn Sys_getenv1("MAKE", "make");
      return r495;
    };
    r497 = dyn Sys_which(p123);
    check L1060() else D264();
  L1062():
    st action = "never";
    goto L208();
  L1320():
    dx64 = getTryDispatchBuiltinValue(dr62);
    goto L282(dx64);
  L1321():
    bins33 = force? bins32;
    checkMissing(bins33);
    c470 = `is.object`(bins33);
    if c470 then L1322() else L1323(av29, bins33);
  L1326():
    dr66 = tryDispatchBuiltin.0("[<-", l10, dx65);
    dc33 = getTryDispatchBuiltinDispatched(dr66);
    if dc33 then L1328() else L1327(dx65, dr66);
  L1327(dx69, l12):
    OK2 = ld OK;
    check L1329() else D404();
  L1558():
    nrow = ldf nrow;
    check L1560() else D520();
  L1559():
    r1007 = dyn base96(<lang nrow(update)>);
    goto L355(r1007);
  L1610():
    p293 = prom<V +>{
      contriburl11 = ld contriburl;
      contriburl12 = force? contriburl11;
      checkMissing(contriburl12);
      return contriburl12;
    };
    r1069 = dyn startsWith6(p293, "file:");
    check L1611() else D550();
  L1613():
    destdir15 = ld destdir;
    check L1615() else D552();
  L1614():
    r1072 = dyn base102(<sym destdir>);
    goto L369(r1072);
  D264():
    deopt 1031 [r497];
  D266():
    deopt 1041 [];
  D404():
    deopt 1550 [dx69, l12, dx65, OK2];
  D405():
    deopt 1555 [];
  D520():
    deopt 1993 [];
  D550():
    deopt 2099 [r1069];
  D552():
    deopt 2105 [destdir15];
  L283(av33, dx67):
    __23 = ldf `[` in base;
    r776 = dyn __23(av33, dx67, "Version");
    goto L282(r776);
  L356(i25):
    i26 = `+`.1(i25, 1);
    c534 = `<`.1(l16, i26);
    if c534 then L1562() else L365();
  L370(c550):
    c554 = `as.logical`(c550);
    if c554 then L1619() else L371();
  L1060():
    nzchar = ldf nzchar in base;
    r498 = dyn nzchar(r497);
    check L1061() else D265();
  L1064():
    p124 = prom<V +>{
      R_version = ld `R.version`;
      R_version1 = force? R_version;
      checkMissing(R_version1);
      c375 = `is.object`(R_version1);
      if c375 then L1() else L2(R_version1);
    L0(dx45):
      return dx45;
    L1():
      dr42 = tryDispatchBuiltin.1("$", R_version1);
      dc21 = getTryDispatchBuiltinDispatched(dr42);
      if dc21 then L3() else L2(dr42);
    L2(R_version3):
      r501 = `$`(R_version3, <sym platform>);
      goto L0(r501);
    L3():
      dx44 = getTryDispatchBuiltinValue(dr42);
      goto L0(dx44);
    };
    r503 = dyn grepl4("darwin", p124);
    check L1065() else D267();
  L1322():
    dr64 = tryDispatchBuiltin.1("[", bins33);
    dc32 = getTryDispatchBuiltinDispatched(dr64);
    if dc32 then L1324() else L1323(av29, dr64);
  L1323(av31, bins35):
    OK = ld OK;
    check L1325() else D403();
  L1328():
    dx71 = getTryDispatchBuiltinValue(dr66);
    goto L284(dx71);
  L1329():
    OK3 = force? OK2;
    ___3 = ldf `[<-` in base;
    r777 = dyn ___3(l12, dx65, OK3);
    goto L284(r777);
  L1330():
    p210 = prom<V +>{
      binvers6 = ld binvers;
      binvers7 = force? binvers6;
      checkMissing(binvers7);
      return binvers7;
    };
    r779 = dyn as_numeric_version1(p210);
    check L1331() else D406();
  L1560():
    p274 = prom<V +>{
      update = ld update;
      update1 = force? update;
      checkMissing(update1);
      return update1;
    };
    r1010 = dyn nrow(p274);
    check L1561() else D521();
  L1611():
    all = ldf all in base;
    r1070 = dyn all(r1069);
    check L1612() else D551();
  L1615():
    destdir16 = force? destdir15;
    checkMissing(destdir16);
    c547 = `==`(destdir16, NULL);
    goto L369(c547);
  L1616():
    nonlocalrepos4 = ld nonlocalrepos;
    check L1617() else D553();
  D265():
    deopt 1033 [r498];
  D267():
    deopt 1044 [r503];
  D403():
    deopt 1544 [av31, bins35, OK];
  D406():
    deopt 1557 [r779];
  D521():
    deopt 1995 [r1010];
  D551():
    deopt 2101 [r1070];
  D553():
    deopt 2108 [c548, nonlocalrepos4];
  L365():
    x1 = `[[`(s12, i26, NULL, TRUE);
    st i = x1;
    sym97 = ldf `is.na`;
    base97 = ldf `is.na` in base;
    guard97 = `==`.4(sym97, base97);
    if guard97 then L1563() else L1564();
  L371():
    goto L375();
  L375():
    st av2 = NULL;
    sym103 = ldf `is.null`;
    base103 = ldf `is.null` in base;
    guard103 = `==`.4(sym103, base103);
    if guard103 then L1633() else L1634();
  L1061():
    goto L206(r498);
  L1065():
    c376 = `as.logical`(r503);
    if c376 then L1066() else L209(c376);
  L1324():
    dx66 = getTryDispatchBuiltinValue(dr64);
    goto L283(av29, dx66);
  L1325():
    OK1 = force? OK;
    __22 = ldf `[` in base;
    r775 = dyn __22(bins35, OK1);
    goto L283(av31, r775);
  L1331():
    srcvers4 = ld srcvers;
    check L1332() else D407();
  L1561():
    r1011 = seq_len(r1010);
    goto L355(r1011);
  L1562():
    sym100 = ldf invisible;
    base100 = ldf invisible in base;
    guard100 = `==`.4(sym100, base100);
    if guard100 then L1602() else L1603();
  L1612():
    goto L368(r1070);
  L1617():
    nonlocalrepos5 = force? nonlocalrepos4;
    checkMissing(nonlocalrepos5);
    c551 = `as.logical`(nonlocalrepos5);
    c552 = `&&`(c548, c551);
    goto L370(c552);
  L1619():
    file_path6 = ldf `file.path`;
    check L1620() else D554();
  D407():
    deopt 1557 [r779, srcvers4];
  D554():
    deopt 2112 [];
  L209(c378):
    c385 = `as.logical`(c378);
    if c385 then L1072() else L211();
  L357(i31, r1013):
    c536 = `as.logical`(r1013);
    if c536 then L1571() else L359();
  L366(r1062):
    popenv;
    return r1062;
  L376(r1092):
    c563 = `as.logical`(r1092);
    if c563 then L1636() else L377();
  L1066():
    sym48 = ldf length;
    base48 = ldf length in base;
    guard48 = `==`.4(sym48, base48);
    if guard48 then L1067() else L1068();
  L1332():
    srcvers5 = force? srcvers4;
    checkMissing(srcvers5);
    r780 = `<`(r779, srcvers5);
    st later = r780;
    sym72 = ldf any;
    base72 = ldf any in base;
    guard72 = `==`.4(sym72, base72);
    if guard72 then L1333() else L1334();
  L1563():
    update2 = ld update;
    check L1565() else D522();
  L1564():
    r1012 = dyn base97(<lang `[`(update, i, 1)>);
    goto L357(i26, r1012);
  L1602():
    invisible4 = ldf invisible in base;
    r1063 = dyn invisible4();
    check L1604() else D547();
  L1603():
    r1061 = dyn base100();
    goto L366(r1061);
  L1620():
    p294 = prom<V +>{
      tempdir1 = ldf tempdir;
      r1074 = dyn tempdir1();
      return r1074;
    };
    r1076 = dyn file_path6(p294, "downloaded_packages");
    check L1621() else D555();
  L1633():
    available35 = ld available;
    check L1635() else D562();
  L1634():
    r1091 = dyn base103(<sym available>);
    goto L376(r1091);
  D522():
    deopt 1999 [i26, update2];
  D547():
    deopt 2086 [r1063];
  D555():
    deopt 2115 [r1076];
  D562():
    deopt 2142 [available35];
  L210(c381, r505):
    r507 = `!`(r505);
    c382 = `as.logical`(r507);
    c383 = `&&`(c381, c382);
    goto L209(c383);
  L211():
    goto L213();
  L213():
    sym49 = ldf any;
    base49 = ldf any in base;
    guard49 = `==`.4(sym49, base49);
    if guard49 then L1078() else L1079();
  L285(r782):
    c472 = `as.logical`(r782);
    if c472 then L1337() else L286();
  L359():
    sym98 = ldf c;
    base98 = ldf c in base;
    guard98 = `==`.4(sym98, base98);
    if guard98 then L1574() else L1575();
  L377():
    goto L386();
  L386():
    getDeps = ld getDeps;
    check L1671() else D580();
  L1067():
    srcOnly = ld srcOnly;
    check L1069() else D268();
  L1068():
    r504 = dyn base48(<sym srcOnly>);
    goto L210(c376, r504);
  L1072():
    l7 = ld later;
    c386 = `is.object`(l7);
    if c386 then L1073() else L1074(FALSE, l7);
  L1333():
    later18 = ld later;
    check L1335() else D408();
  L1334():
    r781 = dyn base72(<sym later>);
    goto L285(r781);
  L1565():
    update3 = force? update2;
    checkMissing(update3);
    c535 = `is.object`(update3);
    if c535 then L1566() else L1567(i26, update3);
  L1571():
    goto L356(i31);
  L1604():
    goto L366(r1063);
  L1621():
    st tmpd = r1076;
    file_exists3 = ldf `file.exists`;
    check L1622() else D556();
  L1635():
    available36 = force? available35;
    checkMissing(available36);
    c562 = `==`(available36, NULL);
    goto L376(c562);
  L1636():
    getOption11 = ldf getOption;
    check L1637() else D563();
  D268():
    deopt 1047 [c376, srcOnly];
  D408():
    deopt 1563 [later18];
  D556():
    deopt 2118 [];
  D563():
    deopt 2146 [];
  D580():
    deopt 2215 [getDeps];
  L212(r511, dx47):
    st later = dx47;
    goto L213();
  L214(r515):
    c387 = `as.logical`(r515);
    if c387 then L1082() else L215();
  L286():
    goto L274(NULL);
  L358(i35, dx87):
    is_na5 = ldf `is.na` in base;
    r1015 = dyn is_na5(dx87);
    check L1570() else D524();
  L361(i44, r1018):
    st args = r1018;
    system2 = ldf system2;
    check L1588() else D537();
  L1069():
    srcOnly1 = force? srcOnly;
    checkMissing(srcOnly1);
    length11 = ldf length in base;
    r506 = dyn length11(srcOnly1);
    check L1070() else D269();
  L1073():
    dr44 = tryDispatchBuiltin.0("[<-", l7, FALSE);
    dc22 = getTryDispatchBuiltinDispatched(dr44);
    if dc22 then L1075() else L1074(FALSE, dr44);
  L1074(r509, l9):
    later = ld later;
    check L1076() else D270();
  L1078():
    later2 = ld later;
    check L1080() else D271();
  L1079():
    r514 = dyn base49(<sym later>);
    goto L214(r514);
  L1335():
    later19 = force? later18;
    checkMissing(later19);
    any6 = ldf any in base;
    r783 = dyn any6(later19);
    check L1336() else D409();
  L1337():
    ngettext8 = ldf ngettext;
    check L1338() else D410();
  L1566():
    dr80 = tryDispatchBuiltin.1("[", update3);
    dc40 = getTryDispatchBuiltinDispatched(dr80);
    if dc40 then L1568() else L1567(i26, dr80);
  L1567(i33, update5):
    i36 = ld i;
    check L1569() else D523();
  L1574():
    args8 = ld args0;
    check L1576() else D525();
  L1575():
    r1017 = dyn base98(<sym args0>, <lang get_install_opts(`[`(update, i, 1))>, "-l", <lang shQuote(`[`(update, i, 2))>, <lang getConfigureArgs(`[`(update, i, 1))>, <lang getConfigureVars(`[`(update, i, 1))>, <lang shQuote(`[`(update, i, 1))>);
    goto L361(i31, r1017);
  L1622():
    p295 = prom<V +>{
      tmpd8 = ld tmpd;
      tmpd9 = force? tmpd8;
      checkMissing(tmpd9);
      return tmpd9;
    };
    r1078 = dyn file_exists3(p295);
    check L1623() else D557();
  L1637():
    r1093 = dyn getOption11("available_packages_filters");
    check L1638() else D564();
  L1671():
    getDeps1 = force? getDeps;
    checkMissing(getDeps1);
    c581 = `as.logical`(getDeps1);
    if c581 then L1672() else L387();
  D269():
    deopt 1050 [c376, r506];
  D270():
    deopt 1056 [r509, l9, FALSE, later];
  D271():
    deopt 1064 [later2];
  D409():
    deopt 1566 [r783];
  D410():
    deopt 1568 [];
  D523():
    deopt 2001 [i33, update5, i36];
  D524():
    deopt 2006 [i35, r1015];
  D525():
    deopt 2013 [i31, args8];
  D537():
    deopt 2040 [i44];
  D557():
    deopt 2120 [r1078];
  D564():
    deopt 2148 [r1093];
  L215():
    goto L230();
  L230():
    bins14 = ld bins;
    check L1138() else D306();
  L387():
    goto L388();
  L388():
    download_packages = ldf `download.packages`;
    check L1676() else D583();
  L1070():
    goto L210(c376, r506);
  L1075():
    dx46 = getTryDispatchBuiltinValue(dr44);
    goto L212(FALSE, dx46);
  L1076():
    later1 = force? later;
    ___2 = ldf `[<-` in base;
    r512 = dyn ___2(l9, FALSE, later1);
    goto L212(r509, r512);
  L1080():
    later3 = force? later2;
    checkMissing(later3);
    any4 = ldf any in base;
    r516 = dyn any4(later3);
    check L1081() else D272();
  L1082():
    ngettext3 = ldf ngettext;
    check L1083() else D273();
  L1336():
    goto L285(r783);
  L1338():
    p211 = prom<V +>{
      sym73 = ldf sum;
      base73 = ldf sum in base;
      guard73 = `==`.4(sym73, base73);
      if guard73 then L1() else L2();
    L0(r785):
      return r785;
    L1():
      later20 = ld later;
      later21 = force? later20;
      checkMissing(later21);
      sum4 = ldf sum in base;
      r786 = dyn sum4(later21);
      goto L0(r786);
    L2():
      r784 = dyn base73(<sym later>);
      goto L0(r784);
    };
    r788 = dyn ngettext8(p211, "There is a binary version available (and will be installed) but the source version is later", "There are binary versions available (and will be installed) but the source versions are later");
    check L1339() else D411();
  L1568():
    dx86 = getTryDispatchBuiltinValue(dr80);
    goto L358(i26, dx86);
  L1569():
    i37 = force? i36;
    __26 = ldf `[` in base;
    r1014 = dyn __26(update5, i37, 1);
    goto L358(i33, r1014);
  L1570():
    goto L357(i35, r1015);
  L1576():
    args9 = force? args8;
    checkMissing(args9);
    get_install_opts = ldf get_install_opts;
    check L1577() else D526();
  L1588():
    p280 = prom<V +>{
      cmd2 = ld cmd0;
      cmd3 = force? cmd2;
      checkMissing(cmd3);
      return cmd3;
    };
    p281 = prom<V +>{
      args10 = ld args;
      args11 = force? args10;
      checkMissing(args11);
      return args11;
    };
    p282 = prom<V +>{
      env = ld env;
      env1 = force? env;
      checkMissing(env1);
      return env1;
    };
    p283 = prom<V +>{
      output = ld output;
      output1 = force? output;
      checkMissing(output1);
      return output1;
    };
    p284 = prom<V +>{
      output2 = ld output;
      output3 = force? output2;
      checkMissing(output3);
      return output3;
    };
    p285 = prom<V +>{
      tlim4 = ld tlim;
      tlim5 = force? tlim4;
      checkMissing(tlim5);
      return tlim5;
    };
    r1041 = dyn system2[, , env, stdout, stderr, timeout](p280, p281, p282, p283, p284, p285);
    check L1589() else D538();
  L1623():
    r1079 = `!`(r1078);
    c555 = `as.logical`(r1079);
    if c555 then L1624() else L372(c555);
  L1638():
    st filters = r1093;
    sym104 = ldf `is.null`;
    base104 = ldf `is.null` in base;
    guard104 = `==`.4(sym104, base104);
    if guard104 then L1639() else L1640();
  L1672():
    getDependencies1 = ldf getDependencies;
    check L1673() else D581();
  D272():
    deopt 1067 [r516];
  D273():
    deopt 1069 [];
  D306():
    deopt 1184 [bins14];
  D411():
    deopt 1572 [r788];
  D526():
    deopt 2016 [i31];
  D538():
    deopt 2051 [i44, r1041];
  D581():
    deopt 2218 [];
  D583():
    deopt 2231 [];
  L372(c557):
    c561 = `as.logical`(c557);
    if c561 then L1628() else L373();
  L378(r1095):
    r1096 = `!`(r1095);
    c565 = `as.logical`(r1096);
    if c565 then L379(c565) else L1642();
  L1081():
    goto L214(r516);
  L1083():
    p125 = prom<V +>{
      sym50 = ldf sum;
      base50 = ldf sum in base;
      guard50 = `==`.4(sym50, base50);
      if guard50 then L1() else L2();
    L0(r518):
      return r518;
    L1():
      later4 = ld later;
      later5 = force? later4;
      checkMissing(later5);
      sum2 = ldf sum in base;
      r519 = dyn sum2(later5);
      goto L0(r519);
    L2():
      r517 = dyn base50(<sym later>);
      goto L0(r517);
    };
    r521 = dyn ngettext3(p125, "There is a binary version available but the source version is later", "There are binary versions available but the source versions are later");
    check L1084() else D274();
  L1138():
    bins15 = force? bins14;
    checkMissing(bins15);
    c403 = `is.object`(bins15);
    if c403 then L1139() else L1140(bins15);
  L1339():
    st msg = r788;
    cat5 = ldf cat;
    check L1340() else D412();
  L1577():
    p275 = prom<V +>{
      update6 = ld update;
      update7 = force? update6;
      checkMissing(update7);
      c537 = `is.object`(update7);
      if c537 then L1() else L2(update7);
    L0(dx89):
      return dx89;
    L1():
      dr82 = tryDispatchBuiltin.1("[", update7);
      dc41 = getTryDispatchBuiltinDispatched(dr82);
      if dc41 then L3() else L2(dr82);
    L2(update9):
      i45 = ld i;
      i46 = force? i45;
      __27 = ldf `[` in base;
      r1019 = dyn __27(update9, i46, 1);
      goto L0(r1019);
    L3():
      dx88 = getTryDispatchBuiltinValue(dr82);
      goto L0(dx88);
    };
    r1021 = dyn get_install_opts(p275);
    check L1578() else D527();
  L1589():
    st status = r1041;
    status = ld status;
    check L1590() else D539();
  L1624():
    dir_create4 = ldf `dir.create`;
    check L1625() else D558();
  L1639():
    filters = ld filters;
    check L1641() else D565();
  L1640():
    r1094 = dyn base104(<sym filters>);
    goto L378(r1094);
  L1673():
    p310 = prom<V +>{
      pkgs95 = ld pkgs;
      pkgs96 = force? pkgs95;
      checkMissing(pkgs96);
      return pkgs96;
    };
    p311 = prom<V +>{
      dependencies11 = ld dependencies;
      dependencies12 = force? dependencies11;
      checkMissing(dependencies12);
      return dependencies12;
    };
    p312 = prom<V +>{
      available37 = ld available;
      available38 = force? available37;
      checkMissing(available38);
      return available38;
    };
    p313 = prom<V +>{
      lib41 = ld lib;
      lib42 = force? lib41;
      checkMissing(lib42);
      return lib42;
    };
    ddd15 = ld `...`;
    p314 = prom<V +>{
      av36 = ld av2;
      av37 = force? av36;
      checkMissing(av37);
      return av37;
    };
    r1135 = dyn getDependencies1[, , , , `...`, av2](p310, p311, p312, p313, ddd15, p314);
    check L1674() else D582();
  L1676():
    p315 = prom<V +>{
      pkgs97 = ld pkgs;
      pkgs98 = force? pkgs97;
      checkMissing(pkgs98);
      return pkgs98;
    };
    p316 = prom<V +>{
      tmpd14 = ld tmpd;
      tmpd15 = force? tmpd14;
      checkMissing(tmpd15);
      return tmpd15;
    };
    p317 = prom<V +>{
      available39 = ld available;
      available40 = force? available39;
      checkMissing(available40);
      return available40;
    };
    p318 = prom<V +>{
      contriburl17 = ld contriburl;
      contriburl18 = force? contriburl17;
      checkMissing(contriburl18);
      return contriburl18;
    };
    p319 = prom<V +>{
      method27 = ld method;
      method28 = force? method27;
      checkMissing(method28);
      return method28;
    };
    p320 = prom<V +>{
      quiet13 = ld quiet;
      quiet14 = force? quiet13;
      checkMissing(quiet14);
      return quiet14;
    };
    ddd16 = ld `...`;
    r1143 = dyn download_packages[, destdir, available, contriburl, method, type, quiet, `...`](p315, p316, p317, p318, p319, "source", p320, ddd16);
    check L1677() else D584();
  D274():
    deopt 1073 [r521];
  D412():
    deopt 1575 [];
  D527():
    deopt 2018 [i31, r1021];
  D539():
    deopt 2053 [i44, status];
  D558():
    deopt 2123 [c555];
  D565():
    deopt 2151 [filters];
  D582():
    deopt 2226 [r1135];
  D584():
    deopt 2246 [r1143];
  L231(dx51):
    st bins = dx51;
    sym55 = ldf length;
    base55 = ldf length in base;
    guard55 = `==`.4(sym55, base55);
    if guard55 then L1143() else L1144();
  L373():
    goto L374(NULL);
  L374(r1089):
    goto L375();
  L379(c566):
    c577 = `as.logical`(c566);
    if c577 then L1652() else L382();
  L1084():
    st msg = r521;
    cat = ldf cat;
    check L1085() else D275();
  L1139():
    dr48 = tryDispatchBuiltin.1("[", bins15);
    dc24 = getTryDispatchBuiltinDispatched(dr48);
    if dc24 then L1141() else L1140(dr48);
  L1140(bins17):
    later16 = ld later;
    check L1142() else D307();
  L1340():
    p214 = prom<V +>{
      paste9 = ldf paste;
      p213 = prom<V +>{
        strwrap2 = ldf strwrap;
        p212 = prom<V +>{
          msg12 = ld msg;
          msg13 = force? msg12;
          checkMissing(msg13);
          return msg13;
        };
        r790 = dyn strwrap2[, indent, exdent](p212, 2.0, 2.0);
        return r790;
      };
      r792 = dyn paste9[, collapse](p213, "\n");
      return r792;
    };
    r794 = dyn cat5[, , , sep]("\n", p214, ":\n", "");
    check L1341() else D413();
  L1578():
    shQuote1 = ldf shQuote;
    check L1579() else D528();
  L1590():
    status1 = force? status;
    checkMissing(status1);
    r1042 = `>`(status1, 0);
    c543 = `as.logical`(r1042);
    if c543 then L1591() else L362();
  L1625():
    p296 = prom<V +>{
      tmpd10 = ld tmpd;
      tmpd11 = force? tmpd10;
      checkMissing(tmpd11);
      return tmpd11;
    };
    r1081 = dyn dir_create4(p296);
    check L1626() else D559();
  L1628():
    stop21 = ldf stop;
    check L1629() else D560();
  L1641():
    filters1 = force? filters;
    checkMissing(filters1);
    c564 = `==`(filters1, NULL);
    goto L378(c564);
  L1642():
    sym105 = ldf any;
    base105 = ldf any in base;
    guard105 = `==`.4(sym105, base105);
    if guard105 then L1643() else L1644();
  L1674():
    st pkgs = r1135;
    goto L388();
  L1677():
    st foundpkgs = r1143;
    sym109 = ldf length;
    base109 = ldf length in base;
    guard109 = `==`.4(sym109, base109);
    if guard109 then L1678() else L1679();
  D275():
    deopt 1076 [];
  D307():
    deopt 1186 [bins17, later16];
  D413():
    deopt 1581 [r794];
  D528():
    deopt 2021 [i31];
  D559():
    deopt 2125 [c555, r1081];
  D560():
    deopt 2129 [];
  L232(r576):
    c404 = `as.logical`(r576);
    if c404 then L1147() else L233();
  L362():
    verbose3 = ld verbose;
    check L1595() else D542();
  L363(i59):
    goto L356(i59);
  L380(c570, r1098):
    c574 = `as.logical`(r1098);
    c575 = `||`(c570, c574);
    goto L379(c575);
  L382():
    setdiff3 = ldf setdiff;
    check L1656() else D572();
  L383(r1112):
    goto L386();
  L389(r1145):
    c582 = `as.logical`(r1145);
    if c582 then L1682() else L390();
  L1085():
    p128 = prom<V +>{
      paste3 = ldf paste;
      p127 = prom<V +>{
        strwrap = ldf strwrap;
        p126 = prom<V +>{
          msg = ld msg;
          msg1 = force? msg;
          checkMissing(msg1);
          return msg1;
        };
        r523 = dyn strwrap[, indent, exdent](p126, 2.0, 2.0);
        return r523;
      };
      r525 = dyn paste3[, collapse](p127, "\n");
      return r525;
    };
    r527 = dyn cat[, , , sep]("\n", p128, ":\n", "");
    check L1086() else D276();
  L1141():
    dx50 = getTryDispatchBuiltinValue(dr48);
    goto L231(dx50);
  L1142():
    later17 = force? later16;
    checkMissing(later17);
    r573 = `!`(later17);
    __15 = ldf `[` in base;
    r574 = dyn __15(bins17, r573);
    goto L231(r574);
  L1143():
    srcOnly2 = ld srcOnly;
    check L1145() else D308();
  L1144():
    r575 = dyn base55(<sym srcOnly>);
    goto L232(r575);
  L1341():
    print1 = ldf print;
    check L1342() else D414();
  L1579():
    p276 = prom<V +>{
      update10 = ld update;
      update11 = force? update10;
      checkMissing(update11);
      c538 = `is.object`(update11);
      if c538 then L1() else L2(update11);
    L0(dx91):
      return dx91;
    L1():
      dr84 = tryDispatchBuiltin.1("[", update11);
      dc42 = getTryDispatchBuiltinDispatched(dr84);
      if dc42 then L3() else L2(dr84);
    L2(update13):
      i47 = ld i;
      i48 = force? i47;
      __28 = ldf `[` in base;
      r1022 = dyn __28(update13, i48, 2);
      goto L0(r1022);
    L3():
      dx90 = getTryDispatchBuiltinValue(dr84);
      goto L0(dx90);
    };
    r1024 = dyn shQuote1(p276);
    check L1580() else D529();
  L1591():
    warning2 = ldf warning;
    check L1592() else D540();
  L1626():
    r1082 = `!`(r1081);
    c558 = `as.logical`(r1082);
    c559 = `&&`(c555, c558);
    goto L372(c559);
  L1629():
    p299 = prom<V +>{
      gettextf9 = ldf gettextf;
      p298 = prom<V +>{
        sQuote13 = ldf sQuote;
        p297 = prom<V +>{
          tmpd12 = ld tmpd;
          tmpd13 = force? tmpd12;
          checkMissing(tmpd13);
          return tmpd13;
        };
        r1084 = dyn sQuote13(p297);
        return r1084;
      };
      r1086 = dyn gettextf9("unable to create temporary directory %s", p298);
      return r1086;
    };
    r1088 = dyn stop21[, domain](p299, NA_LGL);
    check L1630() else D561();
  L1643():
    sym106 = ldf `is.na`;
    base106 = ldf `is.na` in base;
    guard106 = `==`.4(sym106, base106);
    if guard106 then L1645() else L1646();
  L1644():
    r1097 = dyn base105(<lang `!`(is.na(pmatch(...names(), "filters")))>);
    goto L380(c565, r1097);
  L1652():
    available_packages6 = ldf `available.packages`;
    check L1653() else D570();
  L1678():
    foundpkgs = ld foundpkgs;
    check L1680() else D585();
  L1679():
    r1144 = dyn base109(<sym foundpkgs>);
    goto L389(r1144);
  D276():
    deopt 1082 [r527];
  D308():
    deopt 1193 [srcOnly2];
  D414():
    deopt 1583 [];
  D529():
    deopt 2023 [i31, r1024];
  D540():
    deopt 2058 [i44];
  D542():
    deopt 2063 [i44, verbose3];
  D561():
    deopt 2133 [r1088];
  D570():
    deopt 2171 [];
  D572():
    deopt 2180 [];
  D585():
    deopt 2250 [foundpkgs];
  L233():
    goto L249();
  L249():
    sym61 = ldf length;
    base61 = ldf length in base;
    guard61 = `==`.4(sym61, base61);
    if guard61 then L1205() else L1206();
  L381(c573, r1100):
    r1107 = `!`(r1100);
    any7 = ldf any in base;
    r1108 = dyn any7(r1107);
    check L1650() else D569();
  L390():
    sym131 = ldf `is.null`;
    base131 = ldf `is.null` in base;
    guard131 = `==`.4(sym131, base131);
    if guard131 then L2049() else L2050();
  L478():
    sym133 = ldf invisible;
    base133 = ldf invisible in base;
    guard133 = `==`.4(sym133, base133);
    if guard133 then L2061() else L2062();
  L1086():
    data_frame = ldf `data.frame`;
    check L1087() else D277();
  L1145():
    srcOnly3 = force? srcOnly2;
    checkMissing(srcOnly3);
    length12 = ldf length in base;
    r577 = dyn length12(srcOnly3);
    check L1146() else D309();
  L1147():
    srcOnly4 = ld srcOnly;
    check L1148() else D310();
  L1342():
    p218 = prom<V +>{
      data_frame1 = ldf `data.frame`;
      p215 = prom<V +>{
        binvers8 = ld binvers;
        binvers9 = force? binvers8;
        checkMissing(binvers9);
        return binvers9;
      };
      p216 = prom<V +>{
        srcvers6 = ld srcvers;
        srcvers7 = force? srcvers6;
        checkMissing(srcvers7);
        return srcvers7;
      };
      p217 = prom<V +>{
        bins36 = ld bins;
        bins37 = force? bins36;
        checkMissing(bins37);
        return bins37;
      };
      r798 = dyn data_frame1[binary, source, `row.names`, `check.names`](p215, p216, p217, FALSE);
      c473 = `is.object`(r798);
      if c473 then L1() else L2();
    L0(dx75):
      return dx75;
    L1():
      dr68 = tryDispatchBuiltin.1("[", r798);
      dc34 = getTryDispatchBuiltinDispatched(dr68);
      if dc34 then L3() else L2();
    L2():
      later22 = ld later;
      later23 = force? later22;
      __24 = ldf `[` in base;
      r801 = dyn __24(r798, later23, <missing>);
      goto L0(r801);
    L3():
      dx74 = getTryDispatchBuiltinValue(dr68);
      goto L0(dx74);
    };
    r803 = dyn print1(p218);
    check L1343() else D415();
  L1580():
    getConfigureArgs = ldf getConfigureArgs;
    check L1581() else D530();
  L1592():
    p288 = prom<V +>{
      gettextf8 = ldf gettextf;
      p287 = prom<V +>{
        sQuote12 = ldf sQuote;
        p286 = prom<V +>{
          update26 = ld update;
          update27 = force? update26;
          checkMissing(update27);
          c544 = `is.object`(update27);
          if c544 then L1() else L2(update27);
        L0(dx99):
          return dx99;
        L1():
          dr92 = tryDispatchBuiltin.1("[", update27);
          dc46 = getTryDispatchBuiltinDispatched(dr92);
          if dc46 then L3() else L2(dr92);
        L2(update29):
          i57 = ld i;
          i58 = force? i57;
          __32 = ldf `[` in base;
          r1043 = dyn __32(update29, i58, 1);
          goto L0(r1043);
        L3():
          dx98 = getTryDispatchBuiltinValue(dr92);
          goto L0(dx98);
        };
        r1045 = dyn sQuote12(p286);
        return r1045;
      };
      r1047 = dyn gettextf8("installation of package %s had non-zero exit status", p287);
      return r1047;
    };
    r1049 = dyn warning2[, domain](p288, NA_LGL);
    check L1593() else D541();
  L1595():
    verbose4 = force? verbose3;
    checkMissing(verbose4);
    c545 = `as.logical`(verbose4);
    if c545 then L1596() else L364();
  L1630():
    goto L374(r1088);
  L1645():
    pmatch = ldf pmatch;
    check L1647() else D566();
  L1646():
    r1099 = dyn base106(<lang pmatch(...names(), "filters")>);
    goto L381(c565, r1099);
  L1653():
    p301 = prom<V +>{
      contriburl13 = ld contriburl;
      contriburl14 = force? contriburl13;
      checkMissing(contriburl14);
      return contriburl14;
    };
    p302 = prom<V +>{
      method23 = ld method;
      method24 = force? method23;
      checkMissing(method24);
      return method24;
    };
    ddd13 = ld `...`;
    r1111 = dyn available_packages6[contriburl, method, `...`](p301, p302, ddd13);
    check L1654() else D571();
  L1656():
    p303 = prom<V +>{
      available_packages_filters_default = ld available_packages_filters_default;
      available_packages_filters_default1 = force? available_packages_filters_default;
      checkMissing(available_packages_filters_default1);
      return available_packages_filters_default1;
    };
    p304 = prom<V +>{
      sym108 = ldf c;
      base108 = ldf c in base;
      guard108 = `==`.4(sym108, base108);
      if guard108 then L1() else L2();
    L0(r1115):
      return r1115;
    L1():
      c578 = ldf c in base;
      r1116 = dyn c578("R_version", "duplicates");
      goto L0(r1116);
    L2():
      r1114 = dyn base108("R_version", "duplicates");
      goto L0(r1114);
    };
    r1118 = dyn setdiff3(p303, p304);
    check L1657() else D573();
  L1680():
    foundpkgs1 = force? foundpkgs;
    checkMissing(foundpkgs1);
    length23 = ldf length in base;
    r1146 = dyn length23(foundpkgs1);
    check L1681() else D586();
  L1682():
    verbose5 = ld verbose;
    check L1683() else D587();
  D277():
    deopt 1084 [];
  D309():
    deopt 1196 [r577];
  D310():
    deopt 1197 [srcOnly4];
  D415():
    deopt 1585 [r803];
  D530():
    deopt 2025 [i31];
  D541():
    deopt 2062 [i44, r1049];
  D566():
    deopt 2160 [c565];
  D569():
    deopt 2168 [c573, r1108];
  D571():
    deopt 2177 [r1111];
  D573():
    deopt 2183 [r1118];
  D586():
    deopt 2253 [r1146];
  D587():
    deopt 2254 [verbose5];
  L250(r632):
    c422 = `as.logical`(r632);
    if c422 then L1209() else L251();
  L364():
    goto L363(i44);
  L479(r1549):
    r1550 = `!`(r1549);
    c711 = `as.logical`(r1550);
    if c711 then L2052() else L480(c711);
  L483(r1556):
    popenv;
    return r1556;
  L1087():
    p129 = prom<V +>{
      binvers2 = ld binvers;
      binvers3 = force? binvers2;
      checkMissing(binvers3);
      return binvers3;
    };
    p130 = prom<V +>{
      srcvers2 = ld srcvers;
      srcvers3 = force? srcvers2;
      checkMissing(srcvers3);
      return srcvers3;
    };
    p131 = prom<V +>{
      hasSrc = ld hasSrc;
      hasSrc1 = force? hasSrc;
      checkMissing(hasSrc1);
      return hasSrc1;
    };
    p132 = prom<V +>{
      bins12 = ld bins;
      bins13 = force? bins12;
      checkMissing(bins13);
      return bins13;
    };
    r532 = dyn data_frame[binary, source, needs_compilation, `row.names`, `check.names`](p129, p130, p131, p132, FALSE);
    check L1088() else D278();
  L1146():
    goto L232(r577);
  L1148():
    srcOnly5 = force? srcOnly4;
    checkMissing(srcOnly5);
    c405 = `is.object`(srcOnly5);
    if c405 then L1149() else L1150(srcOnly5);
  L1205():
    bins18 = ld bins;
    check L1207() else D343();
  L1206():
    r631 = dyn base61(<sym bins>);
    goto L250(r631);
  L1343():
    cat6 = ldf cat;
    check L1344() else D416();
  L1581():
    p277 = prom<V +>{
      update14 = ld update;
      update15 = force? update14;
      checkMissing(update15);
      c539 = `is.object`(update15);
      if c539 then L1() else L2(update15);
    L0(dx93):
      return dx93;
    L1():
      dr86 = tryDispatchBuiltin.1("[", update15);
      dc43 = getTryDispatchBuiltinDispatched(dr86);
      if dc43 then L3() else L2(dr86);
    L2(update17):
      i49 = ld i;
      i50 = force? i49;
      __29 = ldf `[` in base;
      r1025 = dyn __29(update17, i50, 1);
      goto L0(r1025);
    L3():
      dx92 = getTryDispatchBuiltinValue(dr86);
      goto L0(dx92);
    };
    r1027 = dyn getConfigureArgs(p277);
    check L1582() else D531();
  L1593():
    goto L363(i44);
  L1596():
    paste13 = ldf paste;
    check L1597() else D543();
  L1647():
    p300 = prom<V +>{
      sym107 = ldf `...names`;
      base107 = ldf `...names` in base;
      guard107 = `==`.4(sym107, base107);
      if guard107 then L1() else L2();
    L0(r1102):
      return r1102;
    L1():
      ___names = ldf `...names` in base;
      r1103 = dyn ___names();
      goto L0(r1103);
    L2():
      r1101 = dyn base107();
      goto L0(r1101);
    };
    r1105 = dyn pmatch(p300, "filters");
    check L1648() else D567();
  L1650():
    goto L380(c573, r1108);
  L1654():
    st available = r1111;
    goto L383(r1111);
  L1657():
    st f = r1118;
    available_packages7 = ldf `available.packages`;
    check L1658() else D574();
  L1681():
    goto L389(r1146);
  L1683():
    verbose6 = force? verbose5;
    checkMissing(verbose6);
    c583 = `as.logical`(verbose6);
    if c583 then L1684() else L391();
  L2049():
    tmpd40 = ld tmpd;
    check L2051() else D807();
  L2050():
    r1548 = dyn base131(<sym tmpd>);
    goto L479(r1548);
  L2061():
    invisible5 = ldf invisible in base;
    r1557 = dyn invisible5();
    check L2063() else D811();
  L2062():
    r1555 = dyn base133();
    goto L483(r1555);
  D278():
    deopt 1095 [r532];
  D343():
    deopt 1308 [bins18];
  D416():
    deopt 1587 [];
  D531():
    deopt 2027 [i31, r1027];
  D543():
    deopt 2066 [i44];
  D567():
    deopt 2163 [c565, r1105];
  D574():
    deopt 2186 [];
  D807():
    deopt 2997 [tmpd40];
  D811():
    deopt 3016 [r1557];
  L234(dx53):
    st s2 = dx53;
    sym56 = ldf length;
    base56 = ldf length in base;
    guard56 = `==`.4(sym56, base56);
    if guard56 then L1154() else L1155();
  L251():
    goto L254();
  L254():
    setdiff2 = ldf setdiff;
    check L1218() else D350();
  L391():
    goto L392();
  L392():
    unique2 = ldf unique;
    check L1688() else D590();
  L480(c713):
    c721 = `as.logical`(c713);
    if c721 then L2057() else L482();
  L1088():
    c388 = `is.object`(r532);
    if c388 then L1089() else L1090(r532);
  L1149():
    dr50 = tryDispatchBuiltin.1("[", srcOnly5);
    dc25 = getTryDispatchBuiltinDispatched(dr50);
    if dc25 then L1151() else L1150(dr50);
  L1150(srcOnly7):
    _in_7 = ldf `%in%`;
    check L1152() else D311();
  L1207():
    bins19 = force? bins18;
    checkMissing(bins19);
    length15 = ldf length in base;
    r633 = dyn length15(bins19);
    check L1208() else D344();
  L1209():
    type55 = ld type2;
    check L1210() else D345();
  L1344():
    r804 = dyn cat6("\n");
    check L1345() else D417();
  L1582():
    getConfigureVars = ldf getConfigureVars;
    check L1583() else D532();
  L1597():
    p289 = prom<V +>{
      sym99 = ldf c;
      base99 = ldf c in base;
      guard99 = `==`.4(sym99, base99);
      if guard99 then L1() else L2();
    L0(r1052):
      return r1052;
    L1():
      cmd4 = ld cmd0;
      cmd5 = force? cmd4;
      checkMissing(cmd5);
      args12 = ld args;
      args13 = force? args12;
      checkMissing(args13);
      c546 = ldf c in base;
      r1053 = dyn c546(cmd5, args13);
      goto L0(r1053);
    L2():
      r1051 = dyn base99(<sym cmd0>, <sym args>);
      goto L0(r1051);
    };
    r1055 = dyn paste13[, collapse](p289, " ");
    check L1598() else D544();
  L1648():
    is_na6 = ldf `is.na` in base;
    r1106 = dyn is_na6(r1105);
    check L1649() else D568();
  L1658():
    p305 = prom<V +>{
      contriburl15 = ld contriburl;
      contriburl16 = force? contriburl15;
      checkMissing(contriburl16);
      return contriburl16;
    };
    p306 = prom<V +>{
      f = ld f;
      f1 = force? f;
      checkMissing(f1);
      return f1;
    };
    p307 = prom<V +>{
      method25 = ld method;
      method26 = force? method25;
      checkMissing(method26);
      return method26;
    };
    ddd14 = ld `...`;
    r1122 = dyn available_packages7[contriburl, filters, method, `...`](p305, p306, p307, ddd14);
    check L1659() else D575();
  L1684():
    message10 = ldf message;
    check L1685() else D588();
  L2051():
    tmpd41 = force? tmpd40;
    checkMissing(tmpd41);
    c710 = `==`(tmpd41, NULL);
    goto L479(c710);
  L2052():
    sym132 = ldf `is.null`;
    base132 = ldf `is.null` in base;
    guard132 = `==`.4(sym132, base132);
    if guard132 then L2053() else L2054();
  L2063():
    goto L483(r1557);
  D311():
    deopt 1200 [srcOnly7];
  D344():
    deopt 1311 [r633];
  D345():
    deopt 1312 [type55];
  D350():
    deopt 1361 [];
  D417():
    deopt 1589 [r804];
  D532():
    deopt 2029 [i31];
  D544():
    deopt 2070 [i44, r1055];
  D568():
    deopt 2165 [c565, r1106];
  D575():
    deopt 2194 [r1122];
  D588():
    deopt 2257 [];
  D590():
    deopt 2265 [];
  L216(dx49):
    st out = dx49;
    print = ldf print;
    check L1093() else D280();
  L235(r584):
    c407 = `as.logical`(r584);
    if c407 then L1158() else L236();
  L481(c716, r1552):
    c718 = `as.logical`(r1552);
    c719 = `&&`(c716, c718);
    goto L480(c719);
  L482():
    goto L478();
  L1089():
    dr46 = tryDispatchBuiltin.1("[", r532);
    dc23 = getTryDispatchBuiltinDispatched(dr46);
    if dc23 then L1091() else L1090(dr46);
  L1090(r534):
    later6 = ld later;
    check L1092() else D279();
  L1151():
    dx52 = getTryDispatchBuiltinValue(dr50);
    goto L234(dx52);
  L1152():
    p137 = prom<V +>{
      available19 = ld available;
      available20 = force? available19;
      checkMissing(available20);
      c406 = `is.object`(available20);
      if c406 then L1() else L2(available20);
    L0(dx55):
      return dx55;
    L1():
      dr52 = tryDispatchBuiltin.1("[", available20);
      dc26 = getTryDispatchBuiltinDispatched(dr52);
      if dc26 then L3() else L2(dr52);
    L2(available22):
      srcOnly8 = ld srcOnly;
      srcOnly9 = force? srcOnly8;
      __16 = ldf `[` in base;
      r578 = dyn __16(available22, srcOnly9, "NeedsCompilation");
      goto L0(r578);
    L3():
      dx54 = getTryDispatchBuiltinValue(dr52);
      goto L0(dx54);
    };
    r580 = dyn _in_7(p137, "no");
    check L1153() else D312();
  L1154():
    s2 = ld s2;
    check L1156() else D313();
  L1155():
    r583 = dyn base56(<sym s2>);
    goto L235(r583);
  L1208():
    goto L250(r633);
  L1210():
    type56 = force? type55;
    checkMissing(type56);
    r634 = `==`(type56, "win.binary");
    c423 = `as.logical`(r634);
    if c423 then L1211() else L252();
  L1218():
    p169 = prom<V +>{
      pkgs61 = ld pkgs;
      pkgs62 = force? pkgs61;
      checkMissing(pkgs62);
      return pkgs62;
    };
    p170 = prom<V +>{
      bins24 = ld bins;
      bins25 = force? bins24;
      checkMissing(bins25);
      return bins25;
    };
    r662 = dyn setdiff2(p169, p170);
    check L1219() else D351();
  L1345():
    goto L274(r804);
  L1583():
    p278 = prom<V +>{
      update18 = ld update;
      update19 = force? update18;
      checkMissing(update19);
      c540 = `is.object`(update19);
      if c540 then L1() else L2(update19);
    L0(dx95):
      return dx95;
    L1():
      dr88 = tryDispatchBuiltin.1("[", update19);
      dc44 = getTryDispatchBuiltinDispatched(dr88);
      if dc44 then L3() else L2(dr88);
    L2(update21):
      i51 = ld i;
      i52 = force? i51;
      __30 = ldf `[` in base;
      r1028 = dyn __30(update21, i52, 1);
      goto L0(r1028);
    L3():
      dx94 = getTryDispatchBuiltinValue(dr88);
      goto L0(dx94);
    };
    r1030 = dyn getConfigureVars(p278);
    check L1584() else D533();
  L1598():
    st cmd = r1055;
    message9 = ldf message;
    check L1599() else D545();
  L1649():
    goto L381(c565, r1106);
  L1659():
    st av2 = r1122;
    available_packages_filters_db = ld available_packages_filters_db;
    check L1660() else D576();
  L1685():
    p323 = prom<V +>{
      gettextf10 = ldf gettextf;
      p322 = prom<V +>{
        paste14 = ldf paste;
        p321 = prom<V +>{
          foundpkgs2 = ld foundpkgs;
          foundpkgs3 = force? foundpkgs2;
          checkMissing(foundpkgs3);
          return foundpkgs3;
        };
        r1148 = dyn paste14[, collapse](p321, ", ");
        return r1148;
      };
      r1150 = dyn gettextf10("foundpkgs: %s", p322);
      return r1150;
    };
    r1152 = dyn message10[, domain](p323, NA_LGL);
    check L1686() else D589();
  L1688():
    p326 = prom<V +>{
      cbind1 = ldf cbind;
      p324 = prom<V +>{
        pkgs99 = ld pkgs;
        pkgs100 = force? pkgs99;
        checkMissing(pkgs100);
        return pkgs100;
      };
      p325 = prom<V +>{
        lib43 = ld lib;
        lib44 = force? lib43;
        checkMissing(lib44);
        return lib44;
      };
      r1156 = dyn cbind1(p324, p325);
      return r1156;
    };
    r1158 = dyn unique2(p326);
    check L1689() else D591();
  L2053():
    destdir19 = ld destdir;
    check L2055() else D808();
  L2054():
    r1551 = dyn base132(<sym destdir>);
    goto L481(c711, r1551);
  L2057():
    unlink4 = ldf unlink;
    check L2058() else D809();
  D279():
    deopt 1096 [r534, later6];
  D280():
    deopt 1103 [];
  D312():
    deopt 1203 [srcOnly7, r580];
  D313():
    deopt 1209 [s2];
  D351():
    deopt 1364 [r662];
  D533():
    deopt 2031 [i31, r1030];
  D545():
    deopt 2073 [i44];
  D576():
    deopt 2196 [available_packages_filters_db];
  D589():
    deopt 2261 [r1152];
  D591():
    deopt 2267 [r1158];
  D808():
    deopt 3002 [c711, destdir19];
  D809():
    deopt 3007 [];
  L236():
    goto L248(NULL);
  L248(r629):
    goto L249();
  L252():
    _install_macbinary = ldf `.install.macbinary`;
    check L1215() else D348();
  L253(r647):
    goto L254();
  L1091():
    dx48 = getTryDispatchBuiltinValue(dr46);
    goto L216(dx48);
  L1092():
    later7 = force? later6;
    __14 = ldf `[` in base;
    r535 = dyn __14(r532, later7, <missing>);
    goto L216(r535);
  L1093():
    p133 = prom<V +>{
      out = ld out;
      out1 = force? out;
      checkMissing(out1);
      return out1;
    };
    r537 = dyn print(p133);
    check L1094() else D281();
  L1153():
    r581 = `!`(r580);
    __17 = ldf `[` in base;
    r582 = dyn __17(srcOnly7, r581);
    goto L234(r582);
  L1156():
    s3 = force? s2;
    checkMissing(s3);
    length13 = ldf length in base;
    r585 = dyn length13(s3);
    check L1157() else D314();
  L1158():
    ngettext5 = ldf ngettext;
    check L1159() else D315();
  L1211():
    _install_winbinary = ldf `.install.winbinary`;
    check L1212() else D346();
  L1219():
    st pkgs = r662;
    sym62 = ldf length;
    base62 = ldf length in base;
    guard62 = `==`.4(sym62, base62);
    if guard62 then L1220() else L1221();
  L1584():
    shQuote2 = ldf shQuote;
    check L1585() else D534();
  L1599():
    p292 = prom<V +>{
      sprintf5 = ldf sprintf;
      p290 = prom<V +>{
        i62 = ld i;
        i63 = force? i62;
        checkMissing(i63);
        return i63;
      };
      p291 = prom<V +>{
        cmd6 = ld cmd;
        cmd7 = force? cmd6;
        checkMissing(cmd7);
        return cmd7;
      };
      r1058 = dyn sprintf5("%d): succeeded '%s'", p290, p291);
      return r1058;
    };
    r1060 = dyn message9[, domain](p292, NA_LGL);
    check L1600() else D546();
  L1660():
    available_packages_filters_db1 = force? available_packages_filters_db;
    checkMissing(available_packages_filters_db1);
    c579 = `is.object`(available_packages_filters_db1);
    if c579 then L1661() else L1662(available_packages_filters_db1);
  L1686():
    goto L392();
  L1689():
    st update = r1158;
    sym110 = ldf c;
    base110 = ldf c in base;
    guard110 = `==`.4(sym110, base110);
    if guard110 then L1690() else L1691();
  L2055():
    destdir20 = force? destdir19;
    checkMissing(destdir20);
    c717 = `==`(destdir20, NULL);
    goto L481(c711, c717);
  L2058():
    p471 = prom<V +>{
      tmpd42 = ld tmpd;
      tmpd43 = force? tmpd42;
      checkMissing(tmpd43);
      return tmpd43;
    };
    r1554 = dyn unlink4(p471, TRUE);
    check L2059() else D810();
  D281():
    deopt 1105 [r537];
  D314():
    deopt 1212 [r585];
  D315():
    deopt 1214 [];
  D346():
    deopt 1317 [];
  D348():
    deopt 1339 [];
  D534():
    deopt 2033 [i31];
  D546():
    deopt 2077 [i44, r1060];
  D810():
    deopt 3010 [r1554];
  L255(r664):
    r666 = `!`(r664);
    c424 = `as.logical`(r666);
    if c424 then L1224() else L256();
  L384(dx101):
    st f = dx101;
    available_packages_filters_db4 = ld available_packages_filters_db;
    check L1664() else D577();
  L393(r1160):
    l17 = ld update;
    colnames__ = ldf `colnames<-`;
    check L1693() else D593();
  L1094():
    cat1 = ldf cat;
    check L1095() else D282();
  L1157():
    goto L235(r585);
  L1159():
    p138 = prom<V +>{
      sym57 = ldf length;
      base57 = ldf length in base;
      guard57 = `==`.4(sym57, base57);
      if guard57 then L1() else L2();
    L0(r587):
      return r587;
    L1():
      s4 = ld s2;
      s5 = force? s4;
      checkMissing(s5);
      length14 = ldf length in base;
      r588 = dyn length14(s5);
      goto L0(r588);
    L2():
      r586 = dyn base57(<sym s2>);
      goto L0(r586);
    };
    r590 = dyn ngettext5(p138, "Package which is only available in source form, and may need compilation of C/C++/Fortran", "Packages which are only available in source form, and may need compilation of C/C++/Fortran");
    check L1160() else D316();
  L1212():
    p150 = prom<V +>{
      bins20 = ld bins;
      bins21 = force? bins20;
      checkMissing(bins21);
      return bins21;
    };
    p151 = prom<V +>{
      lib31 = ld lib;
      lib32 = force? lib31;
      checkMissing(lib32);
      return lib32;
    };
    p154 = prom<V +>{
      contrib_url3 = ldf `contrib.url`;
      p152 = prom<V +>{
        repos13 = ld repos;
        repos14 = force? repos13;
        checkMissing(repos14);
        return repos14;
      };
      p153 = prom<V +>{
        type57 = ld type2;
        type58 = force? type57;
        checkMissing(type58);
        return type58;
      };
      r639 = dyn contrib_url3(p152, p153);
      return r639;
    };
    p155 = prom<V +>{
      method9 = ld method;
      method10 = force? method9;
      checkMissing(method10);
      return method10;
    };
    p156 = prom<V +>{
      av18 = ld av2;
      av19 = force? av18;
      checkMissing(av19);
      return av19;
    };
    p157 = prom<V +>{
      destdir5 = ld destdir;
      destdir6 = force? destdir5;
      checkMissing(destdir6);
      return destdir6;
    };
    p158 = prom<V +>{
      libs_only1 = ld libs_only;
      libs_only2 = force? libs_only1;
      checkMissing(libs_only2);
      return libs_only2;
    };
    p159 = prom<V +>{
      quiet3 = ld quiet;
      quiet4 = force? quiet3;
      checkMissing(quiet4);
      return quiet4;
    };
    ddd6 = ld `...`;
    r646 = dyn _install_winbinary[pkgs, lib, contriburl, method, available, destdir, dependencies, libs_only, quiet, `...`](p150, p151, p154, p155, p156, p157, NULL, p158, p159, ddd6);
    check L1213() else D347();
  L1215():
    p160 = prom<V +>{
      bins22 = ld bins;
      bins23 = force? bins22;
      checkMissing(bins23);
      return bins23;
    };
    p161 = prom<V +>{
      lib33 = ld lib;
      lib34 = force? lib33;
      checkMissing(lib34);
      return lib34;
    };
    p164 = prom<V +>{
      contrib_url4 = ldf `contrib.url`;
      p162 = prom<V +>{
        repos15 = ld repos;
        repos16 = force? repos15;
        checkMissing(repos16);
        return repos16;
      };
      p163 = prom<V +>{
        type59 = ld type2;
        type60 = force? type59;
        checkMissing(type60);
        return type60;
      };
      r652 = dyn contrib_url4(p162, p163);
      return r652;
    };
    p165 = prom<V +>{
      method11 = ld method;
      method12 = force? method11;
      checkMissing(method12);
      return method12;
    };
    p166 = prom<V +>{
      av20 = ld av2;
      av21 = force? av20;
      checkMissing(av21);
      return av21;
    };
    p167 = prom<V +>{
      destdir7 = ld destdir;
      destdir8 = force? destdir7;
      checkMissing(destdir8);
      return destdir8;
    };
    p168 = prom<V +>{
      quiet5 = ld quiet;
      quiet6 = force? quiet5;
      checkMissing(quiet6);
      return quiet6;
    };
    ddd7 = ld `...`;
    r658 = dyn _install_macbinary[pkgs, lib, contriburl, method, available, destdir, dependencies, quiet, `...`](p160, p161, p164, p165, p166, p167, NULL, p168, ddd7);
    check L1216() else D349();
  L1220():
    pkgs63 = ld pkgs;
    check L1222() else D352();
  L1221():
    r663 = dyn base62(<sym pkgs>);
    goto L255(r663);
  L1585():
    p279 = prom<V +>{
      update22 = ld update;
      update23 = force? update22;
      checkMissing(update23);
      c541 = `is.object`(update23);
      if c541 then L1() else L2(update23);
    L0(dx97):
      return dx97;
    L1():
      dr90 = tryDispatchBuiltin.1("[", update23);
      dc45 = getTryDispatchBuiltinDispatched(dr90);
      if dc45 then L3() else L2(dr90);
    L2(update25):
      i53 = ld i;
      i54 = force? i53;
      __31 = ldf `[` in base;
      r1031 = dyn __31(update25, i54, 1);
      goto L0(r1031);
    L3():
      dx96 = getTryDispatchBuiltinValue(dr90);
      goto L0(dx96);
    };
    r1033 = dyn shQuote2(p279);
    check L1586() else D535();
  L1600():
    goto L363(i44);
  L1661():
    dr94 = tryDispatchBuiltin.1("[[", available_packages_filters_db1);
    dc47 = getTryDispatchBuiltinDispatched(dr94);
    if dc47 then L1663() else L1662(dr94);
  L1662(available_packages_filters_db3):
    __33 = ldf `[[` in base;
    r1123 = dyn __33(available_packages_filters_db3, "R_version");
    goto L384(r1123);
  L1690():
    c584 = ldf c in base;
    r1161 = dyn c584("Package", "LibPath");
    check L1692() else D592();
  L1691():
    r1159 = dyn base110("Package", "LibPath");
    goto L393(r1159);
  L2059():
    goto L478();
  D282():
    deopt 1107 [];
  D316():
    deopt 1218 [r590];
  D347():
    deopt 1337 [r646];
  D349():
    deopt 1357 [r658];
  D352():
    deopt 1368 [pkgs63];
  D535():
    deopt 2035 [i31, r1033];
  D577():
    deopt 2202 [available_packages_filters_db4];
  D592():
    deopt 2274 [r1161];
  D593():
    deopt 2276 [r1160, l17, r1160];
  L256():
    message6 = ldf message;
    check L1230() else D355();
  L1095():
    r538 = dyn cat1("\n");
    check L1096() else D283();
  L1160():
    st msg = r590;
    sym58 = ldf c;
    base58 = ldf c in base;
    guard58 = `==`.4(sym58, base58);
    if guard58 then L1161() else L1162();
  L1213():
    goto L253(r646);
  L1216():
    goto L253(r658);
  L1222():
    pkgs64 = force? pkgs63;
    checkMissing(pkgs64);
    length16 = ldf length in base;
    r665 = dyn length16(pkgs64);
    check L1223() else D353();
  L1224():
    sym63 = ldf invisible;
    base63 = ldf invisible in base;
    guard63 = `==`.4(sym63, base63);
    if guard63 then L1225() else L1226();
  L1586():
    c542 = ldf c in base;
    r1034 = dyn c542(args9, r1021, "-l", r1024, r1027, r1030, r1033);
    check L1587() else D536();
  L1663():
    dx100 = getTryDispatchBuiltinValue(dr94);
    goto L384(dx100);
  L1664():
    available_packages_filters_db5 = force? available_packages_filters_db4;
    checkMissing(available_packages_filters_db5);
    c580 = `is.object`(available_packages_filters_db5);
    if c580 then L1665() else L1666(available_packages_filters_db5);
  L1692():
    goto L393(r1161);
  L1693():
    r1162 = dyn colnames__(l17, NULL, r1160);
    check L1694() else D594();
  D283():
    deopt 1109 [r538];
  D353():
    deopt 1371 [r665];
  D355():
    deopt 1381 [];
  D536():
    deopt 2037 [i31, r1034];
  D594():
    deopt 2278 [r1160, r1162];
  L237(r592):
    st msg = r592;
    strwrap1 = ldf strwrap;
    check L1168() else D322();
  L257(r668):
    popenv;
    return r668;
  L385(dx103):
    st f2 = dx103;
    f2 = ldf f2;
    check L1668() else D578();
  L1096():
    sym51 = ldf any;
    base51 = ldf any in base;
    guard51 = `==`.4(sym51, base51);
    if guard51 then L1097() else L1098();
  L1161():
    paste4 = ldf paste0;
    check L1163() else D317();
  L1162():
    r591 = dyn base58(<lang paste0(msg, ": ")>, <lang sQuote(s2)>);
    goto L237(r591);
  L1223():
    goto L255(r665);
  L1225():
    invisible1 = ldf invisible in base;
    r669 = dyn invisible1();
    check L1227() else D354();
  L1226():
    r667 = dyn base63();
    goto L257(r667);
  L1230():
    p176 = prom<V +>{
      sprintf3 = ldf sprintf;
      p172 = prom<V +>{
        ngettext6 = ldf ngettext;
        p171 = prom<V +>{
          sym64 = ldf length;
          base64 = ldf length in base;
          guard64 = `==`.4(sym64, base64);
          if guard64 then L1() else L2();
        L0(r673):
          return r673;
        L1():
          pkgs65 = ld pkgs;
          pkgs66 = force? pkgs65;
          checkMissing(pkgs66);
          length17 = ldf length in base;
          r674 = dyn length17(pkgs66);
          goto L0(r674);
        L2():
          r672 = dyn base64(<sym pkgs>);
          goto L0(r672);
        };
        r676 = dyn ngettext6(p171, "installing the source package %s", "installing the source packages %s");
        return r676;
      };
      p175 = prom<V +>{
        paste7 = ldf paste;
        p174 = prom<V +>{
          sQuote8 = ldf sQuote;
          p173 = prom<V +>{
            pkgs67 = ld pkgs;
            pkgs68 = force? pkgs67;
            checkMissing(pkgs68);
            return pkgs68;
          };
          r679 = dyn sQuote8(p173);
          return r679;
        };
        r681 = dyn paste7[, collapse](p174, ", ");
        return r681;
      };
      r683 = dyn sprintf3(p172, p175);
      return r683;
    };
    r685 = dyn message6[, , domain](p176, "\n", NA_LGL);
    check L1231() else D356();
  L1587():
    goto L361(i31, r1034);
  L1665():
    dr96 = tryDispatchBuiltin.1("[[", available_packages_filters_db5);
    dc48 = getTryDispatchBuiltinDispatched(dr96);
    if dc48 then L1667() else L1666(dr96);
  L1666(available_packages_filters_db7):
    __34 = ldf `[[` in base;
    r1124 = dyn __34(available_packages_filters_db7, "duplicates");
    goto L385(r1124);
  L1694():
    st update = r1162;
    _in_16 = ldf `%in%`;
    check L1695() else D595();
  D317():
    deopt 1223 [];
  D322():
    deopt 1235 [];
  D354():
    deopt 1376 [r669];
  D356():
    deopt 1386 [r685];
  D578():
    deopt 2209 [];
  D595():
    deopt 2281 [];
  L217(r540):
    c389 = `as.logical`(r540);
    if c389 then L1102() else L218();
  L1097():
    later8 = ld later;
    check L1099() else D284();
  L1098():
    r539 = dyn base51(<lang `&`(later, hasSrc)>);
    goto L217(r539);
  L1163():
    p139 = prom<V +>{
      msg4 = ld msg;
      msg5 = force? msg4;
      checkMissing(msg5);
      return msg5;
    };
    r594 = dyn paste4(p139, ": ");
    check L1164() else D318();
  L1168():
    p142 = prom<V +>{
      paste5 = ldf paste;
      p141 = prom<V +>{
        msg6 = ld msg;
        msg7 = force? msg6;
        checkMissing(msg7);
        return msg7;
      };
      r599 = dyn paste5[, collapse](p141, " ");
      return r599;
    };
    r601 = dyn strwrap1[, exdent](p142, 2.0);
    check L1169() else D323();
  L1227():
    goto L257(r669);
  L1231():
    flush_console = ldf `flush.console`;
    check L1232() else D357();
  L1667():
    dx102 = getTryDispatchBuiltinValue(dr96);
    goto L385(dx102);
  L1668():
    p309 = prom<V +>{
      f3 = ldf f;
      p308 = prom<V +>{
        av34 = ld av2;
        av35 = force? av34;
        checkMissing(av35);
        return av35;
      };
      r1126 = dyn f3(p308);
      return r1126;
    };
    r1128 = dyn f2(p309);
    check L1669() else D579();
  L1695():
    p327 = prom<V +>{
      pkgs101 = ld pkgs;
      pkgs102 = force? pkgs101;
      checkMissing(pkgs102);
      return pkgs102;
    };
    p328 = prom<V +>{
      foundpkgs4 = ld foundpkgs;
      foundpkgs5 = force? foundpkgs4;
      checkMissing(foundpkgs5);
      c585 = `is.object`(foundpkgs5);
      if c585 then L1() else L2();
    L0(dx105):
      return dx105;
    L1():
      dr98 = tryDispatchBuiltin.1("[", foundpkgs5);
      dc49 = getTryDispatchBuiltinDispatched(dr98);
      if dc49 then L3() else L2();
    L2():
      __35 = ldf `[` in base;
      r1164 = dyn __35(foundpkgs5, <missing>, 1);
      goto L0(r1164);
    L3():
      dx104 = getTryDispatchBuiltinValue(dr98);
      goto L0(dx104);
    };
    r1166 = dyn _in_16(p327, p328);
    check L1696() else D596();
  D284():
    deopt 1112 [later8];
  D318():
    deopt 1226 [r594];
  D323():
    deopt 1239 [r601];
  D357():
    deopt 1388 [];
  D579():
    deopt 2211 [r1128];
  D596():
    deopt 2284 [r1166];
  L218():
    goto L229(NULL);
  L229(r571):
    goto L230();
  L1099():
    later9 = force? later8;
    checkMissing(later9);
    hasSrc2 = ld hasSrc;
    check L1100() else D285();
  L1102():
    action = ld action;
    check L1103() else D287();
  L1164():
    sQuote7 = ldf sQuote;
    check L1165() else D319();
  L1169():
    st msg = r601;
    message5 = ldf message;
    check L1170() else D324();
  L1232():
    r686 = dyn flush_console();
    check L1233() else D358();
  L1669():
    st available = r1128;
    goto L383(r1128);
  L1696():
    st found = r1166;
    foundpkgs8 = ld foundpkgs;
    check L1697() else D597();
  D285():
    deopt 1113 [later9, hasSrc2];
  D287():
    deopt 1118 [action];
  D319():
    deopt 1228 [];
  D324():
    deopt 1242 [];
  D358():
    deopt 1389 [r686];
  D597():
    deopt 2286 [foundpkgs8];
  L1100():
    hasSrc3 = force? hasSrc2;
    checkMissing(hasSrc3);
    r541 = `&&`(later9, hasSrc3);
    any5 = ldf any in base;
    r542 = dyn any5(r541);
    check L1101() else D286();
  L1103():
    action1 = force? action;
    checkMissing(action1);
    r543 = `==`(action1, "interactive");
    c390 = `as.logical`(r543);
    if c390 then L1104() else L219(c390);
  L1165():
    p140 = prom<V +>{
      s6 = ld s2;
      s7 = force? s6;
      checkMissing(s7);
      return s7;
    };
    r596 = dyn sQuote7(p140);
    check L1166() else D320();
  L1170():
    p144 = prom<V +>{
      paste6 = ldf paste;
      p143 = prom<V +>{
        msg8 = ld msg;
        msg9 = force? msg8;
        checkMissing(msg9);
        return msg9;
      };
      r603 = dyn paste6[, collapse](p143, "\n");
      return r603;
    };
    r605 = dyn message5[, domain](p144, NA_LGL);
    check L1171() else D325();
  L1233():
    goto L259();
  L1697():
    foundpkgs9 = force? foundpkgs8;
    checkMissing(foundpkgs9);
    c586 = `is.object`(foundpkgs9);
    if c586 then L1698() else L1699(foundpkgs9);
  D286():
    deopt 1117 [r542];
  D320():
    deopt 1230 [r596];
  D325():
    deopt 1246 [r605];
  L219(c392):
    c399 = `as.logical`(c392);
    if c399 then L1109() else L221();
  L394(dx107):
    st files = dx107;
    verbose7 = ld verbose;
    check L1713() else D602();
  L1101():
    goto L217(r542);
  L1104():
    sym52 = ldf interactive;
    base52 = ldf interactive in base;
    guard52 = `==`.4(sym52, base52);
    if guard52 then L1105() else L1106();
  L1166():
    c408 = ldf c in base;
    r597 = dyn c408(r594, r596);
    check L1167() else D321();
  L1171():
    action4 = ld action;
    check L1172() else D326();
  L1698():
    dr100 = tryDispatchBuiltin.1("[", foundpkgs9);
    dc50 = getTryDispatchBuiltinDispatched(dr100);
    if dc50 then L1700() else L1699(dr100);
  L1699(foundpkgs11):
    sym111 = ldf match;
    base111 = ldf match in base;
    guard111 = `==`.4(sym111, base111);
    if guard111 then L1701() else L1702();
  D321():
    deopt 1232 [r597];
  D326():
    deopt 1247 [action4];
  D602():
    deopt 2308 [verbose7];
  L220(c395, r545):
    c396 = `as.logical`(r545);
    c397 = `&&`(c395, c396);
    goto L219(c397);
  L221():
    action2 = ld action;
    check L1129() else D301();
  L227(r566):
    goto L229(r566);
  L395(foundpkgs14, r1168):
    __38 = ldf `[` in base;
    r1172 = dyn __38(foundpkgs14, r1168, 2);
    goto L394(r1172);
  L1105():
    interactive2 = ldf interactive in base;
    r546 = dyn interactive2();
    check L1107() else D288();
  L1106():
    r544 = dyn base52();
    goto L220(c390, r544);
  L1109():
    ngettext4 = ldf ngettext;
    check L1110() else D289();
  L1167():
    goto L237(r597);
  L1172():
    action5 = force? action4;
    checkMissing(action5);
    r606 = `==`(action5, "interactive");
    c409 = `as.logical`(r606);
    if c409 then L1173() else L238(c409);
  L1700():
    dx106 = getTryDispatchBuiltinValue(dr100);
    goto L394(dx106);
  L1701():
    pkgs103 = ld pkgs;
    check L1703() else D598();
  L1702():
    r1167 = dyn base111(<lang `[`(pkgs, found)>, <lang `[`(foundpkgs, , 1)>);
    goto L395(foundpkgs11, r1167);
  L1713():
    verbose8 = force? verbose7;
    checkMissing(verbose8);
    c589 = `as.logical`(verbose8);
    if c589 then L1714() else L398();
  D288():
    deopt 1125 [c390, r546];
  D289():
    deopt 1128 [];
  D301():
    deopt 1164 [action2];
  D598():
    deopt 2290 [foundpkgs11, pkgs103];
  L238(c411):
    c418 = `as.logical`(c411);
    if c418 then L1178() else L240();
  L398():
    goto L399();
  L399():
    cbind2 = ldf cbind;
    check L1718() else D605();
  L1107():
    goto L220(c390, r546);
  L1110():
    p134 = prom<V +>{
      sym53 = ldf sum;
      base53 = ldf sum in base;
      guard53 = `==`.4(sym53, base53);
      if guard53 then L1() else L2();
    L0(r548):
      return r548;
    L1():
      later10 = ld later;
      later11 = force? later10;
      checkMissing(later11);
      hasSrc4 = ld hasSrc;
      hasSrc5 = force? hasSrc4;
      checkMissing(hasSrc5);
      r549 = `&&`(later11, hasSrc5);
      sum3 = ldf sum in base;
      r550 = dyn sum3(r549);
      goto L0(r550);
    L2():
      r547 = dyn base53(<lang `&`(later, hasSrc)>);
      goto L0(r547);
    };
    r552 = dyn ngettext4(p134, "Do you want to install from sources the package which needs compilation?", "Do you want to install from sources the packages which need compilation?");
    check L1111() else D290();
  L1129():
    action3 = force? action2;
    checkMissing(action3);
    r567 = `==`(action3, "never");
    c402 = `as.logical`(r567);
    if c402 then L1130() else L228();
  L1173():
    sym59 = ldf interactive;
    base59 = ldf interactive in base;
    guard59 = `==`.4(sym59, base59);
    if guard59 then L1174() else L1175();
  L1703():
    pkgs104 = force? pkgs103;
    checkMissing(pkgs104);
    c587 = `is.object`(pkgs104);
    if c587 then L1704() else L1705(foundpkgs11, pkgs104);
  L1714():
    message11 = ldf message;
    check L1715() else D603();
  D290():
    deopt 1132 [r552];
  D603():
    deopt 2311 [];
  D605():
    deopt 2319 [];
  L228():
    goto L227(NULL);
  L239(c414, r608):
    c415 = `as.logical`(r608);
    c416 = `&&`(c414, c415);
    goto L238(c416);
  L240():
    action6 = ld action;
    check L1196() else D338();
  L246(r623):
    goto L248(r623);
  L396(foundpkgs18, dx109):
    foundpkgs19 = ld foundpkgs;
    check L1708() else D600();
  L1111():
    st msg = r552;
    askYesNo2 = ldf askYesNo;
    check L1112() else D291();
  L1130():
    cat2 = ldf cat;
    check L1131() else D302();
  L1174():
    interactive3 = ldf interactive in base;
    r609 = dyn interactive3();
    check L1176() else D327();
  L1175():
    r607 = dyn base59();
    goto L239(c409, r607);
  L1178():
    askYesNo3 = ldf askYesNo;
    check L1179() else D328();
  L1704():
    dr102 = tryDispatchBuiltin.1("[", pkgs104);
    dc51 = getTryDispatchBuiltinDispatched(dr102);
    if dc51 then L1706() else L1705(foundpkgs11, dr102);
  L1705(foundpkgs16, pkgs106):
    found = ld found;
    check L1707() else D599();
  L1715():
    p331 = prom<V +>{
      gettextf11 = ldf gettextf;
      p330 = prom<V +>{
        paste15 = ldf paste;
        p329 = prom<V +>{
          files = ld files;
          files1 = force? files;
          checkMissing(files1);
          return files1;
        };
        r1174 = dyn paste15[, collapse](p329, ", \n\t");
        return r1174;
      };
      r1176 = dyn gettextf11("files: %s", p330);
      return r1176;
    };
    r1178 = dyn message11[, domain](p331, NA_LGL);
    check L1716() else D604();
  L1718():
    p332 = prom<V +>{
      update30 = ld update;
      update31 = force? update30;
      checkMissing(update31);
      c590 = `is.object`(update31);
      if c590 then L1() else L2();
    L0(dx113):
      return dx113;
    L1():
      dr106 = tryDispatchBuiltin.1("[", update31);
      dc53 = getTryDispatchBuiltinDispatched(dr106);
      if dc53 then L3() else L2();
    L2():
      found2 = ld found;
      found3 = force? found2;
      __39 = ldf `[` in base;
      r1180 = dyn __39(update31, found3, <missing>, FALSE);
      goto L0(r1180);
    L3():
      dx112 = getTryDispatchBuiltinValue(dr106);
      goto L0(dx112);
    };
    p333 = prom<V +>{
      files2 = ld files;
      files3 = force? files2;
      checkMissing(files3);
      return files3;
    };
    r1183 = dyn cbind2[, file](p332, p333);
    check L1719() else D606();
  D291():
    deopt 1135 [];
  D302():
    deopt 1169 [];
  D327():
    deopt 1254 [c409, r609];
  D328():
    deopt 1257 [];
  D338():
    deopt 1286 [action6];
  D599():
    deopt 2292 [foundpkgs16, pkgs106, found];
  D600():
    deopt 2295 [foundpkgs18, foundpkgs19];
  D604():
    deopt 2315 [r1178];
  D606():
    deopt 2323 [r1183];
  L1112():
    p135 = prom<V +>{
      msg2 = ld msg;
      msg3 = force? msg2;
      checkMissing(msg3);
      return msg3;
    };
    r554 = dyn askYesNo2(p135);
    check L1113() else D292();
  L1131():
    r568 = dyn cat2("  Binaries will be installed\n");
    check L1132() else D303();
  L1176():
    goto L239(c409, r609);
  L1179():
    r610 = dyn askYesNo3("Do you want to attempt to install these from sources?");
    check L1180() else D329();
  L1196():
    action7 = force? action6;
    checkMissing(action7);
    r624 = `==`(action7, "never");
    c421 = `as.logical`(r624);
    if c421 then L1197() else L247();
  L1706():
    dx108 = getTryDispatchBuiltinValue(dr102);
    goto L396(foundpkgs11, dx108);
  L1707():
    found1 = force? found;
    __36 = ldf `[` in base;
    r1169 = dyn __36(pkgs106, found1);
    goto L396(foundpkgs16, r1169);
  L1708():
    foundpkgs20 = force? foundpkgs19;
    checkMissing(foundpkgs20);
    c588 = `is.object`(foundpkgs20);
    if c588 then L1709() else L1710(foundpkgs18);
  L1716():
    goto L399();
  L1719():
    st update = r1183;
    nrow1 = ldf nrow;
    check L1720() else D607();
  D292():
    deopt 1137 [r554];
  D303():
    deopt 1171 [r568];
  D329():
    deopt 1259 [r610];
  D607():
    deopt 2326 [];
  L247():
    goto L246(NULL);
  L397(foundpkgs26, dx111):
    match = ldf match in base;
    r1171 = dyn match(dx109, dx111, NA_INT, NULL);
    check L1712() else D601();
  L1113():
    st res = r554;
    sym54 = ldf `is.na`;
    base54 = ldf `is.na` in base;
    guard54 = `==`.4(sym54, base54);
    if guard54 then L1114() else L1115();
  L1132():
    later14 = ld later;
    check L1133() else D304();
  L1180():
    st res = r610;
    sym60 = ldf `is.na`;
    base60 = ldf `is.na` in base;
    guard60 = `==`.4(sym60, base60);
    if guard60 then L1181() else L1182();
  L1197():
    cat3 = ldf cat;
    check L1198() else D339();
  L1709():
    dr104 = tryDispatchBuiltin.1("[", foundpkgs20);
    dc52 = getTryDispatchBuiltinDispatched(dr104);
    if dc52 then L1711() else L1710(foundpkgs18);
  L1710(foundpkgs23):
    __37 = ldf `[` in base;
    r1170 = dyn __37(foundpkgs20, <missing>, 1);
    goto L397(foundpkgs23, r1170);
  L1720():
    p334 = prom<V +>{
      update34 = ld update;
      update35 = force? update34;
      checkMissing(update35);
      return update35;
    };
    r1185 = dyn nrow1(p334);
    check L1721() else D608();
  D304():
    deopt 1172 [later14];
  D339():
    deopt 1291 [];
  D601():
    deopt 2304 [foundpkgs26, r1171];
  D608():
    deopt 2328 [r1185];
  L222(r556):
    c400 = `as.logical`(r556);
    if c400 then L1118() else L223();
  L241(r612):
    c419 = `as.logical`(r612);
    if c419 then L1185() else L242();
  L1114():
    res8 = ld res;
    check L1116() else D293();
  L1115():
    r555 = dyn base54(<sym res>);
    goto L222(r555);
  L1133():
    later15 = force? later14;
    checkMissing(later15);
    hasSrc8 = ld hasSrc;
    check L1134() else D305();
  L1181():
    res12 = ld res;
    check L1183() else D330();
  L1182():
    r611 = dyn base60(<sym res>);
    goto L241(r611);
  L1198():
    r625 = dyn cat3("  These will not be installed\n");
    check L1199() else D340();
  L1711():
    dx110 = getTryDispatchBuiltinValue(dr104);
    goto L397(foundpkgs18, dx110);
  L1712():
    goto L395(foundpkgs26, r1171);
  L1721():
    r1186 = `>`(r1185, 1);
    c591 = `as.logical`(r1186);
    if c591 then L1722() else L400();
  D293():
    deopt 1141 [res8];
  D305():
    deopt 1173 [later15, hasSrc8];
  D330():
    deopt 1263 [res12];
  D340():
    deopt 1293 [r625];
  L223():
    goto L224();
  L224():
    isTRUE2 = ldf isTRUE;
    check L1122() else D297();
  L242():
    goto L243();
  L243():
    isTRUE3 = ldf isTRUE;
    check L1189() else D334();
  L400():
    goto L402();
  L402():
    Ncpus1 = ld Ncpus;
    check L1736() else D618();
  L1116():
    res9 = force? res8;
    checkMissing(res9);
    is_na2 = ldf `is.na` in base;
    r557 = dyn is_na2(res9);
    check L1117() else D294();
  L1118():
    stop13 = ldf stop;
    check L1119() else D295();
  L1134():
    hasSrc9 = force? hasSrc8;
    checkMissing(hasSrc9);
    r569 = `!`(hasSrc9);
    r570 = `&&`(later15, r569);
    st later = r570;
    goto L227(r570);
  L1183():
    res13 = force? res12;
    checkMissing(res13);
    is_na3 = ldf `is.na` in base;
    r613 = dyn is_na3(res13);
    check L1184() else D331();
  L1185():
    stop14 = ldf stop;
    check L1186() else D332();
  L1199():
    setdiff1 = ldf setdiff;
    check L1200() else D341();
  L1722():
    unique3 = ldf unique;
    check L1723() else D609();
  D294():
    deopt 1144 [r557];
  D295():
    deopt 1146 [];
  D297():
    deopt 1152 [];
  D331():
    deopt 1266 [r613];
  D332():
    deopt 1268 [];
  D334():
    deopt 1274 [];
  D341():
    deopt 1295 [];
  D609():
    deopt 2332 [];
  D618():
    deopt 2360 [Ncpus1];
  L1117():
    goto L222(r557);
  L1119():
    r558 = dyn stop13("Cancelled by user");
    check L1120() else D296();
  L1122():
    p136 = prom<V +>{
      res10 = ld res;
      res11 = force? res10;
      checkMissing(res11);
      return res11;
    };
    r561 = dyn isTRUE2(p136);
    check L1123() else D298();
  L1184():
    goto L241(r613);
  L1186():
    r614 = dyn stop14("Cancelled by user");
    check L1187() else D333();
  L1189():
    p145 = prom<V +>{
      res14 = ld res;
      res15 = force? res14;
      checkMissing(res15);
      return res15;
    };
    r617 = dyn isTRUE3(p145);
    check L1190() else D335();
  L1200():
    p148 = prom<V +>{
      pkgs59 = ld pkgs;
      pkgs60 = force? pkgs59;
      checkMissing(pkgs60);
      return pkgs60;
    };
    p149 = prom<V +>{
      s10 = ld s2;
      s11 = force? s10;
      checkMissing(s11);
      return s11;
    };
    r628 = dyn setdiff1(p148, p149);
    check L1201() else D342();
  L1723():
    p335 = prom<V +>{
      update36 = ld update;
      update37 = force? update36;
      checkMissing(update37);
      c592 = `is.object`(update37);
      if c592 then L1() else L2();
    L0(dx115):
      st pkgs = dx115;
      invisible.0();
      return dx115;
    L1():
      dr108 = tryDispatchBuiltin.1("[", update37);
      dc54 = getTryDispatchBuiltinDispatched(dr108);
      if dc54 then L3() else L2();
    L2():
      __40 = ldf `[` in base;
      r1187 = dyn __40(update37, <missing>, 1);
      goto L0(r1187);
    L3():
      dx114 = getTryDispatchBuiltinValue(dr108);
      goto L0(dx114);
    };
    r1189 = dyn unique3(p335);
    check L1724() else D610();
  L1736():
    Ncpus2 = force? Ncpus1;
    checkMissing(Ncpus2);
    r1202 = `>`(Ncpus2, 1);
    c594 = `as.logical`(r1202);
    if c594 then L1737() else L403(c594);
  D296():
    deopt 1148 [r558];
  D298():
    deopt 1154 [r561];
  D333():
    deopt 1270 [r614];
  D335():
    deopt 1276 [r617];
  D342():
    deopt 1298 [r628];
  D610():
    deopt 2334 [r1189];
  L403(c596):
    c600 = `as.logical`(c596);
    if c600 then L1741() else L404();
  L1120():
    goto L224();
  L1123():
    r562 = `!`(r561);
    c401 = `as.logical`(r562);
    if c401 then L1124() else L225();
  L1187():
    goto L243();
  L1190():
    r618 = `!`(r617);
    c420 = `as.logical`(r618);
    if c420 then L1191() else L244();
  L1201():
    st pkgs = r628;
    goto L246(r628);
  L1724():
    st upkgs = r1189;
    _make_dependency_list = ldf `.make_dependency_list`;
    check L1725() else D611();
  L1737():
    nrow2 = ldf nrow;
    check L1738() else D619();
  D611():
    deopt 2337 [];
  D619():
    deopt 2365 [c594];
  L225():
    goto L226(NULL);
  L226(r565):
    goto L227(r565);
  L244():
    goto L245(NULL);
  L245(r622):
    goto L246(r622);
  L404():
    tempfile = ldf tempfile;
    check L1941() else D745();
  L449():
    quiet17 = ld quiet;
    check L2013() else D792();
  L1124():
    later12 = ld later;
    check L1125() else D299();
  L1191():
    setdiff = ldf setdiff;
    check L1192() else D336();
  L1725():
    p336 = prom<V +>{
      upkgs = ld upkgs;
      upkgs1 = force? upkgs;
      checkMissing(upkgs1);
      return upkgs1;
    };
    p337 = prom<V +>{
      available41 = ld available;
      available42 = force? available41;
      checkMissing(available42);
      return available42;
    };
    r1192 = dyn _make_dependency_list(p336, p337);
    check L1726() else D612();
  L1738():
    p343 = prom<V +>{
      update44 = ld update;
      update45 = force? update44;
      checkMissing(update45);
      return update45;
    };
    r1204 = dyn nrow2(p343);
    check L1739() else D620();
  L1741():
    character1 = ldf character;
    check L1742() else D621();
  D299():
    deopt 1156 [later12];
  D336():
    deopt 1279 [];
  D612():
    deopt 2340 [r1192];
  D620():
    deopt 2367 [c594, r1204];
  D621():
    deopt 2372 [];
  D745():
    deopt 2795 [];
  D792():
    deopt 2941 [quiet17];
  L1125():
    later13 = force? later12;
    checkMissing(later13);
    hasSrc6 = ld hasSrc;
    check L1126() else D300();
  L1192():
    p146 = prom<V +>{
      pkgs57 = ld pkgs;
      pkgs58 = force? pkgs57;
      checkMissing(pkgs58);
      return pkgs58;
    };
    p147 = prom<V +>{
      s8 = ld s2;
      s9 = force? s8;
      checkMissing(s9);
      return s9;
    };
    r621 = dyn setdiff(p146, p147);
    check L1193() else D337();
  L1726():
    st DL = r1192;
    _find_install_order = ldf `.find_install_order`;
    check L1727() else D613();
  L1739():
    r1205 = `>`(r1204, 1);
    c597 = `as.logical`(r1205);
    c598 = `&&`(c594, c597);
    goto L403(c598);
  L1742():
    r1206 = dyn character1();
    check L1743() else D622();
  L1941():
    r1442 = dyn tempfile();
    check L1942() else D746();
  L2013():
    quiet18 = force? quiet17;
    checkMissing(quiet18);
    r1518 = `!`(quiet18);
    c674 = `as.logical`(r1518);
    if c674 then L2014() else L468(c674);
  D300():
    deopt 1157 [later13, hasSrc6];
  D337():
    deopt 1282 [r621];
  D613():
    deopt 2343 [];
  D622():
    deopt 2373 [r1206];
  D746():
    deopt 2796 [r1442];
  L468(c676):
    c680 = `as.logical`(c676);
    if c680 then L2017() else L469(c680);
  L1126():
    hasSrc7 = force? hasSrc6;
    checkMissing(hasSrc7);
    r563 = `!`(hasSrc7);
    r564 = `&&`(later13, r563);
    st later = r564;
    goto L226(r564);
  L1193():
    st pkgs = r621;
    goto L245(r621);
  L1727():
    p338 = prom<V +>{
      upkgs2 = ld upkgs;
      upkgs3 = force? upkgs2;
      checkMissing(upkgs3);
      return upkgs3;
    };
    p339 = prom<V +>{
      DL = ld DL;
      DL1 = force? DL;
      checkMissing(DL1);
      return DL1;
    };
    r1195 = dyn _find_install_order(p338, p339);
    check L1728() else D614();
  L1743():
    st tlim_cmd = r1206;
    tlim6 = ld tlim;
    check L1744() else D623();
  L1942():
    st tmpd2 = r1442;
    dir_create6 = ldf `dir.create`;
    check L1943() else D747();
  L2014():
    nonlocalrepos6 = ld nonlocalrepos;
    check L2015() else D793();
  D614():
    deopt 2346 [r1195];
  D623():
    deopt 2375 [tlim6];
  D747():
    deopt 2799 [];
  D793():
    deopt 2944 [c674, nonlocalrepos6];
  L469(c682):
    c690 = `as.logical`(c682);
    if c690 then L2022() else L471(c690);
  L1728():
    st p0 = r1195;
    update40 = ld update;
    check L1729() else D615();
  L1744():
    tlim7 = force? tlim6;
    checkMissing(tlim7);
    r1207 = `>`(tlim7, 0.0);
    c601 = `as.logical`(r1207);
    if c601 then L1745() else L405();
  L1943():
    p431 = prom<V +>{
      tmpd28 = ld tmpd2;
      tmpd29 = force? tmpd28;
      checkMissing(tmpd29);
      return tmpd29;
    };
    r1444 = dyn dir_create6(p431);
    check L1944() else D748();
  L2015():
    nonlocalrepos7 = force? nonlocalrepos6;
    checkMissing(nonlocalrepos7);
    c677 = `as.logical`(nonlocalrepos7);
    c678 = `&&`(c674, c677);
    goto L468(c678);
  L2017():
    sym129 = ldf `is.null`;
    base129 = ldf `is.null` in base;
    guard129 = `==`.4(sym129, base129);
    if guard129 then L2018() else L2019();
  D615():
    deopt 2348 [update40];
  D748():
    deopt 2801 [r1444];
  L405():
    goto L414();
  L414():
    sym116 = ldf c;
    base116 = ldf c in base;
    guard116 = `==`.4(sym116, base116);
    if guard116 then L1782() else L1783();
  L470(c685, r1520):
    r1521 = `!`(r1520);
    c687 = `as.logical`(r1521);
    c688 = `&&`(c685, c687);
    goto L469(c688);
  L471(c692):
    c700 = `as.logical`(c692);
    if c700 then L2027() else L473();
  L1729():
    update41 = force? update40;
    checkMissing(update41);
    c593 = `is.object`(update41);
    if c593 then L1730() else L1731(update41);
  L1745():
    _Platform32 = ld `.Platform`;
    check L1746() else D624();
  L1944():
    r1445 = `!`(r1444);
    c654 = `as.logical`(r1445);
    if c654 then L1945() else L450();
  L2018():
    tmpd36 = ld tmpd;
    check L2020() else D794();
  L2019():
    r1519 = dyn base129(<sym tmpd>);
    goto L470(c680, r1519);
  L2022():
    sym130 = ldf `is.null`;
    base130 = ldf `is.null` in base;
    guard130 = `==`.4(sym130, base130);
    if guard130 then L2023() else L2024();
  D624():
    deopt 2379 [_Platform32];
  D794():
    deopt 2948 [c680, tmpd36];
  L401(dx117):
    st update = dx117;
    goto L402();
  L415(r1236):
    st args0 = r1236;
    file_path7 = ldf `file.path`;
    check L1786() else D643();
  L450():
    goto L451();
  L451():
    file_path9 = ldf `file.path`;
    check L1949() else D751();
  L472(c695, r1523):
    c697 = `as.logical`(r1523);
    c698 = `&&`(c695, c697);
    goto L471(c698);
  L473():
    goto L474();
  L474():
    unique4 = ldf unique;
    check L2031() else D798();
  L1730():
    dr110 = tryDispatchBuiltin.1("[", update41);
    dc55 = getTryDispatchBuiltinDispatched(dr110);
    if dc55 then L1732() else L1731(dr110);
  L1731(update43):
    sort_list = ldf `sort.list`;
    check L1733() else D616();
  L1746():
    _Platform33 = force? _Platform32;
    checkMissing(_Platform33);
    c602 = `is.object`(_Platform33);
    if c602 then L1748() else L1749(_Platform33);
  L1782():
    args14 = ld args0;
    check L1784() else D641();
  L1783():
    r1235 = dyn base116(<sym args0>, "--pkglock");
    goto L415(r1235);
  L1945():
    stop23 = ldf stop;
    check L1946() else D749();
  L2020():
    tmpd37 = force? tmpd36;
    checkMissing(tmpd37);
    c686 = `==`(tmpd37, NULL);
    goto L470(c680, c686);
  L2023():
    destdir17 = ld destdir;
    check L2025() else D795();
  L2024():
    r1522 = dyn base130(<sym destdir>);
    goto L472(c690, r1522);
  L2027():
    cat9 = ldf cat;
    check L2028() else D796();
  D616():
    deopt 2351 [update43];
  D641():
    deopt 2435 [args14];
  D643():
    deopt 2442 [];
  D749():
    deopt 2804 [];
  D751():
    deopt 2812 [];
  D795():
    deopt 2954 [c690, destdir17];
  D796():
    deopt 2959 [];
  D798():
    deopt 2971 [];
  L1732():
    dx116 = getTryDispatchBuiltinValue(dr110);
    goto L401(dx116);
  L1733():
    p342 = prom<V +>{
      sym112 = ldf match;
      base112 = ldf match in base;
      guard112 = `==`.4(sym112, base112);
      if guard112 then L1() else L2();
    L0(r1197):
      return r1197;
    L1():
      pkgs107 = ld pkgs;
      pkgs108 = force? pkgs107;
      checkMissing(pkgs108);
      p340 = ld p0;
      p341 = force? p340;
      checkMissing(p341);
      match1 = ldf match in base;
      r1198 = dyn match1(pkgs108, p341, NA_INT, NULL);
      goto L0(r1198);
    L2():
      r1196 = dyn base112(<sym pkgs>, <sym p0>);
      goto L0(r1196);
    };
    r1200 = dyn sort_list(p342);
    check L1734() else D617();
  L1747(dx120):
    r1209 = `==`(dx120, "windows");
    c603 = `as.logical`(r1209);
    if c603 then L1751() else L406(c603);
  L1748():
    dr112 = tryDispatchBuiltin.1("$", _Platform33);
    dc56 = getTryDispatchBuiltinDispatched(dr112);
    if dc56 then L1750() else L1749(dr112);
  L1749(_Platform35):
    r1208 = `$`(_Platform35, <sym OS.type>);
    goto L1747(r1208);
  L1784():
    args15 = force? args14;
    checkMissing(args15);
    c621 = ldf c in base;
    r1237 = dyn c621(args15, "--pkglock");
    check L1785() else D642();
  L1786():
    p348 = prom<V +>{
      tempdir2 = ldf tempdir;
      r1238 = dyn tempdir2();
      return r1238;
    };
    r1240 = dyn file_path7(p348, "make_packages");
    check L1787() else D644();
  L1946():
    p434 = prom<V +>{
      gettextf16 = ldf gettextf;
      p433 = prom<V +>{
        sQuote18 = ldf sQuote;
        p432 = prom<V +>{
          tmpd30 = ld tmpd2;
          tmpd31 = force? tmpd30;
          checkMissing(tmpd31);
          return tmpd31;
        };
        r1447 = dyn sQuote18(p432);
        return r1447;
      };
      r1449 = dyn gettextf16("unable to create temporary directory %s", p433);
      return r1449;
    };
    r1451 = dyn stop23[, domain](p434, NA_LGL);
    check L1947() else D750();
  L1949():
    p435 = prom<V +>{
      tmpd32 = ld tmpd2;
      tmpd33 = force? tmpd32;
      checkMissing(tmpd33);
      return tmpd33;
    };
    p437 = prom<V +>{
      paste33 = ldf paste0;
      p436 = prom<V +>{
        update84 = ld update;
        update85 = force? update84;
        checkMissing(update85);
        c655 = `is.object`(update85);
        if c655 then L1() else L2();
      L0(dx148):
        return dx148;
      L1():
        dr140 = tryDispatchBuiltin.1("[", update85);
        dc70 = getTryDispatchBuiltinDispatched(dr140);
        if dc70 then L3() else L2();
      L2():
        __55 = ldf `[` in base;
        r1454 = dyn __55(update85, <missing>, 1);
        goto L0(r1454);
      L3():
        dx147 = getTryDispatchBuiltinValue(dr140);
        goto L0(dx147);
      };
      r1456 = dyn paste33(p436, ".out");
      return r1456;
    };
    r1458 = dyn file_path9(p435, p437);
    check L1950() else D752();
  L2025():
    destdir18 = force? destdir17;
    checkMissing(destdir18);
    c696 = `==`(destdir18, NULL);
    goto L472(c690, c696);
  L2028():
    p465 = prom<V +>{
      gettextf18 = ldf gettextf;
      p464 = prom<V +>{
        sQuote20 = ldf sQuote;
        p463 = prom<V +>{
          normalizePath2 = ldf normalizePath;
          p462 = prom<V +>{
            tmpd38 = ld tmpd;
            tmpd39 = force? tmpd38;
            checkMissing(tmpd39);
            return tmpd39;
          };
          r1525 = dyn normalizePath2[, mustWork](p462, FALSE);
          return r1525;
        };
        r1527 = dyn sQuote20(p463);
        return r1527;
      };
      r1529 = dyn gettextf18("The downloaded source packages are in\n\t%s", p464);
      return r1529;
    };
    p466 = prom<V +>{
      stderr = ldf stderr;
      r1531 = dyn stderr();
      return r1531;
    };
    r1533 = dyn cat9[, , , sep, file]("\n", p465, "\n", "", p466);
    check L2029() else D797();
  L2031():
    p467 = prom<V +>{
      update102 = ld update;
      update103 = force? update102;
      checkMissing(update103);
      c701 = `is.object`(update103);
      if c701 then L1() else L2();
    L0(dx159):
      return dx159;
    L1():
      dr150 = tryDispatchBuiltin.1("[", update103);
      dc75 = getTryDispatchBuiltinDispatched(dr150);
      if dc75 then L3() else L2();
    L2():
      __60 = ldf `[` in base;
      r1535 = dyn __60(update103, <missing>, 2);
      goto L0(r1535);
    L3():
      dx158 = getTryDispatchBuiltinValue(dr150);
      goto L0(dx158);
    };
    r1537 = dyn unique4(p467);
    check L2032() else D799();
  D617():
    deopt 2353 [update43, r1200];
  D642():
    deopt 2439 [r1237];
  D644():
    deopt 2445 [r1240];
  D750():
    deopt 2808 [r1451];
  D752():
    deopt 2815 [r1458];
  D797():
    deopt 2967 [r1533];
  D799():
    deopt 2973 [r1537];
  L406(c605):
    c612 = `as.logical`(c605);
    if c612 then L1758() else L408(c612);
  L1734():
    __41 = ldf `[` in base;
    r1201 = dyn __41(update41, r1200, <missing>);
    goto L401(r1201);
  L1750():
    dx119 = getTryDispatchBuiltinValue(dr112);
    goto L1747(dx119);
  L1751():
    sym113 = ldf nzchar;
    base113 = ldf nzchar in base;
    guard113 = `==`.4(sym113, base113);
    if guard113 then L1752() else L1753();
  L1785():
    goto L415(r1237);
  L1787():
    st tmpd2 = r1240;
    file_exists4 = ldf `file.exists`;
    check L1788() else D645();
  L1947():
    goto L451();
  L1950():
    st outfiles = r1458;
    sym126 = ldf seq_len;
    base126 = ldf seq_len in base;
    guard126 = `==`.4(sym126, base126);
    if guard126 then L1951() else L1952();
  L2029():
    goto L474();
  L2032():
    st libs_used = r1537;
    _Platform36 = ld `.Platform`;
    check L2033() else D800();
  D645():
    deopt 2448 [];
  D800():
    deopt 2975 [_Platform36];
  L407(c608, r1211):
    r1214 = `!`(r1211);
    c609 = `as.logical`(r1214);
    c610 = `&&`(c608, c609);
    goto L406(c610);
  L408(c614):
    c618 = `as.logical`(c614);
    if c618 then L1762() else L409();
  L452(r1460):
    s15 = toForSeq(r1460);
    l20 = length(s15);
    i108 = 0;
    goto L453(i108);
  L1752():
    Sys_getenv4 = ldf `Sys.getenv`;
    check L1754() else D625();
  L1753():
    r1210 = dyn base113(<lang Sys.getenv("R_TIMEOUT")>);
    goto L407(c603, r1210);
  L1758():
    grepl6 = ldf grepl;
    check L1759() else D628();
  L1788():
    p349 = prom<V +>{
      tmpd16 = ld tmpd2;
      tmpd17 = force? tmpd16;
      checkMissing(tmpd17);
      return tmpd17;
    };
    r1242 = dyn file_exists4(p349);
    check L1789() else D646();
  L1951():
    nrow4 = ldf nrow;
    check L1953() else D753();
  L1952():
    r1459 = dyn base126(<lang nrow(update)>);
    goto L452(r1459);
  L2033():
    _Platform37 = force? _Platform36;
    checkMissing(_Platform37);
    c702 = `is.object`(_Platform37);
    if c702 then L2035() else L2036(_Platform37);
  D625():
    deopt 2387 [c603];
  D628():
    deopt 2395 [c612];
  D646():
    deopt 2450 [r1242];
  D753():
    deopt 2819 [];
  L409():
    sym114 = ldf nzchar;
    base114 = ldf nzchar in base;
    guard114 = `==`.4(sym114, base114);
    if guard114 then L1766() else L1767();
  L410(r1221):
    goto L414();
  L453(i109):
    i110 = `+`.1(i109, 1);
    c656 = `<`.1(l20, i110);
    if c656 then L1955() else L465();
  L1754():
    r1212 = dyn Sys_getenv4("R_TIMEOUT");
    check L1755() else D626();
  L1759():
    p345 = prom<V +>{
      tolower = ldf tolower;
      p344 = prom<V +>{
        Sys_which1 = ldf `Sys.which`;
        r1215 = dyn Sys_which1("timeout");
        return r1215;
      };
      r1217 = dyn tolower(p344);
      return r1217;
    };
    r1219 = dyn grepl6[, , fixed]("\\windows\\system32\\", p345, TRUE);
    check L1760() else D629();
  L1762():
    warning3 = ldf warning;
    check L1763() else D630();
  L1789():
    r1243 = `!`(r1242);
    c622 = `as.logical`(r1243);
    if c622 then L1790() else L416(c622);
  L1953():
    p438 = prom<V +>{
      update88 = ld update;
      update89 = force? update88;
      checkMissing(update89);
      return update89;
    };
    r1462 = dyn nrow4(p438);
    check L1954() else D754();
  L2034(dx161):
    r1539 = `==`(dx161, "unix");
    c703 = `as.logical`(r1539);
    if c703 then L2038() else L475(c703);
  L2035():
    dr152 = tryDispatchBuiltin.1("$", _Platform37);
    dc76 = getTryDispatchBuiltinDispatched(dr152);
    if dc76 then L2037() else L2036(dr152);
  L2036(_Platform39):
    r1538 = `$`(_Platform39, <sym OS.type>);
    goto L2034(r1538);
  D626():
    deopt 2389 [c603, r1212];
  D629():
    deopt 2400 [c612, r1219];
  D630():
    deopt 2403 [];
  D754():
    deopt 2821 [r1462];
  L411(r1223):
    c619 = `as.logical`(r1223);
    if c619 then L1771() else L412();
  L416(c624):
    c628 = `as.logical`(c624);
    if c628 then L1794() else L417();
  L465():
    x4 = `[[`(s15, i110, NULL, TRUE);
    st i = x4;
    keep_outputs19 = ld keep_outputs;
    check L1956() else D755();
  L475(c705):
    c709 = `as.logical`(c705);
    if c709 then L2042() else L476();
  L1755():
    nzchar2 = ldf nzchar in base;
    r1213 = dyn nzchar2(r1212);
    check L1756() else D627();
  L1760():
    c615 = `as.logical`(r1219);
    c616 = `&&`(c612, c615);
    goto L408(c616);
  L1763():
    r1220 = dyn warning3("Windows default 'timeout' command is not usable for parallel installs");
    check L1764() else D631();
  L1766():
    Sys_which2 = ldf `Sys.which`;
    check L1768() else D632();
  L1767():
    r1222 = dyn base114(<lang `<-`(timeout, Sys.which(Sys.getenv("R_TIMEOUT", "timeout")))>);
    goto L411(r1222);
  L1790():
    dir_create5 = ldf `dir.create`;
    check L1791() else D647();
  L1954():
    r1463 = seq_len(r1462);
    goto L452(r1463);
  L1955():
    keep_outputs23 = ld keep_outputs;
    check L2006() else D787();
  L2037():
    dx160 = getTryDispatchBuiltinValue(dr152);
    goto L2034(dx160);
  L2038():
    _in_19 = ldf `%in%`;
    check L2039() else D801();
  D627():
    deopt 2391 [c603, r1213];
  D631():
    deopt 2405 [r1220];
  D632():
    deopt 2409 [];
  D647():
    deopt 2453 [c622];
  D755():
    deopt 2823 [i110, keep_outputs19];
  D787():
    deopt 2924 [keep_outputs23];
  D801():
    deopt 2981 [c703];
  L412():
    warning4 = ldf warning;
    check L1779() else D639();
  L417():
    goto L418();
  L418():
    file_path8 = ldf `file.path`;
    check L1798() else D651();
  L476():
    goto L477(NULL);
  L477(r1546):
    goto L478();
  L1756():
    goto L407(c603, r1213);
  L1764():
    goto L410(r1220);
  L1768():
    p346 = prom<V +>{
      Sys_getenv5 = ldf `Sys.getenv`;
      r1224 = dyn Sys_getenv5("R_TIMEOUT", "timeout");
      return r1224;
    };
    r1226 = dyn Sys_which2(p346);
    check L1769() else D633();
  L1771():
    sym115 = ldf c;
    base115 = ldf c in base;
    guard115 = `==`.4(sym115, base115);
    if guard115 then L1772() else L1773();
  L1791():
    p350 = prom<V +>{
      tmpd18 = ld tmpd2;
      tmpd19 = force? tmpd18;
      checkMissing(tmpd19);
      return tmpd19;
    };
    r1245 = dyn dir_create5(p350);
    check L1792() else D648();
  L1794():
    stop22 = ldf stop;
    check L1795() else D649();
  L1956():
    keep_outputs20 = force? keep_outputs19;
    checkMissing(keep_outputs20);
    c657 = `as.logical`(keep_outputs20);
    if c657 then L1957() else L454();
  L2006():
    keep_outputs24 = force? keep_outputs23;
    checkMissing(keep_outputs24);
    c673 = `as.logical`(keep_outputs24);
    if c673 then L2007() else L466();
  L2039():
    p468 = prom<V +>{
      _Library = ld `.Library`;
      _Library1 = force? _Library;
      checkMissing(_Library1);
      return _Library1;
    };
    p469 = prom<V +>{
      libs_used = ld libs_used;
      libs_used1 = force? libs_used;
      checkMissing(libs_used1);
      return libs_used1;
    };
    r1542 = dyn _in_19(p468, p469);
    check L2040() else D802();
  L2042():
    message13 = ldf message;
    check L2043() else D803();
  D633():
    deopt 2411 [r1226];
  D639():
    deopt 2428 [];
  D648():
    deopt 2455 [c622, r1245];
  D649():
    deopt 2459 [];
  D651():
    deopt 2467 [];
  D802():
    deopt 2984 [c703, r1542];
  D803():
    deopt 2987 [];
  L413(r1229):
    st tlim_cmd = r1229;
    goto L410(r1229);
  L454():
    output8 = ld output;
    check L1964() else D758();
  L456(i121, dx151):
    st outfile = dx151;
    update90 = ld update;
    check L1965() else D759();
  L466():
    goto L467();
  L467():
    unlink3 = ldf unlink;
    check L2011() else D790();
  L1769():
    st timeout = r1226;
    nzchar3 = ldf nzchar in base;
    r1227 = dyn nzchar3(r1226);
    check L1770() else D634();
  L1772():
    shQuote3 = ldf shQuote;
    check L1774() else D635();
  L1773():
    r1228 = dyn base115(<lang shQuote(timeout)>, "-s INT", <sym tlim>);
    goto L413(r1228);
  L1779():
    r1233 = dyn warning4("timeouts for parallel installs require the 'timeout' command");
    check L1780() else D640();
  L1792():
    r1246 = `!`(r1245);
    c625 = `as.logical`(r1246);
    c626 = `&&`(c622, c625);
    goto L416(c626);
  L1795():
    p353 = prom<V +>{
      gettextf12 = ldf gettextf;
      p352 = prom<V +>{
        sQuote14 = ldf sQuote;
        p351 = prom<V +>{
          tmpd20 = ld tmpd2;
          tmpd21 = force? tmpd20;
          checkMissing(tmpd21);
          return tmpd21;
        };
        r1248 = dyn sQuote14(p351);
        return r1248;
      };
      r1250 = dyn gettextf12("unable to create temporary directory %s", p352);
      return r1250;
    };
    r1252 = dyn stop22[, domain](p353, NA_LGL);
    check L1796() else D650();
  L1798():
    p354 = prom<V +>{
      tmpd22 = ld tmpd2;
      tmpd23 = force? tmpd22;
      checkMissing(tmpd23);
      return tmpd23;
    };
    r1255 = dyn file_path8(p354, "Makefile");
    check L1799() else D652();
  L1957():
    outfiles6 = ld outfiles;
    check L1958() else D756();
  L2007():
    file_copy4 = ldf `file.copy`;
    check L2008() else D788();
  L2040():
    c706 = `as.logical`(r1542);
    c707 = `&&`(c703, c706);
    goto L475(c707);
  L2043():
    r1543 = dyn message13("Updating HTML index of packages in '.Library'");
    check L2044() else D804();
  D634():
    deopt 2414 [r1227];
  D635():
    deopt 2418 [];
  D640():
    deopt 2430 [r1233];
  D650():
    deopt 2463 [r1252];
  D652():
    deopt 2470 [r1255];
  D756():
    deopt 2825 [i110, outfiles6];
  D758():
    deopt 2830 [i110, output8];
  D759():
    deopt 2833 [i121, update90];
  D788():
    deopt 2927 [];
  D790():
    deopt 2936 [];
  D804():
    deopt 2989 [r1543];
  L1770():
    goto L411(r1227);
  L1774():
    p347 = prom<V +>{
      timeout = ld timeout;
      timeout1 = force? timeout;
      checkMissing(timeout1);
      return timeout1;
    };
    r1231 = dyn shQuote3(p347);
    check L1775() else D636();
  L1780():
    goto L410(r1233);
  L1796():
    goto L418();
  L1799():
    st mfile = r1255;
    file = ldf file;
    check L1800() else D653();
  L1958():
    outfiles7 = force? outfiles6;
    checkMissing(outfiles7);
    c658 = `is.object`(outfiles7);
    if c658 then L1959() else L1960(i110, outfiles7);
  L1964():
    output9 = force? output8;
    checkMissing(output9);
    goto L456(i110, output9);
  L1965():
    update91 = force? update90;
    checkMissing(update91);
    c659 = `is.object`(update91);
    if c659 then L1966() else L1967(i121, update91);
  L2008():
    p459 = prom<V +>{
      outfiles10 = ld outfiles;
      outfiles11 = force? outfiles10;
      checkMissing(outfiles11);
      return outfiles11;
    };
    p460 = prom<V +>{
      outdir2 = ld outdir;
      outdir3 = force? outdir2;
      checkMissing(outdir3);
      return outdir3;
    };
    r1514 = dyn file_copy4[, , overwrite](p459, p460, TRUE);
    check L2009() else D789();
  L2011():
    p461 = prom<V +>{
      tmpd34 = ld tmpd2;
      tmpd35 = force? tmpd34;
      checkMissing(tmpd35);
      return tmpd35;
    };
    r1517 = dyn unlink3[, recursive](p461, TRUE);
    check L2012() else D791();
  L2044():
    make_packages_html = ldf `make.packages.html`;
    check L2045() else D805();
  D636():
    deopt 2420 [r1231];
  D653():
    deopt 2473 [];
  D789():
    deopt 2932 [r1514];
  D791():
    deopt 2940 [r1517];
  D805():
    deopt 2991 [];
  L455(i118, dx150):
    goto L456(i118, dx150);
  L457(i125, dx153):
    st fil = dx153;
    sym127 = ldf c;
    base127 = ldf c in base;
    guard127 = `==`.4(sym127, base127);
    if guard127 then L1970() else L1971();
  L1775():
    tlim8 = ld tlim;
    check L1776() else D637();
  L1800():
    p355 = prom<V +>{
      mfile = ld mfile;
      mfile1 = force? mfile;
      checkMissing(mfile1);
      return mfile1;
    };
    r1257 = dyn file(p355, "wt");
    check L1801() else D654();
  L1959():
    dr142 = tryDispatchBuiltin.1("[", outfiles7);
    dc71 = getTryDispatchBuiltinDispatched(dr142);
    if dc71 then L1961() else L1960(i110, dr142);
  L1960(i116, outfiles9):
    i119 = ld i;
    check L1962() else D757();
  L1966():
    dr144 = tryDispatchBuiltin.1("[", update91);
    dc72 = getTryDispatchBuiltinDispatched(dr144);
    if dc72 then L1968() else L1967(i121, dr144);
  L1967(i123, update93):
    i126 = ld i;
    check L1969() else D760();
  L2009():
    goto L467();
  L2012():
    goto L449();
  L2045():
    p470 = prom<V +>{
      _Library2 = ld `.Library`;
      _Library3 = force? _Library2;
      checkMissing(_Library3);
      return _Library3;
    };
    r1545 = dyn make_packages_html(p470);
    check L2046() else D806();
  D637():
    deopt 2422 [tlim8];
  D654():
    deopt 2476 [r1257];
  D757():
    deopt 2827 [i116, outfiles9, i119];
  D760():
    deopt 2835 [i123, update93, i126];
  D806():
    deopt 2993 [r1545];
  L458(i130, r1467):
    st args = r1467;
    system5 = ldf system2;
    check L1984() else D773();
  L1776():
    tlim9 = force? tlim8;
    checkMissing(tlim9);
    c620 = ldf c in base;
    r1232 = dyn c620(r1231, "-s INT", tlim9);
    check L1777() else D638();
  L1801():
    st conn = r1257;
    paste16 = ldf paste;
    check L1802() else D655();
  L1961():
    dx149 = getTryDispatchBuiltinValue(dr142);
    goto L455(i110, dx149);
  L1962():
    i120 = force? i119;
    __56 = ldf `[` in base;
    r1464 = dyn __56(outfiles9, i120);
    goto L455(i116, r1464);
  L1968():
    dx152 = getTryDispatchBuiltinValue(dr144);
    goto L457(i121, dx152);
  L1969():
    i127 = force? i126;
    __57 = ldf `[` in base;
    r1465 = dyn __57(update93, i127, 3);
    goto L457(i123, r1465);
  L1970():
    args20 = ld args0;
    check L1972() else D761();
  L1971():
    r1466 = dyn base127(<sym args0>, <lang get_install_opts(fil)>, "-l", <lang shQuote(`[`(update, i, 2))>, <lang getConfigureArgs(fil)>, <lang getConfigureVars(fil)>, <lang shQuote(fil)>);
    goto L458(i125, r1466);
  L2046():
    goto L477(r1545);
  D638():
    deopt 2425 [r1232];
  D655():
    deopt 2479 [];
  D761():
    deopt 2842 [i125, args20];
  D773():
    deopt 2869 [i130];
  L1777():
    goto L413(r1232);
  L1802():
    p357 = prom<V +>{
      paste17 = ldf paste0;
      p356 = prom<V +>{
        update46 = ld update;
        update47 = force? update46;
        checkMissing(update47);
        c629 = `is.object`(update47);
        if c629 then L1() else L2();
      L0(dx122):
        return dx122;
      L1():
        dr114 = tryDispatchBuiltin.1("[", update47);
        dc57 = getTryDispatchBuiltinDispatched(dr114);
        if dc57 then L3() else L2();
      L2():
        __42 = ldf `[` in base;
        r1258 = dyn __42(update47, <missing>, 1);
        goto L0(r1258);
      L3():
        dx121 = getTryDispatchBuiltinValue(dr114);
        goto L0(dx121);
      };
      r1260 = dyn paste17(p356, ".ts");
      return r1260;
    };
    r1262 = dyn paste16[, collapse](p357, " ");
    check L1803() else D656();
  L1972():
    args21 = force? args20;
    checkMissing(args21);
    get_install_opts2 = ldf get_install_opts;
    check L1973() else D762();
  L1984():
    p444 = prom<V +>{
      cmd12 = ld cmd0;
      cmd13 = force? cmd12;
      checkMissing(cmd13);
      return cmd13;
    };
    p445 = prom<V +>{
      args22 = ld args;
      args23 = force? args22;
      checkMissing(args23);
      return args23;
    };
    p446 = prom<V +>{
      env4 = ld env;
      env5 = force? env4;
      checkMissing(env5);
      return env5;
    };
    p447 = prom<V +>{
      outfile2 = ld outfile;
      outfile3 = force? outfile2;
      checkMissing(outfile3);
      return outfile3;
    };
    p448 = prom<V +>{
      outfile4 = ld outfile;
      outfile5 = force? outfile4;
      checkMissing(outfile5);
      return outfile5;
    };
    p449 = prom<V +>{
      tlim10 = ld tlim;
      tlim11 = force? tlim10;
      checkMissing(tlim11);
      return tlim11;
    };
    r1486 = dyn system5[, , env, stdout, stderr, timeout](p444, p445, p446, p447, p448, p449);
    check L1985() else D774();
  D656():
    deopt 2483 [r1262];
  D762():
    deopt 2845 [i125];
  D774():
    deopt 2880 [i130, r1486];
  L1803():
    st deps = r1262;
    strwrap3 = ldf strwrap;
    check L1804() else D657();
  L1973():
    p439 = prom<V +>{
      fil8 = ld fil;
      fil9 = force? fil8;
      checkMissing(fil9);
      return fil9;
    };
    r1469 = dyn get_install_opts2(p439);
    check L1974() else D763();
  L1985():
    st status = r1486;
    quiet15 = ld quiet;
    check L1986() else D775();
  D657():
    deopt 2486 [];
  D763():
    deopt 2847 [i125, r1469];
  D775():
    deopt 2882 [i130, quiet15];
  L1804():
    p358 = prom<V +>{
      deps = ld deps;
      deps1 = force? deps;
      checkMissing(deps1);
      return deps1;
    };
    r1264 = dyn strwrap3[, width, exdent](p358, 75.0, 2.0);
    check L1805() else D658();
  L1974():
    shQuote7 = ldf shQuote;
    check L1975() else D764();
  L1986():
    quiet16 = force? quiet15;
    checkMissing(quiet16);
    r1487 = `!`(quiet16);
    c662 = `as.logical`(r1487);
    if c662 then L1987() else L459(i130, c662);
  D658():
    deopt 2492 [r1264];
  D764():
    deopt 2850 [i125];
  L459(i134, c664):
    c668 = `as.logical`(c664);
    if c668 then L1990() else L460();
  L1805():
    st deps = r1264;
    paste18 = ldf paste;
    check L1806() else D659();
  L1975():
    p440 = prom<V +>{
      update94 = ld update;
      update95 = force? update94;
      checkMissing(update95);
      c660 = `is.object`(update95);
      if c660 then L1() else L2(update95);
    L0(dx155):
      return dx155;
    L1():
      dr146 = tryDispatchBuiltin.1("[", update95);
      dc73 = getTryDispatchBuiltinDispatched(dr146);
      if dc73 then L3() else L2(dr146);
    L2(update97):
      i131 = ld i;
      i132 = force? i131;
      __58 = ldf `[` in base;
      r1470 = dyn __58(update97, i132, 2);
      goto L0(r1470);
    L3():
      dx154 = getTryDispatchBuiltinValue(dr146);
      goto L0(dx154);
    };
    r1472 = dyn shQuote7(p440);
    check L1976() else D765();
  L1987():
    keep_outputs21 = ld keep_outputs;
    check L1988() else D776();
  D659():
    deopt 2495 [];
  D765():
    deopt 2852 [i125, r1472];
  D776():
    deopt 2885 [i130, c662, keep_outputs21];
  L460():
    goto L461(i134);
  L461(i138):
    status4 = ld status;
    check L1994() else D779();
  L1806():
    p359 = prom<V +>{
      deps2 = ld deps;
      deps3 = force? deps2;
      checkMissing(deps3);
      return deps3;
    };
    r1266 = dyn paste18[, collapse](p359, " \\\n");
    check L1807() else D660();
  L1976():
    getConfigureArgs2 = ldf getConfigureArgs;
    check L1977() else D766();
  L1988():
    keep_outputs22 = force? keep_outputs21;
    checkMissing(keep_outputs22);
    c665 = `as.logical`(keep_outputs22);
    c666 = `&&`(c662, c665);
    goto L459(i130, c666);
  L1990():
    writeLines = ldf writeLines;
    check L1991() else D777();
  D660():
    deopt 2499 [r1266];
  D766():
    deopt 2854 [i125];
  D777():
    deopt 2889 [i134];
  D779():
    deopt 2894 [i138, status4];
  L1807():
    st deps = r1266;
    cat7 = ldf cat;
    check L1808() else D661();
  L1977():
    p441 = prom<V +>{
      fil10 = ld fil;
      fil11 = force? fil10;
      checkMissing(fil11);
      return fil11;
    };
    r1474 = dyn getConfigureArgs2(p441);
    check L1978() else D767();
  L1991():
    p451 = prom<V +>{
      readLines = ldf readLines;
      p450 = prom<V +>{
        outfile6 = ld outfile;
        outfile7 = force? outfile6;
        checkMissing(outfile7);
        return outfile7;
      };
      r1489 = dyn readLines(p450);
      return r1489;
    };
    r1491 = dyn writeLines(p451);
    check L1992() else D778();
  L1994():
    status5 = force? status4;
    checkMissing(status5);
    r1493 = `>`(status5, 0);
    c669 = `as.logical`(r1493);
    if c669 then L1995() else L462();
  D661():
    deopt 2502 [];
  D767():
    deopt 2856 [i125, r1474];
  D778():
    deopt 2891 [i134, r1491];
  L462():
    verbose9 = ld verbose;
    check L1999() else D782();
  L463(i143):
    goto L453(i143);
  L1808():
    p360 = prom<V +>{
      deps4 = ld deps;
      deps5 = force? deps4;
      checkMissing(deps5);
      return deps5;
    };
    p361 = prom<V +>{
      conn = ld conn;
      conn1 = force? conn;
      checkMissing(conn1);
      return conn1;
    };
    r1269 = dyn cat7[, , , sep, file]("all: ", p360, "\n", "", p361);
    check L1809() else D662();
  L1978():
    getConfigureVars2 = ldf getConfigureVars;
    check L1979() else D768();
  L1992():
    goto L461(i134);
  L1995():
    warning8 = ldf warning;
    check L1996() else D780();
  D662():
    deopt 2510 [r1269];
  D768():
    deopt 2858 [i125];
  D780():
    deopt 2899 [i138];
  D782():
    deopt 2904 [i138, verbose9];
  L1809():
    _make_dependency_list1 = ldf `.make_dependency_list`;
    check L1810() else D663();
  L1979():
    p442 = prom<V +>{
      fil12 = ld fil;
      fil13 = force? fil12;
      checkMissing(fil13);
      return fil13;
    };
    r1476 = dyn getConfigureVars2(p442);
    check L1980() else D769();
  L1996():
    p454 = prom<V +>{
      gettextf17 = ldf gettextf;
      p453 = prom<V +>{
        sQuote19 = ldf sQuote;
        p452 = prom<V +>{
          update98 = ld update;
          update99 = force? update98;
          checkMissing(update99);
          c670 = `is.object`(update99);
          if c670 then L1() else L2(update99);
        L0(dx157):
          return dx157;
        L1():
          dr148 = tryDispatchBuiltin.1("[", update99);
          dc74 = getTryDispatchBuiltinDispatched(dr148);
          if dc74 then L3() else L2(dr148);
        L2(update101):
          i141 = ld i;
          i142 = force? i141;
          __59 = ldf `[` in base;
          r1494 = dyn __59(update101, i142, 1);
          goto L0(r1494);
        L3():
          dx156 = getTryDispatchBuiltinValue(dr148);
          goto L0(dx156);
        };
        r1496 = dyn sQuote19(p452);
        return r1496;
      };
      r1498 = dyn gettextf17("installation of package %s had non-zero exit status", p453);
      return r1498;
    };
    r1500 = dyn warning8[, domain](p454, NA_LGL);
    check L1997() else D781();
  L1999():
    verbose10 = force? verbose9;
    checkMissing(verbose10);
    c671 = `as.logical`(verbose10);
    if c671 then L2000() else L464();
  D663():
    deopt 2512 [];
  D769():
    deopt 2860 [i125, r1476];
  D781():
    deopt 2903 [i138, r1500];
  L464():
    goto L463(i138);
  L1810():
    p362 = prom<V +>{
      upkgs4 = ld upkgs;
      upkgs5 = force? upkgs4;
      checkMissing(upkgs5);
      return upkgs5;
    };
    p363 = prom<V +>{
      available43 = ld available;
      available44 = force? available43;
      checkMissing(available44);
      return available44;
    };
    r1272 = dyn _make_dependency_list1[, , recursive](p362, p363, TRUE);
    check L1811() else D664();
  L1980():
    shQuote8 = ldf shQuote;
    check L1981() else D770();
  L1997():
    goto L463(i138);
  L2000():
    paste34 = ldf paste;
    check L2001() else D783();
  D664():
    deopt 2517 [r1272];
  D770():
    deopt 2862 [i125];
  D783():
    deopt 2907 [i138];
  L1811():
    st aDL = r1272;
    sym117 = ldf seq_len;
    base117 = ldf seq_len in base;
    guard117 = `==`.4(sym117, base117);
    if guard117 then L1812() else L1813();
  L1981():
    p443 = prom<V +>{
      fil14 = ld fil;
      fil15 = force? fil14;
      checkMissing(fil15);
      return fil15;
    };
    r1478 = dyn shQuote8(p443);
    check L1982() else D771();
  L2001():
    p455 = prom<V +>{
      sym128 = ldf c;
      base128 = ldf c in base;
      guard128 = `==`.4(sym128, base128);
      if guard128 then L1() else L2();
    L0(r1503):
      return r1503;
    L1():
      cmd14 = ld cmd0;
      cmd15 = force? cmd14;
      checkMissing(cmd15);
      args24 = ld args;
      args25 = force? args24;
      checkMissing(args25);
      c672 = ldf c in base;
      r1504 = dyn c672(cmd15, args25);
      goto L0(r1504);
    L2():
      r1502 = dyn base128(<sym cmd0>, <sym args>);
      goto L0(r1502);
    };
    r1506 = dyn paste34[, collapse](p455, " ");
    check L2002() else D784();
  D771():
    deopt 2864 [i125, r1478];
  D784():
    deopt 2911 [i138, r1506];
  L419(r1274):
    s13 = toForSeq(r1274);
    l18 = length(s13);
    i64 = 0;
    goto L420(i64);
  L1812():
    nrow3 = ldf nrow;
    check L1814() else D665();
  L1813():
    r1273 = dyn base117(<lang nrow(update)>);
    goto L419(r1273);
  L1982():
    c661 = ldf c in base;
    r1479 = dyn c661(args21, r1469, "-l", r1472, r1474, r1476, r1478);
    check L1983() else D772();
  L2002():
    st cmd = r1506;
    message12 = ldf message;
    check L2003() else D785();
  D665():
    deopt 2521 [];
  D772():
    deopt 2866 [i125, r1479];
  D785():
    deopt 2914 [i138];
  L420(i65):
    i66 = `+`.1(i65, 1);
    c630 = `<`.1(l18, i66);
    if c630 then L1816() else L429();
  L1814():
    p364 = prom<V +>{
      update50 = ld update;
      update51 = force? update50;
      checkMissing(update51);
      return update51;
    };
    r1276 = dyn nrow3(p364);
    check L1815() else D666();
  L1983():
    goto L458(i125, r1479);
  L2003():
    p458 = prom<V +>{
      sprintf6 = ldf sprintf;
      p456 = prom<V +>{
        i146 = ld i;
        i147 = force? i146;
        checkMissing(i147);
        return i147;
      };
      p457 = prom<V +>{
        cmd16 = ld cmd;
        cmd17 = force? cmd16;
        checkMissing(cmd17);
        return cmd17;
      };
      r1509 = dyn sprintf6("%d): succeeded '%s'", p456, p457);
      return r1509;
    };
    r1511 = dyn message12[, domain](p458, NA_LGL);
    check L2004() else D786();
  D666():
    deopt 2523 [r1276];
  D786():
    deopt 2918 [i138, r1511];
  L429():
    x2 = `[[`(s13, i66, NULL, TRUE);
    st i = x2;
    update52 = ld update;
    check L1817() else D667();
  L1815():
    r1277 = seq_len(r1276);
    goto L419(r1277);
  L1816():
    close = ldf close;
    check L1866() else D698();
  L2004():
    goto L463(i138);
  D667():
    deopt 2525 [i66, update52];
  D698():
    deopt 2627 [];
  L1817():
    update53 = force? update52;
    checkMissing(update53);
    c631 = `is.object`(update53);
    if c631 then L1818() else L1819(i66, update53);
  L1866():
    p389 = prom<V +>{
      conn4 = ld conn;
      conn5 = force? conn4;
      checkMissing(conn5);
      return conn5;
    };
    r1335 = dyn close(p389);
    check L1867() else D699();
  D699():
    deopt 2629 [r1335];
  L421(i72, dx124):
    st pkg = dx124;
    update56 = ld update;
    check L1822() else D669();
  L1818():
    dr116 = tryDispatchBuiltin.1("[", update53);
    dc58 = getTryDispatchBuiltinDispatched(dr116);
    if dc58 then L1820() else L1819(i66, dr116);
  L1819(i70, update55):
    i73 = ld i;
    check L1821() else D668();
  L1867():
    setwd = ldf setwd;
    check L1868() else D700();
  D668():
    deopt 2527 [i70, update55, i73];
  D669():
    deopt 2532 [i72, update56];
  D700():
    deopt 2631 [];
  L1820():
    dx123 = getTryDispatchBuiltinValue(dr116);
    goto L421(i66, dx123);
  L1821():
    i74 = force? i73;
    __43 = ldf `[` in base;
    r1278 = dyn __43(update55, i74, 1);
    goto L421(i70, r1278);
  L1822():
    update57 = force? update56;
    checkMissing(update57);
    c632 = `is.object`(update57);
    if c632 then L1823() else L1824(i72, update57);
  L1868():
    p390 = prom<V +>{
      tmpd24 = ld tmpd2;
      tmpd25 = force? tmpd24;
      checkMissing(tmpd25);
      return tmpd25;
    };
    r1337 = dyn setwd(p390);
    check L1869() else D701();
  D701():
    deopt 2633 [r1337];
  L422(i78, dx126):
    st fil = dx126;
    sym118 = ldf c;
    base118 = ldf c in base;
    guard118 = `==`.4(sym118, base118);
    if guard118 then L1827() else L1828();
  L1823():
    dr118 = tryDispatchBuiltin.1("[", update57);
    dc59 = getTryDispatchBuiltinDispatched(dr118);
    if dc59 then L1825() else L1824(i72, dr118);
  L1824(i76, update59):
    i79 = ld i;
    check L1826() else D670();
  L1869():
    st cwd = r1337;
    sym121 = ldf `on.exit`;
    base121 = ldf `on.exit` in base;
    guard121 = `==`.4(sym121, base121);
    if guard121 then L1870() else L1871();
  D670():
    deopt 2534 [i76, update59, i79];
  L423(i83, r1281):
    st args = r1281;
    paste20 = ldf paste;
    check L1843() else D685();
  L430():
    system3 = ldf system2;
    check L1872() else D702();
  L1825():
    dx125 = getTryDispatchBuiltinValue(dr118);
    goto L422(i72, dx125);
  L1826():
    i80 = force? i79;
    __44 = ldf `[` in base;
    r1279 = dyn __44(update59, i80, 3);
    goto L422(i76, r1279);
  L1827():
    args16 = ld args0;
    check L1829() else D671();
  L1828():
    r1280 = dyn base118(<sym args0>, <lang get_install_opts(fil)>, "-l", <lang shQuote(`[`(update, i, 2))>, <lang getConfigureArgs(fil)>, <lang getConfigureVars(fil)>, <lang shQuote(fil)>, ">", <lang paste0(pkg, ".out")>, "2>&1");
    goto L423(i78, r1280);
  L1870():
    on_exit1 = ldf `on.exit` in base;
    r1340 = dyn on_exit1(<lang setwd(cwd)>);
    goto L430();
  L1871():
    r1338 = dyn base121(<lang setwd(cwd)>);
    goto L430();
  D671():
    deopt 2541 [i78, args16];
  D685():
    deopt 2575 [i83];
  D702():
    deopt 2639 [];
  L1829():
    args17 = force? args16;
    checkMissing(args17);
    get_install_opts1 = ldf get_install_opts;
    check L1830() else D672();
  L1843():
    p372 = prom<V +>{
      sym119 = ldf c;
      base119 = ldf c in base;
      guard119 = `==`.4(sym119, base119);
      if guard119 then L1() else L2();
    L0(r1297):
      return r1297;
    L1():
      tlim_cmd = ld tlim_cmd;
      tlim_cmd1 = force? tlim_cmd;
      checkMissing(tlim_cmd1);
      shQuote6 = ldf shQuote;
      p371 = prom<V +>{
        cmd8 = ld cmd0;
        cmd9 = force? cmd8;
        checkMissing(cmd9);
        return cmd9;
      };
      r1299 = dyn shQuote6(p371);
      args18 = ld args;
      args19 = force? args18;
      checkMissing(args19);
      c635 = ldf c in base;
      r1300 = dyn c635("MAKEFLAGS=", tlim_cmd1, r1299, args19);
      goto L0(r1300);
    L2():
      r1296 = dyn base119("MAKEFLAGS=", <sym tlim_cmd>, <lang shQuote(cmd0)>, <sym args>);
      goto L0(r1296);
    };
    r1302 = dyn paste20[, collapse](p372, " ");
    check L1844() else D686();
  L1872():
    p391 = prom<V +>{
      Sys_getenv6 = ldf `Sys.getenv`;
      r1341 = dyn Sys_getenv6("MAKE", "make");
      return r1341;
    };
    p392 = prom<V +>{
      sym122 = ldf c;
      base122 = ldf c in base;
      guard122 = `==`.4(sym122, base122);
      if guard122 then L1() else L2();
    L0(r1344):
      return r1344;
    L1():
      Ncpus3 = ld Ncpus;
      Ncpus4 = force? Ncpus3;
      checkMissing(Ncpus4);
      c639 = ldf c in base;
      r1345 = dyn c639("-k -j", Ncpus4);
      goto L0(r1345);
    L2():
      r1343 = dyn base122("-k -j", <sym Ncpus>);
      goto L0(r1343);
    };
    p393 = prom<V +>{
      output4 = ld output;
      output5 = force? output4;
      checkMissing(output5);
      return output5;
    };
    p394 = prom<V +>{
      output6 = ld output;
      output7 = force? output6;
      checkMissing(output7);
      return output7;
    };
    p395 = prom<V +>{
      env2 = ld env;
      env3 = force? env2;
      checkMissing(env3);
      return env3;
    };
    r1350 = dyn system3[, , stdout, stderr, env](p391, p392, p393, p394, p395);
    check L1873() else D703();
  D672():
    deopt 2544 [i78];
  D686():
    deopt 2579 [i83, r1302];
  D703():
    deopt 2648 [r1350];
  L1830():
    p365 = prom<V +>{
      fil = ld fil;
      fil1 = force? fil;
      checkMissing(fil1);
      return fil1;
    };
    r1283 = dyn get_install_opts1(p365);
    check L1831() else D673();
  L1844():
    st cmd = r1302;
    aDL = ld aDL;
    check L1845() else D687();
  L1873():
    st status = r1350;
    status2 = ld status;
    check L1874() else D704();
  D673():
    deopt 2546 [i78, r1283];
  D687():
    deopt 2581 [i83, aDL];
  D704():
    deopt 2650 [status2];
  L1831():
    shQuote4 = ldf shQuote;
    check L1832() else D674();
  L1845():
    aDL1 = force? aDL;
    checkMissing(aDL1);
    c636 = `is.object`(aDL1);
    if c636 then L1846() else L1847(i83, aDL1);
  L1874():
    status3 = force? status2;
    checkMissing(status3);
    r1351 = `>`(status3, 0);
    c640 = `as.logical`(r1351);
    if c640 then L1875() else L431();
  D674():
    deopt 2549 [i78];
  L424(i89, dx130):
    st deps = dx130;
    deps6 = ld deps;
    check L1850() else D689();
  L431():
    goto L445();
  L445():
    keep_outputs17 = ld keep_outputs;
    check L1921() else D730();
  L1832():
    p366 = prom<V +>{
      update60 = ld update;
      update61 = force? update60;
      checkMissing(update61);
      c633 = `is.object`(update61);
      if c633 then L1() else L2(update61);
    L0(dx128):
      return dx128;
    L1():
      dr120 = tryDispatchBuiltin.1("[", update61);
      dc60 = getTryDispatchBuiltinDispatched(dr120);
      if dc60 then L3() else L2(dr120);
    L2(update63):
      i84 = ld i;
      i85 = force? i84;
      __45 = ldf `[` in base;
      r1284 = dyn __45(update63, i85, 2);
      goto L0(r1284);
    L3():
      dx127 = getTryDispatchBuiltinValue(dr120);
      goto L0(dx127);
    };
    r1286 = dyn shQuote4(p366);
    check L1833() else D675();
  L1846():
    dr122 = tryDispatchBuiltin.1("[[", aDL1);
    dc61 = getTryDispatchBuiltinDispatched(dr122);
    if dc61 then L1848() else L1847(i83, dr122);
  L1847(i87, aDL3):
    pkg2 = ld pkg;
    check L1849() else D688();
  L1875():
    update64 = ld update;
    check L1876() else D705();
  D675():
    deopt 2551 [i78, r1286];
  D688():
    deopt 2583 [i87, aDL3, pkg2];
  D689():
    deopt 2587 [i89, deps6];
  D705():
    deopt 2654 [update64];
  D730():
    deopt 2749 [keep_outputs17];
  L1833():
    getConfigureArgs1 = ldf getConfigureArgs;
    check L1834() else D676();
  L1848():
    dx129 = getTryDispatchBuiltinValue(dr122);
    goto L424(i83, dx129);
  L1849():
    pkg3 = force? pkg2;
    __46 = ldf `[[` in base;
    r1303 = dyn __46(aDL3, pkg3);
    goto L424(i87, r1303);
  L1850():
    deps7 = force? deps6;
    checkMissing(deps7);
    c637 = `is.object`(deps7);
    if c637 then L1851() else L1852(i89, deps7);
  L1876():
    update65 = force? update64;
    checkMissing(update65);
    c641 = `is.object`(update65);
    if c641 then L1877() else L1878();
  L1921():
    keep_outputs18 = force? keep_outputs17;
    checkMissing(keep_outputs18);
    c648 = `as.logical`(keep_outputs18);
    if c648 then L1922() else L446();
  D676():
    deopt 2553 [i78];
  L425(i93, dx132):
    st deps = dx132;
    sym120 = ldf length;
    base120 = ldf length in base;
    guard120 = `==`.4(sym120, base120);
    if guard120 then L1856() else L1857();
  L432(dx134):
    st pkgs = dx134;
    sub1 = ldf sub;
    check L1880() else D706();
  L446():
    goto L447();
  L447():
    file_copy1 = ldf `file.copy`;
    check L1928() else D735();
  L1834():
    p367 = prom<V +>{
      fil2 = ld fil;
      fil3 = force? fil2;
      checkMissing(fil3);
      return fil3;
    };
    r1288 = dyn getConfigureArgs1(p367);
    check L1835() else D677();
  L1851():
    dr124 = tryDispatchBuiltin.1("[", deps7);
    dc62 = getTryDispatchBuiltinDispatched(dr124);
    if dc62 then L1853() else L1852(i89, dr124);
  L1852(i91, deps9):
    _in_17 = ldf `%in%`;
    check L1854() else D690();
  L1877():
    dr126 = tryDispatchBuiltin.1("[", update65);
    dc63 = getTryDispatchBuiltinDispatched(dr126);
    if dc63 then L1879() else L1878();
  L1878():
    __48 = ldf `[` in base;
    r1352 = dyn __48(update65, <missing>, 1);
    goto L432(r1352);
  L1922():
    paste29 = ldf paste0;
    check L1923() else D731();
  D677():
    deopt 2555 [i78, r1288];
  D690():
    deopt 2590 [i91, deps9];
  D706():
    deopt 2662 [];
  D731():
    deopt 2752 [];
  D735():
    deopt 2767 [];
  L426(i96, r1309):
    c638 = `as.logical`(r1309);
    if c638 then L1860() else L427();
  L1835():
    getConfigureVars1 = ldf getConfigureVars;
    check L1836() else D678();
  L1853():
    dx131 = getTryDispatchBuiltinValue(dr124);
    goto L425(i89, dx131);
  L1854():
    p373 = prom<V +>{
      deps10 = ld deps;
      deps11 = force? deps10;
      checkMissing(deps11);
      return deps11;
    };
    p374 = prom<V +>{
      upkgs6 = ld upkgs;
      upkgs7 = force? upkgs6;
      checkMissing(upkgs7);
      return upkgs7;
    };
    r1306 = dyn _in_17(p373, p374);
    check L1855() else D691();
  L1856():
    deps12 = ld deps;
    check L1858() else D692();
  L1857():
    r1308 = dyn base120(<sym deps>);
    goto L426(i93, r1308);
  L1879():
    dx133 = getTryDispatchBuiltinValue(dr126);
    goto L432(dx133);
  L1880():
    p396 = prom<V +>{
      dir = ldf dir;
      r1353 = dyn dir[, pattern](".", "[.]ts$");
      return r1353;
    };
    r1355 = dyn sub1("[.]ts$", "", p396);
    check L1881() else D707();
  L1923():
    p413 = prom<V +>{
      update68 = ld update;
      update69 = force? update68;
      checkMissing(update69);
      c649 = `is.object`(update69);
      if c649 then L1() else L2();
    L0(dx138):
      return dx138;
    L1():
      dr130 = tryDispatchBuiltin.1("[", update69);
      dc65 = getTryDispatchBuiltinDispatched(dr130);
      if dc65 then L3() else L2();
    L2():
      __50 = ldf `[` in base;
      r1400 = dyn __50(update69, <missing>, 1);
      goto L0(r1400);
    L3():
      dx137 = getTryDispatchBuiltinValue(dr130);
      goto L0(dx137);
    };
    r1402 = dyn paste29(p413, ".out");
    check L1924() else D732();
  L1928():
    p419 = prom<V +>{
      Sys_glob = ldf `Sys.glob`;
      p418 = prom<V +>{
        paste30 = ldf paste0;
        p417 = prom<V +>{
          update72 = ld update;
          update73 = force? update72;
          checkMissing(update73);
          c651 = `is.object`(update73);
          if c651 then L1() else L2();
        L0(dx142):
          return dx142;
        L1():
          dr134 = tryDispatchBuiltin.1("[", update73);
          dc67 = getTryDispatchBuiltinDispatched(dr134);
          if dc67 then L3() else L2();
        L2():
          __52 = ldf `[` in base;
          r1410 = dyn __52(update73, <missing>, 1);
          goto L0(r1410);
        L3():
          dx141 = getTryDispatchBuiltinValue(dr134);
          goto L0(dx141);
        };
        r1412 = dyn paste30(p417, "*.zip");
        return r1412;
      };
      r1414 = dyn Sys_glob(p418);
      return r1414;
    };
    p420 = prom<V +>{
      cwd = ld cwd;
      cwd1 = force? cwd;
      checkMissing(cwd1);
      return cwd1;
    };
    r1417 = dyn file_copy1(p419, p420);
    check L1929() else D736();
  D678():
    deopt 2557 [i78];
  D691():
    deopt 2593 [i91, deps9, r1306];
  D692():
    deopt 2598 [i93, deps12];
  D707():
    deopt 2666 [r1355];
  D732():
    deopt 2755 [r1402];
  D736():
    deopt 2770 [r1417];
  L427():
    goto L428(i96, "");
  L428(i99, r1315):
    st deps = r1315;
    cat8 = ldf cat;
    check L1864() else D696();
  L1836():
    p368 = prom<V +>{
      fil4 = ld fil;
      fil5 = force? fil4;
      checkMissing(fil5);
      return fil5;
    };
    r1290 = dyn getConfigureVars1(p368);
    check L1837() else D679();
  L1855():
    __47 = ldf `[` in base;
    r1307 = dyn __47(deps9, r1306);
    goto L425(i91, r1307);
  L1858():
    deps13 = force? deps12;
    checkMissing(deps13);
    length24 = ldf length in base;
    r1310 = dyn length24(deps13);
    check L1859() else D693();
  L1860():
    paste21 = ldf paste;
    check L1861() else D694();
  L1881():
    st tss = r1355;
    pkgs109 = ld pkgs;
    check L1882() else D708();
  L1924():
    st outfiles = r1402;
    file_copy = ldf `file.copy`;
    check L1925() else D733();
  L1929():
    file_copy2 = ldf `file.copy`;
    check L1930() else D737();
  D679():
    deopt 2559 [i78, r1290];
  D693():
    deopt 2601 [i93, r1310];
  D694():
    deopt 2603 [i96];
  D696():
    deopt 2612 [i99];
  D708():
    deopt 2668 [pkgs109];
  D733():
    deopt 2758 [];
  D737():
    deopt 2772 [];
  L1837():
    shQuote5 = ldf shQuote;
    check L1838() else D680();
  L1859():
    goto L426(i93, r1310);
  L1861():
    p376 = prom<V +>{
      paste22 = ldf paste0;
      p375 = prom<V +>{
        deps14 = ld deps;
        deps15 = force? deps14;
        checkMissing(deps15);
        return deps15;
      };
      r1312 = dyn paste22(p375, ".ts");
      return r1312;
    };
    r1314 = dyn paste21[, collapse](p376, " ");
    check L1862() else D695();
  L1864():
    p379 = prom<V +>{
      paste23 = ldf paste0;
      p377 = prom<V +>{
        pkg4 = ld pkg;
        pkg5 = force? pkg4;
        checkMissing(pkg5);
        return pkg5;
      };
      p378 = prom<V +>{
        deps16 = ld deps;
        deps17 = force? deps16;
        checkMissing(deps17);
        return deps17;
      };
      r1318 = dyn paste23(p377, ".ts: ", p378);
      return r1318;
    };
    p382 = prom<V +>{
      paste24 = ldf paste;
      p381 = prom<V +>{
        sQuote15 = ldf sQuote;
        p380 = prom<V +>{
          pkg6 = ld pkg;
          pkg7 = force? pkg6;
          checkMissing(pkg7);
          return pkg7;
        };
        r1321 = dyn sQuote15(p380);
        return r1321;
      };
      r1323 = dyn paste24("\t@echo begin installing package", p381);
      return r1323;
    };
    p385 = prom<V +>{
      paste25 = ldf paste0;
      p383 = prom<V +>{
        cmd10 = ld cmd;
        cmd11 = force? cmd10;
        checkMissing(cmd11);
        return cmd11;
      };
      p384 = prom<V +>{
        pkg8 = ld pkg;
        pkg9 = force? pkg8;
        checkMissing(pkg9);
        return pkg9;
      };
      r1327 = dyn paste25("\t@", p383, " && touch ", p384, ".ts");
      return r1327;
    };
    p387 = prom<V +>{
      paste26 = ldf paste0;
      p386 = prom<V +>{
        pkg10 = ld pkg;
        pkg11 = force? pkg10;
        checkMissing(pkg11);
        return pkg11;
      };
      r1330 = dyn paste26("\t@cat ", p386, ".out");
      return r1330;
    };
    p388 = prom<V +>{
      conn2 = ld conn;
      conn3 = force? conn2;
      checkMissing(conn3);
      return conn3;
    };
    r1333 = dyn cat8[, , , , , sep, file](p379, p382, p385, p387, "", "\n", p388);
    check L1865() else D697();
  L1882():
    pkgs110 = force? pkgs109;
    checkMissing(pkgs110);
    c642 = `is.object`(pkgs110);
    if c642 then L1883() else L1884(pkgs110);
  L1925():
    p415 = prom<V +>{
      outfiles = ld outfiles;
      outfiles1 = force? outfiles;
      checkMissing(outfiles1);
      c650 = `is.object`(outfiles1);
      if c650 then L1() else L2(outfiles1);
    L0(dx140):
      return dx140;
    L1():
      dr132 = tryDispatchBuiltin.1("[", outfiles1);
      dc66 = getTryDispatchBuiltinDispatched(dr132);
      if dc66 then L3() else L2(dr132);
    L2(outfiles3):
      file_exists6 = ldf `file.exists`;
      p414 = prom<V +>{
        outfiles4 = ld outfiles;
        outfiles5 = force? outfiles4;
        checkMissing(outfiles5);
        return outfiles5;
      };
      r1404 = dyn file_exists6(p414);
      __51 = ldf `[` in base;
      r1405 = dyn __51(outfiles3, r1404);
      goto L0(r1405);
    L3():
      dx139 = getTryDispatchBuiltinValue(dr132);
      goto L0(dx139);
    };
    p416 = prom<V +>{
      outdir = ld outdir;
      outdir1 = force? outdir;
      checkMissing(outdir1);
      return outdir1;
    };
    r1408 = dyn file_copy[, , overwrite](p415, p416, TRUE);
    check L1926() else D734();
  L1930():
    p423 = prom<V +>{
      Sys_glob1 = ldf `Sys.glob`;
      p422 = prom<V +>{
        paste31 = ldf paste0;
        p421 = prom<V +>{
          update76 = ld update;
          update77 = force? update76;
          checkMissing(update77);
          c652 = `is.object`(update77);
          if c652 then L1() else L2();
        L0(dx144):
          return dx144;
        L1():
          dr136 = tryDispatchBuiltin.1("[", update77);
          dc68 = getTryDispatchBuiltinDispatched(dr136);
          if dc68 then L3() else L2();
        L2():
          __53 = ldf `[` in base;
          r1418 = dyn __53(update77, <missing>, 1);
          goto L0(r1418);
        L3():
          dx143 = getTryDispatchBuiltinValue(dr136);
          goto L0(dx143);
        };
        r1420 = dyn paste31(p421, "*.tgz");
        return r1420;
      };
      r1422 = dyn Sys_glob1(p422);
      return r1422;
    };
    p424 = prom<V +>{
      cwd2 = ld cwd;
      cwd3 = force? cwd2;
      checkMissing(cwd3);
      return cwd3;
    };
    r1425 = dyn file_copy2(p423, p424);
    check L1931() else D738();
  D680():
    deopt 2561 [i78];
  D695():
    deopt 2607 [i96, r1314];
  D697():
    deopt 2622 [i99, r1333];
  D734():
    deopt 2763 [r1408];
  D738():
    deopt 2775 [r1425];
  L433(dx136):
    st failed = dx136;
    failed = ld failed;
    check L1888() else D711();
  L1838():
    p369 = prom<V +>{
      fil6 = ld fil;
      fil7 = force? fil6;
      checkMissing(fil7);
      return fil7;
    };
    r1292 = dyn shQuote5(p369);
    check L1839() else D681();
  L1862():
    goto L428(i96, r1314);
  L1865():
    goto L420(i99);
  L1883():
    dr128 = tryDispatchBuiltin.1("[", pkgs110);
    dc64 = getTryDispatchBuiltinDispatched(dr128);
    if dc64 then L1885() else L1884(dr128);
  L1884(pkgs112):
    _in_18 = ldf `%in%`;
    check L1886() else D709();
  L1926():
    goto L447();
  L1931():
    file_copy3 = ldf `file.copy`;
    check L1932() else D739();
  D681():
    deopt 2563 [i78, r1292];
  D709():
    deopt 2671 [pkgs112];
  D711():
    deopt 2678 [failed];
  D739():
    deopt 2777 [];
  L1839():
    paste19 = ldf paste0;
    check L1840() else D682();
  L1885():
    dx135 = getTryDispatchBuiltinValue(dr128);
    goto L433(dx135);
  L1886():
    p397 = prom<V +>{
      pkgs113 = ld pkgs;
      pkgs114 = force? pkgs113;
      checkMissing(pkgs114);
      return pkgs114;
    };
    p398 = prom<V +>{
      tss = ld tss;
      tss1 = force? tss;
      checkMissing(tss1);
      return tss1;
    };
    r1358 = dyn _in_18(p397, p398);
    check L1887() else D710();
  L1888():
    failed1 = force? failed;
    checkMissing(failed1);
    s14 = toForSeq(failed1);
    l19 = length(s14);
    i100 = 0;
    goto L434(i100);
  L1932():
    p427 = prom<V +>{
      Sys_glob2 = ldf `Sys.glob`;
      p426 = prom<V +>{
        paste32 = ldf paste0;
        p425 = prom<V +>{
          update80 = ld update;
          update81 = force? update80;
          checkMissing(update81);
          c653 = `is.object`(update81);
          if c653 then L1() else L2();
        L0(dx146):
          return dx146;
        L1():
          dr138 = tryDispatchBuiltin.1("[", update81);
          dc69 = getTryDispatchBuiltinDispatched(dr138);
          if dc69 then L3() else L2();
        L2():
          __54 = ldf `[` in base;
          r1426 = dyn __54(update81, <missing>, 1);
          goto L0(r1426);
        L3():
          dx145 = getTryDispatchBuiltinValue(dr138);
          goto L0(dx145);
        };
        r1428 = dyn paste32(p425, "*.tar.gz");
        return r1428;
      };
      r1430 = dyn Sys_glob2(p426);
      return r1430;
    };
    p428 = prom<V +>{
      cwd4 = ld cwd;
      cwd5 = force? cwd4;
      checkMissing(cwd5);
      return cwd5;
    };
    r1433 = dyn file_copy3(p427, p428);
    check L1933() else D740();
  D682():
    deopt 2566 [i78];
  D710():
    deopt 2674 [pkgs112, r1358];
  D740():
    deopt 2780 [r1433];
  L434(i101):
    i102 = `+`.1(i101, 1);
    c643 = `<`.1(l19, i102);
    if c643 then L1889() else L437();
  L1840():
    p370 = prom<V +>{
      pkg = ld pkg;
      pkg1 = force? pkg;
      checkMissing(pkg1);
      return pkg1;
    };
    r1294 = dyn paste19(p370, ".out");
    check L1841() else D683();
  L1887():
    r1359 = `!`(r1358);
    __49 = ldf `[` in base;
    r1360 = dyn __49(pkgs112, r1359);
    goto L433(r1360);
  L1933():
    setwd1 = ldf setwd;
    check L1934() else D741();
  D683():
    deopt 2569 [i78, r1294];
  D741():
    deopt 2782 [];
  L437():
    x3 = `[[`(s14, i102, NULL, TRUE);
    st pkg = x3;
    file_exists5 = ldf `file.exists`;
    check L1890() else D712();
  L1841():
    c634 = ldf c in base;
    r1295 = dyn c634(args17, r1283, "-l", r1286, r1288, r1290, r1292, ">", r1294, "2>&1");
    check L1842() else D684();
  L1889():
    sym123 = ldf length;
    base123 = ldf length in base;
    guard123 = `==`.4(sym123, base123);
    if guard123 then L1896() else L1897();
  L1934():
    p429 = prom<V +>{
      cwd6 = ld cwd;
      cwd7 = force? cwd6;
      checkMissing(cwd7);
      return cwd7;
    };
    r1435 = dyn setwd1(p429);
    check L1935() else D742();
  D684():
    deopt 2572 [i78, r1295];
  D712():
    deopt 2681 [i102];
  D742():
    deopt 2784 [r1435];
  L438(r1369):
    st n = r1369;
    n = ld n;
    check L1900() else D718();
  L1842():
    goto L423(i78, r1295);
  L1890():
    p400 = prom<V +>{
      paste27 = ldf paste0;
      p399 = prom<V +>{
        pkg12 = ld pkg;
        pkg13 = force? pkg12;
        checkMissing(pkg13);
        return pkg13;
      };
      r1362 = dyn paste27(p399, ".out");
      st outfile = r1362;
      invisible.0();
      return r1362;
    };
    r1364 = dyn file_exists5(p400);
    check L1891() else D713();
  L1896():
    failed2 = ld failed;
    check L1898() else D716();
  L1897():
    r1368 = dyn base123(<sym failed>);
    goto L438(r1368);
  L1935():
    sym125 = ldf `on.exit`;
    base125 = ldf `on.exit` in base;
    guard125 = `==`.4(sym125, base125);
    if guard125 then L1936() else L1937();
  D713():
    deopt 2683 [i102, r1364];
  D716():
    deopt 2696 [failed2];
  D718():
    deopt 2701 [n];
  L448():
    unlink2 = ldf unlink;
    check L1938() else D743();
  L1891():
    c644 = `as.logical`(r1364);
    if c644 then L1892() else L435();
  L1898():
    failed3 = force? failed2;
    checkMissing(failed3);
    length25 = ldf length in base;
    r1370 = dyn length25(failed3);
    check L1899() else D717();
  L1900():
    n1 = force? n;
    checkMissing(n1);
    r1371 = `==`(n1, 1);
    c645 = `as.logical`(r1371);
    if c645 then L1901() else L439();
  L1936():
    on_exit2 = ldf `on.exit` in base;
    r1438 = dyn on_exit2();
    goto L448();
  L1937():
    r1436 = dyn base125();
    goto L448();
  D717():
    deopt 2699 [r1370];
  D743():
    deopt 2789 [];
  L435():
    goto L436(i102);
  L436(i107):
    goto L434(i107);
  L439():
    n2 = ld n;
    check L1905() else D721();
  L440(r1378):
    goto L445();
  L1892():
    system4 = ldf system2;
    check L1893() else D714();
  L1899():
    goto L438(r1370);
  L1901():
    warning5 = ldf warning;
    check L1902() else D719();
  L1938():
    p430 = prom<V +>{
      tmpd26 = ld tmpd2;
      tmpd27 = force? tmpd26;
      checkMissing(tmpd27);
      return tmpd27;
    };
    r1440 = dyn unlink2[, recursive](p430, TRUE);
    check L1939() else D744();
  D714():
    deopt 2685 [i102];
  D719():
    deopt 2706 [];
  D721():
    deopt 2711 [n2];
  D744():
    deopt 2793 [r1440];
  L1893():
    p401 = prom<V +>{
      outfile = ld outfile;
      outfile1 = force? outfile;
      checkMissing(outfile1);
      return outfile1;
    };
    r1366 = dyn system4("cat", p401);
    check L1894() else D715();
  L1902():
    p404 = prom<V +>{
      gettextf13 = ldf gettextf;
      p403 = prom<V +>{
        sQuote16 = ldf sQuote;
        p402 = prom<V +>{
          failed4 = ld failed;
          failed5 = force? failed4;
          checkMissing(failed5);
          return failed5;
        };
        r1373 = dyn sQuote16(p402);
        return r1373;
      };
      r1375 = dyn gettextf13("installation of package %s failed", p403);
      return r1375;
    };
    r1377 = dyn warning5[, domain](p404, NA_LGL);
    check L1903() else D720();
  L1905():
    n3 = force? n2;
    checkMissing(n3);
    r1379 = `>`(n3, 1);
    c646 = `as.logical`(r1379);
    if c646 then L1906() else L441();
  L1939():
    goto L449();
  D715():
    deopt 2688 [i102, r1366];
  D720():
    deopt 2710 [r1377];
  L441():
    goto L440(NULL);
  L1894():
    goto L436(i102);
  L1903():
    goto L440(r1377);
  L1906():
    paste28 = ldf paste;
    check L1907() else D722();
  D722():
    deopt 2716 [];
  L1907():
    p406 = prom<V +>{
      sQuote17 = ldf sQuote;
      p405 = prom<V +>{
        failed6 = ld failed;
        failed7 = force? failed6;
        checkMissing(failed7);
        return failed7;
      };
      r1381 = dyn sQuote17(p405);
      return r1381;
    };
    r1383 = dyn paste28[, collapse](p406, ", ");
    check L1908() else D723();
  D723():
    deopt 2720 [r1383];
  L1908():
    st msg = r1383;
    sym124 = ldf nchar;
    base124 = ldf nchar in base;
    guard124 = `==`.4(sym124, base124);
    if guard124 then L1909() else L1910();
  L442(r1385):
    r1387 = `<`(r1385, 40.0);
    c647 = `as.logical`(r1387);
    if c647 then L1913() else L443();
  L1909():
    msg14 = ld msg;
    check L1911() else D724();
  L1910():
    r1384 = dyn base124(<sym msg>);
    goto L442(r1384);
  D724():
    deopt 2724 [msg14];
  L443():
    warning7 = ldf warning;
    check L1917() else D728();
  L444(r1393):
    goto L440(r1393);
  L1911():
    msg15 = force? msg14;
    checkMissing(msg15);
    nchar = ldf nchar in base;
    r1386 = dyn nchar(msg15, "chars", FALSE, NA_LGL);
    check L1912() else D725();
  L1913():
    warning6 = ldf warning;
    check L1914() else D726();
  D725():
    deopt 2730 [r1386];
  D726():
    deopt 2734 [];
  D728():
    deopt 2740 [];
  L1912():
    goto L442(r1386);
  L1914():
    p409 = prom<V +>{
      gettextf14 = ldf gettextf;
      p407 = prom<V +>{
        n4 = ld n;
        n5 = force? n4;
        checkMissing(n5);
        return n5;
      };
      p408 = prom<V +>{
        msg16 = ld msg;
        msg17 = force? msg16;
        checkMissing(msg17);
        return msg17;
      };
      r1390 = dyn gettextf14("installation of %d packages failed:  %s", p407, p408);
      return r1390;
    };
    r1392 = dyn warning6[, domain](p409, NA_LGL);
    check L1915() else D727();
  L1917():
    p412 = prom<V +>{
      gettextf15 = ldf gettextf;
      p410 = prom<V +>{
        n6 = ld n;
        n7 = force? n6;
        checkMissing(n7);
        return n7;
      };
      p411 = prom<V +>{
        msg18 = ld msg;
        msg19 = force? msg18;
        checkMissing(msg19);
        return msg19;
      };
      r1396 = dyn gettextf15("installation of %d packages failed:\n  %s", p410, p411);
      return r1396;
    };
    r1398 = dyn warning7[, domain](p412, NA_LGL);
    check L1918() else D729();
  D727():
    deopt 2738 [r1392];
  D729():
    deopt 2744 [r1398];
  L1915():
    goto L444(r1392);
  L1918():
    goto L444(r1398);
  }
}
fun inner423301576(pkg) {
  (reg pkg:*) -+> V { var pkg:*, reg gsub:cls, reg gsub1:cls, reg _standard_regexps:cls, reg r:V, reg c:L, reg r2:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r3:V, reg p:p(V +), reg basename:cls, reg pkg1:*, reg pkg2:V, reg p1:p(V +), reg r6:V, reg p2:p(V +), reg r8:V, reg p3:p(V +), reg r10:V |
    mkenv;
    st pkg = pkg;
    gsub = ldf gsub;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p3 = prom<V +>{
      gsub1 = ldf gsub;
      p = prom<V +>{
        _standard_regexps = ldf `.standard_regexps`;
        r = dyn _standard_regexps();
        c = `is.object`(r);
        if c then L1() else L2(r);
      L0(dx1):
        return dx1;
      L1():
        dr = tryDispatchBuiltin.1("$", r);
        dc = getTryDispatchBuiltinDispatched(dr);
        if dc then L3() else L2(dr);
      L2(r2):
        r3 = `$`(r2, <sym valid_package_version>);
        goto L0(r3);
      L3():
        dx = getTryDispatchBuiltinValue(dr);
        goto L0(dx);
      };
      p2 = prom<V +>{
        basename = ldf basename;
        p1 = prom<V +>{
          pkg1 = ld pkg;
          pkg2 = force? pkg1;
          checkMissing(pkg2);
          return pkg2;
        };
        r6 = dyn basename(p1);
        return r6;
      };
      r8 = dyn gsub1(p, "", p2);
      return r8;
    };
    r10 = dyn gsub("_[.](zip|tar[.]gz|tar[.]bzip2|tar[.]xz)", "", p3);
    check L1() else D1();
  D1():
    deopt 5 [r10];
  L1():
    popenv;
    return r10;
  }
}
fun inner2350928483(p, destfile, method, `...`) {
  (reg p:*, reg destfile:*, reg method:*, reg ddd:dots) -+> V { var p:*, var destfile:*, var method:*, var `...`:dots?, reg download_file:cls, reg p1:*, reg p2:V, reg p3:p(V +), reg destfile1:*, reg destfile2:V, reg p4:p(V +), reg method1:*, reg method2:V, reg p5:p(V +), reg ddd1:dots?, reg r3:V |
    mkenv;
    st p = p;
    st destfile = destfile;
    st method = method;
    st `...` = ddd;
    download_file = ldf `download.file`;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p3 = prom<V +>{
      p1 = ld p;
      p2 = force? p1;
      checkMissing(p2);
      return p2;
    };
    p4 = prom<V +>{
      destfile1 = ld destfile;
      destfile2 = force? destfile1;
      checkMissing(destfile2);
      return destfile2;
    };
    p5 = prom<V +>{
      method1 = ld method;
      method2 = force? method1;
      checkMissing(method2);
      return method2;
    };
    ddd1 = ld `...`;
    r3 = dyn download_file[, , , mode, `...`](p3, p4, p5, "wb", ddd1);
    check L1() else D1();
  D1():
    deopt 8 [r3];
  L1():
    popenv;
    return r3;
  }
}
fun inner3708401697(e) {
  (reg e:*) -+> V { var e:*, reg e1:*, reg e2:V |
    mkenv;
    st e = e;
    e1 = ld e;
    check L0() else D0();
  D0():
    deopt 0 [e1];
  L0():
    e2 = force? e1;
    checkMissing(e2);
    popenv;
    return e2;
  }
}