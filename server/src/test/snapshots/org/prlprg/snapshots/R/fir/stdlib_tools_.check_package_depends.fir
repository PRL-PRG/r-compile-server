fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3820893860;
    st `.check_package_depends` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3820893860(dir, force_suggests, check_incoming, ignore_vignettes) {
  (reg dir:*, reg force_suggests:*, reg check_incoming:*, reg ignore_vignettes:*) -+> V { var dir:*, var force_suggests:*, reg force_suggests_isMissing:L, reg force_suggests_orDefault:*, var check_incoming:*, reg check_incoming_isMissing:L, reg check_incoming_orDefault:*, var ignore_vignettes:*, reg ignore_vignettes_isMissing:L, reg ignore_vignettes_orDefault:*, reg r:cls, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg r2:V, reg dir1:*, reg dir2:V, reg length:cls, reg r3:V, reg r4:V, reg c:L, reg stop:cls, reg r5:V, reg _read_description:cls, reg file_path:cls, reg dir3:*, reg dir4:V, reg p:p(V +), reg r8:V, reg p1:p(V +), reg r10:V, reg basename:cls, reg dir5:*, reg dir6:V, reg p2:p(V +), reg r12:V, reg db:*, reg db1:V, reg c1:L, reg db3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r13:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r14:V, reg r15:V, reg package_name:*, reg package_name1:V, reg dir_name:*, reg dir_name1:V, reg identical:cls, reg r16:V, reg r17:V, reg c2:L, reg c4:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r18:V, reg c7:L, reg r19:V, reg package_name2:*, reg package_name3:V, reg c8:L, reg r20:V, reg c9:L, reg c10:L, reg c11:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r21:V, reg c18:L, reg c19:L, reg r22:V, reg package_name4:*, reg package_name5:V, reg nzchar:cls, reg r23:V, reg r24:V, reg c20:L, reg c21:V, reg c24:L, reg c25:V, reg c27:L, reg message:cls, reg sprintf:cls, reg package_name6:*, reg package_name7:V, reg p3:p(V +), reg dir_name2:*, reg dir_name3:V, reg p4:p(V +), reg r27:V, reg p5:p(V +), reg r29:V, reg dir_name4:*, reg dir_name5:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r30:V, reg r31:V, reg list:cls, reg r32:V, reg getOption:cls, reg r33:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r34:V, reg r35:V, reg repos:*, reg repos1:V, reg r36:V, reg any:cls, reg r37:V, reg c28:L, reg _get_standard_repository_URLs:cls, reg r38:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r40:V, reg r41:V, reg repos2:*, reg repos3:V, reg length1:cls, reg r42:V, reg c29:L, reg __1:cls, reg r43:V, reg r44:cls, reg repos4:*, reg repos5:V, reg p6:p(V +), reg r46:V, reg _check_dependency_cycles:cls, reg db4:*, reg db5:V, reg p7:p(V +), reg available:*, reg available1:V, reg p8:p(V +), reg r49:V, reg db6:*, reg db7:V, reg c30:L, reg db9:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg __2:cls, reg r50:V, reg _in_:cls, reg pkgname:*, reg pkgname1:V, reg p9:p(V +), reg ad:*, reg ad1:V, reg p10:p(V +), reg r53:V, reg c31:L, reg setdiff:cls, reg ad2:*, reg ad3:V, reg p11:p(V +), reg pkgname2:*, reg pkgname3:V, reg p12:p(V +), reg r56:V, reg l:*, reg c32:L, reg r58:V, reg l2:*, reg dr4:V, reg dc2:L, reg dx4:V, reg r60:V, reg dx5:V, reg r61:V, reg r62:V, reg check_incoming1:*, reg check_incoming2:V, reg c33:L, reg l3:*, reg c34:L, reg r65:S, reg l5:*, reg dr6:V, reg dc3:L, reg dx6:V, reg r67:S, reg dx7:V, reg r68:V, reg _get_requires_with_version_from_package_db:cls, reg db10:*, reg db11:V, reg p13:p(V +), reg r70:V, reg _get_requires_with_version_from_package_db1:cls, reg db12:*, reg db13:V, reg p14:p(V +), reg r72:V, reg _get_requires_with_version_from_package_db2:cls, reg db14:*, reg db15:V, reg p15:p(V +), reg r74:V, reg _get_requires_with_version_from_package_db3:cls, reg db16:*, reg db17:V, reg p16:p(V +), reg r76:V, reg _get_requires_with_version_from_package_db4:cls, reg db18:*, reg db19:V, reg p17:p(V +), reg r78:V, reg _get_requires_from_package_db:cls, reg db20:*, reg db21:V, reg p18:p(V +), reg r80:V, reg vapply:cls, reg ldepends:*, reg ldepends1:V, reg p19:p(V +), reg __3:*, reg __4:V, reg p20:p(V +), reg r83:V, reg vapply1:cls, reg limports:*, reg limports1:V, reg p21:p(V +), reg __5:*, reg __6:V, reg p22:p(V +), reg r86:V, reg vapply2:cls, reg llinks:*, reg llinks1:V, reg p23:p(V +), reg __7:*, reg __8:V, reg p24:p(V +), reg r89:V, reg vapply3:cls, reg lsuggests:*, reg lsuggests1:V, reg p25:p(V +), reg __9:*, reg __10:V, reg p26:p(V +), reg r92:V, reg _get_standard_package_names:cls, reg r93:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r94:V, reg r95:V, reg ldepends2:*, reg ldepends3:V, reg limports2:*, reg limports3:V, reg llinks2:*, reg llinks3:V, reg force_suggests1:*, reg force_suggests2:V, reg c35:L, reg lsuggests2:*, reg lsuggests3:V, reg lsuggests4:V, reg c36:cls, reg r96:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r97:V, reg r98:V, reg force_suggests3:*, reg force_suggests4:V, reg r99:V, reg c37:L, reg lsuggests5:*, reg lsuggests6:V, reg lsuggests7:V, reg lenhances:*, reg lenhances1:V, reg c38:cls, reg r100:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r101:V, reg r102:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r103:V, reg r104:V, reg lreqs:*, reg lreqs1:V, reg lreqs2:*, reg lreqs3:V, reg c39:cls, reg r105:V, reg length2:cls, reg r106:V, reg c40:L, reg character:cls, reg r107:V, reg character1:cls, reg r108:V, reg _libPaths:cls, reg r109:V, reg s:V, reg l6:I, reg i:I, reg i1:I, reg i2:I, reg c41:L, reg x:V, reg list_files:cls, reg lib:*, reg lib1:V, reg p27:p(V +), reg r111:V, reg pkgs:*, reg pkgs1:V, reg c42:L, reg i6:I, reg pkgs3:V, reg dr8:V, reg dc4:L, reg dx8:V, reg i8:I, reg dx9:V, reg file_access:cls, reg file_path1:cls, reg lib2:*, reg lib3:V, reg p28:p(V +), reg pkgs4:*, reg pkgs5:V, reg p29:p(V +), reg r114:V, reg p30:p(V +), reg r116:V, reg r117:V, reg __11:cls, reg r118:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r119:V, reg i11:I, reg r120:V, reg installed:*, reg installed1:V, reg pkgs6:*, reg pkgs7:V, reg c43:cls, reg r121:V, reg sym12:cls, reg base12:cls, reg guard12:L, reg r122:V, reg i14:I, reg r123:V, reg installed_in:*, reg installed_in1:V, reg sym13:cls, reg base13:cls, reg guard13:L, reg r124:V, reg i17:I, reg r125:V, reg lib4:*, reg lib5:V, reg sym14:cls, reg base14:cls, reg guard14:L, reg r126:V, reg i20:I, reg r127:V, reg pkgs8:*, reg pkgs9:V, reg length3:cls, reg r128:V, reg rep_int:cls, reg r129:V, reg c44:cls, reg r130:V, reg sym15:cls, reg base15:cls, reg guard15:L, reg r131:V, reg r132:V, reg lreqs4:*, reg lreqs5:V, reg length4:cls, reg r133:V, reg c45:L, reg unique:cls, reg sapply:cls, reg lreqs6:*, reg lreqs7:V, reg p31:p(V +), reg __12:*, reg __13:V, reg p32:p(V +), reg r136:V, reg p33:p(V +), reg r138:V, reg setdiff1:cls, reg reqs:*, reg reqs1:V, reg p34:p(V +), reg installed2:*, reg installed3:V, reg p35:p(V +), reg r141:V, reg sym16:cls, reg base16:cls, reg guard16:L, reg r142:V, reg r143:V, reg bad:*, reg bad1:V, reg length5:cls, reg r144:V, reg c46:L, reg bad2:*, reg bad3:V, reg c47:L, reg bad5:V, reg dr10:V, reg dc5:L, reg dx10:V, reg dx11:V, reg _in_1:cls, reg bad6:*, reg bad7:V, reg p36:p(V +), reg sym17:cls, reg base17:cls, reg guard17:L, reg r146:V, reg r147:V, reg depends:*, reg depends1:V, reg imports:*, reg imports1:V, reg links:*, reg links1:V, reg c48:cls, reg r148:V, reg p37:p(V +), reg r150:V, reg __14:cls, reg r151:V, reg sym18:cls, reg base18:cls, reg guard18:L, reg r152:V, reg r153:V, reg bad8:*, reg bad9:V, reg length6:cls, reg r154:V, reg c49:L, reg bad10:*, reg bad11:V, reg l7:*, reg c50:L, reg bad13:V, reg l9:*, reg dr12:V, reg dc6:L, reg dx12:V, reg bad15:V, reg dx13:V, reg r155:V, reg setdiff2:cls, reg bad17:*, reg bad18:V, reg p38:p(V +), reg bad19:*, reg bad20:V, reg p39:p(V +), reg r158:V, reg sym19:cls, reg base19:cls, reg guard19:L, reg r159:V, reg r160:V, reg bad21:*, reg bad22:V, reg length7:cls, reg r161:V, reg c51:L, reg bad23:*, reg bad24:V, reg l10:*, reg c52:L, reg bad26:V, reg l12:*, reg dr14:V, reg dc7:L, reg dx14:V, reg bad28:V, reg dx15:V, reg r162:V, reg bad29:V, reg vapply4:cls, reg lreqs8:*, reg lreqs9:V, reg p40:p(V +), reg r164:cls, reg p41:p(V +), reg r166:V, reg lreqs10:*, reg lreqs11:V, reg c53:L, reg lreqs13:V, reg dr16:V, reg dc8:L, reg dx16:V, reg dx17:V, reg have_ver:*, reg have_ver1:V, reg __15:cls, reg r167:V, reg sym20:cls, reg base20:cls, reg guard20:L, reg r168:V, reg r169:V, reg lreqs14:*, reg lreqs15:V, reg length8:cls, reg r170:V, reg c54:L, reg character2:cls, reg r171:V, reg lreqs16:*, reg lreqs17:V, reg s1:V, reg l13:I, reg i21:I, reg i22:I, reg i23:I, reg c55:L, reg x1:V, reg r172:*, reg r173:V, reg c56:L, reg i27:I, reg r175:V, reg dr18:V, reg dc9:L, reg dx18:V, reg i29:I, reg dx19:V, reg __16:cls, reg r176:V, reg r177:*, reg r178:V, reg c57:L, reg i31:I, reg r180:V, reg dr20:V, reg dc10:L, reg dx20:V, reg i33:I, reg dx21:V, reg __17:cls, reg r181:V, reg which:cls, reg installed4:*, reg installed5:V, reg pkg:*, reg pkg1:V, reg r182:V, reg p42:p(V +), reg r184:V, reg sym21:cls, reg base21:cls, reg guard21:L, reg r185:V, reg i36:I, reg r186:V, reg where:*, reg where1:V, reg length9:cls, reg r187:V, reg r188:V, reg c58:L, reg readRDS:cls, reg file_path2:cls, reg installed_in2:*, reg installed_in3:V, reg c59:L, reg installed_in5:V, reg dr22:V, reg dc11:L, reg dx22:V, reg dx23:V, reg where2:*, reg where3:V, reg c60:L, reg installed_in7:V, reg where5:V, reg dr24:V, reg dc12:L, reg dx24:V, reg installed_in9:V, reg dx25:V, reg __18:cls, reg r190:V, reg __19:cls, reg r191:V, reg p43:p(V +), reg pkg2:*, reg pkg3:V, reg p44:p(V +), reg r194:V, reg p45:p(V +), reg r196:V, reg desc:*, reg desc1:V, reg c61:L, reg i42:I, reg desc3:V, reg dr26:V, reg dc13:L, reg dx26:V, reg i44:I, reg dx27:V, reg r197:V, reg c62:L, reg i46:I, reg dx29:V, reg dr28:V, reg dc14:L, reg dx30:V, reg i48:I, reg dx31:V, reg __20:cls, reg r198:V, reg as_package_version:cls, reg r199:*, reg r200:V, reg c63:L, reg r202:V, reg dr30:V, reg dc15:L, reg dx32:V, reg dx33:V, reg __21:cls, reg r203:V, reg p46:p(V +), reg r205:V, reg do_call:cls, reg op:*, reg op1:V, reg p47:p(V +), reg sym22:cls, reg base22:cls, reg guard22:L, reg r207:V, reg r208:V, reg current:*, reg current1:V, reg target:*, reg target1:V, reg list1:cls, reg r209:V, reg p48:p(V +), reg r211:V, reg r212:V, reg c64:L, reg sym23:cls, reg base23:cls, reg guard23:L, reg r213:V, reg i53:I, reg r214:V, reg bad31:*, reg bad32:V, reg pkg4:*, reg pkg5:V, reg c65:cls, reg r215:V, reg i54:I, reg sym24:cls, reg base24:cls, reg guard24:L, reg r217:V, reg r218:V, reg bad33:*, reg bad34:V, reg length10:cls, reg r219:V, reg c66:L, reg bad35:*, reg bad36:V, reg l14:*, reg c67:L, reg bad38:V, reg l16:*, reg dr32:V, reg dc16:L, reg dx34:V, reg bad40:V, reg dx35:V, reg r220:V, reg bad41:V, reg bad42:V, reg sym25:cls, reg base25:cls, reg guard25:L, reg r221:V, reg r222:V, reg lenhances2:*, reg lenhances3:V, reg length11:cls, reg r223:V, reg c68:L, reg c70:V, reg config_val_to_logical:cls, reg Sys_getenv:cls, reg r224:V, reg p49:p(V +), reg r226:V, reg r227:V, reg c71:L, reg c72:V, reg c74:L, reg setdiff3:cls, reg sapply1:cls, reg lenhances4:*, reg lenhances5:V, reg p50:p(V +), reg __22:*, reg __23:V, reg p51:p(V +), reg r230:V, reg p52:p(V +), reg installed6:*, reg installed7:V, reg p53:p(V +), reg r233:V, reg sym26:cls, reg base26:cls, reg guard26:L, reg r234:V, reg r235:V, reg m:*, reg m1:V, reg length12:cls, reg r236:V, reg c75:L, reg m2:*, reg m3:V, reg l17:*, reg c76:L, reg m5:V, reg l19:*, reg dr34:V, reg dc17:L, reg dx36:V, reg m7:V, reg dx37:V, reg r237:V, reg m8:V, reg force_suggests5:*, reg force_suggests6:V, reg r238:V, reg c77:L, reg c79:V, reg sym27:cls, reg base27:cls, reg guard27:L, reg r239:V, reg c82:L, reg r240:V, reg lsuggests8:*, reg lsuggests9:V, reg length13:cls, reg r241:V, reg c83:L, reg c84:V, reg c86:L, reg setdiff4:cls, reg sapply2:cls, reg lsuggests10:*, reg lsuggests11:V, reg p54:p(V +), reg __24:*, reg __25:V, reg p55:p(V +), reg r244:V, reg p56:p(V +), reg installed8:*, reg installed9:V, reg p57:p(V +), reg r247:V, reg sym28:cls, reg base28:cls, reg guard28:L, reg r248:V, reg r249:V, reg m10:*, reg m11:V, reg length14:cls, reg r250:V, reg c87:L, reg m12:*, reg m13:V, reg l20:*, reg c88:L, reg m15:V, reg l22:*, reg dr36:V, reg dc18:L, reg dx38:V, reg m17:V, reg dx39:V, reg r251:V, reg m18:V, reg ignore_vignettes1:*, reg ignore_vignettes2:V, reg r252:V, reg c89:L, reg c91:V, reg sym29:cls, reg base29:cls, reg guard29:L, reg r253:V, reg c94:L, reg r254:V, reg VB:*, reg VB1:V, reg length15:cls, reg r255:V, reg c95:L, reg c96:V, reg c98:L, reg _w_o_:cls, reg VB2:*, reg VB3:V, reg p58:p(V +), reg sym30:cls, reg base30:cls, reg guard30:L, reg r257:V, reg r258:V, reg package_name8:*, reg package_name9:V, reg depends2:*, reg depends3:V, reg imports2:*, reg imports3:V, reg suggests:*, reg suggests1:V, reg c99:cls, reg r259:V, reg p59:p(V +), reg r261:V, reg sym31:cls, reg base31:cls, reg guard31:L, reg r262:V, reg r263:V, reg bad44:*, reg bad45:V, reg length16:cls, reg r264:V, reg c100:L, reg bad46:*, reg bad47:V, reg l23:*, reg c101:L, reg bad49:V, reg l25:*, reg dr38:V, reg dc19:L, reg dx40:V, reg bad51:V, reg dx41:V, reg r265:V, reg _w_o_1:cls, reg VB4:*, reg VB5:V, reg p60:p(V +), reg sym32:cls, reg base32:cls, reg guard32:L, reg r267:V, reg r268:V, reg package_name10:*, reg package_name11:V, reg installed10:*, reg installed11:V, reg c102:cls, reg r269:V, reg p61:p(V +), reg r271:V, reg setdiff5:cls, reg bad53:*, reg bad54:V, reg p62:p(V +), reg bad55:*, reg bad56:V, reg p63:p(V +), reg r274:V, reg sym33:cls, reg base33:cls, reg guard33:L, reg r275:V, reg r276:V, reg bad57:*, reg bad58:V, reg length17:cls, reg r277:V, reg c103:L, reg bad59:*, reg bad60:V, reg l26:*, reg c104:L, reg bad62:V, reg l28:*, reg dr40:V, reg dc20:L, reg dx42:V, reg bad64:V, reg dx43:V, reg r278:V, reg sym34:cls, reg base34:cls, reg guard34:L, reg r279:V, reg r280:V, reg VB6:*, reg VB7:V, reg length18:cls, reg r281:V, reg c105:L, reg c107:V, reg dir_exists:cls, reg file_path3:cls, reg dir7:*, reg dir8:V, reg p64:p(V +), reg r283:V, reg p65:p(V +), reg r285:V, reg r286:V, reg c108:L, reg c109:V, reg c111:L, reg VB8:*, reg VB9:V, reg l29:*, reg c112:L, reg VB11:V, reg l31:*, reg dr42:V, reg dc21:L, reg dx44:V, reg VB13:V, reg dx45:V, reg r287:V, reg VB14:V, reg VB15:V, reg _in_2:cls, reg package_name12:*, reg package_name13:V, reg p66:p(V +), reg db22:*, reg db23:V, reg c113:L, reg db25:V, reg dr44:V, reg dc22:L, reg dx46:V, reg dx47:V, reg __26:cls, reg r289:V, reg p67:p(V +), reg r291:V, reg _package_vignettes_via_call_to_R:cls, reg dir9:*, reg dir10:V, reg p68:p(V +), reg file_path4:cls, reg r293:V, reg p69:p(V +), reg defer:*, reg defer1:V, reg r295:V, reg p70:p(V +), reg r297:V, reg sym35:cls, reg base35:cls, reg guard35:L, reg r298:V, reg r299:V, reg vigns:*, reg vigns1:V, reg c114:L, reg vigns3:V, reg dr46:V, reg dc23:L, reg dx48:V, reg dx49:V, reg r300:V, reg length19:cls, reg r301:V, reg c115:L, reg vigns4:*, reg vigns5:V, reg c116:L, reg vigns7:V, reg dr48:V, reg dc24:L, reg dx50:V, reg dx51:V, reg r302:V, reg l32:*, reg c117:L, reg dx53:V, reg l34:*, reg dr50:V, reg dc25:L, reg dx55:V, reg dx56:V, reg dx57:V, reg r303:V, reg sym36:cls, reg base36:cls, reg guard36:L, reg r304:V, reg r305:V, reg vigns8:*, reg vigns9:V, reg c118:V, reg r306:V, reg c119:L, reg c121:V, reg sym37:cls, reg base37:cls, reg guard37:L, reg r307:V, reg c124:L, reg r308:V, reg vigns10:*, reg vigns11:V, reg c125:L, reg c127:L, reg vigns13:V, reg dr52:V, reg dc26:L, reg dx59:V, reg c129:L, reg dx60:V, reg r309:V, reg length20:cls, reg r310:V, reg r311:V, reg c130:L, reg c131:V, reg c133:L, reg unique1:cls, reg unlist:cls, reg _build_vignette_index:cls, reg vigns14:*, reg vigns15:V, reg p71:p(V +), reg r313:V, reg c134:L, reg r315:V, reg dr54:V, reg dc27:L, reg dx61:V, reg dx62:V, reg r316:V, reg p72:p(V +), reg r318:V, reg p73:p(V +), reg r320:V, reg setdiff6:cls, reg reqs2:*, reg reqs3:V, reg p74:p(V +), reg sym38:cls, reg base38:cls, reg guard38:L, reg r322:V, reg r323:V, reg depends4:*, reg depends5:V, reg imports4:*, reg imports5:V, reg suggests2:*, reg suggests3:V, reg package_name14:*, reg package_name15:V, reg standard_package_names:*, reg standard_package_names1:V, reg c135:L, reg standard_package_names3:V, reg dr56:V, reg dc28:L, reg dx63:V, reg dx64:V, reg r324:V, reg c136:cls, reg r325:V, reg p75:p(V +), reg r327:V, reg sym39:cls, reg base39:cls, reg guard39:L, reg r328:V, reg r329:V, reg reqs4:*, reg reqs5:V, reg length21:cls, reg r330:V, reg c137:L, reg reqs6:*, reg reqs7:V, reg l35:*, reg c138:L, reg reqs9:V, reg l37:*, reg dr58:V, reg dc29:L, reg dx65:V, reg reqs11:V, reg dx66:V, reg r331:V, reg reqs12:V, reg file_test:cls, reg file_path5:cls, reg dir11:*, reg dir12:V, reg p76:p(V +), reg r333:V, reg p77:p(V +), reg r335:V, reg c139:L, reg _get_namespace_package_depends:cls, reg dir13:*, reg dir14:V, reg p78:p(V +), reg r337:V, reg setdiff7:cls, reg standard_package_names4:*, reg standard_package_names5:V, reg c140:L, reg standard_package_names7:V, reg dr60:V, reg dc30:L, reg dx67:V, reg dx68:V, reg r338:V, reg p79:p(V +), reg sym40:cls, reg base40:cls, reg guard40:L, reg r340:V, reg r341:V, reg c141:cls, reg r342:V, reg p80:p(V +), reg r344:V, reg setdiff8:cls, reg reqs14:*, reg reqs15:V, reg p81:p(V +), reg sym41:cls, reg base41:cls, reg guard41:L, reg r346:V, reg r347:V, reg imports6:*, reg imports7:V, reg depends6:*, reg depends7:V, reg allowed_imports:*, reg allowed_imports1:V, reg c142:cls, reg r348:V, reg p82:p(V +), reg r350:V, reg sym42:cls, reg base42:cls, reg guard42:L, reg r351:V, reg r352:V, reg reqs16:*, reg reqs17:V, reg length22:cls, reg r353:V, reg c143:L, reg reqs18:*, reg reqs19:V, reg l38:*, reg c144:L, reg reqs21:V, reg l40:*, reg dr62:V, reg dc31:L, reg dx69:V, reg reqs23:V, reg dx70:V, reg r354:V, reg reqs24:V, reg setdiff9:cls, reg depends8:*, reg depends9:V, reg p83:p(V +), reg sym43:cls, reg base43:cls, reg guard43:L, reg r356:V, reg r357:V, reg c145:cls, reg r358:V, reg p84:p(V +), reg r360:V, reg sym44:cls, reg base44:cls, reg guard44:L, reg r361:V, reg r362:V, reg deps:*, reg deps1:V, reg length23:cls, reg r363:V, reg r364:V, reg c146:L, reg deps2:*, reg deps3:V, reg l41:*, reg c147:L, reg deps5:V, reg l43:*, reg dr64:V, reg dc32:L, reg dx71:V, reg deps7:V, reg dx72:V, reg r365:V, reg sym45:cls, reg base45:cls, reg guard45:L, reg r366:V, reg r367:V, reg Sys_getenv1:cls, reg r368:V, reg as_integer:cls, reg r369:V, reg setdiff10:cls, reg imports8:*, reg imports9:V, reg p85:p(V +), reg standard_package_names8:*, reg standard_package_names9:V, reg c148:L, reg standard_package_names11:V, reg dr66:V, reg dc33:L, reg dx73:V, reg dx74:V, reg r371:V, reg p86:p(V +), reg r373:V, reg sym46:cls, reg base46:cls, reg guard46:L, reg r374:V, reg r375:V, reg lim:*, reg lim1:V, reg is_na:cls, reg r376:V, reg r377:V, reg c149:L, reg c151:V, reg lim2:*, reg lim3:V, reg r378:V, reg c152:L, reg c153:V, reg c155:L, reg c157:V, reg sym47:cls, reg base47:cls, reg guard47:L, reg r379:V, reg c160:L, reg r380:V, reg imps:*, reg imps1:V, reg length24:cls, reg r381:V, reg lim4:*, reg lim5:V, reg r382:V, reg c161:L, reg c162:V, reg c164:L, reg imps2:*, reg imps3:V, reg l44:*, reg c165:L, reg imps5:V, reg l46:*, reg dr68:V, reg dc34:L, reg dx75:V, reg imps7:V, reg dx76:V, reg r383:V, reg check_incoming3:*, reg check_incoming4:V, reg c166:L, reg sym48:cls, reg base48:cls, reg guard48:L, reg r384:V, reg r385:V, reg c167:cls, reg r386:V, reg setdiff11:cls, reg intersect:cls, reg hdOnly:*, reg hdOnly1:V, reg p87:p(V +), reg sym49:cls, reg base49:cls, reg guard49:L, reg r388:V, reg r389:V, reg depends10:*, reg depends11:V, reg imports10:*, reg imports11:V, reg c168:cls, reg r390:V, reg p88:p(V +), reg r392:V, reg p89:p(V +), reg _get_namespace_package_depends1:cls, reg dir15:*, reg dir16:V, reg p90:p(V +), reg r395:V, reg p91:p(V +), reg r397:V, reg sym50:cls, reg base50:cls, reg guard50:L, reg r398:V, reg r399:V, reg hd:*, reg hd1:V, reg length25:cls, reg r400:V, reg c169:L, reg hd2:*, reg hd3:V, reg l47:*, reg c170:L, reg hd5:V, reg l49:*, reg dr70:V, reg dc35:L, reg dx77:V, reg hd7:V, reg dx78:V, reg r401:V, reg hd8:V, reg setdiff12:cls, reg _get_requires_from_package_db1:cls, reg db26:*, reg db27:V, reg p92:p(V +), reg r403:V, reg p93:p(V +), reg sym51:cls, reg base51:cls, reg guard51:L, reg r405:V, reg r406:V, reg imports12:*, reg imports13:V, reg depends12:*, reg depends13:V, reg c171:cls, reg r407:V, reg p94:p(V +), reg r409:V, reg sym52:cls, reg base52:cls, reg guard52:L, reg r410:V, reg r411:V, reg RM:*, reg RM1:V, reg length26:cls, reg r412:V, reg c172:L, reg RM2:*, reg RM3:V, reg l50:*, reg c173:L, reg RM5:V, reg l52:*, reg dr72:V, reg dc36:L, reg dx79:V, reg RM7:V, reg dx80:V, reg r413:V, reg config_val_to_logical1:cls, reg Sys_getenv2:cls, reg r414:V, reg p95:p(V +), reg r416:V, reg c174:L, reg setdiff13:cls, reg unique2:cls, reg sym53:cls, reg base53:cls, reg guard53:L, reg r417:V, reg r418:V, reg sym54:cls, reg base54:cls, reg guard54:L, reg r419:V, reg r420:V, reg depends14:*, reg depends15:V, reg as_character:cls, reg r421:V, reg sym55:cls, reg base55:cls, reg guard55:L, reg r422:V, reg r423:V, reg imports14:*, reg imports15:V, reg as_character1:cls, reg r424:V, reg sym56:cls, reg base56:cls, reg guard56:L, reg r425:V, reg r426:V, reg links2:*, reg links3:V, reg as_character2:cls, reg r427:V, reg c175:cls, reg r428:V, reg p96:p(V +), reg r430:V, reg p97:p(V +), reg bad_depends:*, reg bad_depends1:V, reg c176:L, reg bad_depends3:V, reg dr74:V, reg dc37:L, reg dx81:V, reg dx82:V, reg r432:V, reg p98:p(V +), reg r434:V, reg _expand_dependency_type_spec:cls, reg r435:V, reg ___:cls, reg r436:V, reg strict:*, reg strict1:V, reg character3:cls, reg r437:V, reg unname:cls, reg unlist1:cls, reg ipd:cls, reg new:*, reg new1:V, reg p99:p(V +), reg dependencies:*, reg dependencies1:V, reg p100:p(V +), reg r440:V, reg p101:p(V +), reg r442:V, reg p102:p(V +), reg r444:V, reg setdiff14:cls, reg need:*, reg need1:V, reg p103:p(V +), reg sym57:cls, reg base57:cls, reg guard57:L, reg r446:V, reg r447:V, reg strict2:*, reg strict3:V, reg ex:*, reg ex1:V, reg c177:cls, reg r448:V, reg p104:p(V +), reg r450:V, reg sym58:cls, reg base58:cls, reg guard58:L, reg r451:V, reg r452:V, reg new2:*, reg new3:V, reg length27:cls, reg r453:V, reg r454:V, reg c178:L, reg union:cls, reg strict4:*, reg strict5:V, reg p105:p(V +), reg new4:*, reg new5:V, reg p106:p(V +), reg r458:V, reg __27:cls, reg r459:V, reg sapply3:cls, reg strict6:*, reg strict7:V, reg p107:p(V +), reg r461:cls, reg p108:p(V +), reg r463:V, reg sym59:cls, reg base59:cls, reg guard59:L, reg r464:V, reg r465:V, reg strict8:*, reg strict9:V, reg is_na1:cls, reg r466:V, reg setdiff15:cls, reg sym60:cls, reg base60:cls, reg guard60:L, reg r467:V, reg r468:V, reg suggests4:*, reg suggests5:V, reg as_character3:cls, reg r469:V, reg p109:p(V +), reg bad_depends4:*, reg bad_depends5:V, reg c179:L, reg bad_depends7:V, reg dr76:V, reg dc38:L, reg dx83:V, reg dx84:V, reg r471:V, reg p110:p(V +), reg r473:V, reg sapply4:cls, reg weak:*, reg weak1:V, reg p111:p(V +), reg r475:cls, reg p112:p(V +), reg r477:V, reg sym61:cls, reg base61:cls, reg guard61:L, reg r478:V, reg r479:V, reg weak2:*, reg weak3:V, reg is_na2:cls, reg r480:V, reg sym62:cls, reg base62:cls, reg guard62:L, reg r481:V, reg r482:V, reg miss1:*, reg miss2:V, reg any1:cls, reg r483:V, reg c180:L, reg c181:V, reg sym63:cls, reg base63:cls, reg guard63:L, reg r484:V, reg c185:L, reg r485:V, reg miss3:*, reg miss4:V, reg any2:cls, reg r486:V, reg c186:L, reg c187:V, reg c189:L, reg c191:V, reg sym64:cls, reg base64:cls, reg guard64:L, reg r487:V, reg c194:L, reg r488:V, reg tryCatch:cls, reg CRAN_package_db:cls, reg r489:V, reg c195:L, reg r491:V, reg dr78:V, reg dc39:L, reg dx85:V, reg dx86:V, reg sym65:cls, reg base65:cls, reg guard65:L, reg r494:V, reg r496:V, reg c196:cls, reg r497:V, reg __28:cls, reg r498:V, reg p113:p(V +), reg identity:*, reg identity1:V, reg p114:p(V +), reg r501:V, reg inherits:cls, reg r502:V, reg r503:V, reg c197:L, reg c198:V, reg c200:L, reg db28:*, reg db29:V, reg c201:L, reg db31:V, reg dr80:V, reg dc40:L, reg dx87:V, reg dx88:V, reg db32:*, reg db33:V, reg c202:L, reg db36:V, reg db37:V, reg dr82:V, reg dc41:L, reg dx89:V, reg db39:V, reg dx90:V, reg r504:V, reg r505:V, reg __29:cls, reg r506:V, reg intersect1:cls, reg strict10:*, reg strict11:V, reg c203:L, reg strict13:V, reg dr84:V, reg dc42:L, reg dx91:V, reg dx92:V, reg miss5:*, reg miss6:V, reg __30:cls, reg r507:V, reg p115:p(V +), reg orphaned:*, reg orphaned1:V, reg p116:p(V +), reg r510:V, reg intersect2:cls, reg weak4:*, reg weak5:V, reg c204:L, reg weak7:V, reg dr86:V, reg dc43:L, reg dx93:V, reg dx94:V, reg miss7:*, reg miss8:V, reg __31:cls, reg r511:V, reg p117:p(V +), reg orphaned2:*, reg orphaned3:V, reg p118:p(V +), reg r514:V, reg character4:cls, reg r516:V, reg sym66:cls, reg base66:cls, reg guard66:L, reg r517:V, reg r518:V, reg strict14:*, reg strict15:V, reg c205:L, reg strict17:V, reg dr88:V, reg dc44:L, reg dx95:V, reg dx96:V, reg miss9:*, reg miss10:V, reg r519:V, reg strict18:*, reg strict19:V, reg r520:V, reg r521:V, reg __32:cls, reg r522:V, reg s2:*, reg s3:V, reg c206:cls, reg r523:V, reg sym67:cls, reg base67:cls, reg guard67:L, reg r524:V, reg r525:V, reg strict20:*, reg strict21:V, reg length28:cls, reg r526:V, reg c207:L, reg sort:cls, reg intersect3:cls, reg strict22:*, reg strict23:V, reg p119:p(V +), reg strict24:*, reg strict25:V, reg p120:p(V +), reg r529:V, reg p121:p(V +), reg r531:V, reg sort1:cls, reg setdiff16:cls, reg strict26:*, reg strict27:V, reg p122:p(V +), reg strict28:*, reg strict29:V, reg p123:p(V +), reg r534:V, reg p124:p(V +), reg r536:V, reg sym68:cls, reg base68:cls, reg guard68:L, reg r537:V, reg r538:V, reg strict30:*, reg strict31:V, reg length29:cls, reg r539:V, reg c208:L, reg strict32:*, reg strict33:V, reg l53:*, reg c209:L, reg strict35:V, reg l55:*, reg dr90:V, reg dc45:L, reg dx97:V, reg strict37:V, reg dx98:V, reg r540:V, reg sym69:cls, reg base69:cls, reg guard69:L, reg r541:V, reg r542:V, reg strict39:*, reg strict40:V, reg length30:cls, reg r543:V, reg c210:L, reg strict41:*, reg strict42:V, reg l56:*, reg c211:L, reg strict44:V, reg l58:*, reg dr92:V, reg dc46:L, reg dx99:V, reg strict46:V, reg dx100:V, reg r544:V, reg strict47:V, reg sym70:cls, reg base70:cls, reg guard70:L, reg r545:V, reg r546:V, reg weak8:*, reg weak9:V, reg c212:L, reg weak11:V, reg dr94:V, reg dc47:L, reg dx101:V, reg dx102:V, reg miss11:*, reg miss12:V, reg r547:V, reg weak12:*, reg weak13:V, reg r548:V, reg r549:V, reg __33:cls, reg r550:V, reg w2:*, reg w3:V, reg c213:cls, reg r551:V, reg sym71:cls, reg base71:cls, reg guard71:L, reg r552:V, reg r553:V, reg weak14:*, reg weak15:V, reg length31:cls, reg r554:V, reg c214:L, reg sort2:cls, reg weak16:*, reg weak17:V, reg p125:p(V +), reg r556:V, reg l59:*, reg c215:L, reg r558:V, reg l61:*, reg dr96:V, reg dc48:L, reg dx103:V, reg r560:V, reg dx104:V, reg r561:V, reg r562:V, reg l62:*, reg class__:cls, reg r564:V, reg bad_depends8:*, reg bad_depends9:V |
    mkenv;
    st dir = dir;
    force_suggests_isMissing = missing.0(force_suggests);
    if force_suggests_isMissing then L0(TRUE) else L0(force_suggests);
  L0(force_suggests_orDefault):
    st force_suggests = force_suggests_orDefault;
    check_incoming_isMissing = missing.0(check_incoming);
    if check_incoming_isMissing then L1(FALSE) else L1(check_incoming);
  L1(check_incoming_orDefault):
    st check_incoming = check_incoming_orDefault;
    ignore_vignettes_isMissing = missing.0(ignore_vignettes);
    if ignore_vignettes_isMissing then L2(FALSE) else L2(ignore_vignettes);
  L2(ignore_vignettes_orDefault):
    st ignore_vignettes = ignore_vignettes_orDefault;
    r = clos inner2124972465;
    st `.check_dependency_cycles` = r;
    sym = ldf length;
    base = ldf length in base;
    guard = `==`.4(sym, base);
    if guard then L169() else L170();
  L3(r2):
    r4 = `!=`(r2, 1);
    c = `as.logical`(r4);
    if c then L173() else L4();
  L169():
    dir1 = ld dir;
    check L171() else D0();
  L170():
    r1 = dyn base(<sym dir>);
    goto L3(r1);
  D0():
    deopt 5 [dir1];
  L4():
    goto L5();
  L5():
    _read_description = ldf `.read_description`;
    check L177() else D4();
  L171():
    dir2 = force? dir1;
    checkMissing(dir2);
    length = ldf length in base;
    r3 = dyn length(dir2);
    check L172() else D1();
  L173():
    stop = ldf stop;
    check L174() else D2();
  D1():
    deopt 8 [r3];
  D2():
    deopt 12 [];
  D4():
    deopt 18 [];
  L172():
    goto L3(r3);
  L174():
    r5 = dyn stop("The package 'dir' argument must be of length 1");
    check L175() else D3();
  L177():
    p1 = prom<V +>{
      file_path = ldf `file.path`;
      p = prom<V +>{
        dir3 = ld dir;
        dir4 = force? dir3;
        checkMissing(dir4);
        return dir4;
      };
      r8 = dyn file_path(p, "DESCRIPTION");
      return r8;
    };
    r10 = dyn _read_description(p1);
    check L178() else D5();
  D3():
    deopt 14 [r5];
  D5():
    deopt 20 [r10];
  L175():
    goto L5();
  L178():
    st db = r10;
    basename = ldf basename;
    check L179() else D6();
  D6():
    deopt 23 [];
  L179():
    p2 = prom<V +>{
      dir5 = ld dir;
      dir6 = force? dir5;
      checkMissing(dir6);
      return dir6;
    };
    r12 = dyn basename(p2);
    check L180() else D7();
  D7():
    deopt 25 [r12];
  L180():
    st dir_name = r12;
    db = ld db;
    check L181() else D8();
  D8():
    deopt 27 [db];
  L181():
    db1 = force? db;
    checkMissing(db1);
    c1 = `is.object`(db1);
    if c1 then L182() else L183(db1);
  L6(dx1):
    st package_name = dx1;
    sym1 = ldf identical;
    base1 = ldf identical in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L185() else L186();
  L182():
    dr = tryDispatchBuiltin.1("[", db1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L184() else L183(dr);
  L183(db3):
    __ = ldf `[` in base;
    r13 = dyn __(db3, "Package");
    goto L6(r13);
  L7(r15):
    r17 = `!`(r15);
    c2 = `as.logical`(r17);
    if c2 then L190() else L8(c2);
  L184():
    dx = getTryDispatchBuiltinValue(dr);
    goto L6(dx);
  L185():
    package_name = ld package_name;
    check L187() else D9();
  L186():
    r14 = dyn base1(<sym package_name>, <sym dir_name>);
    goto L7(r14);
  D9():
    deopt 35 [package_name];
  L8(c4):
    c27 = `as.logical`(c4);
    if c27 then L201() else L12();
  L187():
    package_name1 = force? package_name;
    checkMissing(package_name1);
    dir_name = ld dir_name;
    check L188() else D10();
  L190():
    sym2 = ldf `is.character`;
    base2 = ldf `is.character` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L191() else L192();
  D10():
    deopt 37 [dir_name];
  L9(c7, r19):
    r20 = `!`(r19);
    c9 = `as.logical`(r20);
    if c9 then L10(c7, c9) else L194();
  L12():
    goto L13();
  L13():
    sym4 = ldf list;
    base4 = ldf list in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L206() else L207();
  L188():
    dir_name1 = force? dir_name;
    checkMissing(dir_name1);
    identical = ldf identical in base;
    r16 = dyn identical(package_name1, dir_name1, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
    check L189() else D11();
  L191():
    package_name2 = ld package_name;
    check L193() else D12();
  L192():
    r18 = dyn base2(<sym package_name>);
    goto L9(c2, r18);
  L201():
    message = ldf message;
    check L202() else D15();
  D11():
    deopt 47 [r16];
  D12():
    deopt 50 [c2, package_name2];
  D15():
    deopt 64 [];
  L10(c10, c11):
    c24 = `as.logical`(c11);
    c25 = `&&`(c10, c24);
    goto L8(c25);
  L14(r31):
    st bad_depends = r31;
    getOption = ldf getOption;
    check L209() else D19();
  L189():
    goto L7(r16);
  L193():
    package_name3 = force? package_name2;
    checkMissing(package_name3);
    c8 = `is.character`(package_name3);
    goto L9(c2, c8);
  L194():
    sym3 = ldf nzchar;
    base3 = ldf nzchar in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L195() else L196();
  L202():
    p5 = prom<V +>{
      sprintf = ldf sprintf;
      p3 = prom<V +>{
        package_name6 = ld package_name;
        package_name7 = force? package_name6;
        checkMissing(package_name7);
        return package_name7;
      };
      p4 = prom<V +>{
        dir_name2 = ld dir_name;
        dir_name3 = force? dir_name2;
        checkMissing(dir_name3);
        return dir_name3;
      };
      r27 = dyn sprintf("package name '%s' seems invalid; using directory name '%s' instead", p3, p4);
      return r27;
    };
    r29 = dyn message(p5);
    check L203() else D16();
  L206():
    list = ldf list in base;
    r32 = dyn list();
    check L208() else D18();
  L207():
    r30 = dyn base4();
    goto L14(r30);
  D16():
    deopt 66 [r29];
  D18():
    deopt 75 [r32];
  D19():
    deopt 78 [];
  L11(c18, c19, r22):
    r24 = `!`(r22);
    c20 = `as.logical`(r24);
    c21 = `||`(c19, c20);
    goto L10(c18, c21);
  L195():
    package_name4 = ld package_name;
    check L197() else D13();
  L196():
    r21 = dyn base3(<sym package_name>);
    goto L11(c7, c9, r21);
  L203():
    dir_name4 = ld dir_name;
    check L204() else D17();
  L208():
    goto L14(r32);
  L209():
    r33 = dyn getOption("repos");
    check L210() else D20();
  D13():
    deopt 56 [c7, c9, package_name4];
  D17():
    deopt 67 [dir_name4];
  D20():
    deopt 80 [r33];
  L197():
    package_name5 = force? package_name4;
    checkMissing(package_name5);
    nzchar = ldf nzchar in base;
    r23 = dyn nzchar(package_name5);
    check L198() else D14();
  L204():
    dir_name5 = force? dir_name4;
    checkMissing(dir_name5);
    st package_name = dir_name5;
    goto L13();
  L210():
    st repos = r33;
    sym5 = ldf any;
    base5 = ldf any in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L211() else L212();
  D14():
    deopt 59 [c7, c9, r23];
  L15(r35):
    c28 = `as.logical`(r35);
    if c28 then L215() else L16();
  L198():
    goto L11(c7, c9, r23);
  L211():
    repos = ld repos;
    check L213() else D21();
  L212():
    r34 = dyn base5(<lang `==`(repos, "@CRAN@")>);
    goto L15(r34);
  D21():
    deopt 84 [repos];
  L16():
    goto L17();
  L17():
    sym6 = ldf length;
    base6 = ldf length in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L219() else L220();
  L213():
    repos1 = force? repos;
    checkMissing(repos1);
    r36 = `==`(repos1, "@CRAN@");
    any = ldf any in base;
    r37 = dyn any(r36);
    check L214() else D22();
  L215():
    _get_standard_repository_URLs = ldf `.get_standard_repository_URLs`;
    check L216() else D23();
  D22():
    deopt 89 [r37];
  D23():
    deopt 91 [];
  L18(r41):
    c29 = `as.logical`(r41);
    if c29 then L223() else L19();
  L214():
    goto L15(r37);
  L216():
    r38 = dyn _get_standard_repository_URLs();
    check L217() else D24();
  L219():
    repos2 = ld repos;
    check L221() else D25();
  L220():
    r40 = dyn base6(<sym repos>);
    goto L18(r40);
  D24():
    deopt 92 [r38];
  D25():
    deopt 98 [repos2];
  L19():
    check_incoming1 = ld check_incoming;
    check L244() else D37();
  L23():
    _get_requires_with_version_from_package_db = ldf `.get_requires_with_version_from_package_db`;
    check L251() else D38();
  L217():
    st repos = r38;
    goto L17();
  L221():
    repos3 = force? repos2;
    checkMissing(repos3);
    length1 = ldf length in base;
    r42 = dyn length1(repos3);
    check L222() else D26();
  L223():
    __1 = ldf `::`;
    check L224() else D27();
  D26():
    deopt 101 [r42];
  D27():
    deopt 103 [];
  D37():
    deopt 139 [check_incoming1];
  D38():
    deopt 149 [];
  L222():
    goto L18(r42);
  L224():
    r43 = dyn __1("utils", "available.packages");
    check L225() else D28();
  L244():
    check_incoming2 = force? check_incoming1;
    checkMissing(check_incoming2);
    c33 = `as.logical`(check_incoming2);
    if c33 then L245() else L24();
  L251():
    p13 = prom<V +>{
      db10 = ld db;
      db11 = force? db10;
      checkMissing(db11);
      return db11;
    };
    r70 = dyn _get_requires_with_version_from_package_db(p13, "Depends");
    check L252() else D39();
  D28():
    deopt 106 [r43];
  D39():
    deopt 152 [r70];
  L24():
    goto L23();
  L225():
    checkFun.0(r43);
    r44 = r43 as cls;
    p6 = prom<V +>{
      repos4 = ld repos;
      repos5 = force? repos4;
      checkMissing(repos5);
      return repos5;
    };
    r46 = dyn r44[repos](p6);
    check L226() else D29();
  L245():
    l3 = ld bad_depends;
    c34 = `is.object`(l3);
    if c34 then L247() else L248("  No repository set, so cyclic dependency check skipped", l3);
  L252():
    st ldepends = r70;
    _get_requires_with_version_from_package_db1 = ldf `.get_requires_with_version_from_package_db`;
    check L253() else D40();
  D29():
    deopt 110 [r46];
  D40():
    deopt 155 [];
  L226():
    st available = r46;
    _check_dependency_cycles = ldf `.check_dependency_cycles`;
    check L227() else D30();
  L246(r67, dx7):
    st bad_depends = dx7;
    goto L23();
  L247():
    dr6 = tryDispatchBuiltin.0("$<-", l3, "  No repository set, so cyclic dependency check skipped");
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L249() else L248("  No repository set, so cyclic dependency check skipped", dr6);
  L248(r65, l5):
    r68 = `$<-`(l5, <sym skipped>, "  No repository set, so cyclic dependency check skipped");
    goto L246(r65, r68);
  L253():
    p14 = prom<V +>{
      db12 = ld db;
      db13 = force? db12;
      checkMissing(db13);
      return db13;
    };
    r72 = dyn _get_requires_with_version_from_package_db1(p14, "Imports");
    check L254() else D41();
  D30():
    deopt 113 [];
  D41():
    deopt 158 [r72];
  L227():
    p7 = prom<V +>{
      db4 = ld db;
      db5 = force? db4;
      checkMissing(db5);
      return db5;
    };
    p8 = prom<V +>{
      available = ld available;
      available1 = force? available;
      checkMissing(available1);
      return available1;
    };
    r49 = dyn _check_dependency_cycles(p7, p8);
    check L228() else D31();
  L249():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L246("  No repository set, so cyclic dependency check skipped", dx6);
  L254():
    st limports = r72;
    _get_requires_with_version_from_package_db2 = ldf `.get_requires_with_version_from_package_db`;
    check L255() else D42();
  D31():
    deopt 116 [r49];
  D42():
    deopt 161 [];
  L228():
    st ad = r49;
    db6 = ld db;
    check L229() else D32();
  L255():
    p15 = prom<V +>{
      db14 = ld db;
      db15 = force? db14;
      checkMissing(db15);
      return db15;
    };
    r74 = dyn _get_requires_with_version_from_package_db2(p15, "LinkingTo");
    check L256() else D43();
  D32():
    deopt 118 [db6];
  D43():
    deopt 164 [r74];
  L229():
    db7 = force? db6;
    checkMissing(db7);
    c30 = `is.object`(db7);
    if c30 then L230() else L231(db7);
  L256():
    st llinks = r74;
    _get_requires_with_version_from_package_db3 = ldf `.get_requires_with_version_from_package_db`;
    check L257() else D44();
  D44():
    deopt 167 [];
  L20(dx3):
    st pkgname = dx3;
    _in_ = ldf `%in%`;
    check L233() else D33();
  L230():
    dr2 = tryDispatchBuiltin.1("[[", db7);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L232() else L231(dr2);
  L231(db9):
    __2 = ldf `[[` in base;
    r50 = dyn __2(db9, "Package");
    goto L20(r50);
  L257():
    p16 = prom<V +>{
      db16 = ld db;
      db17 = force? db16;
      checkMissing(db17);
      return db17;
    };
    r76 = dyn _get_requires_with_version_from_package_db3(p16, "Suggests");
    check L258() else D45();
  D33():
    deopt 125 [];
  D45():
    deopt 170 [r76];
  L232():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L20(dx2);
  L233():
    p9 = prom<V +>{
      pkgname = ld pkgname;
      pkgname1 = force? pkgname;
      checkMissing(pkgname1);
      return pkgname1;
    };
    p10 = prom<V +>{
      ad = ld ad;
      ad1 = force? ad;
      checkMissing(ad1);
      return ad1;
    };
    r53 = dyn _in_(p9, p10);
    check L234() else D34();
  L258():
    st lsuggests = r76;
    _get_requires_with_version_from_package_db4 = ldf `.get_requires_with_version_from_package_db`;
    check L259() else D46();
  D34():
    deopt 128 [r53];
  D46():
    deopt 173 [];
  L234():
    c31 = `as.logical`(r53);
    if c31 then L235() else L21();
  L259():
    p17 = prom<V +>{
      db18 = ld db;
      db19 = force? db18;
      checkMissing(db19);
      return db19;
    };
    r78 = dyn _get_requires_with_version_from_package_db4(p17, "Enhances");
    check L260() else D47();
  D47():
    deopt 176 [r78];
  L21():
    goto L22(NULL);
  L22(r62):
    goto L23();
  L235():
    setdiff = ldf setdiff;
    check L236() else D35();
  L260():
    st lenhances = r78;
    _get_requires_from_package_db = ldf `.get_requires_from_package_db`;
    check L261() else D48();
  D35():
    deopt 130 [];
  D48():
    deopt 179 [];
  L236():
    p11 = prom<V +>{
      ad2 = ld ad;
      ad3 = force? ad2;
      checkMissing(ad3);
      return ad3;
    };
    p12 = prom<V +>{
      pkgname2 = ld pkgname;
      pkgname3 = force? pkgname2;
      checkMissing(pkgname3);
      return pkgname3;
    };
    r56 = dyn setdiff(p11, p12);
    check L237() else D36();
  L261():
    p18 = prom<V +>{
      db20 = ld db;
      db21 = force? db20;
      checkMissing(db21);
      return db21;
    };
    r80 = dyn _get_requires_from_package_db(p18, "VignetteBuilder");
    check L262() else D49();
  D36():
    deopt 133 [r56];
  D49():
    deopt 182 [r80];
  L237():
    l = ld bad_depends;
    c32 = `is.object`(l);
    if c32 then L239() else L240(r56, l);
  L262():
    st VB = r80;
    vapply = ldf vapply;
    check L263() else D50();
  D50():
    deopt 185 [];
  L238(r60, dx5):
    st bad_depends = dx5;
    goto L22(r60);
  L239():
    dr4 = tryDispatchBuiltin.0("$<-", l, r56);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L241() else L240(r56, dr4);
  L240(r58, l2):
    r61 = `$<-`(l2, <sym all_depends>, r56);
    goto L238(r58, r61);
  L263():
    p19 = prom<V +>{
      ldepends = ld ldepends;
      ldepends1 = force? ldepends;
      checkMissing(ldepends1);
      return ldepends1;
    };
    p20 = prom<V +>{
      __3 = ld `[[`;
      __4 = force? __3;
      checkMissing(__4);
      return __4;
    };
    r83 = dyn vapply(p19, p20, "", 1);
    check L264() else D51();
  D51():
    deopt 190 [r83];
  L241():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L238(r56, dx4);
  L264():
    st depends = r83;
    vapply1 = ldf vapply;
    check L265() else D52();
  D52():
    deopt 193 [];
  L265():
    p21 = prom<V +>{
      limports = ld limports;
      limports1 = force? limports;
      checkMissing(limports1);
      return limports1;
    };
    p22 = prom<V +>{
      __5 = ld `[[`;
      __6 = force? __5;
      checkMissing(__6);
      return __6;
    };
    r86 = dyn vapply1(p21, p22, "", 1);
    check L266() else D53();
  D53():
    deopt 198 [r86];
  L266():
    st imports = r86;
    vapply2 = ldf vapply;
    check L267() else D54();
  D54():
    deopt 201 [];
  L267():
    p23 = prom<V +>{
      llinks = ld llinks;
      llinks1 = force? llinks;
      checkMissing(llinks1);
      return llinks1;
    };
    p24 = prom<V +>{
      __7 = ld `[[`;
      __8 = force? __7;
      checkMissing(__8);
      return __8;
    };
    r89 = dyn vapply2(p23, p24, "", 1);
    check L268() else D55();
  D55():
    deopt 206 [r89];
  L268():
    st links = r89;
    vapply3 = ldf vapply;
    check L269() else D56();
  D56():
    deopt 209 [];
  L269():
    p25 = prom<V +>{
      lsuggests = ld lsuggests;
      lsuggests1 = force? lsuggests;
      checkMissing(lsuggests1);
      return lsuggests1;
    };
    p26 = prom<V +>{
      __9 = ld `[[`;
      __10 = force? __9;
      checkMissing(__10);
      return __10;
    };
    r92 = dyn vapply3(p25, p26, "", 1);
    check L270() else D57();
  D57():
    deopt 214 [r92];
  L270():
    st suggests = r92;
    _get_standard_package_names = ldf `.get_standard_package_names`;
    check L271() else D58();
  D58():
    deopt 217 [];
  L271():
    r93 = dyn _get_standard_package_names();
    check L272() else D59();
  D59():
    deopt 218 [r93];
  L272():
    st standard_package_names = r93;
    sym7 = ldf c;
    base7 = ldf c in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L273() else L274();
  L25(r95):
    st lreqs = r95;
    sym8 = ldf c;
    base8 = ldf c in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L283() else L284();
  L273():
    ldepends2 = ld ldepends;
    check L275() else D60();
  L274():
    r94 = dyn base7(<sym ldepends>, <sym limports>, <sym llinks>, <lang if(force_suggests, lsuggests)>);
    goto L25(r94);
  D60():
    deopt 222 [ldepends2];
  L28(r98):
    st lreqs2 = r98;
    sym9 = ldf length;
    base9 = ldf length in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L291() else L292();
  L275():
    ldepends3 = force? ldepends2;
    checkMissing(ldepends3);
    limports2 = ld limports;
    check L276() else D61();
  L283():
    force_suggests3 = ld force_suggests;
    check L285() else D66();
  L284():
    r97 = dyn base8(<lang if(`!`(force_suggests), lsuggests)>, <sym lenhances>);
    goto L28(r97);
  D61():
    deopt 224 [limports2];
  D66():
    deopt 239 [force_suggests3];
  L31(r102):
    c40 = `as.logical`(r102);
    if c40 then L299() else L33();
  L276():
    limports3 = force? limports2;
    checkMissing(limports3);
    llinks2 = ld llinks;
    check L277() else D62();
  L285():
    force_suggests4 = force? force_suggests3;
    checkMissing(force_suggests4);
    r99 = `!`(force_suggests4);
    c37 = `as.logical`(r99);
    if c37 then L286() else L29();
  L291():
    sym10 = ldf c;
    base10 = ldf c in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L293() else L294();
  L292():
    r101 = dyn base9(<lang c(lreqs, lreqs2)>);
    goto L31(r101);
  D62():
    deopt 226 [llinks2];
  L29():
    goto L30(NULL);
  L30(lsuggests7):
    lenhances = ld lenhances;
    check L289() else D68();
  L32(r104):
    length2 = ldf length in base;
    r106 = dyn length2(r104);
    check L298() else D73();
  L33():
    goto L100();
  L100():
    _in_2 = ldf `%in%`;
    check L542() else D178();
  L277():
    llinks3 = force? llinks2;
    checkMissing(llinks3);
    force_suggests1 = ld force_suggests;
    check L278() else D63();
  L286():
    lsuggests5 = ld lsuggests;
    check L287() else D67();
  L293():
    lreqs = ld lreqs;
    check L295() else D70();
  L294():
    r103 = dyn base10(<sym lreqs>, <sym lreqs2>);
    goto L32(r103);
  L299():
    character = ldf character;
    check L300() else D74();
  D63():
    deopt 228 [force_suggests1];
  D67():
    deopt 242 [lsuggests5];
  D68():
    deopt 246 [lenhances];
  D70():
    deopt 255 [lreqs];
  D73():
    deopt 262 [r106];
  D74():
    deopt 264 [];
  D178():
    deopt 636 [];
  L278():
    force_suggests2 = force? force_suggests1;
    checkMissing(force_suggests2);
    c35 = `as.logical`(force_suggests2);
    if c35 then L279() else L26();
  L287():
    lsuggests6 = force? lsuggests5;
    checkMissing(lsuggests6);
    goto L30(lsuggests6);
  L289():
    lenhances1 = force? lenhances;
    checkMissing(lenhances1);
    c38 = ldf c in base;
    r100 = dyn c38(lsuggests7, lenhances1);
    check L290() else D69();
  L295():
    lreqs1 = force? lreqs;
    checkMissing(lreqs1);
    lreqs2 = ld lreqs2;
    check L296() else D71();
  L298():
    goto L31(r106);
  L300():
    r107 = dyn character();
    check L301() else D75();
  L542():
    p66 = prom<V +>{
      package_name12 = ld package_name;
      package_name13 = force? package_name12;
      checkMissing(package_name13);
      return package_name13;
    };
    p67 = prom<V +>{
      db22 = ld db;
      db23 = force? db22;
      checkMissing(db23);
      c113 = `is.object`(db23);
      if c113 then L1() else L2(db23);
    L0(dx47):
      return dx47;
    L1():
      dr44 = tryDispatchBuiltin.1("[", db23);
      dc22 = getTryDispatchBuiltinDispatched(dr44);
      if dc22 then L3() else L2(dr44);
    L2(db25):
      __26 = ldf `[` in base;
      r289 = dyn __26(db25, "VignetteBuilder");
      goto L0(r289);
    L3():
      dx46 = getTryDispatchBuiltinValue(dr44);
      goto L0(dx46);
    };
    r291 = dyn _in_2(p66, p67);
    check L543() else D179();
  D69():
    deopt 249 [r100];
  D71():
    deopt 257 [lreqs2];
  D75():
    deopt 265 [r107];
  D179():
    deopt 639 [r291];
  L26():
    goto L27(NULL);
  L27(lsuggests4):
    c36 = ldf c in base;
    r96 = dyn c36(ldepends3, limports3, llinks3, lsuggests4);
    check L282() else D65();
  L279():
    lsuggests2 = ld lsuggests;
    check L280() else D64();
  L290():
    goto L28(r100);
  L296():
    lreqs3 = force? lreqs2;
    checkMissing(lreqs3);
    c39 = ldf c in base;
    r105 = dyn c39(lreqs1, lreqs3);
    check L297() else D72();
  L301():
    st installed = r107;
    character1 = ldf character;
    check L302() else D76();
  L543():
    st defer = r291;
    _package_vignettes_via_call_to_R = ldf `.package_vignettes_via_call_to_R`;
    check L544() else D180();
  D64():
    deopt 230 [lsuggests2];
  D65():
    deopt 235 [r96];
  D72():
    deopt 260 [r105];
  D76():
    deopt 268 [];
  D180():
    deopt 642 [];
  L280():
    lsuggests3 = force? lsuggests2;
    checkMissing(lsuggests3);
    goto L27(lsuggests3);
  L282():
    goto L25(r96);
  L297():
    goto L32(r105);
  L302():
    r108 = dyn character1();
    check L303() else D77();
  L544():
    p68 = prom<V +>{
      dir9 = ld dir;
      dir10 = force? dir9;
      checkMissing(dir10);
      return dir10;
    };
    p69 = prom<V +>{
      file_path4 = ldf `file.path`;
      r293 = dyn file_path4("inst", "doc");
      return r293;
    };
    p70 = prom<V +>{
      defer = ld defer;
      defer1 = force? defer;
      checkMissing(defer1);
      r295 = `!`(defer1);
      return r295;
    };
    r297 = dyn _package_vignettes_via_call_to_R[dir, subdirs, check](p68, p69, p70);
    check L545() else D181();
  D77():
    deopt 269 [r108];
  D181():
    deopt 649 [r297];
  L303():
    st installed_in = r108;
    _libPaths = ldf `.libPaths`;
    check L304() else D78();
  L545():
    st vigns = r297;
    sym35 = ldf length;
    base35 = ldf length in base;
    guard35 = `==`.4(sym35, base35);
    if guard35 then L546() else L547();
  D78():
    deopt 272 [];
  L101(r299):
    c115 = `as.logical`(r299);
    if c115 then L554() else L102();
  L304():
    r109 = dyn _libPaths();
    check L305() else D79();
  L546():
    vigns = ld vigns;
    check L548() else D182();
  L547():
    r298 = dyn base35(<lang `$`(vigns, msg)>);
    goto L101(r298);
  D79():
    deopt 273 [r109];
  D182():
    deopt 653 [vigns];
  L102():
    goto L103();
  L103():
    sym36 = ldf `is.null`;
    base36 = ldf `is.null` in base;
    guard36 = `==`.4(sym36, base36);
    if guard36 then L565() else L566();
  L305():
    s = toForSeq(r109);
    l6 = length(s);
    i = 0;
    goto L34(i);
  L548():
    vigns1 = force? vigns;
    checkMissing(vigns1);
    c114 = `is.object`(vigns1);
    if c114 then L550() else L551(vigns1);
  L554():
    vigns4 = ld vigns;
    check L555() else D184();
  D184():
    deopt 658 [vigns4];
  L34(i1):
    i2 = `+`.1(i1, 1);
    c41 = `<`.1(l6, i2);
    if c41 then L306() else L40();
  L104(r305):
    r306 = `!`(r305);
    c119 = `as.logical`(r306);
    if c119 then L568() else L105(c119);
  L549(dx49):
    length19 = ldf length in base;
    r301 = dyn length19(dx49);
    check L553() else D183();
  L550():
    dr46 = tryDispatchBuiltin.1("$", vigns1);
    dc23 = getTryDispatchBuiltinDispatched(dr46);
    if dc23 then L552() else L551(dr46);
  L551(vigns3):
    r300 = `$`(vigns3, <sym msg>);
    goto L549(r300);
  L555():
    vigns5 = force? vigns4;
    checkMissing(vigns5);
    c116 = `is.object`(vigns5);
    if c116 then L557() else L558(vigns5);
  L565():
    vigns8 = ld vigns;
    check L567() else D185();
  L566():
    r304 = dyn base36(<sym vigns>);
    goto L104(r304);
  D183():
    deopt 657 [r301];
  D185():
    deopt 667 [vigns8];
  L40():
    x = `[[`(s, i2, NULL, TRUE);
    st lib = x;
    list_files = ldf `list.files`;
    check L307() else D80();
  L105(c121):
    c133 = `as.logical`(c121);
    if c133 then L578() else L107();
  L306():
    sym15 = ldf length;
    base15 = ldf length in base;
    guard15 = `==`.4(sym15, base15);
    if guard15 then L332() else L333();
  L552():
    dx48 = getTryDispatchBuiltinValue(dr46);
    goto L549(dx48);
  L553():
    goto L101(r301);
  L556(dx51):
    l32 = ld bad_depends;
    c117 = `is.object`(l32);
    if c117 then L561() else L562(dx51, l32);
  L557():
    dr48 = tryDispatchBuiltin.1("$", vigns5);
    dc24 = getTryDispatchBuiltinDispatched(dr48);
    if dc24 then L559() else L558(dr48);
  L558(vigns7):
    r302 = `$`(vigns7, <sym msg>);
    goto L556(r302);
  L567():
    vigns9 = force? vigns8;
    checkMissing(vigns9);
    c118 = `==`(vigns9, NULL);
    goto L104(c118);
  L568():
    sym37 = ldf length;
    base37 = ldf length in base;
    guard37 = `==`.4(sym37, base37);
    if guard37 then L569() else L570();
  D80():
    deopt 275 [i2];
  L41(r132):
    c45 = `as.logical`(r132);
    if c45 then L336() else L42();
  L106(c124, r308):
    r311 = `>`(r308, 0);
    c130 = `as.logical`(r311);
    c131 = `&&`(c124, c130);
    goto L105(c131);
  L107():
    goto L111();
  L111():
    file_test = ldf file_test;
    check L595() else D195();
  L307():
    p27 = prom<V +>{
      lib = ld lib;
      lib1 = force? lib;
      checkMissing(lib1);
      return lib1;
    };
    r111 = dyn list_files(p27);
    check L308() else D81();
  L332():
    lreqs4 = ld lreqs;
    check L334() else D94();
  L333():
    r131 = dyn base15(<sym lreqs>);
    goto L41(r131);
  L559():
    dx50 = getTryDispatchBuiltinValue(dr48);
    goto L556(dx50);
  L560(dx56, dx57):
    st bad_depends = dx57;
    goto L103();
  L561():
    dr50 = tryDispatchBuiltin.0("$<-", l32, dx51);
    dc25 = getTryDispatchBuiltinDispatched(dr50);
    if dc25 then L563() else L562(dx51, dr50);
  L562(dx53, l34):
    r303 = `$<-`(l34, <sym bad_engine>, dx51);
    goto L560(dx53, r303);
  L569():
    vigns10 = ld vigns;
    check L571() else D186();
  L570():
    r307 = dyn base37(<lang `$`(vigns, docs)>);
    goto L106(c119, r307);
  L578():
    unique1 = ldf unique;
    check L579() else D188();
  D81():
    deopt 277 [i2, r111];
  D94():
    deopt 323 [lreqs4];
  D186():
    deopt 673 [c119, vigns10];
  D188():
    deopt 682 [];
  D195():
    deopt 708 [];
  L42():
    goto L71();
  L71():
    sym25 = ldf length;
    base25 = ldf length in base;
    guard25 = `==`.4(sym25, base25);
    if guard25 then L444() else L445();
  L308():
    st pkgs = r111;
    pkgs = ld pkgs;
    check L309() else D82();
  L334():
    lreqs5 = force? lreqs4;
    checkMissing(lreqs5);
    length4 = ldf length in base;
    r133 = dyn length4(lreqs5);
    check L335() else D95();
  L336():
    unique = ldf unique;
    check L337() else D96();
  L563():
    dx55 = getTryDispatchBuiltinValue(dr50);
    goto L560(dx51, dx55);
  L571():
    vigns11 = force? vigns10;
    checkMissing(vigns11);
    c125 = `is.object`(vigns11);
    if c125 then L573() else L574(c119, vigns11);
  L579():
    p73 = prom<V +>{
      unlist = ldf unlist;
      p72 = prom<V +>{
        _build_vignette_index = ldf `.build_vignette_index`;
        p71 = prom<V +>{
          vigns14 = ld vigns;
          vigns15 = force? vigns14;
          checkMissing(vigns15);
          return vigns15;
        };
        r313 = dyn _build_vignette_index(p71);
        c134 = `is.object`(r313);
        if c134 then L1() else L2(r313);
      L0(dx62):
        return dx62;
      L1():
        dr54 = tryDispatchBuiltin.1("$", r313);
        dc27 = getTryDispatchBuiltinDispatched(dr54);
        if dc27 then L3() else L2(dr54);
      L2(r315):
        r316 = `$`(r315, <sym Depends>);
        goto L0(r316);
      L3():
        dx61 = getTryDispatchBuiltinValue(dr54);
        goto L0(dx61);
      };
      r318 = dyn unlist(p72);
      return r318;
    };
    r320 = dyn unique1(p73);
    check L580() else D189();
  L595():
    p77 = prom<V +>{
      file_path5 = ldf `file.path`;
      p76 = prom<V +>{
        dir11 = ld dir;
        dir12 = force? dir11;
        checkMissing(dir12);
        return dir12;
      };
      r333 = dyn file_path5(p76, "NAMESPACE");
      return r333;
    };
    r335 = dyn file_test("-f", p77);
    check L596() else D196();
  D82():
    deopt 279 [i2, pkgs];
  D95():
    deopt 326 [r133];
  D96():
    deopt 328 [];
  D189():
    deopt 684 [r320];
  D196():
    deopt 711 [r335];
  L72(r222):
    c68 = `as.logical`(r222);
    if c68 then L448() else L73(c68);
  L309():
    pkgs1 = force? pkgs;
    checkMissing(pkgs1);
    c42 = `is.object`(pkgs1);
    if c42 then L310() else L311(i2, pkgs1);
  L335():
    goto L41(r133);
  L337():
    p33 = prom<V +>{
      sapply = ldf sapply;
      p31 = prom<V +>{
        lreqs6 = ld lreqs;
        lreqs7 = force? lreqs6;
        checkMissing(lreqs7);
        return lreqs7;
      };
      p32 = prom<V +>{
        __12 = ld `[[`;
        __13 = force? __12;
        checkMissing(__13);
        return __13;
      };
      r136 = dyn sapply(p31, p32, 1);
      return r136;
    };
    r138 = dyn unique(p33);
    check L338() else D97();
  L444():
    lenhances2 = ld lenhances;
    check L446() else D141();
  L445():
    r221 = dyn base25(<sym lenhances>);
    goto L72(r221);
  L572(c129, dx60):
    length20 = ldf length in base;
    r310 = dyn length20(dx60);
    check L576() else D187();
  L573():
    dr52 = tryDispatchBuiltin.1("$", vigns11);
    dc26 = getTryDispatchBuiltinDispatched(dr52);
    if dc26 then L575() else L574(c119, dr52);
  L574(c127, vigns13):
    r309 = `$`(vigns13, <sym docs>);
    goto L572(c127, r309);
  L580():
    st reqs = r320;
    setdiff6 = ldf setdiff;
    check L581() else D190();
  L596():
    c139 = `as.logical`(r335);
    if c139 then L597() else L112();
  D97():
    deopt 330 [r138];
  D141():
    deopt 496 [lenhances2];
  D187():
    deopt 677 [c129, r310];
  D190():
    deopt 687 [];
  L35(i8, dx9):
    st pkgs = dx9;
    sym11 = ldf c;
    base11 = ldf c in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L315() else L316();
  L73(c70):
    c74 = `as.logical`(c70);
    if c74 then L452() else L74();
  L112():
    goto L116();
  L116():
    setdiff9 = ldf setdiff;
    check L616() else D206();
  L310():
    dr8 = tryDispatchBuiltin.1("[", pkgs1);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L312() else L311(i2, dr8);
  L311(i6, pkgs3):
    file_access = ldf `file.access`;
    check L313() else D83();
  L338():
    st reqs = r138;
    setdiff1 = ldf setdiff;
    check L339() else D98();
  L446():
    lenhances3 = force? lenhances2;
    checkMissing(lenhances3);
    length11 = ldf length in base;
    r223 = dyn length11(lenhances3);
    check L447() else D142();
  L448():
    config_val_to_logical = ldf config_val_to_logical;
    check L449() else D143();
  L575():
    dx59 = getTryDispatchBuiltinValue(dr52);
    goto L572(c119, dx59);
  L576():
    goto L106(c129, r310);
  L581():
    p74 = prom<V +>{
      reqs2 = ld reqs;
      reqs3 = force? reqs2;
      checkMissing(reqs3);
      return reqs3;
    };
    p75 = prom<V +>{
      sym38 = ldf c;
      base38 = ldf c in base;
      guard38 = `==`.4(sym38, base38);
      if guard38 then L1() else L2();
    L0(r323):
      return r323;
    L1():
      depends4 = ld depends;
      depends5 = force? depends4;
      checkMissing(depends5);
      imports4 = ld imports;
      imports5 = force? imports4;
      checkMissing(imports5);
      suggests2 = ld suggests;
      suggests3 = force? suggests2;
      checkMissing(suggests3);
      package_name14 = ld package_name;
      package_name15 = force? package_name14;
      checkMissing(package_name15);
      standard_package_names = ld standard_package_names;
      standard_package_names1 = force? standard_package_names;
      checkMissing(standard_package_names1);
      c135 = `is.object`(standard_package_names1);
      if c135 then L4() else L5(standard_package_names1);
    L2():
      r322 = dyn base38(<sym depends>, <sym imports>, <sym suggests>, <sym package_name>, <lang `$`(standard_package_names, base)>);
      goto L0(r322);
    L3(dx64):
      c136 = ldf c in base;
      r325 = dyn c136(depends5, imports5, suggests3, package_name15, dx64);
      goto L0(r325);
    L4():
      dr56 = tryDispatchBuiltin.1("$", standard_package_names1);
      dc28 = getTryDispatchBuiltinDispatched(dr56);
      if dc28 then L6() else L5(dr56);
    L5(standard_package_names3):
      r324 = `$`(standard_package_names3, <sym base>);
      goto L3(r324);
    L6():
      dx63 = getTryDispatchBuiltinValue(dr56);
      goto L3(dx63);
    };
    r327 = dyn setdiff6(p74, p75);
    check L582() else D191();
  L597():
    _get_namespace_package_depends = ldf `.get_namespace_package_depends`;
    check L598() else D197();
  D83():
    deopt 282 [i6, pkgs3];
  D98():
    deopt 333 [];
  D142():
    deopt 499 [r223];
  D143():
    deopt 501 [c68];
  D191():
    deopt 690 [r327];
  D197():
    deopt 713 [];
  D206():
    deopt 745 [];
  L36(i11, r120):
    st installed = r120;
    sym12 = ldf c;
    base12 = ldf c in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L320() else L321();
  L74():
    goto L78();
  L78():
    force_suggests5 = ld force_suggests;
    check L467() else D150();
  L312():
    dx8 = getTryDispatchBuiltinValue(dr8);
    goto L35(i2, dx8);
  L313():
    p30 = prom<V +>{
      file_path1 = ldf `file.path`;
      p28 = prom<V +>{
        lib2 = ld lib;
        lib3 = force? lib2;
        checkMissing(lib3);
        return lib3;
      };
      p29 = prom<V +>{
        pkgs4 = ld pkgs;
        pkgs5 = force? pkgs4;
        checkMissing(pkgs5);
        return pkgs5;
      };
      r114 = dyn file_path1(p28, p29, "DESCRIPTION");
      return r114;
    };
    r116 = dyn file_access(p30, 4.0);
    check L314() else D84();
  L315():
    installed = ld installed;
    check L317() else D85();
  L316():
    r119 = dyn base11(<sym installed>, <sym pkgs>);
    goto L36(i8, r119);
  L339():
    p34 = prom<V +>{
      reqs = ld reqs;
      reqs1 = force? reqs;
      checkMissing(reqs1);
      return reqs1;
    };
    p35 = prom<V +>{
      installed2 = ld installed;
      installed3 = force? installed2;
      checkMissing(installed3);
      return installed3;
    };
    r141 = dyn setdiff1(p34, p35);
    check L340() else D99();
  L447():
    goto L72(r223);
  L449():
    p49 = prom<V +>{
      Sys_getenv = ldf `Sys.getenv`;
      r224 = dyn Sys_getenv("_R_CHECK_PACKAGE_DEPENDS_IGNORE_MISSING_ENHANCES_", "FALSE");
      return r224;
    };
    r226 = dyn config_val_to_logical(p49);
    check L450() else D144();
  L452():
    setdiff3 = ldf setdiff;
    check L453() else D145();
  L582():
    st reqs = r327;
    sym39 = ldf length;
    base39 = ldf length in base;
    guard39 = `==`.4(sym39, base39);
    if guard39 then L583() else L584();
  L598():
    p78 = prom<V +>{
      dir13 = ld dir;
      dir14 = force? dir13;
      checkMissing(dir14);
      return dir14;
    };
    r337 = dyn _get_namespace_package_depends(p78);
    check L599() else D198();
  L616():
    p83 = prom<V +>{
      depends8 = ld depends;
      depends9 = force? depends8;
      checkMissing(depends9);
      return depends9;
    };
    p84 = prom<V +>{
      sym43 = ldf c;
      base43 = ldf c in base;
      guard43 = `==`.4(sym43, base43);
      if guard43 then L1() else L2();
    L0(r357):
      return r357;
    L1():
      c145 = ldf c in base;
      r358 = dyn c145("R", "base", "datasets", "grDevices", "graphics", "methods", "utils", "stats");
      goto L0(r358);
    L2():
      r356 = dyn base43("R", "base", "datasets", "grDevices", "graphics", "methods", "utils", "stats");
      goto L0(r356);
    };
    r360 = dyn setdiff9(p83, p84);
    check L617() else D207();
  D84():
    deopt 285 [i6, pkgs3, r116];
  D85():
    deopt 292 [i8, installed];
  D99():
    deopt 336 [r141];
  D144():
    deopt 503 [c68, r226];
  D145():
    deopt 507 [];
  D150():
    deopt 527 [force_suggests5];
  D198():
    deopt 715 [r337];
  D207():
    deopt 748 [r360];
  L37(i14, r123):
    st installed_in = r123;
    goto L34(i14);
  L108(r329):
    c137 = `as.logical`(r329);
    if c137 then L587() else L109();
  L314():
    r117 = `==`(r116, 0.0);
    __11 = ldf `[` in base;
    r118 = dyn __11(pkgs3, r117);
    goto L35(i6, r118);
  L317():
    installed1 = force? installed;
    checkMissing(installed1);
    pkgs6 = ld pkgs;
    check L318() else D86();
  L320():
    installed_in = ld installed_in;
    check L322() else D88();
  L321():
    r122 = dyn base12(<sym installed_in>, <lang rep.int(lib, length(pkgs))>);
    goto L37(i11, r122);
  L340():
    st bad = r141;
    sym16 = ldf length;
    base16 = ldf length in base;
    guard16 = `==`.4(sym16, base16);
    if guard16 then L341() else L342();
  L450():
    r227 = `!`(r226);
    c71 = `as.logical`(r227);
    c72 = `&&`(c68, c71);
    goto L73(c72);
  L453():
    p52 = prom<V +>{
      sapply1 = ldf sapply;
      p50 = prom<V +>{
        lenhances4 = ld lenhances;
        lenhances5 = force? lenhances4;
        checkMissing(lenhances5);
        return lenhances5;
      };
      p51 = prom<V +>{
        __22 = ld `[[`;
        __23 = force? __22;
        checkMissing(__23);
        return __23;
      };
      r230 = dyn sapply1(p50, p51, 1);
      return r230;
    };
    p53 = prom<V +>{
      installed6 = ld installed;
      installed7 = force? installed6;
      checkMissing(installed7);
      return installed7;
    };
    r233 = dyn setdiff3(p52, p53);
    check L454() else D146();
  L467():
    force_suggests6 = force? force_suggests5;
    checkMissing(force_suggests6);
    r238 = `!`(force_suggests6);
    c77 = `as.logical`(r238);
    if c77 then L468() else L79(c77);
  L583():
    reqs4 = ld reqs;
    check L585() else D192();
  L584():
    r328 = dyn base39(<sym reqs>);
    goto L108(r328);
  L599():
    st reqs = r337;
    setdiff7 = ldf setdiff;
    check L600() else D199();
  L617():
    st deps = r360;
    sym44 = ldf length;
    base44 = ldf length in base;
    guard44 = `==`.4(sym44, base44);
    if guard44 then L618() else L619();
  D86():
    deopt 294 [i8, pkgs6];
  D88():
    deopt 301 [i11, installed_in];
  D146():
    deopt 510 [r233];
  D192():
    deopt 694 [reqs4];
  D199():
    deopt 718 [];
  L43(r143):
    c46 = `as.logical`(r143);
    if c46 then L345() else L44();
  L79(c79):
    c86 = `as.logical`(c79);
    if c86 then L474() else L81();
  L109():
    goto L110(NULL);
  L110(reqs12):
    goto L111();
  L117(r362):
    r364 = `>`(r362, 5);
    c146 = `as.logical`(r364);
    if c146 then L622() else L118();
  L318():
    pkgs7 = force? pkgs6;
    checkMissing(pkgs7);
    c43 = ldf c in base;
    r121 = dyn c43(installed1, pkgs7);
    check L319() else D87();
  L322():
    installed_in1 = force? installed_in;
    checkMissing(installed_in1);
    sym13 = ldf `rep.int`;
    base13 = ldf `rep.int` in base;
    guard13 = `==`.4(sym13, base13);
    if guard13 then L323() else L324();
  L341():
    bad = ld bad;
    check L343() else D100();
  L342():
    r142 = dyn base16(<sym bad>);
    goto L43(r142);
  L454():
    st m = r233;
    sym26 = ldf length;
    base26 = ldf length in base;
    guard26 = `==`.4(sym26, base26);
    if guard26 then L455() else L456();
  L468():
    sym27 = ldf length;
    base27 = ldf length in base;
    guard27 = `==`.4(sym27, base27);
    if guard27 then L469() else L470();
  L585():
    reqs5 = force? reqs4;
    checkMissing(reqs5);
    length21 = ldf length in base;
    r330 = dyn length21(reqs5);
    check L586() else D193();
  L587():
    reqs6 = ld reqs;
    check L588() else D194();
  L600():
    p79 = prom<V +>{
      standard_package_names4 = ld standard_package_names;
      standard_package_names5 = force? standard_package_names4;
      checkMissing(standard_package_names5);
      c140 = `is.object`(standard_package_names5);
      if c140 then L1() else L2(standard_package_names5);
    L0(dx68):
      return dx68;
    L1():
      dr60 = tryDispatchBuiltin.1("$", standard_package_names5);
      dc30 = getTryDispatchBuiltinDispatched(dr60);
      if dc30 then L3() else L2(dr60);
    L2(standard_package_names7):
      r338 = `$`(standard_package_names7, <sym base>);
      goto L0(r338);
    L3():
      dx67 = getTryDispatchBuiltinValue(dr60);
      goto L0(dx67);
    };
    p80 = prom<V +>{
      sym40 = ldf c;
      base40 = ldf c in base;
      guard40 = `==`.4(sym40, base40);
      if guard40 then L1() else L2();
    L0(r341):
      return r341;
    L1():
      c141 = ldf c in base;
      r342 = dyn c141("methods", "stats4");
      goto L0(r342);
    L2():
      r340 = dyn base40("methods", "stats4");
      goto L0(r340);
    };
    r344 = dyn setdiff7(p79, p80);
    check L601() else D200();
  L618():
    deps = ld deps;
    check L620() else D208();
  L619():
    r361 = dyn base44(<sym deps>);
    goto L117(r361);
  D87():
    deopt 297 [i8, r121];
  D100():
    deopt 340 [bad];
  D193():
    deopt 697 [r330];
  D194():
    deopt 698 [reqs6];
  D200():
    deopt 721 [r344];
  D208():
    deopt 752 [deps];
  L38(i17, r125):
    c44 = ldf c in base;
    r130 = dyn c44(installed_in1, r125);
    check L331() else D93();
  L44():
    goto L52();
  L52():
    vapply4 = ldf vapply;
    check L377() else D113();
  L75(r235):
    c75 = `as.logical`(r235);
    if c75 then L459() else L76();
  L80(c82, r240):
    c83 = `as.logical`(r240);
    c84 = `&&`(c82, c83);
    goto L79(c84);
  L81():
    goto L85();
  L85():
    ignore_vignettes1 = ld ignore_vignettes;
    check L489() else D158();
  L118():
    goto L119();
  L119():
    sym45 = ldf `as.integer`;
    base45 = ldf `as.integer` in base;
    guard45 = `==`.4(sym45, base45);
    if guard45 then L629() else L630();
  L319():
    goto L36(i8, r121);
  L323():
    lib4 = ld lib;
    check L325() else D89();
  L324():
    r124 = dyn base13(<sym lib>, <lang length(pkgs)>);
    goto L38(i11, r124);
  L343():
    bad1 = force? bad;
    checkMissing(bad1);
    length5 = ldf length in base;
    r144 = dyn length5(bad1);
    check L344() else D101();
  L345():
    bad2 = ld bad;
    check L346() else D102();
  L455():
    m = ld m;
    check L457() else D147();
  L456():
    r234 = dyn base26(<sym m>);
    goto L75(r234);
  L469():
    lsuggests8 = ld lsuggests;
    check L471() else D151();
  L470():
    r239 = dyn base27(<sym lsuggests>);
    goto L80(c77, r239);
  L474():
    setdiff4 = ldf setdiff;
    check L475() else D153();
  L586():
    goto L108(r330);
  L588():
    reqs7 = force? reqs6;
    checkMissing(reqs7);
    l35 = ld bad_depends;
    c138 = `is.object`(l35);
    if c138 then L590() else L591(reqs7, l35);
  L601():
    st allowed_imports = r344;
    setdiff8 = ldf setdiff;
    check L602() else D201();
  L620():
    deps1 = force? deps;
    checkMissing(deps1);
    length23 = ldf length in base;
    r363 = dyn length23(deps1);
    check L621() else D209();
  L622():
    deps2 = ld deps;
    check L623() else D210();
  D89():
    deopt 305 [i11, lib4];
  D93():
    deopt 316 [i17, r130];
  D101():
    deopt 343 [r144];
  D102():
    deopt 344 [bad2];
  D113():
    deopt 388 [];
  D147():
    deopt 514 [m];
  D151():
    deopt 532 [c77, lsuggests8];
  D153():
    deopt 538 [];
  D158():
    deopt 558 [ignore_vignettes1];
  D201():
    deopt 724 [];
  D209():
    deopt 755 [r363];
  D210():
    deopt 758 [deps2];
  L76():
    goto L77(NULL);
  L77(m8):
    goto L78();
  L120(r367):
    st lim = r367;
    setdiff10 = ldf setdiff;
    check L634() else D214();
  L325():
    lib5 = force? lib4;
    checkMissing(lib5);
    sym14 = ldf length;
    base14 = ldf length in base;
    guard14 = `==`.4(sym14, base14);
    if guard14 then L326() else L327();
  L331():
    goto L37(i17, r130);
  L344():
    goto L43(r144);
  L346():
    bad3 = force? bad2;
    checkMissing(bad3);
    c47 = `is.object`(bad3);
    if c47 then L347() else L348(bad3);
  L377():
    p40 = prom<V +>{
      lreqs8 = ld lreqs;
      lreqs9 = force? lreqs8;
      checkMissing(lreqs9);
      return lreqs9;
    };
    p41 = prom<V +>{
      r164 = clos inner2501545716;
      return r164;
    };
    r166 = dyn vapply4(p40, p41, NA_LGL);
    check L378() else D114();
  L457():
    m1 = force? m;
    checkMissing(m1);
    length12 = ldf length in base;
    r236 = dyn length12(m1);
    check L458() else D148();
  L459():
    m2 = ld m;
    check L460() else D149();
  L471():
    lsuggests9 = force? lsuggests8;
    checkMissing(lsuggests9);
    length13 = ldf length in base;
    r241 = dyn length13(lsuggests9);
    check L472() else D152();
  L475():
    p56 = prom<V +>{
      sapply2 = ldf sapply;
      p54 = prom<V +>{
        lsuggests10 = ld lsuggests;
        lsuggests11 = force? lsuggests10;
        checkMissing(lsuggests11);
        return lsuggests11;
      };
      p55 = prom<V +>{
        __24 = ld `[[`;
        __25 = force? __24;
        checkMissing(__25);
        return __25;
      };
      r244 = dyn sapply2(p54, p55, 1);
      return r244;
    };
    p57 = prom<V +>{
      installed8 = ld installed;
      installed9 = force? installed8;
      checkMissing(installed9);
      return installed9;
    };
    r247 = dyn setdiff4(p56, p57);
    check L476() else D154();
  L489():
    ignore_vignettes2 = force? ignore_vignettes1;
    checkMissing(ignore_vignettes2);
    r252 = `!`(ignore_vignettes2);
    c89 = `as.logical`(r252);
    if c89 then L490() else L86(c89);
  L589(reqs11, dx66):
    st bad_depends = dx66;
    goto L110(reqs11);
  L590():
    dr58 = tryDispatchBuiltin.0("$<-", l35, reqs7);
    dc29 = getTryDispatchBuiltinDispatched(dr58);
    if dc29 then L592() else L591(reqs7, dr58);
  L591(reqs9, l37):
    r331 = `$<-`(l37, <sym missing_vignette_depends>, reqs7);
    goto L589(reqs9, r331);
  L602():
    p81 = prom<V +>{
      reqs14 = ld reqs;
      reqs15 = force? reqs14;
      checkMissing(reqs15);
      return reqs15;
    };
    p82 = prom<V +>{
      sym41 = ldf c;
      base41 = ldf c in base;
      guard41 = `==`.4(sym41, base41);
      if guard41 then L1() else L2();
    L0(r347):
      return r347;
    L1():
      imports6 = ld imports;
      imports7 = force? imports6;
      checkMissing(imports7);
      depends6 = ld depends;
      depends7 = force? depends6;
      checkMissing(depends7);
      allowed_imports = ld allowed_imports;
      allowed_imports1 = force? allowed_imports;
      checkMissing(allowed_imports1);
      c142 = ldf c in base;
      r348 = dyn c142(imports7, depends7, allowed_imports1);
      goto L0(r348);
    L2():
      r346 = dyn base41(<sym imports>, <sym depends>, <sym allowed_imports>);
      goto L0(r346);
    };
    r350 = dyn setdiff8(p81, p82);
    check L603() else D202();
  L621():
    goto L117(r363);
  L623():
    deps3 = force? deps2;
    checkMissing(deps3);
    l41 = ld bad_depends;
    c147 = `is.object`(l41);
    if c147 then L625() else L626(deps3, l41);
  L629():
    Sys_getenv1 = ldf `Sys.getenv`;
    check L631() else D211();
  L630():
    r366 = dyn base45(<lang Sys.getenv("_R_CHECK_EXCESSIVE_IMPORTS_", "0")>);
    goto L120(r366);
  D114():
    deopt 392 [r166];
  D148():
    deopt 517 [r236];
  D149():
    deopt 518 [m2];
  D152():
    deopt 535 [c77, r241];
  D154():
    deopt 541 [r247];
  D202():
    deopt 727 [r350];
  D211():
    deopt 768 [];
  D214():
    deopt 776 [];
  L39(i20, r127):
    rep_int = ldf `rep.int` in base;
    r129 = dyn rep_int(lib5, r127);
    check L330() else D92();
  L45(dx11):
    st bad1 = dx11;
    sym18 = ldf length;
    base18 = ldf length in base;
    guard18 = `==`.4(sym18, base18);
    if guard18 then L352() else L353();
  L86(c91):
    c98 = `as.logical`(c91);
    if c98 then L496() else L88();
  L326():
    pkgs8 = ld pkgs;
    check L328() else D90();
  L327():
    r126 = dyn base14(<sym pkgs>);
    goto L39(i11, r126);
  L347():
    dr10 = tryDispatchBuiltin.1("[", bad3);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L349() else L348(dr10);
  L348(bad5):
    _in_1 = ldf `%in%`;
    check L350() else D103();
  L378():
    st have_ver = r166;
    lreqs10 = ld lreqs;
    check L379() else D115();
  L458():
    goto L75(r236);
  L460():
    m3 = force? m2;
    checkMissing(m3);
    l17 = ld bad_depends;
    c76 = `is.object`(l17);
    if c76 then L462() else L463(m3, l17);
  L472():
    goto L80(c77, r241);
  L476():
    st m = r247;
    sym28 = ldf length;
    base28 = ldf length in base;
    guard28 = `==`.4(sym28, base28);
    if guard28 then L477() else L478();
  L490():
    sym29 = ldf length;
    base29 = ldf length in base;
    guard29 = `==`.4(sym29, base29);
    if guard29 then L491() else L492();
  L592():
    dx65 = getTryDispatchBuiltinValue(dr58);
    goto L589(reqs7, dx65);
  L603():
    st reqs = r350;
    sym42 = ldf length;
    base42 = ldf length in base;
    guard42 = `==`.4(sym42, base42);
    if guard42 then L604() else L605();
  L624(deps7, dx72):
    st bad_depends = dx72;
    goto L119();
  L625():
    dr64 = tryDispatchBuiltin.0("$<-", l41, deps3);
    dc32 = getTryDispatchBuiltinDispatched(dr64);
    if dc32 then L627() else L626(deps3, dr64);
  L626(deps5, l43):
    r365 = `$<-`(l43, <sym many_depends>, deps3);
    goto L624(deps5, r365);
  L631():
    r368 = dyn Sys_getenv1("_R_CHECK_EXCESSIVE_IMPORTS_", "0");
    check L632() else D212();
  L634():
    p85 = prom<V +>{
      imports8 = ld imports;
      imports9 = force? imports8;
      checkMissing(imports9);
      return imports9;
    };
    p86 = prom<V +>{
      standard_package_names8 = ld standard_package_names;
      standard_package_names9 = force? standard_package_names8;
      checkMissing(standard_package_names9);
      c148 = `is.object`(standard_package_names9);
      if c148 then L1() else L2(standard_package_names9);
    L0(dx74):
      return dx74;
    L1():
      dr66 = tryDispatchBuiltin.1("$", standard_package_names9);
      dc33 = getTryDispatchBuiltinDispatched(dr66);
      if dc33 then L3() else L2(dr66);
    L2(standard_package_names11):
      r371 = `$`(standard_package_names11, <sym base>);
      goto L0(r371);
    L3():
      dx73 = getTryDispatchBuiltinValue(dr66);
      goto L0(dx73);
    };
    r373 = dyn setdiff10(p85, p86);
    check L635() else D215();
  D90():
    deopt 309 [i11, pkgs8];
  D92():
    deopt 314 [i20, r129];
  D103():
    deopt 347 [bad5];
  D115():
    deopt 394 [lreqs10];
  D212():
    deopt 771 [r368];
  D215():
    deopt 779 [r373];
  L46(r153):
    c49 = `as.logical`(r153);
    if c49 then L356() else L47();
  L82(r249):
    c87 = `as.logical`(r249);
    if c87 then L481() else L83();
  L87(c94, r254):
    c95 = `as.logical`(r254);
    c96 = `&&`(c94, c95);
    goto L86(c96);
  L88():
    goto L99(NULL);
  L99(VB15):
    goto L100();
  L113(r352):
    c143 = `as.logical`(r352);
    if c143 then L608() else L114();
  L328():
    pkgs9 = force? pkgs8;
    checkMissing(pkgs9);
    length3 = ldf length in base;
    r128 = dyn length3(pkgs9);
    check L329() else D91();
  L330():
    goto L38(i20, r129);
  L349():
    dx10 = getTryDispatchBuiltinValue(dr10);
    goto L45(dx10);
  L350():
    p36 = prom<V +>{
      bad6 = ld bad;
      bad7 = force? bad6;
      checkMissing(bad7);
      return bad7;
    };
    p37 = prom<V +>{
      sym17 = ldf c;
      base17 = ldf c in base;
      guard17 = `==`.4(sym17, base17);
      if guard17 then L1() else L2();
    L0(r147):
      return r147;
    L1():
      depends = ld depends;
      depends1 = force? depends;
      checkMissing(depends1);
      imports = ld imports;
      imports1 = force? imports;
      checkMissing(imports1);
      links = ld links;
      links1 = force? links;
      checkMissing(links1);
      c48 = ldf c in base;
      r148 = dyn c48(depends1, imports1, links1);
      goto L0(r148);
    L2():
      r146 = dyn base17(<sym depends>, <sym imports>, <sym links>);
      goto L0(r146);
    };
    r150 = dyn _in_1(p36, p37);
    check L351() else D104();
  L352():
    bad8 = ld bad1;
    check L354() else D105();
  L353():
    r152 = dyn base18(<sym bad1>);
    goto L46(r152);
  L379():
    lreqs11 = force? lreqs10;
    checkMissing(lreqs11);
    c53 = `is.object`(lreqs11);
    if c53 then L380() else L381(lreqs11);
  L461(m7, dx37):
    st bad_depends = dx37;
    goto L77(m7);
  L462():
    dr34 = tryDispatchBuiltin.0("$<-", l17, m3);
    dc17 = getTryDispatchBuiltinDispatched(dr34);
    if dc17 then L464() else L463(m3, dr34);
  L463(m5, l19):
    r237 = `$<-`(l19, <sym enhances_but_not_installed>, m3);
    goto L461(m5, r237);
  L477():
    m10 = ld m;
    check L479() else D155();
  L478():
    r248 = dyn base28(<sym m>);
    goto L82(r248);
  L491():
    VB = ld VB;
    check L493() else D159();
  L492():
    r253 = dyn base29(<sym VB>);
    goto L87(c89, r253);
  L496():
    _w_o_ = ldf `%w/o%`;
    check L497() else D161();
  L604():
    reqs16 = ld reqs;
    check L606() else D203();
  L605():
    r351 = dyn base42(<sym reqs>);
    goto L113(r351);
  L627():
    dx71 = getTryDispatchBuiltinValue(dr64);
    goto L624(deps3, dx71);
  L632():
    as_integer = ldf `as.integer` in base;
    r369 = dyn as_integer(r368);
    check L633() else D213();
  L635():
    st imps = r373;
    sym46 = ldf `is.na`;
    base46 = ldf `is.na` in base;
    guard46 = `==`.4(sym46, base46);
    if guard46 then L636() else L637();
  D91():
    deopt 312 [i11, r128];
  D104():
    deopt 350 [bad5, r150];
  D105():
    deopt 355 [bad8];
  D155():
    deopt 545 [m10];
  D159():
    deopt 563 [c89, VB];
  D161():
    deopt 569 [];
  D203():
    deopt 731 [reqs16];
  D213():
    deopt 773 [r369];
  L47():
    goto L48();
  L48():
    setdiff2 = ldf setdiff;
    check L363() else D108();
  L53(dx17):
    st lreqs3 = dx17;
    sym20 = ldf length;
    base20 = ldf length in base;
    guard20 = `==`.4(sym20, base20);
    if guard20 then L384() else L385();
  L83():
    goto L84(NULL);
  L84(m18):
    goto L85();
  L114():
    goto L115(NULL);
  L115(reqs24):
    goto L116();
  L121(r375):
    r377 = `!`(r375);
    c149 = `as.logical`(r377);
    if c149 then L640() else L122(c149);
  L329():
    goto L39(i11, r128);
  L351():
    __14 = ldf `[` in base;
    r151 = dyn __14(bad5, r150);
    goto L45(r151);
  L354():
    bad9 = force? bad8;
    checkMissing(bad9);
    length6 = ldf length in base;
    r154 = dyn length6(bad9);
    check L355() else D106();
  L356():
    bad10 = ld bad1;
    check L357() else D107();
  L380():
    dr16 = tryDispatchBuiltin.1("[", lreqs11);
    dc8 = getTryDispatchBuiltinDispatched(dr16);
    if dc8 then L382() else L381(dr16);
  L381(lreqs13):
    have_ver = ld have_ver;
    check L383() else D116();
  L464():
    dx36 = getTryDispatchBuiltinValue(dr34);
    goto L461(m3, dx36);
  L479():
    m11 = force? m10;
    checkMissing(m11);
    length14 = ldf length in base;
    r250 = dyn length14(m11);
    check L480() else D156();
  L481():
    m12 = ld m;
    check L482() else D157();
  L493():
    VB1 = force? VB;
    checkMissing(VB1);
    length15 = ldf length in base;
    r255 = dyn length15(VB1);
    check L494() else D160();
  L497():
    p58 = prom<V +>{
      VB2 = ld VB;
      VB3 = force? VB2;
      checkMissing(VB3);
      return VB3;
    };
    p59 = prom<V +>{
      sym30 = ldf c;
      base30 = ldf c in base;
      guard30 = `==`.4(sym30, base30);
      if guard30 then L1() else L2();
    L0(r258):
      return r258;
    L1():
      package_name8 = ld package_name;
      package_name9 = force? package_name8;
      checkMissing(package_name9);
      depends2 = ld depends;
      depends3 = force? depends2;
      checkMissing(depends3);
      imports2 = ld imports;
      imports3 = force? imports2;
      checkMissing(imports3);
      suggests = ld suggests;
      suggests1 = force? suggests;
      checkMissing(suggests1);
      c99 = ldf c in base;
      r259 = dyn c99(package_name9, "utils", depends3, imports3, suggests1);
      goto L0(r259);
    L2():
      r257 = dyn base30(<sym package_name>, "utils", <sym depends>, <sym imports>, <sym suggests>);
      goto L0(r257);
    };
    r261 = dyn _w_o_(p58, p59);
    check L498() else D162();
  L606():
    reqs17 = force? reqs16;
    checkMissing(reqs17);
    length22 = ldf length in base;
    r353 = dyn length22(reqs17);
    check L607() else D204();
  L608():
    reqs18 = ld reqs;
    check L609() else D205();
  L633():
    goto L120(r369);
  L636():
    lim = ld lim;
    check L638() else D216();
  L637():
    r374 = dyn base46(<sym lim>);
    goto L121(r374);
  D106():
    deopt 358 [r154];
  D107():
    deopt 359 [bad10];
  D108():
    deopt 367 [];
  D116():
    deopt 396 [lreqs13, have_ver];
  D156():
    deopt 548 [r250];
  D157():
    deopt 549 [m12];
  D160():
    deopt 566 [c89, r255];
  D162():
    deopt 572 [r261];
  D204():
    deopt 734 [r353];
  D205():
    deopt 735 [reqs18];
  D216():
    deopt 783 [lim];
  L54(r169):
    c54 = `as.logical`(r169);
    if c54 then L388() else L55();
  L122(c151):
    c155 = `as.logical`(c151);
    if c155 then L643() else L123(c155);
  L355():
    goto L46(r154);
  L357():
    bad11 = force? bad10;
    checkMissing(bad11);
    l7 = ld bad_depends;
    c50 = `is.object`(l7);
    if c50 then L359() else L360(bad11, l7);
  L363():
    p38 = prom<V +>{
      bad17 = ld bad;
      bad18 = force? bad17;
      checkMissing(bad18);
      return bad18;
    };
    p39 = prom<V +>{
      bad19 = ld bad1;
      bad20 = force? bad19;
      checkMissing(bad20);
      return bad20;
    };
    r158 = dyn setdiff2(p38, p39);
    check L364() else D109();
  L382():
    dx16 = getTryDispatchBuiltinValue(dr16);
    goto L53(dx16);
  L383():
    have_ver1 = force? have_ver;
    __15 = ldf `[` in base;
    r167 = dyn __15(lreqs13, have_ver1);
    goto L53(r167);
  L384():
    lreqs14 = ld lreqs3;
    check L386() else D117();
  L385():
    r168 = dyn base20(<sym lreqs3>);
    goto L54(r168);
  L480():
    goto L82(r250);
  L482():
    m13 = force? m12;
    checkMissing(m13);
    l20 = ld bad_depends;
    c88 = `is.object`(l20);
    if c88 then L484() else L485(m13, l20);
  L494():
    goto L87(c89, r255);
  L498():
    st bad = r261;
    sym31 = ldf length;
    base31 = ldf length in base;
    guard31 = `==`.4(sym31, base31);
    if guard31 then L499() else L500();
  L607():
    goto L113(r353);
  L609():
    reqs19 = force? reqs18;
    checkMissing(reqs19);
    l38 = ld bad_depends;
    c144 = `is.object`(l38);
    if c144 then L611() else L612(reqs19, l38);
  L638():
    lim1 = force? lim;
    checkMissing(lim1);
    is_na = ldf `is.na` in base;
    r376 = dyn is_na(lim1);
    check L639() else D217();
  L640():
    lim2 = ld lim;
    check L641() else D218();
  D109():
    deopt 370 [r158];
  D117():
    deopt 402 [lreqs14];
  D217():
    deopt 786 [r376];
  D218():
    deopt 788 [c149, lim2];
  L55():
    goto L70(NULL);
  L70(bad42):
    goto L71();
  L89(r263):
    c100 = `as.logical`(r263);
    if c100 then L503() else L90();
  L123(c157):
    c164 = `as.logical`(c157);
    if c164 then L650() else L125();
  L358(bad15, dx13):
    st bad_depends = dx13;
    goto L48();
  L359():
    dr12 = tryDispatchBuiltin.0("$<-", l7, bad11);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L361() else L360(bad11, dr12);
  L360(bad13, l9):
    r155 = `$<-`(l9, <sym required_but_not_installed>, bad11);
    goto L358(bad13, r155);
  L364():
    st bad2 = r158;
    sym19 = ldf length;
    base19 = ldf length in base;
    guard19 = `==`.4(sym19, base19);
    if guard19 then L365() else L366();
  L386():
    lreqs15 = force? lreqs14;
    checkMissing(lreqs15);
    length8 = ldf length in base;
    r170 = dyn length8(lreqs15);
    check L387() else D118();
  L388():
    character2 = ldf character;
    check L389() else D119();
  L483(m17, dx39):
    st bad_depends = dx39;
    goto L84(m17);
  L484():
    dr36 = tryDispatchBuiltin.0("$<-", l20, m13);
    dc18 = getTryDispatchBuiltinDispatched(dr36);
    if dc18 then L486() else L485(m13, dr36);
  L485(m15, l22):
    r251 = `$<-`(l22, <sym suggests_but_not_installed>, m13);
    goto L483(m15, r251);
  L499():
    bad44 = ld bad;
    check L501() else D163();
  L500():
    r262 = dyn base31(<sym bad>);
    goto L89(r262);
  L610(reqs23, dx70):
    st bad_depends = dx70;
    goto L115(reqs23);
  L611():
    dr62 = tryDispatchBuiltin.0("$<-", l38, reqs19);
    dc31 = getTryDispatchBuiltinDispatched(dr62);
    if dc31 then L613() else L612(reqs19, dr62);
  L612(reqs21, l40):
    r354 = `$<-`(l40, <sym missing_namespace_depends>, reqs19);
    goto L610(reqs21, r354);
  L639():
    goto L121(r376);
  L641():
    lim3 = force? lim2;
    checkMissing(lim3);
    r378 = `>`(lim3, 0.0);
    c152 = `as.logical`(r378);
    c153 = `&&`(c149, c152);
    goto L122(c153);
  L643():
    sym47 = ldf length;
    base47 = ldf length in base;
    guard47 = `==`.4(sym47, base47);
    if guard47 then L644() else L645();
  D118():
    deopt 405 [r170];
  D119():
    deopt 407 [];
  D163():
    deopt 576 [bad44];
  L49(r160):
    c51 = `as.logical`(r160);
    if c51 then L369() else L50();
  L90():
    goto L91();
  L91():
    _w_o_1 = ldf `%w/o%`;
    check L510() else D166();
  L124(c160, r380):
    lim4 = ld lim;
    check L648() else D221();
  L125():
    goto L126();
  L126():
    check_incoming3 = ld check_incoming;
    check L657() else D223();
  L361():
    dx12 = getTryDispatchBuiltinValue(dr12);
    goto L358(bad11, dx12);
  L365():
    bad21 = ld bad2;
    check L367() else D110();
  L366():
    r159 = dyn base19(<sym bad2>);
    goto L49(r159);
  L387():
    goto L54(r170);
  L389():
    r171 = dyn character2();
    check L390() else D120();
  L486():
    dx38 = getTryDispatchBuiltinValue(dr36);
    goto L483(m13, dx38);
  L501():
    bad45 = force? bad44;
    checkMissing(bad45);
    length16 = ldf length in base;
    r264 = dyn length16(bad45);
    check L502() else D164();
  L503():
    bad46 = ld bad;
    check L504() else D165();
  L613():
    dx69 = getTryDispatchBuiltinValue(dr62);
    goto L610(reqs19, dx69);
  L644():
    imps = ld imps;
    check L646() else D219();
  L645():
    r379 = dyn base47(<sym imps>);
    goto L124(c155, r379);
  L650():
    imps2 = ld imps;
    check L651() else D222();
  D110():
    deopt 374 [bad21];
  D120():
    deopt 408 [r171];
  D164():
    deopt 579 [r264];
  D165():
    deopt 580 [bad46];
  D166():
    deopt 588 [];
  D219():
    deopt 795 [c155, imps];
  D221():
    deopt 798 [c160, r380, lim4];
  D222():
    deopt 802 [imps2];
  D223():
    deopt 809 [check_incoming3];
  L50():
    goto L51(NULL);
  L51(bad29):
    goto L52();
  L367():
    bad22 = force? bad21;
    checkMissing(bad22);
    length7 = ldf length in base;
    r161 = dyn length7(bad22);
    check L368() else D111();
  L369():
    bad23 = ld bad2;
    check L370() else D112();
  L390():
    st bad = r171;
    lreqs16 = ld lreqs3;
    check L391() else D121();
  L502():
    goto L89(r264);
  L504():
    bad47 = force? bad46;
    checkMissing(bad47);
    l23 = ld bad_depends;
    c101 = `is.object`(l23);
    if c101 then L506() else L507(bad47, l23);
  L510():
    p60 = prom<V +>{
      VB4 = ld VB;
      VB5 = force? VB4;
      checkMissing(VB5);
      return VB5;
    };
    p61 = prom<V +>{
      sym32 = ldf c;
      base32 = ldf c in base;
      guard32 = `==`.4(sym32, base32);
      if guard32 then L1() else L2();
    L0(r268):
      return r268;
    L1():
      package_name10 = ld package_name;
      package_name11 = force? package_name10;
      checkMissing(package_name11);
      installed10 = ld installed;
      installed11 = force? installed10;
      checkMissing(installed11);
      c102 = ldf c in base;
      r269 = dyn c102(package_name11, installed11);
      goto L0(r269);
    L2():
      r267 = dyn base32(<sym package_name>, <sym installed>);
      goto L0(r267);
    };
    r271 = dyn _w_o_1(p60, p61);
    check L511() else D167();
  L646():
    imps1 = force? imps;
    checkMissing(imps1);
    length24 = ldf length in base;
    r381 = dyn length24(imps1);
    check L647() else D220();
  L648():
    lim5 = force? lim4;
    checkMissing(lim5);
    r382 = `>`(r380, lim5);
    c161 = `as.logical`(r382);
    c162 = `&&`(c160, c161);
    goto L123(c162);
  L651():
    imps3 = force? imps2;
    checkMissing(imps3);
    l44 = ld bad_depends;
    c165 = `is.object`(l44);
    if c165 then L653() else L654(imps3, l44);
  L657():
    check_incoming4 = force? check_incoming3;
    checkMissing(check_incoming4);
    c166 = `as.logical`(check_incoming4);
    if c166 then L658() else L127();
  D111():
    deopt 377 [r161];
  D112():
    deopt 378 [bad23];
  D121():
    deopt 410 [lreqs16];
  D167():
    deopt 591 [r271];
  D220():
    deopt 798 [c155, r381];
  L127():
    goto L132();
  L132():
    setdiff12 = ldf setdiff;
    check L676() else D230();
  L368():
    goto L49(r161);
  L370():
    bad24 = force? bad23;
    checkMissing(bad24);
    l10 = ld bad_depends;
    c52 = `is.object`(l10);
    if c52 then L372() else L373(bad24, l10);
  L391():
    lreqs17 = force? lreqs16;
    checkMissing(lreqs17);
    s1 = toForSeq(lreqs17);
    l13 = length(s1);
    i21 = 0;
    goto L56(i21);
  L505(bad51, dx41):
    st bad_depends = dx41;
    goto L91();
  L506():
    dr38 = tryDispatchBuiltin.0("$<-", l23, bad47);
    dc19 = getTryDispatchBuiltinDispatched(dr38);
    if dc19 then L508() else L507(bad47, dr38);
  L507(bad49, l25):
    r265 = `$<-`(l25, <sym required_for_checking_but_not_declared>, bad47);
    goto L505(bad49, r265);
  L511():
    st bad2 = r271;
    setdiff5 = ldf setdiff;
    check L512() else D168();
  L647():
    goto L124(c155, r381);
  L652(imps7, dx76):
    st bad_depends = dx76;
    goto L126();
  L653():
    dr68 = tryDispatchBuiltin.0("$<-", l44, imps3);
    dc34 = getTryDispatchBuiltinDispatched(dr68);
    if dc34 then L655() else L654(imps3, dr68);
  L654(imps5, l46):
    r383 = `$<-`(l46, <sym many_imports>, imps3);
    goto L652(imps5, r383);
  L658():
    sym48 = ldf c;
    base48 = ldf c in base;
    guard48 = `==`.4(sym48, base48);
    if guard48 then L659() else L660();
  D168():
    deopt 594 [];
  D230():
    deopt 841 [];
  L56(i22):
    i23 = `+`.1(i22, 1);
    c55 = `<`.1(l13, i23);
    if c55 then L392() else L66();
  L128(r385):
    st hdOnly = r385;
    setdiff11 = ldf setdiff;
    check L662() else D225();
  L371(bad28, dx15):
    st bad_depends = dx15;
    goto L51(bad28);
  L372():
    dr14 = tryDispatchBuiltin.0("$<-", l10, bad24);
    dc7 = getTryDispatchBuiltinDispatched(dr14);
    if dc7 then L374() else L373(bad24, dr14);
  L373(bad26, l12):
    r162 = `$<-`(l12, <sym suggested_but_not_installed>, bad24);
    goto L371(bad26, r162);
  L508():
    dx40 = getTryDispatchBuiltinValue(dr38);
    goto L505(bad47, dx40);
  L512():
    p62 = prom<V +>{
      bad53 = ld bad2;
      bad54 = force? bad53;
      checkMissing(bad54);
      return bad54;
    };
    p63 = prom<V +>{
      bad55 = ld bad;
      bad56 = force? bad55;
      checkMissing(bad56);
      return bad56;
    };
    r274 = dyn setdiff5(p62, p63);
    check L513() else D169();
  L655():
    dx75 = getTryDispatchBuiltinValue(dr68);
    goto L652(imps3, dx75);
  L659():
    c167 = ldf c in base;
    r386 = dyn c167("BH", "RcppArmadillo", "RcppEigen");
    check L661() else D224();
  L660():
    r384 = dyn base48("BH", "RcppArmadillo", "RcppEigen");
    goto L128(r384);
  L676():
    p93 = prom<V +>{
      _get_requires_from_package_db1 = ldf `.get_requires_from_package_db`;
      p92 = prom<V +>{
        db26 = ld db;
        db27 = force? db26;
        checkMissing(db27);
        return db27;
      };
      r403 = dyn _get_requires_from_package_db1(p92, "RdMacros");
      return r403;
    };
    p94 = prom<V +>{
      sym51 = ldf c;
      base51 = ldf c in base;
      guard51 = `==`.4(sym51, base51);
      if guard51 then L1() else L2();
    L0(r406):
      return r406;
    L1():
      imports12 = ld imports;
      imports13 = force? imports12;
      checkMissing(imports13);
      depends12 = ld depends;
      depends13 = force? depends12;
      checkMissing(depends13);
      c171 = ldf c in base;
      r407 = dyn c171(imports13, depends13);
      goto L0(r407);
    L2():
      r405 = dyn base51(<sym imports>, <sym depends>);
      goto L0(r405);
    };
    r409 = dyn setdiff12(p93, p94);
    check L677() else D231();
  D169():
    deopt 597 [r274];
  D224():
    deopt 817 [r386];
  D225():
    deopt 820 [];
  D231():
    deopt 844 [r409];
  L66():
    x1 = `[[`(s1, i23, NULL, TRUE);
    st r = x1;
    r172 = ld r;
    check L393() else D122();
  L374():
    dx14 = getTryDispatchBuiltinValue(dr14);
    goto L371(bad24, dx14);
  L392():
    sym24 = ldf length;
    base24 = ldf length in base;
    guard24 = `==`.4(sym24, base24);
    if guard24 then L431() else L432();
  L513():
    st bad2 = r274;
    sym33 = ldf length;
    base33 = ldf length in base;
    guard33 = `==`.4(sym33, base33);
    if guard33 then L514() else L515();
  L661():
    goto L128(r386);
  L662():
    p89 = prom<V +>{
      intersect = ldf intersect;
      p87 = prom<V +>{
        hdOnly = ld hdOnly;
        hdOnly1 = force? hdOnly;
        checkMissing(hdOnly1);
        return hdOnly1;
      };
      p88 = prom<V +>{
        sym49 = ldf c;
        base49 = ldf c in base;
        guard49 = `==`.4(sym49, base49);
        if guard49 then L1() else L2();
      L0(r389):
        return r389;
      L1():
        depends10 = ld depends;
        depends11 = force? depends10;
        checkMissing(depends11);
        imports10 = ld imports;
        imports11 = force? imports10;
        checkMissing(imports11);
        c168 = ldf c in base;
        r390 = dyn c168(depends11, imports11);
        goto L0(r390);
      L2():
        r388 = dyn base49(<sym depends>, <sym imports>);
        goto L0(r388);
      };
      r392 = dyn intersect(p87, p88);
      return r392;
    };
    p91 = prom<V +>{
      _get_namespace_package_depends1 = ldf `.get_namespace_package_depends`;
      p90 = prom<V +>{
        dir15 = ld dir;
        dir16 = force? dir15;
        checkMissing(dir16);
        return dir16;
      };
      r395 = dyn _get_namespace_package_depends1(p90, TRUE);
      return r395;
    };
    r397 = dyn setdiff11(p89, p91);
    check L663() else D226();
  L677():
    st RM = r409;
    sym52 = ldf length;
    base52 = ldf length in base;
    guard52 = `==`.4(sym52, base52);
    if guard52 then L678() else L679();
  D122():
    deopt 412 [i23, r172];
  D226():
    deopt 823 [r397];
  L67(r218):
    c66 = `as.logical`(r218);
    if c66 then L435() else L68();
  L92(r276):
    c103 = `as.logical`(r276);
    if c103 then L518() else L93();
  L133(r411):
    c172 = `as.logical`(r411);
    if c172 then L682() else L134();
  L393():
    r173 = force? r172;
    checkMissing(r173);
    c56 = `is.object`(r173);
    if c56 then L394() else L395(i23, r173);
  L431():
    bad33 = ld bad;
    check L433() else D138();
  L432():
    r217 = dyn base24(<sym bad>);
    goto L67(r217);
  L514():
    bad57 = ld bad2;
    check L516() else D170();
  L515():
    r275 = dyn base33(<sym bad2>);
    goto L92(r275);
  L663():
    st hd = r397;
    sym50 = ldf length;
    base50 = ldf length in base;
    guard50 = `==`.4(sym50, base50);
    if guard50 then L664() else L665();
  L678():
    RM = ld RM;
    check L680() else D232();
  L679():
    r410 = dyn base52(<sym RM>);
    goto L133(r410);
  D138():
    deopt 479 [bad33];
  D170():
    deopt 601 [bad57];
  D232():
    deopt 848 [RM];
  L57(i29, dx19):
    st pkg = dx19;
    r177 = ld r;
    check L397() else D123();
  L68():
    goto L69(NULL);
  L69(bad41):
    goto L70(bad41);
  L93():
    goto L94();
  L94():
    sym34 = ldf length;
    base34 = ldf length in base;
    guard34 = `==`.4(sym34, base34);
    if guard34 then L525() else L526();
  L129(r399):
    c169 = `as.logical`(r399);
    if c169 then L668() else L130();
  L134():
    goto L135();
  L135():
    config_val_to_logical1 = ldf config_val_to_logical;
    check L689() else D235();
  L394():
    dr18 = tryDispatchBuiltin.1("[[", r173);
    dc9 = getTryDispatchBuiltinDispatched(dr18);
    if dc9 then L396() else L395(i23, dr18);
  L395(i27, r175):
    __16 = ldf `[[` in base;
    r176 = dyn __16(r175, 1);
    goto L57(i27, r176);
  L433():
    bad34 = force? bad33;
    checkMissing(bad34);
    length10 = ldf length in base;
    r219 = dyn length10(bad34);
    check L434() else D139();
  L435():
    bad35 = ld bad;
    check L436() else D140();
  L516():
    bad58 = force? bad57;
    checkMissing(bad58);
    length17 = ldf length in base;
    r277 = dyn length17(bad58);
    check L517() else D171();
  L518():
    bad59 = ld bad2;
    check L519() else D172();
  L664():
    hd = ld hd;
    check L666() else D227();
  L665():
    r398 = dyn base50(<sym hd>);
    goto L129(r398);
  L680():
    RM1 = force? RM;
    checkMissing(RM1);
    length26 = ldf length in base;
    r412 = dyn length26(RM1);
    check L681() else D233();
  L682():
    RM2 = ld RM;
    check L683() else D234();
  D123():
    deopt 418 [i29, r177];
  D139():
    deopt 482 [r219];
  D140():
    deopt 483 [bad35];
  D171():
    deopt 604 [r277];
  D172():
    deopt 605 [bad59];
  D227():
    deopt 827 [hd];
  D233():
    deopt 851 [r412];
  D234():
    deopt 852 [RM2];
  D235():
    deopt 860 [];
  L95(r280):
    c105 = `as.logical`(r280);
    if c105 then L529() else L96(c105);
  L130():
    goto L131(NULL);
  L131(hd8):
    goto L132();
  L396():
    dx18 = getTryDispatchBuiltinValue(dr18);
    goto L57(i23, dx18);
  L397():
    r178 = force? r177;
    checkMissing(r178);
    c57 = `is.object`(r178);
    if c57 then L398() else L399(i29, r178);
  L434():
    goto L67(r219);
  L436():
    bad36 = force? bad35;
    checkMissing(bad36);
    l14 = ld bad_depends;
    c67 = `is.object`(l14);
    if c67 then L438() else L439(bad36, l14);
  L517():
    goto L92(r277);
  L519():
    bad60 = force? bad59;
    checkMissing(bad60);
    l26 = ld bad_depends;
    c104 = `is.object`(l26);
    if c104 then L521() else L522(bad60, l26);
  L525():
    VB6 = ld VB;
    check L527() else D173();
  L526():
    r279 = dyn base34(<sym VB>);
    goto L95(r279);
  L666():
    hd1 = force? hd;
    checkMissing(hd1);
    length25 = ldf length in base;
    r400 = dyn length25(hd1);
    check L667() else D228();
  L668():
    hd2 = ld hd;
    check L669() else D229();
  L681():
    goto L133(r412);
  L683():
    RM3 = force? RM2;
    checkMissing(RM3);
    l50 = ld bad_depends;
    c173 = `is.object`(l50);
    if c173 then L685() else L686(RM3, l50);
  L689():
    p95 = prom<V +>{
      Sys_getenv2 = ldf `Sys.getenv`;
      r414 = dyn Sys_getenv2("_R_CHECK_ORPHANED_", "FALSE");
      return r414;
    };
    r416 = dyn config_val_to_logical1(p95);
    check L690() else D236();
  D173():
    deopt 614 [VB6];
  D228():
    deopt 830 [r400];
  D229():
    deopt 831 [hd2];
  D236():
    deopt 862 [r416];
  L58(i33, dx21):
    st op = dx21;
    which = ldf which;
    check L401() else D124();
  L96(c107):
    c111 = `as.logical`(c107);
    if c111 then L533() else L97();
  L398():
    dr20 = tryDispatchBuiltin.1("[[", r178);
    dc10 = getTryDispatchBuiltinDispatched(dr20);
    if dc10 then L400() else L399(i29, dr20);
  L399(i31, r180):
    __17 = ldf `[[` in base;
    r181 = dyn __17(r180, 2);
    goto L58(i31, r181);
  L437(bad40, dx35):
    st bad_depends = dx35;
    goto L69(bad40);
  L438():
    dr32 = tryDispatchBuiltin.0("$<-", l14, bad36);
    dc16 = getTryDispatchBuiltinDispatched(dr32);
    if dc16 then L440() else L439(bad36, dr32);
  L439(bad38, l16):
    r220 = `$<-`(l16, <sym required_but_obsolete>, bad36);
    goto L437(bad38, r220);
  L520(bad64, dx43):
    st bad_depends = dx43;
    goto L94();
  L521():
    dr40 = tryDispatchBuiltin.0("$<-", l26, bad60);
    dc20 = getTryDispatchBuiltinDispatched(dr40);
    if dc20 then L523() else L522(bad60, dr40);
  L522(bad62, l28):
    r278 = `$<-`(l28, <sym required_for_checking_but_not_installed>, bad60);
    goto L520(bad62, r278);
  L527():
    VB7 = force? VB6;
    checkMissing(VB7);
    length18 = ldf length in base;
    r281 = dyn length18(VB7);
    check L528() else D174();
  L529():
    dir_exists = ldf `dir.exists`;
    check L530() else D175();
  L667():
    goto L129(r400);
  L669():
    hd3 = force? hd2;
    checkMissing(hd3);
    l47 = ld bad_depends;
    c170 = `is.object`(l47);
    if c170 then L671() else L672(hd3, l47);
  L684(RM7, dx80):
    st bad_depends = dx80;
    goto L135();
  L685():
    dr72 = tryDispatchBuiltin.0("$<-", l50, RM3);
    dc36 = getTryDispatchBuiltinDispatched(dr72);
    if dc36 then L687() else L686(RM3, dr72);
  L686(RM5, l52):
    r413 = `$<-`(l52, <sym missing_rdmacros_depends>, RM3);
    goto L684(RM5, r413);
  L690():
    c174 = `as.logical`(r416);
    if c174 then L691() else L136();
  D124():
    deopt 425 [i33];
  D174():
    deopt 617 [r281];
  D175():
    deopt 619 [c105];
  L97():
    goto L98(NULL);
  L98(VB14):
    goto L99(VB14);
  L136():
    goto L168();
  L168():
    l62 = ld bad_depends;
    class__ = ldf `class<-`;
    check L830() else D307();
  L400():
    dx20 = getTryDispatchBuiltinValue(dr20);
    goto L58(i29, dx20);
  L401():
    p42 = prom<V +>{
      installed4 = ld installed;
      installed5 = force? installed4;
      checkMissing(installed5);
      pkg = ld pkg;
      pkg1 = force? pkg;
      checkMissing(pkg1);
      r182 = `==`(installed5, pkg1);
      return r182;
    };
    r184 = dyn which(p42);
    check L402() else D125();
  L440():
    dx34 = getTryDispatchBuiltinValue(dr32);
    goto L437(bad36, dx34);
  L523():
    dx42 = getTryDispatchBuiltinValue(dr40);
    goto L520(bad60, dx42);
  L528():
    goto L95(r281);
  L530():
    p65 = prom<V +>{
      file_path3 = ldf `file.path`;
      p64 = prom<V +>{
        dir7 = ld dir;
        dir8 = force? dir7;
        checkMissing(dir8);
        return dir8;
      };
      r283 = dyn file_path3(p64, "vignettes");
      return r283;
    };
    r285 = dyn dir_exists(p65);
    check L531() else D176();
  L533():
    VB8 = ld VB;
    check L534() else D177();
  L670(hd7, dx78):
    st bad_depends = dx78;
    goto L131(hd7);
  L671():
    dr70 = tryDispatchBuiltin.0("$<-", l47, hd3);
    dc35 = getTryDispatchBuiltinDispatched(dr70);
    if dc35 then L673() else L672(hd3, dr70);
  L672(hd5, l49):
    r401 = `$<-`(l49, <sym hdOnly>, hd3);
    goto L670(hd5, r401);
  L687():
    dx79 = getTryDispatchBuiltinValue(dr72);
    goto L684(RM3, dx79);
  L691():
    setdiff13 = ldf setdiff;
    check L692() else D237();
  D125():
    deopt 427 [i33, r184];
  D176():
    deopt 621 [c105, r285];
  D177():
    deopt 624 [VB8];
  D237():
    deopt 864 [];
  D307():
    deopt 1109 ["check_package_depends", l62, "check_package_depends"];
  L402():
    st where = r184;
    sym21 = ldf length;
    base21 = ldf length in base;
    guard21 = `==`.4(sym21, base21);
    if guard21 then L403() else L404();
  L531():
    r286 = `!`(r285);
    c108 = `as.logical`(r286);
    c109 = `&&`(c105, c108);
    goto L96(c109);
  L534():
    VB9 = force? VB8;
    checkMissing(VB9);
    l29 = ld bad_depends;
    c112 = `is.object`(l29);
    if c112 then L536() else L537(VB9, l29);
  L673():
    dx77 = getTryDispatchBuiltinValue(dr70);
    goto L670(hd3, dx77);
  L692():
    p97 = prom<V +>{
      unique2 = ldf unique;
      p96 = prom<V +>{
        sym53 = ldf c;
        base53 = ldf c in base;
        guard53 = `==`.4(sym53, base53);
        if guard53 then L4() else L5();
      L0(r418):
        return r418;
      L4():
        sym54 = ldf `as.character`;
        base54 = ldf `as.character` in base;
        guard54 = `==`.4(sym54, base54);
        if guard54 then L6() else L7();
      L5():
        r417 = dyn base53(<lang as.character(depends)>, <lang as.character(imports)>, <lang as.character(links)>);
        goto L0(r417);
      L1(r420):
        sym55 = ldf `as.character`;
        base55 = ldf `as.character` in base;
        guard55 = `==`.4(sym55, base55);
        if guard55 then L8() else L9();
      L6():
        depends14 = ld depends;
        depends15 = force? depends14;
        checkMissing(depends15);
        as_character = ldf `as.character` in base;
        r421 = dyn as_character(depends15);
        goto L1(r421);
      L7():
        r419 = dyn base54(<sym depends>);
        goto L1(r419);
      L2(r423):
        sym56 = ldf `as.character`;
        base56 = ldf `as.character` in base;
        guard56 = `==`.4(sym56, base56);
        if guard56 then L10() else L11();
      L8():
        imports14 = ld imports;
        imports15 = force? imports14;
        checkMissing(imports15);
        as_character1 = ldf `as.character` in base;
        r424 = dyn as_character1(imports15);
        goto L2(r424);
      L9():
        r422 = dyn base55(<sym imports>);
        goto L2(r422);
      L3(r426):
        c175 = ldf c in base;
        r428 = dyn c175(r420, r423, r426);
        goto L0(r428);
      L10():
        links2 = ld links;
        links3 = force? links2;
        checkMissing(links3);
        as_character2 = ldf `as.character` in base;
        r427 = dyn as_character2(links3);
        goto L3(r427);
      L11():
        r425 = dyn base56(<sym links>);
        goto L3(r425);
      };
      r430 = dyn unique2(p96);
      return r430;
    };
    p98 = prom<V +>{
      bad_depends = ld bad_depends;
      bad_depends1 = force? bad_depends;
      checkMissing(bad_depends1);
      c176 = `is.object`(bad_depends1);
      if c176 then L1() else L2(bad_depends1);
    L0(dx82):
      return dx82;
    L1():
      dr74 = tryDispatchBuiltin.1("$", bad_depends1);
      dc37 = getTryDispatchBuiltinDispatched(dr74);
      if dc37 then L3() else L2(dr74);
    L2(bad_depends3):
      r432 = `$`(bad_depends3, <sym required_but_not_installed>);
      goto L0(r432);
    L3():
      dx81 = getTryDispatchBuiltinValue(dr74);
      goto L0(dx81);
    };
    r434 = dyn setdiff13(p97, p98);
    check L693() else D238();
  L830():
    r564 = dyn class__(l62, NULL, "check_package_depends");
    check L831() else D308();
  D238():
    deopt 867 [r434];
  D308():
    deopt 1111 ["check_package_depends", r564];
  L59(i36, r186):
    r188 = `!`(r186);
    c58 = `as.logical`(r188);
    if c58 then L407() else L60();
  L403():
    where = ld where;
    check L405() else D126();
  L404():
    r185 = dyn base21(<sym where>);
    goto L59(i33, r185);
  L535(VB13, dx45):
    st bad_depends = dx45;
    goto L98(VB13);
  L536():
    dr42 = tryDispatchBuiltin.0("$<-", l29, VB9);
    dc21 = getTryDispatchBuiltinDispatched(dr42);
    if dc21 then L538() else L537(VB9, dr42);
  L537(VB11, l31):
    r287 = `$<-`(l31, <sym no_vignettes>, VB9);
    goto L535(VB11, r287);
  L693():
    st strict = r434;
    _expand_dependency_type_spec = ldf `.expand_dependency_type_spec`;
    check L694() else D239();
  L831():
    st bad_depends = r564;
    bad_depends8 = ld bad_depends;
    check L832() else D309();
  D126():
    deopt 431 [i33, where];
  D239():
    deopt 870 [];
  D309():
    deopt 1113 [bad_depends8];
  L60():
    readRDS = ldf readRDS;
    check L410() else D128();
  L405():
    where1 = force? where;
    checkMissing(where1);
    length9 = ldf length in base;
    r187 = dyn length9(where1);
    check L406() else D127();
  L407():
    goto L56(i36);
  L538():
    dx44 = getTryDispatchBuiltinValue(dr42);
    goto L535(VB9, dx44);
  L694():
    r435 = dyn _expand_dependency_type_spec("strong");
    check L695() else D240();
  L832():
    bad_depends9 = force? bad_depends8;
    checkMissing(bad_depends9);
    popenv;
    return bad_depends9;
  D127():
    deopt 434 [i33, r187];
  D128():
    deopt 441 [i36];
  D240():
    deopt 872 [r435];
  L406():
    goto L59(i33, r187);
  L410():
    p45 = prom<V +>{
      file_path2 = ldf `file.path`;
      p43 = prom<V +>{
        installed_in2 = ld installed_in;
        installed_in3 = force? installed_in2;
        checkMissing(installed_in3);
        c59 = `is.object`(installed_in3);
        if c59 then L2() else L3(installed_in3);
      L0(dx23):
        return dx23;
      L2():
        dr22 = tryDispatchBuiltin.1("[", installed_in3);
        dc11 = getTryDispatchBuiltinDispatched(dr22);
        if dc11 then L4() else L3(dr22);
      L3(installed_in5):
        where2 = ld where;
        where3 = force? where2;
        checkMissing(where3);
        c60 = `is.object`(where3);
        if c60 then L5() else L6(installed_in5, where3);
      L1(installed_in9, dx25):
        __19 = ldf `[` in base;
        r191 = dyn __19(installed_in9, dx25);
        goto L0(r191);
      L4():
        dx22 = getTryDispatchBuiltinValue(dr22);
        goto L0(dx22);
      L5():
        dr24 = tryDispatchBuiltin.1("[", where3);
        dc12 = getTryDispatchBuiltinDispatched(dr24);
        if dc12 then L7() else L6(installed_in5, dr24);
      L6(installed_in7, where5):
        __18 = ldf `[` in base;
        r190 = dyn __18(where5, 1);
        goto L1(installed_in7, r190);
      L7():
        dx24 = getTryDispatchBuiltinValue(dr24);
        goto L1(installed_in5, dx24);
      };
      p44 = prom<V +>{
        pkg2 = ld pkg;
        pkg3 = force? pkg2;
        checkMissing(pkg3);
        return pkg3;
      };
      r194 = dyn file_path2(p43, p44, "Meta", "package.rds");
      return r194;
    };
    r196 = dyn readRDS(p45);
    check L411() else D129();
  L695():
    st dependencies = r435;
    ___ = ldf `:::`;
    check L696() else D241();
  D129():
    deopt 443 [i36, r196];
  D241():
    deopt 875 [];
  L411():
    st desc = r196;
    desc = ld desc;
    check L412() else D130();
  L696():
    r436 = dyn ___("utils", ".installed_package_dependencies");
    check L697() else D242();
  D130():
    deopt 445 [i36, desc];
  D242():
    deopt 878 [r436];
  L412():
    desc1 = force? desc;
    checkMissing(desc1);
    c61 = `is.object`(desc1);
    if c61 then L414() else L415(i36, desc1);
  L697():
    st ipd = r436;
    strict = ld strict;
    check L698() else D243();
  D243():
    deopt 880 [strict];
  L413(i44, dx27):
    c62 = `is.object`(dx27);
    if c62 then L417() else L418(i44, dx27);
  L414():
    dr26 = tryDispatchBuiltin.1("$", desc1);
    dc13 = getTryDispatchBuiltinDispatched(dr26);
    if dc13 then L416() else L415(i36, dr26);
  L415(i42, desc3):
    r197 = `$`(desc3, <sym DESCRIPTION>);
    goto L413(i42, r197);
  L698():
    strict1 = force? strict;
    checkMissing(strict1);
    st strict0 = strict1;
    st new = strict1;
    character3 = ldf character;
    check L699() else D244();
  D244():
    deopt 885 [];
  L62(i48, dx31):
    st current = dx31;
    as_package_version = ldf `as.package_version`;
    check L420() else D131();
  L416():
    dx26 = getTryDispatchBuiltinValue(dr26);
    goto L413(i36, dx26);
  L417():
    dr28 = tryDispatchBuiltin.1("[", dx27);
    dc14 = getTryDispatchBuiltinDispatched(dr28);
    if dc14 then L419() else L418(i44, dr28);
  L418(i46, dx29):
    __20 = ldf `[` in base;
    r198 = dyn __20(dx29, "Version");
    goto L62(i46, r198);
  L699():
    r437 = dyn character3();
    check L700() else D245();
  D131():
    deopt 453 [i48];
  D245():
    deopt 886 [r437];
  L419():
    dx30 = getTryDispatchBuiltinValue(dr28);
    goto L62(i44, dx30);
  L420():
    p46 = prom<V +>{
      r199 = ld r;
      r200 = force? r199;
      checkMissing(r200);
      c63 = `is.object`(r200);
      if c63 then L1() else L2(r200);
    L0(dx33):
      return dx33;
    L1():
      dr30 = tryDispatchBuiltin.1("[[", r200);
      dc15 = getTryDispatchBuiltinDispatched(dr30);
      if dc15 then L3() else L2(dr30);
    L2(r202):
      __21 = ldf `[[` in base;
      r203 = dyn __21(r202, 3);
      goto L0(r203);
    L3():
      dx32 = getTryDispatchBuiltinValue(dr30);
      goto L0(dx32);
    };
    r205 = dyn as_package_version(p46);
    check L421() else D132();
  L700():
    st ex = r437;
    goto L141();
  D132():
    deopt 455 [i48, r205];
  L141():
    unname = ldf unname;
    check L701() else D246();
  L421():
    st target = r205;
    do_call = ldf `do.call`;
    check L422() else D133();
  D133():
    deopt 458 [i48];
  D246():
    deopt 889 [];
  L422():
    p47 = prom<V +>{
      op = ld op;
      op1 = force? op;
      checkMissing(op1);
      return op1;
    };
    p48 = prom<V +>{
      sym22 = ldf list;
      base22 = ldf list in base;
      guard22 = `==`.4(sym22, base22);
      if guard22 then L1() else L2();
    L0(r208):
      return r208;
    L1():
      current = ld current;
      current1 = force? current;
      checkMissing(current1);
      target = ld target;
      target1 = force? target;
      checkMissing(target1);
      list1 = ldf list in base;
      r209 = dyn list1(current1, target1);
      goto L0(r209);
    L2():
      r207 = dyn base22(<sym current>, <sym target>);
      goto L0(r207);
    };
    r211 = dyn do_call(p47, p48);
    check L423() else D134();
  L701():
    p102 = prom<V +>{
      unlist1 = ldf unlist;
      p101 = prom<V +>{
        ipd = ldf ipd;
        p99 = prom<V +>{
          new = ld new;
          new1 = force? new;
          checkMissing(new1);
          return new1;
        };
        p100 = prom<V +>{
          dependencies = ld dependencies;
          dependencies1 = force? dependencies;
          checkMissing(dependencies1);
          return dependencies1;
        };
        r440 = dyn ipd(p99, p100);
        return r440;
      };
      r442 = dyn unlist1(p101);
      return r442;
    };
    r444 = dyn unname(p102);
    check L702() else D247();
  D134():
    deopt 461 [i48, r211];
  D247():
    deopt 891 [r444];
  L423():
    r212 = `!`(r211);
    c64 = `as.logical`(r212);
    if c64 then L424() else L63();
  L702():
    st need = r444;
    setdiff14 = ldf setdiff;
    check L703() else D248();
  D248():
    deopt 894 [];
  L63():
    goto L65(i48);
  L65(i54):
    goto L56(i54);
  L424():
    sym23 = ldf c;
    base23 = ldf c in base;
    guard23 = `==`.4(sym23, base23);
    if guard23 then L425() else L426();
  L703():
    p103 = prom<V +>{
      need = ld need;
      need1 = force? need;
      checkMissing(need1);
      return need1;
    };
    p104 = prom<V +>{
      sym57 = ldf c;
      base57 = ldf c in base;
      guard57 = `==`.4(sym57, base57);
      if guard57 then L1() else L2();
    L0(r447):
      return r447;
    L1():
      strict2 = ld strict;
      strict3 = force? strict2;
      checkMissing(strict3);
      ex = ld ex;
      ex1 = force? ex;
      checkMissing(ex1);
      c177 = ldf c in base;
      r448 = dyn c177(strict3, ex1);
      goto L0(r448);
    L2():
      r446 = dyn base57(<sym strict>, <sym ex>);
      goto L0(r446);
    };
    r450 = dyn setdiff14(p103, p104);
    check L704() else D249();
  D249():
    deopt 897 [r450];
  L64(i53, r214):
    st bad = r214;
    goto L65(i53);
  L425():
    bad31 = ld bad;
    check L427() else D135();
  L426():
    r213 = dyn base23(<sym bad>, <sym pkg>);
    goto L64(i48, r213);
  L704():
    st new = r450;
    sym58 = ldf length;
    base58 = ldf length in base;
    guard58 = `==`.4(sym58, base58);
    if guard58 then L705() else L706();
  D135():
    deopt 465 [i48, bad31];
  L137(r452):
    r454 = `!`(r452);
    c178 = `as.logical`(r454);
    if c178 then L709() else L138();
  L427():
    bad32 = force? bad31;
    checkMissing(bad32);
    pkg4 = ld pkg;
    check L428() else D136();
  L705():
    new2 = ld new;
    check L707() else D250();
  L706():
    r451 = dyn base58(<sym new>);
    goto L137(r451);
  D136():
    deopt 467 [i48, pkg4];
  D250():
    deopt 901 [new2];
  L138():
    union = ldf union;
    check L712() else D252();
  L428():
    pkg5 = force? pkg4;
    checkMissing(pkg5);
    c65 = ldf c in base;
    r215 = dyn c65(bad32, pkg5);
    check L429() else D137();
  L707():
    new3 = force? new2;
    checkMissing(new3);
    length27 = ldf length in base;
    r453 = dyn length27(new3);
    check L708() else D251();
  L709():
    __27 = ldf `::`;
    check L715() else D254();
  D137():
    deopt 470 [i48, r215];
  D251():
    deopt 904 [r453];
  D252():
    deopt 911 [];
  D254():
    deopt 920 [];
  L429():
    goto L64(i48, r215);
  L708():
    goto L137(r453);
  L712():
    p105 = prom<V +>{
      strict4 = ld strict;
      strict5 = force? strict4;
      checkMissing(strict5);
      return strict5;
    };
    p106 = prom<V +>{
      new4 = ld new;
      new5 = force? new4;
      checkMissing(new5);
      return new5;
    };
    r458 = dyn union(p105, p106);
    check L713() else D253();
  L715():
    r459 = dyn __27("utils", "maintainer");
    check L716() else D255();
  D253():
    deopt 914 [r458];
  D255():
    deopt 923 [r459];
  L713():
    st strict = r458;
    goto L141();
  L716():
    st mt = r459;
    sapply3 = ldf sapply;
    check L717() else D256();
  D256():
    deopt 926 [];
  L717():
    p107 = prom<V +>{
      strict6 = ld strict;
      strict7 = force? strict6;
      checkMissing(strict7);
      return strict7;
    };
    p108 = prom<V +>{
      r461 = clos inner2501545716;
      return r461;
    };
    r463 = dyn sapply3(p107, p108);
    check L718() else D257();
  D257():
    deopt 929 [r463];
  L718():
    st strict2 = r463;
    sym59 = ldf `is.na`;
    base59 = ldf `is.na` in base;
    guard59 = `==`.4(sym59, base59);
    if guard59 then L719() else L720();
  L142(r465):
    st miss1 = r465;
    setdiff15 = ldf setdiff;
    check L723() else D260();
  L719():
    strict8 = ld strict2;
    check L721() else D258();
  L720():
    r464 = dyn base59(<sym strict2>);
    goto L142(r464);
  D258():
    deopt 933 [strict8];
  D260():
    deopt 939 [];
  L721():
    strict9 = force? strict8;
    checkMissing(strict9);
    is_na1 = ldf `is.na` in base;
    r466 = dyn is_na1(strict9);
    check L722() else D259();
  L723():
    p109 = prom<V +>{
      sym60 = ldf `as.character`;
      base60 = ldf `as.character` in base;
      guard60 = `==`.4(sym60, base60);
      if guard60 then L1() else L2();
    L0(r468):
      return r468;
    L1():
      suggests4 = ld suggests;
      suggests5 = force? suggests4;
      checkMissing(suggests5);
      as_character3 = ldf `as.character` in base;
      r469 = dyn as_character3(suggests5);
      goto L0(r469);
    L2():
      r467 = dyn base60(<sym suggests>);
      goto L0(r467);
    };
    p110 = prom<V +>{
      bad_depends4 = ld bad_depends;
      bad_depends5 = force? bad_depends4;
      checkMissing(bad_depends5);
      c179 = `is.object`(bad_depends5);
      if c179 then L1() else L2(bad_depends5);
    L0(dx84):
      return dx84;
    L1():
      dr76 = tryDispatchBuiltin.1("$", bad_depends5);
      dc38 = getTryDispatchBuiltinDispatched(dr76);
      if dc38 then L3() else L2(dr76);
    L2(bad_depends7):
      r471 = `$`(bad_depends7, <sym suggested_but_not_installed>);
      goto L0(r471);
    L3():
      dx83 = getTryDispatchBuiltinValue(dr76);
      goto L0(dx83);
    };
    r473 = dyn setdiff15(p109, p110);
    check L724() else D261();
  D259():
    deopt 936 [r466];
  D261():
    deopt 942 [r473];
  L722():
    goto L142(r466);
  L724():
    st weak = r473;
    sapply4 = ldf sapply;
    check L725() else D262();
  D262():
    deopt 945 [];
  L725():
    p111 = prom<V +>{
      weak = ld weak;
      weak1 = force? weak;
      checkMissing(weak1);
      return weak1;
    };
    p112 = prom<V +>{
      r475 = clos inner2501545716;
      return r475;
    };
    r477 = dyn sapply4(p111, p112);
    check L726() else D263();
  D263():
    deopt 948 [r477];
  L726():
    st weak2 = r477;
    sym61 = ldf `is.na`;
    base61 = ldf `is.na` in base;
    guard61 = `==`.4(sym61, base61);
    if guard61 then L727() else L728();
  L143(r479):
    st miss2 = r479;
    sym62 = ldf any;
    base62 = ldf any in base;
    guard62 = `==`.4(sym62, base62);
    if guard62 then L731() else L732();
  L727():
    weak2 = ld weak2;
    check L729() else D264();
  L728():
    r478 = dyn base61(<sym weak2>);
    goto L143(r478);
  D264():
    deopt 952 [weak2];
  L144(r482):
    c180 = `as.logical`(r482);
    if c180 then L145(c180) else L735();
  L729():
    weak3 = force? weak2;
    checkMissing(weak3);
    is_na2 = ldf `is.na` in base;
    r480 = dyn is_na2(weak3);
    check L730() else D265();
  L731():
    miss1 = ld miss1;
    check L733() else D266();
  L732():
    r481 = dyn base62(<sym miss1>);
    goto L144(r481);
  D265():
    deopt 955 [r480];
  D266():
    deopt 959 [miss1];
  L145(c181):
    c189 = `as.logical`(c181);
    if c189 then L741() else L147(c189);
  L730():
    goto L143(r480);
  L733():
    miss2 = force? miss1;
    checkMissing(miss2);
    any1 = ldf any in base;
    r483 = dyn any1(miss2);
    check L734() else D267();
  L735():
    sym63 = ldf any;
    base63 = ldf any in base;
    guard63 = `==`.4(sym63, base63);
    if guard63 then L736() else L737();
  D267():
    deopt 962 [r483];
  L146(c185, r485):
    c186 = `as.logical`(r485);
    c187 = `||`(c185, c186);
    goto L145(c187);
  L147(c191):
    c200 = `as.logical`(c191);
    if c200 then L748() else L149();
  L734():
    goto L144(r483);
  L736():
    miss3 = ld miss2;
    check L738() else D268();
  L737():
    r484 = dyn base63(<sym miss2>);
    goto L146(c180, r484);
  L741():
    sym64 = ldf inherits;
    base64 = ldf inherits in base;
    guard64 = `==`.4(sym64, base64);
    if guard64 then L742() else L743();
  D268():
    deopt 965 [c180, miss3];
  L148(c194, r488):
    r503 = `!`(r488);
    c197 = `as.logical`(r503);
    c198 = `&&`(c194, c197);
    goto L147(c198);
  L149():
    character4 = ldf character;
    check L763() else D279();
  L151():
    sym66 = ldf c;
    base66 = ldf c in base;
    guard66 = `==`.4(sym66, base66);
    if guard66 then L765() else L766();
  L738():
    miss4 = force? miss3;
    checkMissing(miss4);
    any2 = ldf any in base;
    r486 = dyn any2(miss4);
    check L739() else D269();
  L742():
    tryCatch = ldf tryCatch;
    check L744() else D270();
  L743():
    r487 = dyn base64(<lang tryCatch(`<-`(db, `[`(CRAN_package_db(), , c("Package", "Maintainer"))), error=identity)>, "error");
    goto L148(c189, r487);
  L748():
    db28 = ld db;
    check L749() else D273();
  D269():
    deopt 968 [c180, r486];
  D270():
    deopt 973 [c189];
  D273():
    deopt 984 [db28];
  D279():
    deopt 1007 [];
  L152(r518):
    st strict = r518;
    sym67 = ldf length;
    base67 = ldf length in base;
    guard67 = `==`.4(sym67, base67);
    if guard67 then L775() else L776();
  L739():
    goto L146(c180, r486);
  L744():
    p113 = prom<V +>{
      CRAN_package_db = ldf CRAN_package_db;
      r489 = dyn CRAN_package_db();
      c195 = `is.object`(r489);
      if c195 then L2() else L3(r489);
    L0(dx86):
      st db = dx86;
      invisible.0();
      return dx86;
    L2():
      dr78 = tryDispatchBuiltin.1("[", r489);
      dc39 = getTryDispatchBuiltinDispatched(dr78);
      if dc39 then L4() else L3(dr78);
    L3(r491):
      sym65 = ldf c;
      base65 = ldf c in base;
      guard65 = `==`.4(sym65, base65);
      if guard65 then L5() else L6();
    L1(r496):
      __28 = ldf `[` in base;
      r498 = dyn __28(r489, <missing>, r496);
      goto L0(r498);
    L4():
      dx85 = getTryDispatchBuiltinValue(dr78);
      goto L0(dx85);
    L5():
      c196 = ldf c in base;
      r497 = dyn c196("Package", "Maintainer");
      goto L1(r497);
    L6():
      r494 = dyn base65("Package", "Maintainer");
      goto L1(r494);
    };
    p114 = prom<V +>{
      identity = ld identity;
      identity1 = force? identity;
      checkMissing(identity1);
      return identity1;
    };
    r501 = dyn tryCatch[, error](p113, p114);
    check L745() else D271();
  L749():
    db29 = force? db28;
    checkMissing(db29);
    c201 = `is.object`(db29);
    if c201 then L750() else L751(db29);
  L763():
    r516 = dyn character4();
    check L764() else D280();
  L765():
    strict14 = ld strict;
    check L767() else D281();
  L766():
    r517 = dyn base66(<lang `[`(strict, `&`(`!`(miss1), `==`(strict2, "ORPHANED")))>, <sym s2>);
    goto L152(r517);
  D271():
    deopt 977 [c189, r501];
  D280():
    deopt 1008 [r516];
  D281():
    deopt 1013 [strict14];
  L150(dx88):
    st orphaned = dx88;
    intersect1 = ldf intersect;
    check L758() else D275();
  L154(r525):
    c207 = `as.logical`(r525);
    if c207 then L779() else L155();
  L745():
    inherits = ldf inherits in base;
    r502 = dyn inherits(r501, "error", FALSE);
    check L746() else D272();
  L750():
    dr80 = tryDispatchBuiltin.1("[", db29);
    dc40 = getTryDispatchBuiltinDispatched(dr80);
    if dc40 then L752() else L751(dr80);
  L751(db31):
    db32 = ld db;
    check L753() else D274();
  L764():
    st w2 = r516;
    st s2 = r516;
    goto L151();
  L767():
    strict15 = force? strict14;
    checkMissing(strict15);
    c205 = `is.object`(strict15);
    if c205 then L768() else L769(strict15);
  L775():
    strict20 = ld strict;
    check L777() else D286();
  L776():
    r524 = dyn base67(<sym strict>);
    goto L154(r524);
  D272():
    deopt 981 [c189, r502];
  D274():
    deopt 986 [db31, db32];
  D275():
    deopt 995 [];
  D286():
    deopt 1030 [strict20];
  L153(dx96):
    s2 = ld s2;
    check L773() else D284();
  L155():
    goto L162();
  L162():
    sym70 = ldf c;
    base70 = ldf c in base;
    guard70 = `==`.4(sym70, base70);
    if guard70 then L807() else L808();
  L746():
    goto L148(c189, r502);
  L752():
    dx87 = getTryDispatchBuiltinValue(dr80);
    goto L150(dx87);
  L753():
    db33 = force? db32;
    checkMissing(db33);
    c202 = `is.object`(db33);
    if c202 then L755() else L756(db31, db33);
  L758():
    p115 = prom<V +>{
      strict10 = ld strict;
      strict11 = force? strict10;
      checkMissing(strict11);
      c203 = `is.object`(strict11);
      if c203 then L1() else L2(strict11);
    L0(dx92):
      return dx92;
    L1():
      dr84 = tryDispatchBuiltin.1("[", strict11);
      dc42 = getTryDispatchBuiltinDispatched(dr84);
      if dc42 then L3() else L2(dr84);
    L2(strict13):
      miss5 = ld miss1;
      miss6 = force? miss5;
      __30 = ldf `[` in base;
      r507 = dyn __30(strict13, miss6);
      goto L0(r507);
    L3():
      dx91 = getTryDispatchBuiltinValue(dr84);
      goto L0(dx91);
    };
    p116 = prom<V +>{
      orphaned = ld orphaned;
      orphaned1 = force? orphaned;
      checkMissing(orphaned1);
      return orphaned1;
    };
    r510 = dyn intersect1(p115, p116);
    check L759() else D276();
  L768():
    dr88 = tryDispatchBuiltin.1("[", strict15);
    dc44 = getTryDispatchBuiltinDispatched(dr88);
    if dc44 then L770() else L769(dr88);
  L769(strict17):
    miss9 = ld miss1;
    check L771() else D282();
  L777():
    strict21 = force? strict20;
    checkMissing(strict21);
    length28 = ldf length in base;
    r526 = dyn length28(strict21);
    check L778() else D287();
  L779():
    sort = ldf sort;
    check L780() else D288();
  D276():
    deopt 998 [r510];
  D282():
    deopt 1015 [strict17, miss9];
  D284():
    deopt 1023 [s2];
  D287():
    deopt 1033 [r526];
  D288():
    deopt 1035 [];
  L163(r546):
    st weak = r546;
    sym71 = ldf length;
    base71 = ldf length in base;
    guard71 = `==`.4(sym71, base71);
    if guard71 then L817() else L818();
  L754(db39, dx90):
    r505 = `==`(dx90, "ORPHANED");
    __29 = ldf `[` in base;
    r506 = dyn __29(db39, r505, 1);
    goto L150(r506);
  L755():
    dr82 = tryDispatchBuiltin.1("$", db33);
    dc41 = getTryDispatchBuiltinDispatched(dr82);
    if dc41 then L757() else L756(db31, dr82);
  L756(db36, db37):
    r504 = `$`(db37, <sym Maintainer>);
    goto L754(db36, r504);
  L759():
    st s2 = r510;
    intersect2 = ldf intersect;
    check L760() else D277();
  L770():
    dx95 = getTryDispatchBuiltinValue(dr88);
    goto L153(dx95);
  L771():
    miss10 = force? miss9;
    checkMissing(miss10);
    r519 = `!`(miss10);
    strict18 = ld strict2;
    check L772() else D283();
  L773():
    s3 = force? s2;
    checkMissing(s3);
    c206 = ldf c in base;
    r523 = dyn c206(dx96, s3);
    check L774() else D285();
  L778():
    goto L154(r526);
  L780():
    p121 = prom<V +>{
      intersect3 = ldf intersect;
      p119 = prom<V +>{
        strict22 = ld strict;
        strict23 = force? strict22;
        checkMissing(strict23);
        return strict23;
      };
      p120 = prom<V +>{
        strict24 = ld strict0;
        strict25 = force? strict24;
        checkMissing(strict25);
        return strict25;
      };
      r529 = dyn intersect3(p119, p120);
      return r529;
    };
    r531 = dyn sort(p121);
    check L781() else D289();
  L807():
    weak8 = ld weak;
    check L809() else D298();
  L808():
    r545 = dyn base70(<lang `[`(weak, `&`(`!`(miss2), `==`(weak2, "ORPHANED")))>, <sym w2>);
    goto L163(r545);
  D277():
    deopt 1001 [];
  D283():
    deopt 1017 [strict17, r519, strict18];
  D285():
    deopt 1026 [r523];
  D289():
    deopt 1037 [r531];
  D298():
    deopt 1074 [weak8];
  L165(r553):
    c214 = `as.logical`(r553);
    if c214 then L821() else L166();
  L757():
    dx89 = getTryDispatchBuiltinValue(dr82);
    goto L754(db31, dx89);
  L760():
    p117 = prom<V +>{
      weak4 = ld weak;
      weak5 = force? weak4;
      checkMissing(weak5);
      c204 = `is.object`(weak5);
      if c204 then L1() else L2(weak5);
    L0(dx94):
      return dx94;
    L1():
      dr86 = tryDispatchBuiltin.1("[", weak5);
      dc43 = getTryDispatchBuiltinDispatched(dr86);
      if dc43 then L3() else L2(dr86);
    L2(weak7):
      miss7 = ld miss2;
      miss8 = force? miss7;
      __31 = ldf `[` in base;
      r511 = dyn __31(weak7, miss8);
      goto L0(r511);
    L3():
      dx93 = getTryDispatchBuiltinValue(dr86);
      goto L0(dx93);
    };
    p118 = prom<V +>{
      orphaned2 = ld orphaned;
      orphaned3 = force? orphaned2;
      checkMissing(orphaned3);
      return orphaned3;
    };
    r514 = dyn intersect2(p117, p118);
    check L761() else D278();
  L772():
    strict19 = force? strict18;
    checkMissing(strict19);
    r520 = `==`(strict19, "ORPHANED");
    r521 = `&&`(r519, r520);
    __32 = ldf `[` in base;
    r522 = dyn __32(strict17, r521);
    goto L153(r522);
  L774():
    goto L152(r523);
  L781():
    st strict0 = r531;
    sort1 = ldf sort;
    check L782() else D290();
  L809():
    weak9 = force? weak8;
    checkMissing(weak9);
    c212 = `is.object`(weak9);
    if c212 then L810() else L811(weak9);
  L817():
    weak14 = ld weak;
    check L819() else D303();
  L818():
    r552 = dyn base71(<sym weak>);
    goto L165(r552);
  D278():
    deopt 1004 [r514];
  D290():
    deopt 1040 [];
  D303():
    deopt 1091 [weak14];
  L164(dx102):
    w2 = ld w2;
    check L815() else D301();
  L166():
    goto L167(NULL);
  L167(r562):
    goto L168();
  L761():
    st w2 = r514;
    goto L151();
  L782():
    p124 = prom<V +>{
      setdiff16 = ldf setdiff;
      p122 = prom<V +>{
        strict26 = ld strict;
        strict27 = force? strict26;
        checkMissing(strict27);
        return strict27;
      };
      p123 = prom<V +>{
        strict28 = ld strict0;
        strict29 = force? strict28;
        checkMissing(strict29);
        return strict29;
      };
      r534 = dyn setdiff16(p122, p123);
      return r534;
    };
    r536 = dyn sort1(p124);
    check L783() else D291();
  L810():
    dr94 = tryDispatchBuiltin.1("[", weak9);
    dc47 = getTryDispatchBuiltinDispatched(dr94);
    if dc47 then L812() else L811(dr94);
  L811(weak11):
    miss11 = ld miss2;
    check L813() else D299();
  L819():
    weak15 = force? weak14;
    checkMissing(weak15);
    length31 = ldf length in base;
    r554 = dyn length31(weak15);
    check L820() else D304();
  L821():
    sort2 = ldf sort;
    check L822() else D305();
  D291():
    deopt 1042 [r536];
  D299():
    deopt 1076 [weak11, miss11];
  D301():
    deopt 1084 [w2];
  D304():
    deopt 1094 [r554];
  D305():
    deopt 1096 [];
  L783():
    st strict1 = r536;
    sym68 = ldf length;
    base68 = ldf length in base;
    guard68 = `==`.4(sym68, base68);
    if guard68 then L784() else L785();
  L812():
    dx101 = getTryDispatchBuiltinValue(dr94);
    goto L164(dx101);
  L813():
    miss12 = force? miss11;
    checkMissing(miss12);
    r547 = `!`(miss12);
    weak12 = ld weak2;
    check L814() else D300();
  L815():
    w3 = force? w2;
    checkMissing(w3);
    c213 = ldf c in base;
    r551 = dyn c213(dx102, w3);
    check L816() else D302();
  L820():
    goto L165(r554);
  L822():
    p125 = prom<V +>{
      weak16 = ld weak;
      weak17 = force? weak16;
      checkMissing(weak17);
      return weak17;
    };
    r556 = dyn sort2(p125);
    check L823() else D306();
  D300():
    deopt 1078 [weak11, r547, weak12];
  D302():
    deopt 1087 [r551];
  D306():
    deopt 1098 [r556];
  L156(r538):
    c208 = `as.logical`(r538);
    if c208 then L788() else L157();
  L784():
    strict30 = ld strict0;
    check L786() else D292();
  L785():
    r537 = dyn base68(<sym strict0>);
    goto L156(r537);
  L814():
    weak13 = force? weak12;
    checkMissing(weak13);
    r548 = `==`(weak13, "ORPHANED");
    r549 = `&&`(r547, r548);
    __33 = ldf `[` in base;
    r550 = dyn __33(weak11, r549);
    goto L164(r550);
  L816():
    goto L163(r551);
  L823():
    l59 = ld bad_depends;
    c215 = `is.object`(l59);
    if c215 then L825() else L826(r556, l59);
  D292():
    deopt 1046 [strict30];
  L157():
    goto L158();
  L158():
    sym69 = ldf length;
    base69 = ldf length in base;
    guard69 = `==`.4(sym69, base69);
    if guard69 then L795() else L796();
  L786():
    strict31 = force? strict30;
    checkMissing(strict31);
    length29 = ldf length in base;
    r539 = dyn length29(strict31);
    check L787() else D293();
  L788():
    strict32 = ld strict0;
    check L789() else D294();
  L824(r560, dx104):
    st bad_depends = dx104;
    goto L167(r560);
  L825():
    dr96 = tryDispatchBuiltin.0("$<-", l59, r556);
    dc48 = getTryDispatchBuiltinDispatched(dr96);
    if dc48 then L827() else L826(r556, dr96);
  L826(r558, l61):
    r561 = `$<-`(l61, <sym orphaned2>, r556);
    goto L824(r558, r561);
  D293():
    deopt 1049 [r539];
  D294():
    deopt 1050 [strict32];
  L159(r542):
    c210 = `as.logical`(r542);
    if c210 then L799() else L160();
  L787():
    goto L156(r539);
  L789():
    strict33 = force? strict32;
    checkMissing(strict33);
    l53 = ld bad_depends;
    c209 = `is.object`(l53);
    if c209 then L791() else L792(strict33, l53);
  L795():
    strict39 = ld strict1;
    check L797() else D295();
  L796():
    r541 = dyn base69(<sym strict1>);
    goto L159(r541);
  L827():
    dx103 = getTryDispatchBuiltinValue(dr96);
    goto L824(r556, dx103);
  D295():
    deopt 1059 [strict39];
  L160():
    goto L161(NULL);
  L161(strict47):
    goto L162();
  L790(strict37, dx98):
    st bad_depends = dx98;
    goto L158();
  L791():
    dr90 = tryDispatchBuiltin.0("$<-", l53, strict33);
    dc45 = getTryDispatchBuiltinDispatched(dr90);
    if dc45 then L793() else L792(strict33, dr90);
  L792(strict35, l55):
    r540 = `$<-`(l55, <sym orphaned>, strict33);
    goto L790(strict35, r540);
  L797():
    strict40 = force? strict39;
    checkMissing(strict40);
    length30 = ldf length in base;
    r543 = dyn length30(strict40);
    check L798() else D296();
  L799():
    strict41 = ld strict1;
    check L800() else D297();
  D296():
    deopt 1062 [r543];
  D297():
    deopt 1063 [strict41];
  L793():
    dx97 = getTryDispatchBuiltinValue(dr90);
    goto L790(strict33, dx97);
  L798():
    goto L159(r543);
  L800():
    strict42 = force? strict41;
    checkMissing(strict42);
    l56 = ld bad_depends;
    c211 = `is.object`(l56);
    if c211 then L802() else L803(strict42, l56);
  L801(strict46, dx100):
    st bad_depends = dx100;
    goto L161(strict46);
  L802():
    dr92 = tryDispatchBuiltin.0("$<-", l56, strict42);
    dc46 = getTryDispatchBuiltinDispatched(dr92);
    if dc46 then L804() else L803(strict42, dr92);
  L803(strict44, l58):
    r544 = `$<-`(l58, <sym orphaned1>, strict42);
    goto L801(strict44, r544);
  L804():
    dx99 = getTryDispatchBuiltinValue(dr92);
    goto L801(strict42, dx99);
  }
}
fun inner2124972465(db, available, dependencies) {
  (reg db:*, reg available:*, reg dependencies:*) -+> V { var db:*, var available:*, reg available_isMissing:L, reg available_orDefault:*, reg __:cls, reg r:V, reg r1:cls, reg r2:V, reg p:p(V +), var dependencies:*, reg dependencies_isMissing:L, reg dependencies_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r4:V, reg r5:V, reg c:cls, reg r6:V, reg p1:p(V +), reg db1:*, reg db2:V, reg c1:L, reg db4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg dependencies1:*, reg dependencies2:V, reg __1:cls, reg r8:V, reg dependencies3:*, reg dependencies4:V, reg l:*, reg names__:cls, reg r9:V, reg ___:cls, reg r10:V, reg r11:cls, reg this:*, reg this1:V, reg p2:p(V +), reg r13:V, reg available1:*, reg available2:V, reg c2:L, reg available4:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg dependencies5:*, reg dependencies6:V, reg __2:cls, reg r14:V, reg rownames:cls, reg info:*, reg info1:V, reg p3:p(V +), reg r16:V, reg r17:cls, reg known:*, reg known1:V, reg unlist:cls, reg lapply:cls, reg extra:*, reg extra1:V, reg p4:p(V +), reg deps:*, reg deps1:V, reg p5:p(V +), reg r20:V, reg p6:p(V +), reg r22:V, reg setdiff:cls, reg extra2:*, reg extra3:V, reg p7:p(V +), reg known2:*, reg known3:V, reg p8:p(V +), reg r25:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r26:V, reg r27:V, reg extra4:*, reg extra5:V, reg length:cls, reg r28:V, reg r29:V, reg c3:L, reg sym2:cls, reg base2:cls, reg guard2:L, reg r31:V, reg r32:V, reg known4:*, reg known5:V, reg extra6:*, reg extra7:V, reg c4:cls, reg r33:V, reg known6:*, reg known7:V |
    mkenv;
    st db = db;
    available_isMissing = missing.0(available);
    if available_isMissing then L0() else L1(available);
  L0():
    p = prom<V +>{
      __ = ldf `::`;
      r = dyn __("utils", "available.packages");
      checkFun.0(r);
      r1 = r as cls;
      r2 = dyn r1();
      return r2;
    };
    goto L1(p);
  L1(available_orDefault):
    st available = available_orDefault;
    dependencies_isMissing = missing.0(dependencies);
    if dependencies_isMissing then L2() else L3(dependencies);
  L2():
    p1 = prom<V +>{
      sym = ldf c;
      base = ldf c in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r5):
      return r5;
    L1():
      c = ldf c in base;
      r6 = dyn c("Depends", "Imports", "LinkingTo");
      goto L0(r6);
    L2():
      r4 = dyn base("Depends", "Imports", "LinkingTo");
      goto L0(r4);
    };
    goto L3(p1);
  L3(dependencies_orDefault):
    st dependencies = dependencies_orDefault;
    db1 = ld db;
    check L12() else D0();
  D0():
    deopt 0 [db1];
  L12():
    db2 = force? db1;
    checkMissing(db2);
    c1 = `is.object`(db2);
    if c1 then L13() else L14(db2);
  L4(dx1):
    st this = dx1;
    dependencies3 = ld dependencies;
    check L17() else D2();
  L13():
    dr = tryDispatchBuiltin.1("[", db2);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L15() else L14(dr);
  L14(db4):
    dependencies1 = ld dependencies;
    check L16() else D1();
  D1():
    deopt 2 [db4, dependencies1];
  D2():
    deopt 6 [dependencies3];
  L15():
    dx = getTryDispatchBuiltinValue(dr);
    goto L4(dx);
  L16():
    dependencies2 = force? dependencies1;
    __1 = ldf `[` in base;
    r8 = dyn __1(db4, dependencies2);
    goto L4(r8);
  L17():
    dependencies4 = force? dependencies3;
    checkMissing(dependencies4);
    l = ld this;
    names__ = ldf `names<-`;
    check L18() else D3();
  D3():
    deopt 9 [dependencies4, l, dependencies4];
  L18():
    r9 = dyn names__(l, NULL, dependencies4);
    check L19() else D4();
  D4():
    deopt 11 [dependencies4, r9];
  L19():
    st this = r9;
    ___ = ldf `:::`;
    check L20() else D5();
  D5():
    deopt 14 [];
  L20():
    r10 = dyn ___("utils", ".clean_up_dependencies");
    check L21() else D6();
  D6():
    deopt 17 [r10];
  L21():
    checkFun.0(r10);
    r11 = r10 as cls;
    p2 = prom<V +>{
      this = ld this;
      this1 = force? this;
      checkMissing(this1);
      return this1;
    };
    r13 = dyn r11(p2);
    check L22() else D7();
  D7():
    deopt 20 [r13];
  L22():
    st known = r13;
    available1 = ld available;
    check L23() else D8();
  D8():
    deopt 22 [available1];
  L23():
    available2 = force? available1;
    checkMissing(available2);
    c2 = `is.object`(available2);
    if c2 then L24() else L25(available2);
  L5(dx3):
    st info = dx3;
    rownames = ldf rownames;
    check L28() else D10();
  L24():
    dr2 = tryDispatchBuiltin.1("[", available2);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L26() else L25(dr2);
  L25(available4):
    dependencies5 = ld dependencies;
    check L27() else D9();
  D9():
    deopt 25 [available4, dependencies5];
  D10():
    deopt 33 [];
  L26():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L5(dx2);
  L27():
    dependencies6 = force? dependencies5;
    __2 = ldf `[` in base;
    r14 = dyn __2(available2, <missing>, dependencies6, FALSE);
    goto L5(r14);
  L28():
    p3 = prom<V +>{
      info = ld info;
      info1 = force? info;
      checkMissing(info1);
      return info1;
    };
    r16 = dyn rownames(p3);
    check L29() else D11();
  D11():
    deopt 35 [r16];
  L29():
    st rn = r16;
    r17 = clos inner3913899244;
    st deps = r17;
    known = ld known;
    check L30() else D12();
  D12():
    deopt 40 [known];
  L30():
    known1 = force? known;
    checkMissing(known1);
    st extra = known1;
    goto L11();
  L11():
    unlist = ldf unlist;
    check L31() else D13();
  D13():
    deopt 44 [];
  L31():
    p6 = prom<V +>{
      lapply = ldf lapply;
      p4 = prom<V +>{
        extra = ld extra;
        extra1 = force? extra;
        checkMissing(extra1);
        return extra1;
      };
      p5 = prom<V +>{
        deps = ld deps;
        deps1 = force? deps;
        checkMissing(deps1);
        return deps1;
      };
      r20 = dyn lapply(p4, p5);
      return r20;
    };
    r22 = dyn unlist(p6);
    check L32() else D14();
  D14():
    deopt 46 [r22];
  L32():
    st extra = r22;
    setdiff = ldf setdiff;
    check L33() else D15();
  D15():
    deopt 49 [];
  L33():
    p7 = prom<V +>{
      extra2 = ld extra;
      extra3 = force? extra2;
      checkMissing(extra3);
      return extra3;
    };
    p8 = prom<V +>{
      known2 = ld known;
      known3 = force? known2;
      checkMissing(known3);
      return known3;
    };
    r25 = dyn setdiff(p7, p8);
    check L34() else D16();
  D16():
    deopt 52 [r25];
  L34():
    st extra = r25;
    sym1 = ldf length;
    base1 = ldf length in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L35() else L36();
  L6(r27):
    r29 = `!`(r27);
    c3 = `as.logical`(r29);
    if c3 then L39() else L7();
  L35():
    extra4 = ld extra;
    check L37() else D17();
  L36():
    r26 = dyn base1(<sym extra>);
    goto L6(r26);
  D17():
    deopt 56 [extra4];
  L7():
    sym2 = ldf c;
    base2 = ldf c in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L42() else L43();
  L37():
    extra5 = force? extra4;
    checkMissing(extra5);
    length = ldf length in base;
    r28 = dyn length(extra5);
    check L38() else D18();
  L39():
    known6 = ld known;
    check L48() else D22();
  D18():
    deopt 59 [r28];
  D22():
    deopt 77 [known6];
  L10(r32):
    st known = r32;
    goto L11();
  L38():
    goto L6(r28);
  L42():
    known4 = ld known;
    check L44() else D19();
  L43():
    r31 = dyn base2(<sym known>, <sym extra>);
    goto L10(r31);
  L48():
    known7 = force? known6;
    checkMissing(known7);
    popenv;
    return known7;
  D19():
    deopt 67 [known4];
  L44():
    known5 = force? known4;
    checkMissing(known5);
    extra6 = ld extra;
    check L45() else D20();
  D20():
    deopt 69 [extra6];
  L45():
    extra7 = force? extra6;
    checkMissing(extra7);
    c4 = ldf c in base;
    r33 = dyn c4(known5, extra7);
    check L46() else D21();
  D21():
    deopt 72 [r33];
  L46():
    goto L10(r33);
  }
}
fun inner3913899244(p) {
  (reg p:*) -+> V { var p:*, reg _notin_:cls, reg p1:*, reg p2:V, reg p3:p(V +), reg rn:*, reg rn1:V, reg p4:p(V +), reg r2:V, reg c:L, reg character:cls, reg r3:V, reg ___:cls, reg r6:V, reg r7:cls, reg info:*, reg info1:V, reg c1:L, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg p5:*, reg p6:V, reg __:cls, reg r8:V, reg p7:p(V +), reg r10:V |
    mkenv;
    st p = p;
    _notin_ = ldf `%notin%`;
    check L2() else D0();
  D0():
    deopt 1 [];
  L2():
    p3 = prom<V +>{
      p1 = ld p;
      p2 = force? p1;
      checkMissing(p2);
      return p2;
    };
    p4 = prom<V +>{
      rn = ld rn;
      rn1 = force? rn;
      checkMissing(rn1);
      return rn1;
    };
    r2 = dyn _notin_(p3, p4);
    check L3() else D1();
  D1():
    deopt 4 [r2];
  L3():
    c = `as.logical`(r2);
    if c then L4() else L0();
  L0():
    ___ = ldf `:::`;
    check L9() else D4();
  L4():
    character = ldf character;
    check L5() else D2();
  D2():
    deopt 6 [];
  D4():
    deopt 12 [];
  L5():
    r3 = dyn character();
    check L6() else D3();
  L9():
    r6 = dyn ___("utils", ".clean_up_dependencies");
    check L10() else D5();
  D3():
    deopt 7 [r3];
  D5():
    deopt 15 [r6];
  L6():
    popenv;
    return r3;
  L10():
    checkFun.0(r6);
    r7 = r6 as cls;
    p7 = prom<V +>{
      info = ld info;
      info1 = force? info;
      checkMissing(info1);
      c1 = `is.object`(info1);
      if c1 then L1() else L2();
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("[", info1);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2();
    L2():
      p5 = ld p;
      p6 = force? p5;
      __ = ldf `[` in base;
      r8 = dyn __(info1, p6, <missing>);
      goto L0(r8);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    r10 = dyn r7(p7);
    check L11() else D6();
  D6():
    deopt 18 [r10];
  L11():
    popenv;
    return r10;
  }
}
fun inner2501545716(x) {
  (reg x:*) -+> V { var x:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg x1:*, reg x2:V, reg length:cls, reg r2:V, reg r3:V |
    mkenv;
    st x = x;
    sym = ldf length;
    base = ldf length in base;
    guard = `==`.4(sym, base);
    if guard then L1() else L2();
  L0(r1):
    r3 = `==`(r1, 3);
    popenv;
    return r3;
  L1():
    x1 = ld x;
    check L3() else D0();
  L2():
    r = dyn base(<sym x>);
    goto L0(r);
  D0():
    deopt 2 [x1];
  L3():
    x2 = force? x1;
    checkMissing(x2);
    length = ldf length in base;
    r2 = dyn length(x2);
    check L4() else D1();
  D1():
    deopt 5 [r2];
  L4():
    goto L0(r2);
  }
}