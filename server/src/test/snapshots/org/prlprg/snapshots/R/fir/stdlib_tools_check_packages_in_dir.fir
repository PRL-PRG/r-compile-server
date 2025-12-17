fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2250748955;
    st check_packages_in_dir = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2250748955(dir, pfiles, check_args, check_args_db, reverse, check_env, xvfb, Ncpus, clean, install_args, parallel_args, `...`) {
  (reg dir:*, reg pfiles:*, reg check_args:*, reg check_args_db:*, reg reverse:*, reg check_env:*, reg xvfb:*, reg Ncpus:*, reg clean:*, reg install_args:*, reg parallel_args:*, reg ddd:dots) -+> V { var dir:*, var pfiles:*, reg pfiles_isMissing:L, reg pfiles_orDefault:*, reg Sys_glob:cls, reg r:V, reg p:p(V +), var check_args:*, reg check_args_isMissing:L, reg check_args_orDefault:*, reg character:cls, reg r2:V, reg p1:p(V +), var check_args_db:*, reg check_args_db_isMissing:L, reg check_args_db_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r4:V, reg r5:V, reg list:cls, reg r6:V, reg p2:p(V +), var reverse:*, reg reverse_isMissing:L, reg reverse_orDefault:*, var check_env:*, reg check_env_isMissing:L, reg check_env_orDefault:*, reg character1:cls, reg r8:V, reg p3:p(V +), var xvfb:*, reg xvfb_isMissing:L, reg xvfb_orDefault:*, var Ncpus:*, reg Ncpus_isMissing:L, reg Ncpus_orDefault:*, reg getOption:cls, reg r10:V, reg p4:p(V +), var clean:*, reg clean_isMissing:L, reg clean_orDefault:*, var install_args:*, reg install_args_isMissing:L, reg install_args_orDefault:*, reg sym1:cls, reg base1:cls, reg guard1:L, reg r12:V, reg r13:V, reg list1:cls, reg r14:V, reg p5:p(V +), var parallel_args:*, reg parallel_args_isMissing:L, reg parallel_args_orDefault:*, reg sym2:cls, reg base2:cls, reg guard2:L, reg r16:V, reg r17:V, reg list2:cls, reg r18:V, reg p6:p(V +), var `...`:dots?, reg getwd:cls, reg r20:V, reg normalizePath:cls, reg dir1:*, reg dir2:V, reg p7:p(V +), reg r22:V, reg setwd:cls, reg dir3:*, reg dir4:V, reg p8:p(V +), reg r24:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r25:V, reg on_exit:cls, reg r27:V, reg r28:cls, reg sym4:cls, reg base4:cls, reg guard4:L, reg r29:V, reg r30:V, reg pfiles1:*, reg pfiles2:V, reg length:cls, reg r31:V, reg r32:V, reg c:L, reg message:cls, reg r33:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r34:V, reg r35:V, reg _check_packages_in_dir_retval:cls, reg dir5:*, reg dir6:V, reg p9:p(V +), reg pfiles3:*, reg pfiles4:V, reg p10:p(V +), reg r38:V, reg invisible:cls, reg r39:V, reg sub:cls, reg pfiles5:*, reg pfiles6:V, reg p11:p(V +), reg r43:V, reg _Platform:*, reg _Platform1:V, reg c1:L, reg _Platform3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r44:V, reg os_type:*, reg os_type1:V, reg r45:V, reg c2:L, reg sym6:cls, reg base6:cls, reg guard6:L, reg r47:V, reg r48:V, reg xvfb1:*, reg xvfb2:V, reg c3:L, reg c4:L, reg isTRUE:cls, reg xvfb3:*, reg xvfb4:V, reg p12:p(V +), reg r50:V, reg r51:V, reg c5:L, reg r52:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r53:V, reg r54:V, reg xvfb5:*, reg xvfb6:V, reg as_character:cls, reg r55:V, reg os_type2:*, reg os_type3:V, reg r56:V, reg c6:L, reg sprintf:cls, reg dir7:*, reg dir8:V, reg p13:p(V +), reg r58:V, reg r59:V, reg sprintf1:cls, reg dir9:*, reg dir10:V, reg p14:p(V +), reg r61:V, reg file_path:cls, reg dir11:*, reg dir12:V, reg p15:p(V +), reg r63:V, reg dir_create:cls, reg libdir:*, reg libdir1:V, reg p16:p(V +), reg r65:V, reg file_path1:cls, reg dir13:*, reg dir14:V, reg p17:p(V +), reg r67:V, reg dir_create1:cls, reg outdir:*, reg outdir1:V, reg p18:p(V +), reg r69:V, reg character2:cls, reg r70:V, reg character3:cls, reg r71:V, reg as_list:cls, reg check_args_db1:*, reg check_args_db2:V, reg p19:p(V +), reg r73:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r74:V, reg r75:V, reg check_args_db3:*, reg check_args_db4:V, reg length1:cls, reg r76:V, reg c7:L, reg c9:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r77:V, reg c12:L, reg r78:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r79:V, reg c15:L, reg r80:V, reg check_args_db5:*, reg check_args_db6:V, reg names:cls, reg r81:V, reg c16:V, reg r82:V, reg c17:L, reg c18:V, reg c20:L, reg lapply:cls, reg check_args_db7:*, reg check_args_db8:V, reg p20:p(V +), reg r84:cls, reg p21:p(V +), reg r86:V, reg nms:*, reg nms1:V, reg c21:L, reg nms3:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg vapply:cls, reg args:*, reg args1:V, reg p22:p(V +), reg r88:cls, reg p23:p(V +), reg r90:V, reg __:cls, reg r91:V, reg nms4:*, reg nms5:V, reg c22:L, reg nms7:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg vapply1:cls, reg args2:*, reg args3:V, reg p24:p(V +), reg r93:cls, reg p25:p(V +), reg r95:V, reg __1:cls, reg r96:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r97:V, reg r98:V, reg list3:cls, reg r99:V, reg write_PACKAGES:cls, reg dir15:*, reg dir16:V, reg p26:p(V +), reg r101:V, reg dir_exists:cls, reg file_path2:cls, reg dir17:*, reg dir18:V, reg p27:p(V +), reg r103:V, reg p28:p(V +), reg r105:V, reg c23:L, reg write_PACKAGES1:cls, reg depdir:*, reg depdir1:V, reg p29:p(V +), reg r107:V, reg sym12:cls, reg base12:cls, reg guard12:L, reg r108:V, reg r109:V, reg curl:*, reg curl1:V, reg paste0:cls, reg curl2:*, reg curl3:V, reg p30:p(V +), reg r111:V, reg c24:cls, reg r112:V, reg __2:cls, reg r114:V, reg r115:cls, reg curl4:*, reg curl5:V, reg p31:p(V +), reg r117:V, reg __3:cls, reg r118:V, reg r119:cls, reg getOption1:cls, reg r120:V, reg p32:p(V +), reg r122:V, reg __4:cls, reg r123:V, reg r124:cls, reg curls:*, reg curls1:V, reg p33:p(V +), reg r126:V, reg rbind:cls, reg localones:*, reg localones1:V, reg p34:p(V +), reg available:*, reg available1:V, reg p35:p(V +), reg r129:V, reg available2:*, reg available3:V, reg c25:L, reg available5:V, reg dr6:V, reg dc3:L, reg dx7:V, reg dx8:V, reg duplicated:cls, reg available6:*, reg available7:V, reg c26:L, reg dr8:V, reg dc4:L, reg dx9:V, reg dx10:V, reg __5:cls, reg r130:V, reg p36:p(V +), reg r132:V, reg r133:V, reg __6:cls, reg r134:V, reg sym13:cls, reg base13:cls, reg guard13:L, reg r135:V, reg r136:V, reg curl6:*, reg curl7:V, reg curls2:*, reg curls3:V, reg c27:cls, reg r137:V, reg sym14:cls, reg base14:cls, reg guard14:L, reg r138:V, reg r139:V, reg pnames_using_install_no:*, reg pnames_using_install_no1:V, reg setdiff:cls, reg pnames_using_install_fake:*, reg pnames_using_install_fake1:V, reg p37:p(V +), reg available10:*, reg available11:V, reg c28:L, reg dr10:V, reg dc5:L, reg dx11:V, reg dx12:V, reg __7:cls, reg r141:V, reg p38:p(V +), reg r143:V, reg c29:cls, reg r144:V, reg intersect:cls, reg pnames_using_install_fake2:*, reg pnames_using_install_fake3:V, reg p39:p(V +), reg available14:*, reg available15:V, reg c30:L, reg dr12:V, reg dc6:L, reg dx13:V, reg dx14:V, reg __8:cls, reg r146:V, reg p40:p(V +), reg r148:V, reg sym15:cls, reg base15:cls, reg guard15:L, reg r149:V, reg r150:V, reg reverse1:*, reg reverse2:V, reg c31:V, reg r151:V, reg c32:L, reg c34:V, reg isFALSE:cls, reg reverse3:*, reg reverse4:V, reg p41:p(V +), reg r153:V, reg r154:V, reg c35:L, reg c36:V, reg c38:L, reg sym16:cls, reg base16:cls, reg guard16:L, reg r155:V, reg r156:V, reg sym17:cls, reg base17:cls, reg guard17:L, reg r157:V, reg r158:V, reg c39:cls, reg r159:V, reg getOption2:cls, reg r160:V, reg list4:cls, reg r161:V, reg sym18:cls, reg base18:cls, reg guard18:L, reg r162:V, reg r163:V, reg reverse5:*, reg reverse6:V, reg c40:L, reg r164:V, reg c41:L, reg as_list1:cls, reg reverse7:*, reg reverse8:V, reg p42:p(V +), reg r166:V, reg pmatch:cls, reg sym19:cls, reg base19:cls, reg guard19:L, reg r167:V, reg r168:V, reg reverse9:*, reg reverse10:V, reg names1:cls, reg r169:V, reg p43:p(V +), reg sym20:cls, reg base20:cls, reg guard20:L, reg r171:V, reg r172:V, reg defaults:*, reg defaults1:V, reg names2:cls, reg r173:V, reg p44:p(V +), reg r175:V, reg reverse11:*, reg reverse12:V, reg c42:L, reg reverse14:V, reg dr14:V, reg dc7:L, reg dx15:V, reg dx16:V, reg pos:*, reg pos1:V, reg r176:V, reg __9:cls, reg r177:V, reg l:*, reg c43:L, reg dx18:V, reg l2:*, reg dr16:V, reg dc8:L, reg dx20:V, reg dx21:V, reg dx22:V, reg pos2:*, reg pos3:V, reg ___:cls, reg r178:V, reg sym21:cls, reg base21:cls, reg guard21:L, reg r179:V, reg r180:V, reg defaults2:*, reg defaults3:V, reg c44:L, reg defaults5:V, reg dr18:V, reg dc9:L, reg dx24:V, reg dx25:V, reg r181:V, reg getOption3:cls, reg r182:V, reg identical:cls, reg r183:V, reg r184:V, reg subset_reverse_repos:*, reg subset_reverse_repos1:V, reg c45:L, reg c47:V, reg sym22:cls, reg base22:cls, reg guard22:L, reg r185:V, reg c50:L, reg r186:V, reg _in_:cls, reg defaults6:*, reg defaults7:V, reg c51:L, reg defaults9:V, reg dr20:V, reg dc10:L, reg dx26:V, reg dx27:V, reg r187:V, reg p45:p(V +), reg getOption4:cls, reg r189:V, reg p46:p(V +), reg r191:V, reg all:cls, reg r192:V, reg r193:V, reg c52:L, reg c53:V, reg c55:L, reg stop:cls, reg r194:V, reg sym23:cls, reg base23:cls, reg guard23:L, reg r196:V, reg r197:V, reg reverse15:*, reg reverse16:V, reg c56:L, reg c57:L, reg reverse17:*, reg reverse18:V, reg reverse19:V, reg sym24:cls, reg base24:cls, reg guard24:L, reg r198:V, reg r199:V, reg defaults10:*, reg defaults11:V, reg c58:L, reg defaults13:V, reg dr22:V, reg dc11:L, reg dx28:V, reg dx29:V, reg r200:V, reg is_list:cls, reg r201:V, reg c59:L, reg sym25:cls, reg base25:cls, reg guard25:L, reg r202:V, reg r203:V, reg as_list2:cls, reg defaults14:*, reg defaults15:V, reg c60:L, reg defaults17:V, reg dr24:V, reg dc12:L, reg dx30:V, reg dx31:V, reg r204:V, reg p47:p(V +), reg r206:V, reg sym26:cls, reg base26:cls, reg guard26:L, reg r207:V, reg r208:V, reg defaults18:*, reg defaults19:V, reg c61:L, reg defaults21:V, reg dr26:V, reg dc13:L, reg dx32:V, reg dx33:V, reg r209:V, reg length2:cls, reg r210:V, reg rep_len:cls, reg r211:V, reg l3:*, reg c62:L, reg r213:V, reg l5:*, reg dr28:V, reg dc14:L, reg dx34:V, reg dx35:V, reg r216:V, reg unlist:cls, reg Map:cls, reg r217:cls, reg p48:p(V +), reg defaults22:*, reg defaults23:V, reg c63:L, reg defaults25:V, reg dr30:V, reg dc15:L, reg dx36:V, reg dx37:V, reg r219:V, reg p49:p(V +), reg defaults26:*, reg defaults27:V, reg c64:L, reg defaults29:V, reg dr32:V, reg dc16:L, reg dx38:V, reg dx39:V, reg r221:V, reg p50:p(V +), reg r223:V, reg p51:p(V +), reg r225:V, reg package_dependencies:cls, reg setdiff1:cls, reg pnames:*, reg pnames1:V, reg p52:p(V +), reg pnames_using_install_no2:*, reg pnames_using_install_no3:V, reg p53:p(V +), reg r228:V, reg p54:p(V +), reg available18:*, reg available19:V, reg p55:p(V +), reg defaults30:*, reg defaults31:V, reg c65:L, reg defaults33:V, reg dr34:V, reg dc17:L, reg dx40:V, reg dx41:V, reg r231:V, reg p56:p(V +), reg defaults34:*, reg defaults35:V, reg c66:L, reg defaults37:V, reg dr36:V, reg dc18:L, reg dx42:V, reg dx43:V, reg r233:V, reg p57:p(V +), reg r235:V, reg config_val_to_logical:cls, reg Sys_getenv:cls, reg r236:V, reg p58:p(V +), reg r238:V, reg add_recommended_maybe:*, reg add_recommended_maybe1:V, reg c67:L, reg sym27:cls, reg base27:cls, reg guard27:L, reg r239:V, reg r240:V, reg rnames:*, reg rnames1:V, reg sym28:cls, reg base28:cls, reg guard28:L, reg r241:V, reg r242:V, reg Filter:cls, reg length3:*, reg length4:V, reg p59:p(V +), reg lapply1:cls, reg package_dependencies1:cls, reg _get_standard_package_names:cls, reg r244:V, reg c68:L, reg r246:V, reg dr38:V, reg dc19:L, reg dx44:V, reg dx45:V, reg r247:V, reg p60:p(V +), reg available20:*, reg available21:V, reg p61:p(V +), reg r250:V, reg p62:p(V +), reg intersect1:*, reg intersect2:V, reg p63:p(V +), reg pnames2:*, reg pnames3:V, reg p64:p(V +), reg r254:V, reg p65:p(V +), reg r256:V, reg names3:cls, reg r257:V, reg c69:cls, reg r258:V, reg intersect3:cls, reg unlist1:cls, reg rnames2:*, reg rnames3:V, reg p66:p(V +), reg r261:V, reg p67:p(V +), reg available22:*, reg available23:V, reg c70:L, reg dr40:V, reg dc20:L, reg dx46:V, reg dx47:V, reg __10:cls, reg r263:V, reg p68:p(V +), reg r265:V, reg setdiff2:cls, reg rnames4:*, reg rnames5:V, reg p69:p(V +), reg pnames4:*, reg pnames5:V, reg p70:p(V +), reg r268:V, reg sym29:cls, reg base29:cls, reg guard29:L, reg r269:V, reg r270:V, reg rnames6:*, reg rnames7:V, reg available26:*, reg available27:V, reg c71:L, reg dr42:V, reg dc21:L, reg dx48:V, reg dx49:V, reg __11:cls, reg r271:V, reg match:cls, reg r272:V, reg subset_reverse_repos2:*, reg subset_reverse_repos3:V, reg c72:L, reg split:cls, reg pos4:*, reg pos5:V, reg c73:L, reg pos7:V, reg dr44:V, reg dc22:L, reg dx50:V, reg dx51:V, reg pos8:*, reg pos9:V, reg r273:V, reg __12:cls, reg r274:V, reg p71:p(V +), reg available30:*, reg available31:V, reg c74:L, reg available33:V, reg dr46:V, reg dc23:L, reg dx52:V, reg dx53:V, reg pos10:*, reg pos11:V, reg __13:cls, reg r276:V, reg p72:p(V +), reg r278:V, reg sym30:cls, reg base30:cls, reg guard30:L, reg r279:V, reg r280:V, reg pos12:*, reg pos13:V, reg names4:cls, reg r281:V, reg rowSums:cls, reg outer:cls, reg nms8:*, reg nms9:V, reg p73:p(V +), reg defaults38:*, reg defaults39:V, reg c75:L, reg defaults41:V, reg dr48:V, reg dc24:L, reg dx54:V, reg dx55:V, reg r283:V, reg p74:p(V +), reg startsWith:*, reg startsWith1:V, reg p75:p(V +), reg r286:V, reg p76:p(V +), reg r288:V, reg r289:V, reg unlist2:cls, reg pos14:*, reg pos15:V, reg c76:L, reg pos17:V, reg dr50:V, reg dc25:L, reg dx56:V, reg dx57:V, reg ind:*, reg ind1:V, reg __14:cls, reg r290:V, reg p77:p(V +), reg r292:V, reg available34:*, reg available35:V, reg c77:L, reg available37:V, reg dr52:V, reg dc26:L, reg dx58:V, reg dx59:V, reg pos18:*, reg pos19:V, reg __15:cls, reg r294:V, reg sprintf2:cls, reg rnames8:*, reg rnames9:V, reg p78:p(V +), reg available38:*, reg available39:V, reg c78:L, reg available41:V, reg dr54:V, reg dc27:L, reg dx60:V, reg dx61:V, reg pos20:*, reg pos21:V, reg __16:cls, reg r296:V, reg p79:p(V +), reg r298:V, reg sym31:cls, reg base31:cls, reg guard31:L, reg r299:V, reg r300:V, reg rfiles:*, reg rfiles1:V, reg length5:cls, reg r301:V, reg c79:L, reg message1:cls, reg r302:V, reg sprintf3:cls, reg available42:*, reg available43:V, reg c80:L, reg available45:V, reg dr56:V, reg dc28:L, reg dx62:V, reg dx63:V, reg pos22:*, reg pos23:V, reg __17:cls, reg r303:V, reg p80:p(V +), reg rfiles2:*, reg rfiles3:V, reg p81:p(V +), reg r306:V, reg sym32:cls, reg base32:cls, reg guard32:L, reg r307:V, reg r308:V, reg rfiles4:*, reg rfiles5:V, reg r309:I, reg s:V, reg l6:I, reg i:I, reg i1:I, reg i2:I, reg c81:L, reg x:V, reg message2:cls, reg sprintf4:cls, reg rfiles6:*, reg rfiles7:V, reg c82:L, reg rfiles9:V, reg dr58:V, reg dc29:L, reg dx64:V, reg dx65:V, reg i5:*, reg i6:V, reg __18:cls, reg r310:V, reg p82:p(V +), reg r312:V, reg p83:p(V +), reg r314:V, reg __19:cls, reg r315:V, reg r316:cls, reg rfurls:*, reg rfurls1:V, reg c83:L, reg rfurls3:V, reg dr60:V, reg dc30:L, reg dx66:V, reg dx67:V, reg i7:*, reg i8:V, reg __20:cls, reg r317:V, reg p84:p(V +), reg rfiles10:*, reg rfiles11:V, reg c84:L, reg rfiles13:V, reg dr62:V, reg dc31:L, reg dx68:V, reg dx69:V, reg i9:*, reg i10:V, reg __21:cls, reg r319:V, reg p85:p(V +), reg r321:V, reg r322:V, reg c85:L, reg i13:I, reg r323:S, reg message3:cls, reg status:*, reg status1:V, reg p86:p(V +), reg r325:V, reg message4:cls, reg r326:V, reg r327:V, reg character4:cls, reg r329:V, reg sym33:cls, reg base33:cls, reg guard33:L, reg r330:V, reg r331:V, reg pnames6:*, reg pnames7:V, reg rnames10:*, reg rnames11:V, reg c86:cls, reg r332:V, reg xvfb7:*, reg xvfb8:V, reg c87:L, reg start_virtual_X11_fb:cls, reg xvfb_options:*, reg xvfb_options1:V, reg p87:p(V +), reg r334:V, reg sym34:cls, reg base34:cls, reg guard34:L, reg r335:V, reg r336:V, reg on_exit1:cls, reg r337:V, reg package_dependencies2:cls, reg pnames8:*, reg pnames9:V, reg p88:p(V +), reg available46:*, reg available47:V, reg p89:p(V +), reg r341:V, reg setdiff3:cls, reg unique:cls, reg unlist3:cls, reg depends:*, reg depends1:V, reg p90:p(V +), reg r343:V, reg p91:p(V +), reg r345:V, reg p92:p(V +), reg _get_standard_package_names1:cls, reg r347:V, reg c88:L, reg r349:V, reg dr64:V, reg dc32:L, reg dx70:V, reg dx71:V, reg r350:V, reg p93:p(V +), reg r352:V, reg sym35:cls, reg base35:cls, reg guard35:L, reg r353:V, reg r354:V, reg libdir2:*, reg libdir3:V, reg _libPaths:cls, reg r355:V, reg c89:cls, reg r356:V, reg __22:cls, reg r357:V, reg r358:cls, reg libs:*, reg libs1:V, reg p94:p(V +), reg r360:V, reg installed:*, reg installed1:V, reg c90:L, reg installed3:V, reg dr66:V, reg dc33:L, reg dx72:V, reg dx73:V, reg duplicated1:cls, reg installed4:*, reg installed5:V, reg c91:L, reg dr68:V, reg dc34:L, reg dx74:V, reg dx75:V, reg __23:cls, reg r361:V, reg p95:p(V +), reg r363:V, reg r364:V, reg __24:cls, reg r365:V, reg __25:cls, reg r366:V, reg r367:cls, reg installed8:*, reg installed9:V, reg p96:p(V +), reg available48:*, reg available49:V, reg p97:p(V +), reg r370:V, reg c92:L, reg dr70:V, reg dc35:L, reg dx76:V, reg dx77:V, reg __26:cls, reg r373:V, reg installed10:*, reg installed11:V, reg c93:L, reg dr72:V, reg dc36:L, reg dx78:V, reg dx79:V, reg __27:cls, reg r374:V, reg sym36:cls, reg base36:cls, reg guard36:L, reg r375:V, reg r376:V, reg setdiff4:cls, reg depends2:*, reg depends3:V, reg p98:p(V +), reg installed14:*, reg installed15:V, reg p99:p(V +), reg r379:V, reg intersect4:cls, reg intersect5:cls, reg depends4:*, reg depends5:V, reg p100:p(V +), reg installed16:*, reg installed17:V, reg p101:p(V +), reg r382:V, reg p102:p(V +), reg outofdate:*, reg outofdate1:V, reg p103:p(V +), reg r385:V, reg c94:cls, reg r386:V, reg sym37:cls, reg base37:cls, reg guard37:L, reg r387:V, reg r388:V, reg depends6:*, reg depends7:V, reg length6:cls, reg r389:V, reg c95:L, reg message5:cls, reg paste1:cls, reg strwrap:cls, reg sprintf5:cls, reg paste2:cls, reg sQuote:cls, reg sort:cls, reg depends8:*, reg depends9:V, reg p104:p(V +), reg r391:V, reg p105:p(V +), reg r393:V, reg p106:p(V +), reg r395:V, reg p107:p(V +), reg r397:V, reg p108:p(V +), reg r399:V, reg p109:p(V +), reg r401:V, reg p110:p(V +), reg r403:V, reg message6:cls, reg r404:V, reg as_list3:cls, reg sym38:cls, reg base38:cls, reg guard38:L, reg r405:V, reg r406:V, reg sym39:cls, reg base39:cls, reg guard39:L, reg r407:V, reg r408:V, reg pnames_using_install_fake4:*, reg pnames_using_install_fake5:V, reg length7:cls, reg r409:V, reg rep_int:cls, reg r410:V, reg p111:p(V +), reg r412:V, reg pnames_using_install_fake6:*, reg pnames_using_install_fake7:V, reg l7:*, reg names__:cls, reg r413:V, reg tempfile:cls, reg outdir2:*, reg outdir3:V, reg p112:p(V +), reg r415:V, reg dir_create2:cls, reg tmpdir:*, reg tmpdir1:V, reg p113:p(V +), reg r417:V, reg do_call:cls, reg __28:cls, reg r418:V, reg p114:p(V +), reg sym40:cls, reg base40:cls, reg guard40:L, reg r420:V, reg r421:V, reg sym41:cls, reg base41:cls, reg guard41:L, reg r422:V, reg r423:V, reg depends10:*, reg depends11:V, reg libdir4:*, reg libdir5:V, reg curls4:*, reg curls5:V, reg available50:*, reg available51:V, reg iflags:*, reg iflags1:V, reg tmpdir2:*, reg tmpdir3:V, reg Ncpus1:*, reg Ncpus2:V, reg list5:cls, reg r424:V, reg install_args1:*, reg install_args2:V, reg c96:cls, reg r425:V, reg p115:p(V +), reg r427:V, reg Sys_glob1:cls, reg file_path3:cls, reg tmpdir4:*, reg tmpdir5:V, reg p116:p(V +), reg r429:V, reg p117:p(V +), reg r431:V, reg file_rename:cls, reg outfiles:*, reg outfiles1:V, reg p118:p(V +), reg file_path4:cls, reg outdir4:*, reg outdir5:V, reg p119:p(V +), reg sprintf6:cls, reg basename:cls, reg outfiles2:*, reg outfiles3:V, reg p120:p(V +), reg r435:V, reg p121:p(V +), reg r437:V, reg p122:p(V +), reg r439:V, reg p123:p(V +), reg r441:V, reg unlink:cls, reg tmpdir6:*, reg tmpdir7:V, reg p124:p(V +), reg r443:V, reg message7:cls, reg r444:V, reg sym42:cls, reg base42:cls, reg guard42:L, reg r446:V, reg r447:V, reg check_args1:*, reg check_args2:V, reg is_list1:cls, reg r448:V, reg c97:L, reg sym43:cls, reg base43:cls, reg guard43:L, reg r449:V, reg r450:V, reg sym44:cls, reg base44:cls, reg guard44:L, reg r451:V, reg r452:V, reg sym45:cls, reg base45:cls, reg guard45:L, reg r453:V, reg r454:V, reg check_args3:*, reg check_args4:V, reg c98:L, reg check_args6:V, reg dr74:V, reg dc37:L, reg dx80:V, reg dx81:V, reg __29:cls, reg r455:V, reg list6:cls, reg r456:V, reg sym46:cls, reg base46:cls, reg guard46:L, reg r457:V, reg r458:V, reg pfiles7:*, reg pfiles8:V, reg length8:cls, reg r459:V, reg rep_int1:cls, reg r460:V, reg sym47:cls, reg base47:cls, reg guard47:L, reg r461:V, reg r462:V, reg sym48:cls, reg base48:cls, reg guard48:L, reg r463:V, reg r464:V, reg check_args7:*, reg check_args8:V, reg c99:L, reg check_args10:V, reg dr76:V, reg dc38:L, reg dx82:V, reg dx83:V, reg __30:cls, reg r465:V, reg list7:cls, reg r466:V, reg sym49:cls, reg base49:cls, reg guard49:L, reg r467:V, reg r468:V, reg rfiles14:*, reg rfiles15:V, reg length9:cls, reg r469:V, reg rep_int2:cls, reg r470:V, reg c100:cls, reg r471:V, reg r472:V, reg sym50:cls, reg base50:cls, reg guard50:L, reg r473:V, reg sym51:cls, reg base51:cls, reg guard51:L, reg r474:V, reg r475:V, reg check_args11:*, reg check_args12:V, reg list8:cls, reg r476:V, reg sym52:cls, reg base52:cls, reg guard52:L, reg r477:V, reg r478:V, reg pnames10:*, reg pnames11:V, reg length10:cls, reg r479:V, reg rep_int3:cls, reg r480:V, reg check_args_db9:*, reg check_args_db10:V, reg c101:L, reg check_args_db12:V, reg dr78:V, reg dc39:L, reg dx84:V, reg dx85:V, reg pnames12:*, reg pnames13:V, reg __31:cls, reg r481:V, reg Map1:cls, reg c102:*, reg c103:V, reg p125:p(V +), reg check_args13:*, reg check_args14:V, reg p126:p(V +), reg check_args_db13:*, reg check_args_db14:V, reg p127:p(V +), reg r485:V, reg pnames14:*, reg pnames15:V, reg l8:*, reg names__1:cls, reg r486:V, reg sym53:cls, reg base53:cls, reg guard53:L, reg r487:V, reg r488:V, reg check_env1:*, reg check_env2:V, reg is_list2:cls, reg r489:V, reg c104:L, reg sym54:cls, reg base54:cls, reg guard54:L, reg r490:V, reg r491:V, reg sym55:cls, reg base55:cls, reg guard55:L, reg r492:V, reg r493:V, reg sym56:cls, reg base56:cls, reg guard56:L, reg r494:V, reg r495:V, reg check_env3:*, reg check_env4:V, reg c105:L, reg check_env6:V, reg dr80:V, reg dc40:L, reg dx86:V, reg dx87:V, reg __32:cls, reg r496:V, reg list9:cls, reg r497:V, reg sym57:cls, reg base57:cls, reg guard57:L, reg r498:V, reg r499:V, reg pfiles9:*, reg pfiles10:V, reg length11:cls, reg r500:V, reg rep_int4:cls, reg r501:V, reg sym58:cls, reg base58:cls, reg guard58:L, reg r502:V, reg r503:V, reg sym59:cls, reg base59:cls, reg guard59:L, reg r504:V, reg r505:V, reg check_env7:*, reg check_env8:V, reg c106:L, reg check_env10:V, reg dr82:V, reg dc41:L, reg dx88:V, reg dx89:V, reg __33:cls, reg r506:V, reg list10:cls, reg r507:V, reg sym60:cls, reg base60:cls, reg guard60:L, reg r508:V, reg r509:V, reg rfiles16:*, reg rfiles17:V, reg length12:cls, reg r510:V, reg rep_int5:cls, reg r511:V, reg c107:cls, reg r512:V, reg r513:V, reg sym61:cls, reg base61:cls, reg guard61:L, reg r514:V, reg sym62:cls, reg base62:cls, reg guard62:L, reg r515:V, reg r516:V, reg check_env11:*, reg check_env12:V, reg list11:cls, reg r517:V, reg sym63:cls, reg base63:cls, reg guard63:L, reg r518:V, reg r519:V, reg pnames16:*, reg pnames17:V, reg length13:cls, reg r520:V, reg rep_int6:cls, reg r521:V, reg as_list4:cls, reg check_env13:*, reg check_env14:V, reg p128:p(V +), reg r523:V, reg pnames18:*, reg pnames19:V, reg l9:*, reg names__2:cls, reg r524:V, reg sym64:cls, reg base64:cls, reg guard64:L, reg r525:V, reg r526:V, reg pfiles11:*, reg pfiles12:V, reg rfiles18:*, reg rfiles19:V, reg c108:cls, reg r527:V, reg Sys_getenv1:cls, reg r528:V, reg Sys_setenv:cls, reg paste3:cls, reg libs2:*, reg libs3:V, reg p129:p(V +), reg _Platform4:*, reg _Platform5:V, reg c109:L, reg _Platform7:V, reg dr84:V, reg dc42:L, reg dx90:V, reg dx91:V, reg r530:V, reg p130:p(V +), reg r532:V, reg p131:p(V +), reg r534:V, reg sym65:cls, reg base65:cls, reg guard65:L, reg r535:V, reg on_exit2:cls, reg r537:V, reg r538:cls, reg Ncpus3:*, reg Ncpus4:V, reg r539:V, reg c110:L, reg os_type4:*, reg os_type5:V, reg r540:V, reg c111:L, reg do_call1:cls, reg __34:cls, reg r541:V, reg p132:p(V +), reg sym66:cls, reg base66:cls, reg guard66:L, reg r543:V, reg r544:V, reg sym67:cls, reg base67:cls, reg guard67:L, reg r545:V, reg r546:V, reg pfiles13:*, reg pfiles14:V, reg check_package:*, reg check_package1:V, reg check_args_db15:*, reg check_args_db16:V, reg check_env_db:*, reg check_env_db1:V, reg Ncpus5:*, reg Ncpus6:V, reg list12:cls, reg r547:V, reg parallel_args1:*, reg parallel_args2:V, reg c112:cls, reg r548:V, reg p133:p(V +), reg r550:V, reg r551:V, reg __35:cls, reg r552:V, reg r553:cls, reg Ncpus7:*, reg Ncpus8:V, reg p134:p(V +), reg r555:V, reg sym68:cls, reg base68:cls, reg guard68:L, reg r556:V, reg on_exit3:cls, reg r558:V, reg do_call2:cls, reg __36:cls, reg r559:V, reg p135:p(V +), reg sym69:cls, reg base69:cls, reg guard69:L, reg r561:V, reg r562:V, reg sym70:cls, reg base70:cls, reg guard70:L, reg r563:V, reg r564:V, reg cl:*, reg cl1:V, reg pfiles15:*, reg pfiles16:V, reg check_package2:*, reg check_package3:V, reg check_args_db17:*, reg check_args_db18:V, reg check_env_db2:*, reg check_env_db3:V, reg list13:cls, reg r565:V, reg parallel_args3:*, reg parallel_args4:V, reg c113:cls, reg r566:V, reg p136:p(V +), reg r568:V, reg lapply2:cls, reg pfiles17:*, reg pfiles18:V, reg p137:p(V +), reg check_package4:*, reg check_package5:V, reg p138:p(V +), reg check_args_db19:*, reg check_args_db20:V, reg p139:p(V +), reg check_env_db4:*, reg check_env_db5:V, reg p140:p(V +), reg r574:V, reg do_call3:cls, reg rbind1:*, reg rbind2:V, reg p141:p(V +), reg lapply3:cls, reg timings:*, reg timings1:V, reg p142:p(V +), reg summary:*, reg summary1:V, reg p143:p(V +), reg r578:V, reg p144:p(V +), reg r580:V, reg pnames20:*, reg pnames21:V, reg l10:*, reg rownames__:cls, reg r581:V, reg __37:cls, reg r582:V, reg r583:cls, reg timings2:*, reg timings3:V, reg p145:p(V +), reg r585:V, reg file_rename1:cls, reg sprintf7:cls, reg rnames12:*, reg rnames13:V, reg p146:p(V +), reg r587:V, reg p147:p(V +), reg sprintf8:cls, reg rnames14:*, reg rnames15:V, reg p148:p(V +), reg r590:V, reg p149:p(V +), reg r592:V, reg clean1:*, reg clean2:V, reg c114:L, reg file_remove:cls, reg rfiles20:*, reg rfiles21:V, reg p150:p(V +), reg r594:V, reg file_rename2:cls, reg rfiles22:*, reg rfiles23:V, reg p151:p(V +), reg sprintf9:cls, reg rfiles24:*, reg rfiles25:V, reg p152:p(V +), reg r598:V, reg p153:p(V +), reg r600:V, reg sym71:cls, reg base71:cls, reg guard71:L, reg r601:V, reg r602:V, reg _check_packages_in_dir_retval1:cls, reg dir19:*, reg dir20:V, reg p154:p(V +), reg pfiles19:*, reg pfiles20:V, reg p155:p(V +), reg setdiff5:cls, reg pnames22:*, reg pnames23:V, reg p156:p(V +), reg rnames16:*, reg rnames17:V, reg p157:p(V +), reg r607:V, reg p158:p(V +), reg rnames18:*, reg rnames19:V, reg p159:p(V +), reg r610:V, reg invisible1:cls, reg r611:V |
    mkenv;
    st dir = dir;
    pfiles_isMissing = missing.0(pfiles);
    if pfiles_isMissing then L0() else L1(pfiles);
  L0():
    p = prom<V +>{
      Sys_glob = ldf `Sys.glob`;
      r = dyn Sys_glob("*.tar.gz");
      return r;
    };
    goto L1(p);
  L1(pfiles_orDefault):
    st pfiles = pfiles_orDefault;
    check_args_isMissing = missing.0(check_args);
    if check_args_isMissing then L2() else L3(check_args);
  L2():
    p1 = prom<V +>{
      character = ldf character;
      r2 = dyn character();
      return r2;
    };
    goto L3(p1);
  L3(check_args_orDefault):
    st check_args = check_args_orDefault;
    check_args_db_isMissing = missing.0(check_args_db);
    if check_args_db_isMissing then L4() else L5(check_args_db);
  L4():
    p2 = prom<V +>{
      sym = ldf list;
      base = ldf list in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r5):
      return r5;
    L1():
      list = ldf list in base;
      r6 = dyn list();
      goto L0(r6);
    L2():
      r4 = dyn base();
      goto L0(r4);
    };
    goto L5(p2);
  L5(check_args_db_orDefault):
    st check_args_db = check_args_db_orDefault;
    reverse_isMissing = missing.0(reverse);
    if reverse_isMissing then L6(NULL) else L6(reverse);
  L6(reverse_orDefault):
    st reverse = reverse_orDefault;
    check_env_isMissing = missing.0(check_env);
    if check_env_isMissing then L7() else L8(check_env);
  L7():
    p3 = prom<V +>{
      character1 = ldf character;
      r8 = dyn character1();
      return r8;
    };
    goto L8(p3);
  L8(check_env_orDefault):
    st check_env = check_env_orDefault;
    xvfb_isMissing = missing.0(xvfb);
    if xvfb_isMissing then L9(FALSE) else L9(xvfb);
  L9(xvfb_orDefault):
    st xvfb = xvfb_orDefault;
    Ncpus_isMissing = missing.0(Ncpus);
    if Ncpus_isMissing then L10() else L11(Ncpus);
  L10():
    p4 = prom<V +>{
      getOption = ldf getOption;
      r10 = dyn getOption("Ncpus", 1);
      return r10;
    };
    goto L11(p4);
  L11(Ncpus_orDefault):
    st Ncpus = Ncpus_orDefault;
    clean_isMissing = missing.0(clean);
    if clean_isMissing then L12(TRUE) else L12(clean);
  L12(clean_orDefault):
    st clean = clean_orDefault;
    install_args_isMissing = missing.0(install_args);
    if install_args_isMissing then L13() else L14(install_args);
  L13():
    p5 = prom<V +>{
      sym1 = ldf list;
      base1 = ldf list in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r13):
      return r13;
    L1():
      list1 = ldf list in base;
      r14 = dyn list1();
      goto L0(r14);
    L2():
      r12 = dyn base1();
      goto L0(r12);
    };
    goto L14(p5);
  L14(install_args_orDefault):
    st install_args = install_args_orDefault;
    parallel_args_isMissing = missing.0(parallel_args);
    if parallel_args_isMissing then L15() else L16(parallel_args);
  L15():
    p6 = prom<V +>{
      sym2 = ldf list;
      base2 = ldf list in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L1() else L2();
    L0(r17):
      return r17;
    L1():
      list2 = ldf list in base;
      r18 = dyn list2();
      goto L0(r18);
    L2():
      r16 = dyn base2();
      goto L0(r16);
    };
    goto L16(p6);
  L16(parallel_args_orDefault):
    st parallel_args = parallel_args_orDefault;
    st `...` = ddd;
    getwd = ldf getwd;
    check L138() else D0();
  D0():
    deopt 1 [];
  L138():
    r20 = dyn getwd();
    check L139() else D1();
  D1():
    deopt 2 [r20];
  L139():
    st owd = r20;
    normalizePath = ldf normalizePath;
    check L140() else D2();
  D2():
    deopt 5 [];
  L140():
    p7 = prom<V +>{
      dir1 = ld dir;
      dir2 = force? dir1;
      checkMissing(dir2);
      return dir2;
    };
    r22 = dyn normalizePath(p7);
    check L141() else D3();
  D3():
    deopt 7 [r22];
  L141():
    st dir = r22;
    setwd = ldf setwd;
    check L142() else D4();
  D4():
    deopt 10 [];
  L142():
    p8 = prom<V +>{
      dir3 = ld dir;
      dir4 = force? dir3;
      checkMissing(dir4);
      return dir4;
    };
    r24 = dyn setwd(p8);
    check L143() else D5();
  D5():
    deopt 12 [r24];
  L143():
    sym3 = ldf `on.exit`;
    base3 = ldf `on.exit` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L144() else L145();
  L17():
    r28 = clos inner3994259572;
    st `.check_packages_in_dir_retval` = r28;
    sym4 = ldf length;
    base4 = ldf length in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L146() else L147();
  L144():
    on_exit = ldf `on.exit` in base;
    r27 = dyn on_exit(<lang setwd(owd)>);
    goto L17();
  L145():
    r25 = dyn base3(<lang setwd(owd)>);
    goto L17();
  L18(r30):
    r32 = `!`(r30);
    c = `as.logical`(r32);
    if c then L150() else L19();
  L146():
    pfiles1 = ld pfiles;
    check L148() else D6();
  L147():
    r29 = dyn base4(<sym pfiles>);
    goto L18(r29);
  D6():
    deopt 21 [pfiles1];
  L19():
    sub = ldf sub;
    check L160() else D13();
  L148():
    pfiles2 = force? pfiles1;
    checkMissing(pfiles2);
    length = ldf length in base;
    r31 = dyn length(pfiles2);
    check L149() else D7();
  L150():
    message = ldf message;
    check L151() else D8();
  D7():
    deopt 24 [r31];
  D8():
    deopt 27 [];
  D13():
    deopt 43 [];
  L149():
    goto L18(r31);
  L151():
    r33 = dyn message("no packages to check");
    check L152() else D9();
  L160():
    p11 = prom<V +>{
      pfiles5 = ld pfiles;
      pfiles6 = force? pfiles5;
      checkMissing(pfiles6);
      return pfiles6;
    };
    r43 = dyn sub("_.*", "", p11);
    check L161() else D14();
  D9():
    deopt 29 [r33];
  D14():
    deopt 47 [r43];
  L152():
    sym5 = ldf invisible;
    base5 = ldf invisible in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L153() else L154();
  L161():
    st pnames = r43;
    _Platform = ld `.Platform`;
    check L162() else D15();
  D15():
    deopt 49 [_Platform];
  L20(r35):
    popenv;
    return r35;
  L153():
    _check_packages_in_dir_retval = ldf `.check_packages_in_dir_retval`;
    check L155() else D10();
  L154():
    r34 = dyn base5(<lang .check_packages_in_dir_retval(dir, pfiles)>);
    goto L20(r34);
  L162():
    _Platform1 = force? _Platform;
    checkMissing(_Platform1);
    c1 = `is.object`(_Platform1);
    if c1 then L164() else L165(_Platform1);
  D10():
    deopt 33 [];
  L155():
    p9 = prom<V +>{
      dir5 = ld dir;
      dir6 = force? dir5;
      checkMissing(dir6);
      return dir6;
    };
    p10 = prom<V +>{
      pfiles3 = ld pfiles;
      pfiles4 = force? pfiles3;
      checkMissing(pfiles4);
      return pfiles4;
    };
    r38 = dyn _check_packages_in_dir_retval(p9, p10);
    check L156() else D11();
  L163(dx1):
    st os_type = dx1;
    st xvfb_options = "-screen 0 1280x1024x24";
    os_type = ld os_type;
    check L167() else D16();
  L164():
    dr = tryDispatchBuiltin.1("$", _Platform1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L166() else L165(dr);
  L165(_Platform3):
    r44 = `$`(_Platform3, <sym OS.type>);
    goto L163(r44);
  D11():
    deopt 36 [r38];
  D16():
    deopt 56 [os_type];
  L156():
    invisible = ldf invisible in base;
    r39 = dyn invisible(r38);
    check L157() else D12();
  L166():
    dx = getTryDispatchBuiltinValue(dr);
    goto L163(dx);
  L167():
    os_type1 = force? os_type;
    checkMissing(os_type1);
    r45 = `==`(os_type1, "windows");
    c2 = `as.logical`(r45);
    if c2 then L168() else L22();
  D12():
    deopt 38 [r39];
  L22():
    sym6 = ldf `is.logical`;
    base6 = ldf `is.logical` in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L170() else L171();
  L23():
    os_type2 = ld os_type;
    check L183() else D22();
  L157():
    goto L20(r39);
  L168():
    st xvfb = FALSE;
    goto L23();
  D22():
    deopt 87 [os_type2];
  L24(r48):
    c4 = `as.logical`(r48);
    if c4 then L173() else L25();
  L170():
    xvfb1 = ld xvfb;
    check L172() else D17();
  L171():
    r47 = dyn base6(<sym xvfb>);
    goto L24(r47);
  L183():
    os_type3 = force? os_type2;
    checkMissing(os_type3);
    r56 = `==`(os_type3, "windows");
    c6 = `as.logical`(r56);
    if c6 then L184() else L29();
  D17():
    deopt 64 [xvfb1];
  L25():
    sym7 = ldf `as.character`;
    base7 = ldf `as.character` in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L179() else L180();
  L29():
    sprintf1 = ldf sprintf;
    check L188() else D25();
  L30(r59):
    st curl = r59;
    file_path = ldf `file.path`;
    check L190() else D27();
  L172():
    xvfb2 = force? xvfb1;
    checkMissing(xvfb2);
    c3 = `is.logical`(xvfb2);
    goto L24(c3);
  L173():
    isTRUE = ldf isTRUE;
    check L174() else D18();
  L184():
    sprintf = ldf sprintf;
    check L185() else D23();
  D18():
    deopt 68 [];
  D23():
    deopt 92 [];
  D25():
    deopt 97 [];
  D27():
    deopt 103 [];
  L28(r54):
    st xvfb_options = r54;
    st xvfb = TRUE;
    goto L23();
  L174():
    p12 = prom<V +>{
      xvfb3 = ld xvfb;
      xvfb4 = force? xvfb3;
      checkMissing(xvfb4);
      return xvfb4;
    };
    r50 = dyn isTRUE(p12);
    check L175() else D19();
  L179():
    xvfb5 = ld xvfb;
    check L181() else D20();
  L180():
    r53 = dyn base7(<sym xvfb>);
    goto L28(r53);
  L185():
    p13 = prom<V +>{
      dir7 = ld dir;
      dir8 = force? dir7;
      checkMissing(dir8);
      return dir8;
    };
    r58 = dyn sprintf("file:///%s", p13);
    check L186() else D24();
  L188():
    p14 = prom<V +>{
      dir9 = ld dir;
      dir10 = force? dir9;
      checkMissing(dir10);
      return dir10;
    };
    r61 = dyn sprintf1("file://%s", p14);
    check L189() else D26();
  L190():
    p15 = prom<V +>{
      dir11 = ld dir;
      dir12 = force? dir11;
      checkMissing(dir12);
      return dir12;
    };
    r63 = dyn file_path(p15, "Library");
    check L191() else D28();
  D19():
    deopt 70 [r50];
  D20():
    deopt 79 [xvfb5];
  D24():
    deopt 95 [r58];
  D26():
    deopt 100 [r61];
  D28():
    deopt 106 [r63];
  L175():
    r51 = `!`(r50);
    c5 = `as.logical`(r51);
    if c5 then L176() else L26();
  L181():
    xvfb6 = force? xvfb5;
    checkMissing(xvfb6);
    as_character = ldf `as.character` in base;
    r55 = dyn as_character(xvfb6);
    check L182() else D21();
  L186():
    goto L30(r58);
  L189():
    goto L30(r61);
  L191():
    st libdir = r63;
    dir_create = ldf `dir.create`;
    check L192() else D29();
  D21():
    deopt 82 [r55];
  D29():
    deopt 109 [];
  L26():
    goto L27(NULL);
  L27(r52):
    goto L23();
  L176():
    st xvfb = FALSE;
    goto L27(FALSE);
  L182():
    goto L28(r55);
  L192():
    p16 = prom<V +>{
      libdir = ld libdir;
      libdir1 = force? libdir;
      checkMissing(libdir1);
      return libdir1;
    };
    r65 = dyn dir_create[, showWarnings](p16, FALSE);
    check L193() else D30();
  D30():
    deopt 113 [r65];
  L193():
    file_path1 = ldf `file.path`;
    check L194() else D31();
  D31():
    deopt 115 [];
  L194():
    p17 = prom<V +>{
      dir13 = ld dir;
      dir14 = force? dir13;
      checkMissing(dir14);
      return dir14;
    };
    r67 = dyn file_path1(p17, "Outputs");
    check L195() else D32();
  D32():
    deopt 118 [r67];
  L195():
    st outdir = r67;
    dir_create1 = ldf `dir.create`;
    check L196() else D33();
  D33():
    deopt 121 [];
  L196():
    p18 = prom<V +>{
      outdir = ld outdir;
      outdir1 = force? outdir;
      checkMissing(outdir1);
      return outdir1;
    };
    r69 = dyn dir_create1[, showWarnings](p18, FALSE);
    check L197() else D34();
  D34():
    deopt 125 [r69];
  L197():
    character2 = ldf character;
    check L198() else D35();
  D35():
    deopt 127 [];
  L198():
    r70 = dyn character2();
    check L199() else D36();
  D36():
    deopt 128 [r70];
  L199():
    st pnames_using_install_no = r70;
    character3 = ldf character;
    check L200() else D37();
  D37():
    deopt 131 [];
  L200():
    r71 = dyn character3();
    check L201() else D38();
  D38():
    deopt 132 [r71];
  L201():
    st pnames_using_install_fake = r71;
    as_list = ldf `as.list`;
    check L202() else D39();
  D39():
    deopt 135 [];
  L202():
    p19 = prom<V +>{
      check_args_db1 = ld check_args_db;
      check_args_db2 = force? check_args_db1;
      checkMissing(check_args_db2);
      return check_args_db2;
    };
    r73 = dyn as_list(p19);
    check L203() else D40();
  D40():
    deopt 137 [r73];
  L203():
    st check_args_db = r73;
    sym8 = ldf length;
    base8 = ldf length in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L204() else L205();
  L31(r75):
    c7 = `as.logical`(r75);
    if c7 then L208() else L32(c7);
  L204():
    check_args_db3 = ld check_args_db;
    check L206() else D41();
  L205():
    r74 = dyn base8(<sym check_args_db>);
    goto L31(r74);
  D41():
    deopt 141 [check_args_db3];
  L32(c9):
    c20 = `as.logical`(c9);
    if c20 then L216() else L35();
  L206():
    check_args_db4 = force? check_args_db3;
    checkMissing(check_args_db4);
    length1 = ldf length in base;
    r76 = dyn length1(check_args_db4);
    check L207() else D42();
  L208():
    sym9 = ldf `is.null`;
    base9 = ldf `is.null` in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L209() else L210();
  D42():
    deopt 144 [r76];
  L33(c12, r78):
    r82 = `!`(r78);
    c17 = `as.logical`(r82);
    c18 = `&&`(c12, c17);
    goto L32(c18);
  L35():
    sym11 = ldf list;
    base11 = ldf list in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L232() else L233();
  L38():
    write_PACKAGES = ldf write_PACKAGES;
    check L235() else D54();
  L207():
    goto L31(r76);
  L209():
    sym10 = ldf names;
    base10 = ldf names in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L211() else L212();
  L210():
    r77 = dyn base9(<lang `<-`(nms, names(check_args_db))>);
    goto L33(c7, r77);
  L216():
    lapply = ldf lapply;
    check L217() else D45();
  D45():
    deopt 157 [];
  D54():
    deopt 188 [];
  L34(c15, r80):
    st nms = r80;
    c16 = `==`(r80, NULL);
    goto L33(c15, c16);
  L39(r98):
    st check_args_db = r98;
    goto L38();
  L211():
    check_args_db5 = ld check_args_db;
    check L213() else D43();
  L212():
    r79 = dyn base10(<sym check_args_db>);
    goto L34(c7, r79);
  L217():
    p20 = prom<V +>{
      check_args_db7 = ld check_args_db;
      check_args_db8 = force? check_args_db7;
      checkMissing(check_args_db8);
      return check_args_db8;
    };
    p21 = prom<V +>{
      r84 = clos inner3708401697;
      return r84;
    };
    r86 = dyn lapply(p20, p21);
    check L218() else D46();
  L232():
    list3 = ldf list in base;
    r99 = dyn list3();
    check L234() else D53();
  L233():
    r97 = dyn base11();
    goto L39(r97);
  L235():
    p26 = prom<V +>{
      dir15 = ld dir;
      dir16 = force? dir15;
      checkMissing(dir16);
      return dir16;
    };
    r101 = dyn write_PACKAGES[, type](p26, "source");
    check L236() else D55();
  D43():
    deopt 148 [c7, check_args_db5];
  D46():
    deopt 160 [r86];
  D53():
    deopt 185 [r99];
  D55():
    deopt 192 [r101];
  L213():
    check_args_db6 = force? check_args_db5;
    checkMissing(check_args_db6);
    names = ldf names in base;
    r81 = dyn names(check_args_db6);
    check L214() else D44();
  L218():
    st args = r86;
    nms = ld nms;
    check L219() else D47();
  L234():
    goto L39(r99);
  L236():
    dir_exists = ldf `dir.exists`;
    check L237() else D56();
  D44():
    deopt 151 [c7, r81];
  D47():
    deopt 162 [nms];
  D56():
    deopt 194 [];
  L214():
    goto L34(c7, r81);
  L219():
    nms1 = force? nms;
    checkMissing(nms1);
    c21 = `is.object`(nms1);
    if c21 then L220() else L221(nms1);
  L237():
    p28 = prom<V +>{
      file_path2 = ldf `file.path`;
      p27 = prom<V +>{
        dir17 = ld dir;
        dir18 = force? dir17;
        checkMissing(dir18);
        return dir18;
      };
      r103 = dyn file_path2(p27, "Depends");
      st depdir = r103;
      invisible.0();
      return r103;
    };
    r105 = dyn dir_exists(p28);
    check L238() else D57();
  D57():
    deopt 196 [r105];
  L36(dx3):
    st pnames_using_install_no = dx3;
    nms4 = ld nms;
    check L225() else D50();
  L220():
    dr2 = tryDispatchBuiltin.1("[", nms1);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L222() else L221(dr2);
  L221(nms3):
    vapply = ldf vapply;
    check L223() else D48();
  L238():
    c23 = `as.logical`(r105);
    if c23 then L239() else L40();
  D48():
    deopt 165 [nms3];
  D50():
    deopt 172 [nms4];
  L40():
    goto L42();
  L42():
    __2 = ldf `::`;
    check L249() else D64();
  L222():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L36(dx2);
  L223():
    p22 = prom<V +>{
      args = ld args;
      args1 = force? args;
      checkMissing(args1);
      return args1;
    };
    p23 = prom<V +>{
      r88 = clos inner3708401697;
      return r88;
    };
    r90 = dyn vapply(p22, p23, NA_LGL);
    check L224() else D49();
  L225():
    nms5 = force? nms4;
    checkMissing(nms5);
    c22 = `is.object`(nms5);
    if c22 then L226() else L227(nms5);
  L239():
    write_PACKAGES1 = ldf write_PACKAGES;
    check L240() else D58();
  D49():
    deopt 169 [nms3, r90];
  D58():
    deopt 198 [];
  D64():
    deopt 218 [];
  L37(dx5):
    st pnames_using_install_fake = dx5;
    goto L38();
  L224():
    __ = ldf `[` in base;
    r91 = dyn __(nms3, r90);
    goto L36(r91);
  L226():
    dr4 = tryDispatchBuiltin.1("[", nms5);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L228() else L227(dr4);
  L227(nms7):
    vapply1 = ldf vapply;
    check L229() else D51();
  L240():
    p29 = prom<V +>{
      depdir = ld depdir;
      depdir1 = force? depdir;
      checkMissing(depdir1);
      return depdir1;
    };
    r107 = dyn write_PACKAGES1[, type](p29, "source");
    check L241() else D59();
  L249():
    r114 = dyn __2("utils", "available.packages");
    check L250() else D65();
  D51():
    deopt 175 [nms7];
  D59():
    deopt 202 [r107];
  D65():
    deopt 221 [r114];
  L228():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L37(dx4);
  L229():
    p24 = prom<V +>{
      args2 = ld args;
      args3 = force? args2;
      checkMissing(args3);
      return args3;
    };
    p25 = prom<V +>{
      r93 = clos inner3708401697;
      return r93;
    };
    r95 = dyn vapply1(p24, p25, NA_LGL);
    check L230() else D52();
  L241():
    sym12 = ldf c;
    base12 = ldf c in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L242() else L243();
  L250():
    checkFun.0(r114);
    r115 = r114 as cls;
    p31 = prom<V +>{
      curl4 = ld curl;
      curl5 = force? curl4;
      checkMissing(curl5);
      return curl5;
    };
    r117 = dyn r115[contriburl, type](p31, "source");
    check L251() else D66();
  D52():
    deopt 179 [nms7, r95];
  D66():
    deopt 227 [r117];
  L41(r109):
    st curl = r109;
    goto L42();
  L230():
    __1 = ldf `[` in base;
    r96 = dyn __1(nms7, r95);
    goto L37(r96);
  L242():
    curl = ld curl;
    check L244() else D60();
  L243():
    r108 = dyn base12(<sym curl>, <lang paste0(curl, "/Depends")>);
    goto L41(r108);
  L251():
    st localones = r117;
    __3 = ldf `::`;
    check L252() else D67();
  D60():
    deopt 205 [curl];
  D67():
    deopt 230 [];
  L244():
    curl1 = force? curl;
    checkMissing(curl1);
    paste0 = ldf paste0;
    check L245() else D61();
  L252():
    r118 = dyn __3("utils", "contrib.url");
    check L253() else D68();
  D61():
    deopt 208 [];
  D68():
    deopt 233 [r118];
  L245():
    p30 = prom<V +>{
      curl2 = ld curl;
      curl3 = force? curl2;
      checkMissing(curl3);
      return curl3;
    };
    r111 = dyn paste0(p30, "/Depends");
    check L246() else D62();
  L253():
    checkFun.0(r118);
    r119 = r118 as cls;
    p32 = prom<V +>{
      getOption1 = ldf getOption;
      r120 = dyn getOption1("repos");
      return r120;
    };
    r122 = dyn r119[, type](p32, "source");
    check L254() else D69();
  D62():
    deopt 211 [r111];
  D69():
    deopt 238 [r122];
  L246():
    c24 = ldf c in base;
    r112 = dyn c24(curl1, r111);
    check L247() else D63();
  L254():
    st curls = r122;
    __4 = ldf `::`;
    check L255() else D70();
  D63():
    deopt 213 [r112];
  D70():
    deopt 241 [];
  L247():
    goto L41(r112);
  L255():
    r123 = dyn __4("utils", "available.packages");
    check L256() else D71();
  D71():
    deopt 244 [r123];
  L256():
    checkFun.0(r123);
    r124 = r123 as cls;
    p33 = prom<V +>{
      curls = ld curls;
      curls1 = force? curls;
      checkMissing(curls1);
      return curls1;
    };
    r126 = dyn r124[contriburl, type](p33, "source");
    check L257() else D72();
  D72():
    deopt 250 [r126];
  L257():
    st available = r126;
    rbind = ldf rbind;
    check L258() else D73();
  D73():
    deopt 253 [];
  L258():
    p34 = prom<V +>{
      localones = ld localones;
      localones1 = force? localones;
      checkMissing(localones1);
      return localones1;
    };
    p35 = prom<V +>{
      available = ld available;
      available1 = force? available;
      checkMissing(available1);
      return available1;
    };
    r129 = dyn rbind(p34, p35);
    check L259() else D74();
  D74():
    deopt 256 [r129];
  L259():
    st available = r129;
    available2 = ld available;
    check L260() else D75();
  D75():
    deopt 258 [available2];
  L260():
    available3 = force? available2;
    checkMissing(available3);
    c25 = `is.object`(available3);
    if c25 then L261() else L262(available3);
  L43(dx8):
    st available = dx8;
    sym13 = ldf c;
    base13 = ldf c in base;
    guard13 = `==`.4(sym13, base13);
    if guard13 then L266() else L267();
  L261():
    dr6 = tryDispatchBuiltin.1("[", available3);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L263() else L262(dr6);
  L262(available5):
    duplicated = ldf duplicated;
    check L264() else D76();
  D76():
    deopt 261 [available5];
  L44(r136):
    st curls = r136;
    sym14 = ldf c;
    base14 = ldf c in base;
    guard14 = `==`.4(sym14, base14);
    if guard14 then L271() else L272();
  L263():
    dx7 = getTryDispatchBuiltinValue(dr6);
    goto L43(dx7);
  L264():
    p36 = prom<V +>{
      available6 = ld available;
      available7 = force? available6;
      checkMissing(available7);
      c26 = `is.object`(available7);
      if c26 then L1() else L2();
    L0(dx10):
      return dx10;
    L1():
      dr8 = tryDispatchBuiltin.1("[", available7);
      dc4 = getTryDispatchBuiltinDispatched(dr8);
      if dc4 then L3() else L2();
    L2():
      __5 = ldf `[` in base;
      r130 = dyn __5(available7, <missing>, "Package");
      goto L0(r130);
    L3():
      dx9 = getTryDispatchBuiltinValue(dr8);
      goto L0(dx9);
    };
    r132 = dyn duplicated(p36);
    check L265() else D77();
  L266():
    curl6 = ld curl;
    check L268() else D78();
  L267():
    r135 = dyn base13(<sym curl>, <sym curls>);
    goto L44(r135);
  D77():
    deopt 263 [available5, r132];
  D78():
    deopt 273 [curl6];
  L45(r139):
    st pnames_using_install_no = r139;
    intersect = ldf intersect;
    check L277() else D85();
  L265():
    r133 = `!`(r132);
    __6 = ldf `[` in base;
    r134 = dyn __6(available3, r133, <missing>, FALSE);
    goto L43(r134);
  L268():
    curl7 = force? curl6;
    checkMissing(curl7);
    curls2 = ld curls;
    check L269() else D79();
  L271():
    pnames_using_install_no = ld pnames_using_install_no;
    check L273() else D81();
  L272():
    r138 = dyn base14(<sym pnames_using_install_no>, <lang setdiff(pnames_using_install_fake, `[`(available, , "Package"))>);
    goto L45(r138);
  D79():
    deopt 275 [curls2];
  D81():
    deopt 282 [pnames_using_install_no];
  D85():
    deopt 293 [];
  L269():
    curls3 = force? curls2;
    checkMissing(curls3);
    c27 = ldf c in base;
    r137 = dyn c27(curl7, curls3);
    check L270() else D80();
  L273():
    pnames_using_install_no1 = force? pnames_using_install_no;
    checkMissing(pnames_using_install_no1);
    setdiff = ldf setdiff;
    check L274() else D82();
  L277():
    p39 = prom<V +>{
      pnames_using_install_fake2 = ld pnames_using_install_fake;
      pnames_using_install_fake3 = force? pnames_using_install_fake2;
      checkMissing(pnames_using_install_fake3);
      return pnames_using_install_fake3;
    };
    p40 = prom<V +>{
      available14 = ld available;
      available15 = force? available14;
      checkMissing(available15);
      c30 = `is.object`(available15);
      if c30 then L1() else L2();
    L0(dx14):
      return dx14;
    L1():
      dr12 = tryDispatchBuiltin.1("[", available15);
      dc6 = getTryDispatchBuiltinDispatched(dr12);
      if dc6 then L3() else L2();
    L2():
      __8 = ldf `[` in base;
      r146 = dyn __8(available15, <missing>, "Package");
      goto L0(r146);
    L3():
      dx13 = getTryDispatchBuiltinValue(dr12);
      goto L0(dx13);
    };
    r148 = dyn intersect(p39, p40);
    check L278() else D86();
  D80():
    deopt 278 [r137];
  D82():
    deopt 285 [];
  D86():
    deopt 296 [r148];
  L270():
    goto L44(r137);
  L274():
    p37 = prom<V +>{
      pnames_using_install_fake = ld pnames_using_install_fake;
      pnames_using_install_fake1 = force? pnames_using_install_fake;
      checkMissing(pnames_using_install_fake1);
      return pnames_using_install_fake1;
    };
    p38 = prom<V +>{
      available10 = ld available;
      available11 = force? available10;
      checkMissing(available11);
      c28 = `is.object`(available11);
      if c28 then L1() else L2();
    L0(dx12):
      return dx12;
    L1():
      dr10 = tryDispatchBuiltin.1("[", available11);
      dc5 = getTryDispatchBuiltinDispatched(dr10);
      if dc5 then L3() else L2();
    L2():
      __7 = ldf `[` in base;
      r141 = dyn __7(available11, <missing>, "Package");
      goto L0(r141);
    L3():
      dx11 = getTryDispatchBuiltinValue(dr10);
      goto L0(dx11);
    };
    r143 = dyn setdiff(p37, p38);
    check L275() else D83();
  L278():
    st pnames_using_install_fake = r148;
    sym15 = ldf `is.null`;
    base15 = ldf `is.null` in base;
    guard15 = `==`.4(sym15, base15);
    if guard15 then L279() else L280();
  D83():
    deopt 288 [r143];
  L46(r150):
    r151 = `!`(r150);
    c32 = `as.logical`(r151);
    if c32 then L282() else L47(c32);
  L275():
    c29 = ldf c in base;
    r144 = dyn c29(pnames_using_install_no1, r143);
    check L276() else D84();
  L279():
    reverse1 = ld reverse;
    check L281() else D87();
  L280():
    r149 = dyn base15(<sym reverse>);
    goto L46(r149);
  D84():
    deopt 290 [r144];
  D87():
    deopt 299 [reverse1];
  L47(c34):
    c38 = `as.logical`(c34);
    if c38 then L286() else L48();
  L276():
    goto L45(r144);
  L281():
    reverse2 = force? reverse1;
    checkMissing(reverse2);
    c31 = `==`(reverse2, NULL);
    goto L46(c31);
  L282():
    isFALSE = ldf isFALSE;
    check L283() else D88();
  D88():
    deopt 304 [c32];
  L48():
    character4 = ldf character;
    check L444() else D169();
  L86():
    sym33 = ldf c;
    base33 = ldf c in base;
    guard33 = `==`.4(sym33, base33);
    if guard33 then L446() else L447();
  L283():
    p41 = prom<V +>{
      reverse3 = ld reverse;
      reverse4 = force? reverse3;
      checkMissing(reverse4);
      return reverse4;
    };
    r153 = dyn isFALSE(p41);
    check L284() else D89();
  L286():
    sym16 = ldf list;
    base16 = ldf list in base;
    guard16 = `==`.4(sym16, base16);
    if guard16 then L287() else L288();
  D89():
    deopt 306 [c32, r153];
  D169():
    deopt 604 [];
  L49(r156):
    st defaults = r156;
    sym18 = ldf `is.character`;
    base18 = ldf `is.character` in base;
    guard18 = `==`.4(sym18, base18);
    if guard18 then L295() else L296();
  L87(r331):
    st pnames = r331;
    xvfb7 = ld xvfb;
    check L451() else D174();
  L284():
    r154 = `!`(r153);
    c35 = `as.logical`(r154);
    c36 = `&&`(c32, c35);
    goto L47(c36);
  L287():
    sym17 = ldf c;
    base17 = ldf c in base;
    guard17 = `==`.4(sym17, base17);
    if guard17 then L289() else L290();
  L288():
    r155 = dyn base16[which, recursive, repos](<lang c("Depends", "Imports", "LinkingTo")>, FALSE, <lang getOption("repos")>);
    goto L49(r155);
  L444():
    r329 = dyn character4();
    check L445() else D170();
  L446():
    pnames6 = ld pnames;
    check L448() else D171();
  L447():
    r330 = dyn base33(<sym pnames>, <sym rnames>);
    goto L87(r330);
  D170():
    deopt 605 [r329];
  D171():
    deopt 610 [pnames6];
  D174():
    deopt 617 [xvfb7];
  L50(r158):
    getOption2 = ldf getOption;
    check L292() else D91();
  L51(r163):
    r164 = `!`(r163);
    c41 = `as.logical`(r164);
    if c41 then L298() else L52();
  L289():
    c39 = ldf c in base;
    r159 = dyn c39("Depends", "Imports", "LinkingTo");
    check L291() else D90();
  L290():
    r157 = dyn base17("Depends", "Imports", "LinkingTo");
    goto L50(r157);
  L295():
    reverse5 = ld reverse;
    check L297() else D94();
  L296():
    r162 = dyn base18(<sym reverse>);
    goto L51(r162);
  L445():
    st rnames = r329;
    st rfiles = r329;
    goto L86();
  L448():
    pnames7 = force? pnames6;
    checkMissing(pnames7);
    rnames10 = ld rnames;
    check L449() else D172();
  L451():
    xvfb8 = force? xvfb7;
    checkMissing(xvfb8);
    c87 = `as.logical`(xvfb8);
    if c87 then L452() else L88();
  D90():
    deopt 317 [r159];
  D91():
    deopt 322 [];
  D94():
    deopt 330 [reverse5];
  D172():
    deopt 612 [rnames10];
  L52():
    goto L55();
  L55():
    sym21 = ldf identical;
    base21 = ldf identical in base;
    guard21 = `==`.4(sym21, base21);
    if guard21 then L313() else L314();
  L88():
    goto L90();
  L90():
    package_dependencies2 = ldf package_dependencies;
    check L458() else D177();
  L291():
    goto L50(r159);
  L292():
    r160 = dyn getOption2("repos");
    check L293() else D92();
  L297():
    reverse6 = force? reverse5;
    checkMissing(reverse6);
    c40 = `is.character`(reverse6);
    goto L51(c40);
  L298():
    as_list1 = ldf `as.list`;
    check L299() else D95();
  L449():
    rnames11 = force? rnames10;
    checkMissing(rnames11);
    c86 = ldf c in base;
    r332 = dyn c86(pnames7, rnames11);
    check L450() else D173();
  L452():
    start_virtual_X11_fb = ldf start_virtual_X11_fb;
    check L453() else D175();
  D92():
    deopt 324 [r160];
  D95():
    deopt 335 [];
  D173():
    deopt 615 [r332];
  D175():
    deopt 620 [];
  D177():
    deopt 630 [];
  L56(r180):
    r184 = `!`(r180);
    st subset_reverse_repos = r184;
    subset_reverse_repos = ld subset_reverse_repos;
    check L323() else D106();
  L293():
    list4 = ldf list in base;
    r161 = dyn list4(r158, FALSE, r160);
    check L294() else D93();
  L299():
    p42 = prom<V +>{
      reverse7 = ld reverse;
      reverse8 = force? reverse7;
      checkMissing(reverse8);
      return reverse8;
    };
    r166 = dyn as_list1(p42);
    check L300() else D96();
  L313():
    defaults2 = ld defaults;
    check L315() else D102();
  L314():
    r179 = dyn base21(<lang `$`(defaults, repos)>, <lang getOption("repos")>);
    goto L56(r179);
  L450():
    goto L87(r332);
  L453():
    p87 = prom<V +>{
      xvfb_options = ld xvfb_options;
      xvfb_options1 = force? xvfb_options;
      checkMissing(xvfb_options1);
      return xvfb_options1;
    };
    r334 = dyn start_virtual_X11_fb(p87);
    check L454() else D176();
  L458():
    p88 = prom<V +>{
      pnames8 = ld pnames;
      pnames9 = force? pnames8;
      checkMissing(pnames9);
      return pnames9;
    };
    p89 = prom<V +>{
      available46 = ld available;
      available47 = force? available46;
      checkMissing(available47);
      return available47;
    };
    r341 = dyn package_dependencies2[, , which](p88, p89, "most");
    check L459() else D178();
  D93():
    deopt 327 [r161];
  D96():
    deopt 337 [r166];
  D102():
    deopt 363 [defaults2];
  D106():
    deopt 381 [subset_reverse_repos];
  D176():
    deopt 622 [r334];
  D178():
    deopt 635 [r341];
  L294():
    goto L49(r161);
  L300():
    st reverse = r166;
    pmatch = ldf pmatch;
    check L301() else D97();
  L315():
    defaults3 = force? defaults2;
    checkMissing(defaults3);
    c44 = `is.object`(defaults3);
    if c44 then L317() else L318(defaults3);
  L323():
    subset_reverse_repos1 = force? subset_reverse_repos;
    checkMissing(subset_reverse_repos1);
    c45 = `as.logical`(subset_reverse_repos1);
    if c45 then L324() else L57(c45);
  L454():
    st pid = r334;
    sym34 = ldf `on.exit`;
    base34 = ldf `on.exit` in base;
    guard34 = `==`.4(sym34, base34);
    if guard34 then L455() else L456();
  L459():
    st depends = r341;
    setdiff3 = ldf setdiff;
    check L460() else D179();
  D97():
    deopt 340 [];
  D179():
    deopt 638 [];
  L57(c47):
    c55 = `as.logical`(c47);
    if c55 then L331() else L59();
  L89(r336):
    goto L90();
  L301():
    p43 = prom<V +>{
      sym19 = ldf names;
      base19 = ldf names in base;
      guard19 = `==`.4(sym19, base19);
      if guard19 then L1() else L2();
    L0(r168):
      return r168;
    L1():
      reverse9 = ld reverse;
      reverse10 = force? reverse9;
      checkMissing(reverse10);
      names1 = ldf names in base;
      r169 = dyn names1(reverse10);
      goto L0(r169);
    L2():
      r167 = dyn base19(<sym reverse>);
      goto L0(r167);
    };
    p44 = prom<V +>{
      sym20 = ldf names;
      base20 = ldf names in base;
      guard20 = `==`.4(sym20, base20);
      if guard20 then L1() else L2();
    L0(r172):
      return r172;
    L1():
      defaults = ld defaults;
      defaults1 = force? defaults;
      checkMissing(defaults1);
      names2 = ldf names in base;
      r173 = dyn names2(defaults1);
      goto L0(r173);
    L2():
      r171 = dyn base20(<sym defaults>);
      goto L0(r171);
    };
    r175 = dyn pmatch[, , nomatch](p43, p44, 0);
    check L302() else D98();
  L316(dx25):
    getOption3 = ldf getOption;
    check L320() else D103();
  L317():
    dr18 = tryDispatchBuiltin.1("$", defaults3);
    dc9 = getTryDispatchBuiltinDispatched(dr18);
    if dc9 then L319() else L318(dr18);
  L318(defaults5):
    r181 = `$`(defaults5, <sym repos>);
    goto L316(r181);
  L324():
    sym22 = ldf all;
    base22 = ldf all in base;
    guard22 = `==`.4(sym22, base22);
    if guard22 then L325() else L326();
  L455():
    on_exit1 = ldf `on.exit` in base;
    r337 = dyn on_exit1(<lang close_virtual_X11_db(pid)>, TRUE);
    goto L89(r337);
  L456():
    r335 = dyn base34[, add](<lang close_virtual_X11_db(pid)>, TRUE);
    goto L89(r335);
  L460():
    p92 = prom<V +>{
      unique = ldf unique;
      p91 = prom<V +>{
        unlist3 = ldf unlist;
        p90 = prom<V +>{
          depends = ld depends;
          depends1 = force? depends;
          checkMissing(depends1);
          return depends1;
        };
        r343 = dyn unlist3[, `use.names`](p90, FALSE);
        return r343;
      };
      r345 = dyn unique(p91);
      return r345;
    };
    p93 = prom<V +>{
      _get_standard_package_names1 = ldf `.get_standard_package_names`;
      r347 = dyn _get_standard_package_names1();
      c88 = `is.object`(r347);
      if c88 then L1() else L2(r347);
    L0(dx71):
      return dx71;
    L1():
      dr64 = tryDispatchBuiltin.1("$", r347);
      dc32 = getTryDispatchBuiltinDispatched(dr64);
      if dc32 then L3() else L2(dr64);
    L2(r349):
      r350 = `$`(r349, <sym base>);
      goto L0(r350);
    L3():
      dx70 = getTryDispatchBuiltinValue(dr64);
      goto L0(dx70);
    };
    r352 = dyn setdiff3(p92, p93);
    check L461() else D180();
  D98():
    deopt 345 [r175];
  D103():
    deopt 367 [];
  D180():
    deopt 641 [r352];
  L58(c50, r186):
    r193 = `!`(r186);
    c52 = `as.logical`(r193);
    c53 = `&&`(c50, c52);
    goto L57(c53);
  L59():
    goto L60();
  L60():
    sym23 = ldf `is.character`;
    base23 = ldf `is.character` in base;
    guard23 = `==`.4(sym23, base23);
    if guard23 then L335() else L336();
  L302():
    st pos = r175;
    reverse11 = ld reverse;
    check L303() else D99();
  L319():
    dx24 = getTryDispatchBuiltinValue(dr18);
    goto L316(dx24);
  L320():
    r182 = dyn getOption3("repos");
    check L321() else D104();
  L325():
    _in_ = ldf `%in%`;
    check L327() else D107();
  L326():
    r185 = dyn base22(<lang `%in%`(`$`(defaults, repos), getOption("repos"))>);
    goto L58(c45, r185);
  L331():
    stop = ldf stop;
    check L332() else D110();
  L461():
    st depends = r352;
    sym35 = ldf c;
    base35 = ldf c in base;
    guard35 = `==`.4(sym35, base35);
    if guard35 then L462() else L463();
  D99():
    deopt 347 [reverse11];
  D104():
    deopt 369 [r182];
  D107():
    deopt 386 [c45];
  D110():
    deopt 395 [];
  L61(r197):
    c57 = `as.logical`(r197);
    if c57 then L338() else L62();
  L91(r354):
    st libs = r354;
    __22 = ldf `::`;
    check L468() else D185();
  L303():
    reverse12 = force? reverse11;
    checkMissing(reverse12);
    c42 = `is.object`(reverse12);
    if c42 then L304() else L305(reverse12);
  L321():
    identical = ldf identical in base;
    r183 = dyn identical(dx25, r182, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
    check L322() else D105();
  L327():
    p45 = prom<V +>{
      defaults6 = ld defaults;
      defaults7 = force? defaults6;
      checkMissing(defaults7);
      c51 = `is.object`(defaults7);
      if c51 then L1() else L2(defaults7);
    L0(dx27):
      return dx27;
    L1():
      dr20 = tryDispatchBuiltin.1("$", defaults7);
      dc10 = getTryDispatchBuiltinDispatched(dr20);
      if dc10 then L3() else L2(dr20);
    L2(defaults9):
      r187 = `$`(defaults9, <sym repos>);
      goto L0(r187);
    L3():
      dx26 = getTryDispatchBuiltinValue(dr20);
      goto L0(dx26);
    };
    p46 = prom<V +>{
      getOption4 = ldf getOption;
      r189 = dyn getOption4("repos");
      return r189;
    };
    r191 = dyn _in_(p45, p46);
    check L328() else D108();
  L332():
    r194 = dyn stop("'reverse$repos' should be a subset of getOption(\"repos\")");
    check L333() else D111();
  L335():
    reverse15 = ld reverse;
    check L337() else D112();
  L336():
    r196 = dyn base23(<sym reverse>);
    goto L61(r196);
  L462():
    libdir2 = ld libdir;
    check L464() else D181();
  L463():
    r353 = dyn base35(<sym libdir>, <lang .libPaths()>);
    goto L91(r353);
  D105():
    deopt 378 [r183];
  D108():
    deopt 389 [c45, r191];
  D111():
    deopt 397 [r194];
  D112():
    deopt 401 [reverse15];
  D181():
    deopt 645 [libdir2];
  D185():
    deopt 654 [];
  L53(dx16):
    l = ld defaults;
    c43 = `is.object`(l);
    if c43 then L308() else L309(dx16, l);
  L62():
    sym24 = ldf `is.list`;
    base24 = ldf `is.list` in base;
    guard24 = `==`.4(sym24, base24);
    if guard24 then L341() else L342();
  L63(reverse19):
    st rnames = reverse19;
    config_val_to_logical = ldf config_val_to_logical;
    check L372() else D125();
  L304():
    dr14 = tryDispatchBuiltin.1("[", reverse12);
    dc7 = getTryDispatchBuiltinDispatched(dr14);
    if dc7 then L306() else L305(dr14);
  L305(reverse14):
    pos = ld pos;
    check L307() else D100();
  L322():
    goto L56(r183);
  L328():
    all = ldf all in base;
    r192 = dyn all(r191);
    check L329() else D109();
  L333():
    goto L60();
  L337():
    reverse16 = force? reverse15;
    checkMissing(reverse16);
    c56 = `is.character`(reverse16);
    goto L61(c56);
  L338():
    reverse17 = ld reverse;
    check L339() else D113();
  L464():
    libdir3 = force? libdir2;
    checkMissing(libdir3);
    _libPaths = ldf `.libPaths`;
    check L465() else D182();
  L468():
    r357 = dyn __22("utils", "installed.packages");
    check L469() else D186();
  D100():
    deopt 349 [reverse14, pos];
  D109():
    deopt 391 [c45, r192];
  D113():
    deopt 404 [reverse17];
  D125():
    deopt 450 [];
  D182():
    deopt 648 [];
  D186():
    deopt 657 [r357];
  L54(dx21, dx22):
    st defaults = dx22;
    goto L55();
  L64(r199):
    c59 = `as.logical`(r199);
    if c59 then L349() else L65();
  L306():
    dx15 = getTryDispatchBuiltinValue(dr14);
    goto L53(dx15);
  L307():
    pos1 = force? pos;
    checkMissing(pos1);
    r176 = `>`(pos1, 0);
    __9 = ldf `[` in base;
    r177 = dyn __9(reverse14, r176);
    goto L53(r177);
  L308():
    dr16 = tryDispatchBuiltin.0("[<-", l, dx16);
    dc8 = getTryDispatchBuiltinDispatched(dr16);
    if dc8 then L310() else L309(dx16, dr16);
  L309(dx18, l2):
    pos2 = ld pos;
    check L311() else D101();
  L329():
    goto L58(c45, r192);
  L339():
    reverse18 = force? reverse17;
    checkMissing(reverse18);
    goto L63(reverse18);
  L341():
    defaults10 = ld defaults;
    check L343() else D114();
  L342():
    r198 = dyn base24(<lang `$`(defaults, which)>);
    goto L64(r198);
  L372():
    p58 = prom<V +>{
      Sys_getenv = ldf `Sys.getenv`;
      r236 = dyn Sys_getenv("_R_TOOLS_C_P_I_D_ADD_RECOMMENDED_MAYBE_", "FALSE");
      return r236;
    };
    r238 = dyn config_val_to_logical(p58);
    check L373() else D126();
  L465():
    r355 = dyn _libPaths();
    check L466() else D183();
  L469():
    checkFun.0(r357);
    r358 = r357 as cls;
    p94 = prom<V +>{
      libs = ld libs;
      libs1 = force? libs;
      checkMissing(libs1);
      return libs1;
    };
    r360 = dyn r358(p94);
    check L470() else D187();
  D101():
    deopt 355 [dx18, l2, dx16, pos2];
  D114():
    deopt 408 [defaults10];
  D126():
    deopt 452 [r238];
  D183():
    deopt 649 [r355];
  D187():
    deopt 660 [r360];
  L65():
    package_dependencies = ldf package_dependencies;
    check L370() else D123();
  L310():
    dx20 = getTryDispatchBuiltinValue(dr16);
    goto L54(dx16, dx20);
  L311():
    pos3 = force? pos2;
    ___ = ldf `[<-` in base;
    r178 = dyn ___(l2, dx16, pos3);
    goto L54(dx18, r178);
  L343():
    defaults11 = force? defaults10;
    checkMissing(defaults11);
    c58 = `is.object`(defaults11);
    if c58 then L345() else L346(defaults11);
  L349():
    sym25 = ldf rep_len;
    base25 = ldf rep_len in base;
    guard25 = `==`.4(sym25, base25);
    if guard25 then L350() else L351();
  L373():
    st add_recommended_maybe = r238;
    add_recommended_maybe = ld add_recommended_maybe;
    check L374() else D127();
  L466():
    c89 = ldf c in base;
    r356 = dyn c89(libdir3, r355);
    check L467() else D184();
  L470():
    st installed = r360;
    installed = ld installed;
    check L471() else D188();
  D123():
    deopt 438 [];
  D127():
    deopt 454 [add_recommended_maybe];
  D184():
    deopt 651 [r356];
  D188():
    deopt 662 [installed];
  L66(r203):
    l3 = ld defaults;
    c62 = `is.object`(l3);
    if c62 then L364() else L365(r203, l3);
  L344(dx29):
    is_list = ldf `is.list` in base;
    r201 = dyn is_list(dx29);
    check L348() else D115();
  L345():
    dr22 = tryDispatchBuiltin.1("$", defaults11);
    dc11 = getTryDispatchBuiltinDispatched(dr22);
    if dc11 then L347() else L346(dr22);
  L346(defaults13):
    r200 = `$`(defaults13, <sym which>);
    goto L344(r200);
  L350():
    as_list2 = ldf `as.list`;
    check L352() else D116();
  L351():
    r202 = dyn base25(<lang as.list(`$`(defaults, recursive))>, <lang length(`$`(defaults, which))>);
    goto L66(r202);
  L370():
    p54 = prom<V +>{
      setdiff1 = ldf setdiff;
      p52 = prom<V +>{
        pnames = ld pnames;
        pnames1 = force? pnames;
        checkMissing(pnames1);
        return pnames1;
      };
      p53 = prom<V +>{
        pnames_using_install_no2 = ld pnames_using_install_no;
        pnames_using_install_no3 = force? pnames_using_install_no2;
        checkMissing(pnames_using_install_no3);
        return pnames_using_install_no3;
      };
      r228 = dyn setdiff1(p52, p53);
      return r228;
    };
    p55 = prom<V +>{
      available18 = ld available;
      available19 = force? available18;
      checkMissing(available19);
      return available19;
    };
    p56 = prom<V +>{
      defaults30 = ld defaults;
      defaults31 = force? defaults30;
      checkMissing(defaults31);
      c65 = `is.object`(defaults31);
      if c65 then L1() else L2(defaults31);
    L0(dx41):
      return dx41;
    L1():
      dr34 = tryDispatchBuiltin.1("$", defaults31);
      dc17 = getTryDispatchBuiltinDispatched(dr34);
      if dc17 then L3() else L2(dr34);
    L2(defaults33):
      r231 = `$`(defaults33, <sym which>);
      goto L0(r231);
    L3():
      dx40 = getTryDispatchBuiltinValue(dr34);
      goto L0(dx40);
    };
    p57 = prom<V +>{
      defaults34 = ld defaults;
      defaults35 = force? defaults34;
      checkMissing(defaults35);
      c66 = `is.object`(defaults35);
      if c66 then L1() else L2(defaults35);
    L0(dx43):
      return dx43;
    L1():
      dr36 = tryDispatchBuiltin.1("$", defaults35);
      dc18 = getTryDispatchBuiltinDispatched(dr36);
      if dc18 then L3() else L2(dr36);
    L2(defaults37):
      r233 = `$`(defaults37, <sym recursive>);
      goto L0(r233);
    L3():
      dx42 = getTryDispatchBuiltinValue(dr36);
      goto L0(dx42);
    };
    r235 = dyn package_dependencies[, , which, recursive, reverse](p54, p55, p56, p57, TRUE);
    check L371() else D124();
  L374():
    add_recommended_maybe1 = force? add_recommended_maybe;
    checkMissing(add_recommended_maybe1);
    c67 = `as.logical`(add_recommended_maybe1);
    if c67 then L375() else L68();
  L467():
    goto L91(r356);
  L471():
    installed1 = force? installed;
    checkMissing(installed1);
    c90 = `is.object`(installed1);
    if c90 then L472() else L473(installed1);
  D115():
    deopt 412 [r201];
  D116():
    deopt 416 [];
  D124():
    deopt 447 [r235];
  L68():
    goto L71();
  L71():
    intersect3 = ldf intersect;
    check L386() else D133();
  L92(dx73):
    st installed = dx73;
    __25 = ldf `::`;
    check L477() else D191();
  L347():
    dx28 = getTryDispatchBuiltinValue(dr22);
    goto L344(dx28);
  L348():
    goto L64(r201);
  L352():
    p47 = prom<V +>{
      defaults14 = ld defaults;
      defaults15 = force? defaults14;
      checkMissing(defaults15);
      c60 = `is.object`(defaults15);
      if c60 then L1() else L2(defaults15);
    L0(dx31):
      return dx31;
    L1():
      dr24 = tryDispatchBuiltin.1("$", defaults15);
      dc12 = getTryDispatchBuiltinDispatched(dr24);
      if dc12 then L3() else L2(dr24);
    L2(defaults17):
      r204 = `$`(defaults17, <sym recursive>);
      goto L0(r204);
    L3():
      dx30 = getTryDispatchBuiltinValue(dr24);
      goto L0(dx30);
    };
    r206 = dyn as_list2(p47);
    check L353() else D117();
  L363(dx35):
    st defaults = dx35;
    unlist = ldf unlist;
    check L367() else D121();
  L364():
    dr28 = tryDispatchBuiltin.0("$<-", l3, r203);
    dc14 = getTryDispatchBuiltinDispatched(dr28);
    if dc14 then L366() else L365(r203, dr28);
  L365(r213, l5):
    r216 = `$<-`(l5, <sym recursive>, r203);
    goto L363(r216);
  L371():
    goto L63(r235);
  L375():
    sym27 = ldf c;
    base27 = ldf c in base;
    guard27 = `==`.4(sym27, base27);
    if guard27 then L376() else L377();
  L472():
    dr66 = tryDispatchBuiltin.1("[", installed1);
    dc33 = getTryDispatchBuiltinDispatched(dr66);
    if dc33 then L474() else L473(dr66);
  L473(installed3):
    duplicated1 = ldf duplicated;
    check L475() else D189();
  D117():
    deopt 418 [r206];
  D121():
    deopt 432 [];
  D133():
    deopt 475 [];
  D189():
    deopt 665 [installed3];
  D191():
    deopt 676 [];
  L69(r240):
    st rnames = r240;
    goto L71();
  L353():
    sym26 = ldf length;
    base26 = ldf length in base;
    guard26 = `==`.4(sym26, base26);
    if guard26 then L354() else L355();
  L366():
    dx34 = getTryDispatchBuiltinValue(dr28);
    goto L363(dx34);
  L367():
    p51 = prom<V +>{
      Map = ldf Map;
      p48 = prom<V +>{
        r217 = clos inner128442759;
        return r217;
      };
      p49 = prom<V +>{
        defaults22 = ld defaults;
        defaults23 = force? defaults22;
        checkMissing(defaults23);
        c63 = `is.object`(defaults23);
        if c63 then L1() else L2(defaults23);
      L0(dx37):
        return dx37;
      L1():
        dr30 = tryDispatchBuiltin.1("$", defaults23);
        dc15 = getTryDispatchBuiltinDispatched(dr30);
        if dc15 then L3() else L2(dr30);
      L2(defaults25):
        r219 = `$`(defaults25, <sym which>);
        goto L0(r219);
      L3():
        dx36 = getTryDispatchBuiltinValue(dr30);
        goto L0(dx36);
      };
      p50 = prom<V +>{
        defaults26 = ld defaults;
        defaults27 = force? defaults26;
        checkMissing(defaults27);
        c64 = `is.object`(defaults27);
        if c64 then L1() else L2(defaults27);
      L0(dx39):
        return dx39;
      L1():
        dr32 = tryDispatchBuiltin.1("$", defaults27);
        dc16 = getTryDispatchBuiltinDispatched(dr32);
        if dc16 then L3() else L2(dr32);
      L2(defaults29):
        r221 = `$`(defaults29, <sym recursive>);
        goto L0(r221);
      L3():
        dx38 = getTryDispatchBuiltinValue(dr32);
        goto L0(dx38);
      };
      r223 = dyn Map(p48, p49, p50);
      return r223;
    };
    r225 = dyn unlist[, `use.names`](p51, FALSE);
    check L368() else D122();
  L376():
    rnames = ld rnames;
    check L378() else D128();
  L377():
    r239 = dyn base27(<sym rnames>, <lang names(Filter(length, lapply(package_dependencies(`$`(.get_standard_package_names(), recommended), available, which="all"), intersect, pnames)))>);
    goto L69(r239);
  L386():
    p67 = prom<V +>{
      unlist1 = ldf unlist;
      p66 = prom<V +>{
        rnames2 = ld rnames;
        rnames3 = force? rnames2;
        checkMissing(rnames3);
        return rnames3;
      };
      r261 = dyn unlist1[, `use.names`](p66, FALSE);
      return r261;
    };
    p68 = prom<V +>{
      available22 = ld available;
      available23 = force? available22;
      checkMissing(available23);
      c70 = `is.object`(available23);
      if c70 then L1() else L2();
    L0(dx47):
      return dx47;
    L1():
      dr40 = tryDispatchBuiltin.1("[", available23);
      dc20 = getTryDispatchBuiltinDispatched(dr40);
      if dc20 then L3() else L2();
    L2():
      __10 = ldf `[` in base;
      r263 = dyn __10(available23, <missing>, "Package");
      goto L0(r263);
    L3():
      dx46 = getTryDispatchBuiltinValue(dr40);
      goto L0(dx46);
    };
    r265 = dyn intersect3(p67, p68);
    check L387() else D134();
  L474():
    dx72 = getTryDispatchBuiltinValue(dr66);
    goto L92(dx72);
  L475():
    p95 = prom<V +>{
      installed4 = ld installed;
      installed5 = force? installed4;
      checkMissing(installed5);
      c91 = `is.object`(installed5);
      if c91 then L1() else L2();
    L0(dx75):
      return dx75;
    L1():
      dr68 = tryDispatchBuiltin.1("[", installed5);
      dc34 = getTryDispatchBuiltinDispatched(dr68);
      if dc34 then L3() else L2();
    L2():
      __23 = ldf `[` in base;
      r361 = dyn __23(installed5, <missing>, "Package");
      goto L0(r361);
    L3():
      dx74 = getTryDispatchBuiltinValue(dr68);
      goto L0(dx74);
    };
    r363 = dyn duplicated1(p95);
    check L476() else D190();
  L477():
    r366 = dyn __25("utils", "old.packages");
    check L478() else D192();
  D122():
    deopt 436 [r225];
  D128():
    deopt 458 [rnames];
  D134():
    deopt 478 [r265];
  D190():
    deopt 667 [installed3, r363];
  D192():
    deopt 679 [r366];
  L67(r208):
    rep_len = ldf rep_len in base;
    r211 = dyn rep_len(r206, r208);
    check L362() else D120();
  L354():
    defaults18 = ld defaults;
    check L356() else D118();
  L355():
    r207 = dyn base26(<lang `$`(defaults, which)>);
    goto L67(r207);
  L368():
    goto L63(r225);
  L378():
    rnames1 = force? rnames;
    checkMissing(rnames1);
    sym28 = ldf names;
    base28 = ldf names in base;
    guard28 = `==`.4(sym28, base28);
    if guard28 then L379() else L380();
  L387():
    st rnames = r265;
    setdiff2 = ldf setdiff;
    check L388() else D135();
  L476():
    r364 = `!`(r363);
    __24 = ldf `[` in base;
    r365 = dyn __24(installed1, r364, <missing>, FALSE);
    goto L92(r365);
  L478():
    checkFun.0(r366);
    r367 = r366 as cls;
    p96 = prom<V +>{
      installed8 = ld installed;
      installed9 = force? installed8;
      checkMissing(installed9);
      return installed9;
    };
    p97 = prom<V +>{
      available48 = ld available;
      available49 = force? available48;
      checkMissing(available49);
      return available49;
    };
    r370 = dyn r367[instPkgs, available](p96, p97);
    check L479() else D193();
  D118():
    deopt 421 [defaults18];
  D120():
    deopt 427 [r211];
  D135():
    deopt 481 [];
  D193():
    deopt 685 [r370];
  L70(r242):
    c69 = ldf c in base;
    r258 = dyn c69(rnames1, r242);
    check L384() else D132();
  L356():
    defaults19 = force? defaults18;
    checkMissing(defaults19);
    c61 = `is.object`(defaults19);
    if c61 then L358() else L359(defaults19);
  L362():
    goto L66(r211);
  L379():
    Filter = ldf Filter;
    check L381() else D129();
  L380():
    r241 = dyn base28(<lang Filter(length, lapply(package_dependencies(`$`(.get_standard_package_names(), recommended), available, which="all"), intersect, pnames))>);
    goto L70(r241);
  L388():
    p69 = prom<V +>{
      rnames4 = ld rnames;
      rnames5 = force? rnames4;
      checkMissing(rnames5);
      return rnames5;
    };
    p70 = prom<V +>{
      pnames4 = ld pnames;
      pnames5 = force? pnames4;
      checkMissing(pnames5);
      return pnames5;
    };
    r268 = dyn setdiff2(p69, p70);
    check L389() else D136();
  L479():
    c92 = `is.object`(r370);
    if c92 then L480() else L481();
  D129():
    deopt 463 [];
  D132():
    deopt 470 [r258];
  D136():
    deopt 484 [r268];
  L93(dx77):
    st outofdate = dx77;
    installed10 = ld installed;
    check L483() else D194();
  L357(dx33):
    length2 = ldf length in base;
    r210 = dyn length2(dx33);
    check L361() else D119();
  L358():
    dr26 = tryDispatchBuiltin.1("$", defaults19);
    dc13 = getTryDispatchBuiltinDispatched(dr26);
    if dc13 then L360() else L359(dr26);
  L359(defaults21):
    r209 = `$`(defaults21, <sym which>);
    goto L357(r209);
  L381():
    p59 = prom<V +>{
      length3 = ld length;
      length4 = force? length3;
      checkMissing(length4);
      return length4;
    };
    p65 = prom<V +>{
      lapply1 = ldf lapply;
      p62 = prom<V +>{
        package_dependencies1 = ldf package_dependencies;
        p60 = prom<V +>{
          _get_standard_package_names = ldf `.get_standard_package_names`;
          r244 = dyn _get_standard_package_names();
          c68 = `is.object`(r244);
          if c68 then L1() else L2(r244);
        L0(dx45):
          return dx45;
        L1():
          dr38 = tryDispatchBuiltin.1("$", r244);
          dc19 = getTryDispatchBuiltinDispatched(dr38);
          if dc19 then L3() else L2(dr38);
        L2(r246):
          r247 = `$`(r246, <sym recommended>);
          goto L0(r247);
        L3():
          dx44 = getTryDispatchBuiltinValue(dr38);
          goto L0(dx44);
        };
        p61 = prom<V +>{
          available20 = ld available;
          available21 = force? available20;
          checkMissing(available21);
          return available21;
        };
        r250 = dyn package_dependencies1[, , which](p60, p61, "all");
        return r250;
      };
      p63 = prom<V +>{
        intersect1 = ld intersect;
        intersect2 = force? intersect1;
        checkMissing(intersect2);
        return intersect2;
      };
      p64 = prom<V +>{
        pnames2 = ld pnames;
        pnames3 = force? pnames2;
        checkMissing(pnames3);
        return pnames3;
      };
      r254 = dyn lapply1(p62, p63, p64);
      return r254;
    };
    r256 = dyn Filter(p59, p65);
    check L382() else D130();
  L384():
    goto L69(r258);
  L389():
    st rnames = r268;
    sym29 = ldf match;
    base29 = ldf match in base;
    guard29 = `==`.4(sym29, base29);
    if guard29 then L390() else L391();
  L480():
    dr70 = tryDispatchBuiltin.1("[", r370);
    dc35 = getTryDispatchBuiltinDispatched(dr70);
    if dc35 then L482() else L481();
  L481():
    __26 = ldf `[` in base;
    r373 = dyn __26(r370, <missing>, "Package");
    goto L93(r373);
  D119():
    deopt 425 [r210];
  D130():
    deopt 466 [r256];
  D194():
    deopt 691 [installed10];
  L72(r270):
    st pos = r270;
    subset_reverse_repos2 = ld subset_reverse_repos;
    check L398() else D140();
  L360():
    dx32 = getTryDispatchBuiltinValue(dr26);
    goto L357(dx32);
  L361():
    goto L67(r210);
  L382():
    names3 = ldf names in base;
    r257 = dyn names3(r256);
    check L383() else D131();
  L390():
    rnames6 = ld rnames;
    check L392() else D137();
  L391():
    r269 = dyn base29[, , nomatch](<sym rnames>, <lang `[`(available, , "Package")>, 0);
    goto L72(r269);
  L482():
    dx76 = getTryDispatchBuiltinValue(dr70);
    goto L93(dx76);
  L483():
    installed11 = force? installed10;
    checkMissing(installed11);
    c93 = `is.object`(installed11);
    if c93 then L484() else L485();
  D131():
    deopt 468 [r257];
  D137():
    deopt 488 [rnames6];
  D140():
    deopt 501 [subset_reverse_repos2];
  L94(dx79):
    st installed = dx79;
    sym36 = ldf c;
    base36 = ldf c in base;
    guard36 = `==`.4(sym36, base36);
    if guard36 then L487() else L488();
  L383():
    goto L70(r257);
  L392():
    rnames7 = force? rnames6;
    checkMissing(rnames7);
    available26 = ld available;
    check L393() else D138();
  L398():
    subset_reverse_repos3 = force? subset_reverse_repos2;
    checkMissing(subset_reverse_repos3);
    c72 = `as.logical`(subset_reverse_repos3);
    if c72 then L399() else L74();
  L484():
    dr72 = tryDispatchBuiltin.1("[", installed11);
    dc36 = getTryDispatchBuiltinDispatched(dr72);
    if dc36 then L486() else L485();
  L485():
    __27 = ldf `[` in base;
    r374 = dyn __27(installed11, <missing>, "Package");
    goto L94(r374);
  D138():
    deopt 490 [available26];
  L74():
    goto L76();
  L76():
    available34 = ld available;
    check L411() else D149();
  L95(r376):
    st depends = r376;
    sym37 = ldf length;
    base37 = ldf length in base;
    guard37 = `==`.4(sym37, base37);
    if guard37 then L494() else L495();
  L393():
    available27 = force? available26;
    checkMissing(available27);
    c71 = `is.object`(available27);
    if c71 then L394() else L395();
  L399():
    split = ldf split;
    check L400() else D141();
  L486():
    dx78 = getTryDispatchBuiltinValue(dr72);
    goto L94(dx78);
  L487():
    setdiff4 = ldf setdiff;
    check L489() else D195();
  L488():
    r375 = dyn base36(<lang setdiff(depends, installed)>, <lang intersect(intersect(depends, installed), outofdate)>);
    goto L95(r375);
  D141():
    deopt 504 [];
  D149():
    deopt 532 [available34];
  D195():
    deopt 701 [];
  L73(dx49):
    match = ldf match in base;
    r272 = dyn match(rnames7, dx49, 0, NULL);
    check L397() else D139();
  L96(r388):
    c95 = `as.logical`(r388);
    if c95 then L498() else L97();
  L394():
    dr42 = tryDispatchBuiltin.1("[", available27);
    dc21 = getTryDispatchBuiltinDispatched(dr42);
    if dc21 then L396() else L395();
  L395():
    __11 = ldf `[` in base;
    r271 = dyn __11(available27, <missing>, "Package");
    goto L73(r271);
  L400():
    p71 = prom<V +>{
      pos4 = ld pos;
      pos5 = force? pos4;
      checkMissing(pos5);
      c73 = `is.object`(pos5);
      if c73 then L1() else L2(pos5);
    L0(dx51):
      return dx51;
    L1():
      dr44 = tryDispatchBuiltin.1("[", pos5);
      dc22 = getTryDispatchBuiltinDispatched(dr44);
      if dc22 then L3() else L2(dr44);
    L2(pos7):
      pos8 = ld pos;
      pos9 = force? pos8;
      checkMissing(pos9);
      r273 = `>`(pos9, 0);
      __12 = ldf `[` in base;
      r274 = dyn __12(pos7, r273);
      goto L0(r274);
    L3():
      dx50 = getTryDispatchBuiltinValue(dr44);
      goto L0(dx50);
    };
    p72 = prom<V +>{
      available30 = ld available;
      available31 = force? available30;
      checkMissing(available31);
      c74 = `is.object`(available31);
      if c74 then L1() else L2(available31);
    L0(dx53):
      return dx53;
    L1():
      dr46 = tryDispatchBuiltin.1("[", available31);
      dc23 = getTryDispatchBuiltinDispatched(dr46);
      if dc23 then L3() else L2(dr46);
    L2(available33):
      pos10 = ld pos;
      pos11 = force? pos10;
      __13 = ldf `[` in base;
      r276 = dyn __13(available33, pos11, "Repository");
      goto L0(r276);
    L3():
      dx52 = getTryDispatchBuiltinValue(dr46);
      goto L0(dx52);
    };
    r278 = dyn split(p71, p72);
    check L401() else D142();
  L411():
    available35 = force? available34;
    checkMissing(available35);
    c77 = `is.object`(available35);
    if c77 then L412() else L413(available35);
  L489():
    p98 = prom<V +>{
      depends2 = ld depends;
      depends3 = force? depends2;
      checkMissing(depends3);
      return depends3;
    };
    p99 = prom<V +>{
      installed14 = ld installed;
      installed15 = force? installed14;
      checkMissing(installed15);
      return installed15;
    };
    r379 = dyn setdiff4(p98, p99);
    check L490() else D196();
  L494():
    depends6 = ld depends;
    check L496() else D200();
  L495():
    r387 = dyn base37(<sym depends>);
    goto L96(r387);
  D139():
    deopt 499 [r272];
  D142():
    deopt 507 [r278];
  D196():
    deopt 704 [r379];
  D200():
    deopt 715 [depends6];
  L77(dx59):
    st rnames = dx59;
    sprintf2 = ldf sprintf;
    check L416() else D151();
  L97():
    goto L98();
  L98():
    sym42 = ldf `is.list`;
    base42 = ldf `is.list` in base;
    guard42 = `==`.4(sym42, base42);
    if guard42 then L523() else L524();
  L396():
    dx48 = getTryDispatchBuiltinValue(dr42);
    goto L73(dx48);
  L397():
    goto L72(r272);
  L401():
    st pos = r278;
    sym30 = ldf names;
    base30 = ldf names in base;
    guard30 = `==`.4(sym30, base30);
    if guard30 then L402() else L403();
  L412():
    dr52 = tryDispatchBuiltin.1("[", available35);
    dc26 = getTryDispatchBuiltinDispatched(dr52);
    if dc26 then L414() else L413(dr52);
  L413(available37):
    pos18 = ld pos;
    check L415() else D150();
  L490():
    intersect4 = ldf intersect;
    check L491() else D197();
  L496():
    depends7 = force? depends6;
    checkMissing(depends7);
    length6 = ldf length in base;
    r389 = dyn length6(depends7);
    check L497() else D201();
  L498():
    message5 = ldf message;
    check L499() else D202();
  D150():
    deopt 534 [available37, pos18];
  D151():
    deopt 540 [];
  D197():
    deopt 706 [];
  D201():
    deopt 718 [r389];
  D202():
    deopt 720 [];
  L75(r280):
    st nms = r280;
    rowSums = ldf rowSums;
    check L406() else D145();
  L99(r447):
    c97 = `as.logical`(r447);
    if c97 then L527() else L100();
  L402():
    pos12 = ld pos;
    check L404() else D143();
  L403():
    r279 = dyn base30(<sym pos>);
    goto L75(r279);
  L414():
    dx58 = getTryDispatchBuiltinValue(dr52);
    goto L77(dx58);
  L415():
    pos19 = force? pos18;
    __15 = ldf `[` in base;
    r294 = dyn __15(available37, pos19, "Package");
    goto L77(r294);
  L416():
    p78 = prom<V +>{
      rnames8 = ld rnames;
      rnames9 = force? rnames8;
      checkMissing(rnames9);
      return rnames9;
    };
    p79 = prom<V +>{
      available38 = ld available;
      available39 = force? available38;
      checkMissing(available39);
      c78 = `is.object`(available39);
      if c78 then L1() else L2(available39);
    L0(dx61):
      return dx61;
    L1():
      dr54 = tryDispatchBuiltin.1("[", available39);
      dc27 = getTryDispatchBuiltinDispatched(dr54);
      if dc27 then L3() else L2(dr54);
    L2(available41):
      pos20 = ld pos;
      pos21 = force? pos20;
      __16 = ldf `[` in base;
      r296 = dyn __16(available41, pos21, "Version");
      goto L0(r296);
    L3():
      dx60 = getTryDispatchBuiltinValue(dr54);
      goto L0(dx60);
    };
    r298 = dyn sprintf2("%s_%s.tar.gz", p78, p79);
    check L417() else D152();
  L491():
    p102 = prom<V +>{
      intersect5 = ldf intersect;
      p100 = prom<V +>{
        depends4 = ld depends;
        depends5 = force? depends4;
        checkMissing(depends5);
        return depends5;
      };
      p101 = prom<V +>{
        installed16 = ld installed;
        installed17 = force? installed16;
        checkMissing(installed17);
        return installed17;
      };
      r382 = dyn intersect5(p100, p101);
      return r382;
    };
    p103 = prom<V +>{
      outofdate = ld outofdate;
      outofdate1 = force? outofdate;
      checkMissing(outofdate1);
      return outofdate1;
    };
    r385 = dyn intersect4(p102, p103);
    check L492() else D198();
  L497():
    goto L96(r389);
  L499():
    p110 = prom<V +>{
      paste1 = ldf paste;
      p109 = prom<V +>{
        strwrap = ldf strwrap;
        p108 = prom<V +>{
          sprintf5 = ldf sprintf;
          p107 = prom<V +>{
            paste2 = ldf paste;
            p106 = prom<V +>{
              sQuote = ldf sQuote;
              p105 = prom<V +>{
                sort = ldf sort;
                p104 = prom<V +>{
                  depends8 = ld depends;
                  depends9 = force? depends8;
                  checkMissing(depends9);
                  return depends9;
                };
                r391 = dyn sort(p104);
                return r391;
              };
              r393 = dyn sQuote(p105);
              return r393;
            };
            r395 = dyn paste2[, collapse](p106, ", ");
            return r395;
          };
          r397 = dyn sprintf5("installing dependencies %s", p107);
          return r397;
        };
        r399 = dyn strwrap[, exdent](p108, 2);
        return r399;
      };
      r401 = dyn paste1[, collapse](p109, "\n");
      return r401;
    };
    r403 = dyn message5[, domain](p110, NA_LGL);
    check L500() else D203();
  L523():
    check_args1 = ld check_args;
    check L525() else D225();
  L524():
    r446 = dyn base42(<sym check_args>);
    goto L99(r446);
  D143():
    deopt 511 [pos12];
  D145():
    deopt 517 [];
  D152():
    deopt 544 [r298];
  D198():
    deopt 709 [r385];
  D203():
    deopt 724 [r403];
  D225():
    deopt 780 [check_args1];
  L100():
    sym50 = ldf `rep.int`;
    base50 = ldf `rep.int` in base;
    guard50 = `==`.4(sym50, base50);
    if guard50 then L560() else L561();
  L110(r472):
    st check_args = r472;
    check_args_db9 = ld check_args_db;
    check L571() else D243();
  L404():
    pos13 = force? pos12;
    checkMissing(pos13);
    names4 = ldf names in base;
    r281 = dyn names4(pos13);
    check L405() else D144();
  L406():
    p76 = prom<V +>{
      outer = ldf outer;
      p73 = prom<V +>{
        nms8 = ld nms;
        nms9 = force? nms8;
        checkMissing(nms9);
        return nms9;
      };
      p74 = prom<V +>{
        defaults38 = ld defaults;
        defaults39 = force? defaults38;
        checkMissing(defaults39);
        c75 = `is.object`(defaults39);
        if c75 then L1() else L2(defaults39);
      L0(dx55):
        return dx55;
      L1():
        dr48 = tryDispatchBuiltin.1("$", defaults39);
        dc24 = getTryDispatchBuiltinDispatched(dr48);
        if dc24 then L3() else L2(dr48);
      L2(defaults41):
        r283 = `$`(defaults41, <sym repos>);
        goto L0(r283);
      L3():
        dx54 = getTryDispatchBuiltinValue(dr48);
        goto L0(dx54);
      };
      p75 = prom<V +>{
        startsWith = ld startsWith;
        startsWith1 = force? startsWith;
        checkMissing(startsWith1);
        return startsWith1;
      };
      r286 = dyn outer(p73, p74, p75);
      return r286;
    };
    r288 = dyn rowSums(p76);
    check L407() else D146();
  L417():
    st rfiles = r298;
    sym31 = ldf length;
    base31 = ldf length in base;
    guard31 = `==`.4(sym31, base31);
    if guard31 then L418() else L419();
  L492():
    c94 = ldf c in base;
    r386 = dyn c94(r379, r385);
    check L493() else D199();
  L500():
    message6 = ldf message;
    check L501() else D204();
  L525():
    check_args2 = force? check_args1;
    checkMissing(check_args2);
    is_list1 = ldf `is.list` in base;
    r448 = dyn is_list1(check_args2);
    check L526() else D226();
  L527():
    sym43 = ldf c;
    base43 = ldf c in base;
    guard43 = `==`.4(sym43, base43);
    if guard43 then L528() else L529();
  D144():
    deopt 514 [r281];
  D146():
    deopt 519 [r288];
  D199():
    deopt 711 [r386];
  D204():
    deopt 726 [];
  D226():
    deopt 783 [r448];
  D243():
    deopt 843 [check_args_db9];
  L78(r300):
    c79 = `as.logical`(r300);
    if c79 then L422() else L79();
  L101(r450):
    goto L110(r450);
  L405():
    goto L75(r281);
  L407():
    r289 = `>`(r288, 0.0);
    st ind = r289;
    unlist2 = ldf unlist;
    check L408() else D147();
  L418():
    rfiles = ld rfiles;
    check L420() else D153();
  L419():
    r299 = dyn base31(<sym rfiles>);
    goto L78(r299);
  L493():
    goto L95(r386);
  L501():
    r404 = dyn message6("");
    check L502() else D205();
  L526():
    goto L99(r448);
  L528():
    sym44 = ldf `rep.int`;
    base44 = ldf `rep.int` in base;
    guard44 = `==`.4(sym44, base44);
    if guard44 then L530() else L531();
  L529():
    r449 = dyn base43(<lang rep.int(list(`[[`(check_args, 1)), length(pfiles))>, <lang rep.int(list(`[[`(check_args, 2)), length(rfiles))>);
    goto L101(r449);
  L560():
    sym51 = ldf list;
    base51 = ldf list in base;
    guard51 = `==`.4(sym51, base51);
    if guard51 then L562() else L563();
  L561():
    r473 = dyn base50(<lang list(check_args)>, <lang length(pnames)>);
    goto L110(r473);
  L571():
    check_args_db10 = force? check_args_db9;
    checkMissing(check_args_db10);
    c101 = `is.object`(check_args_db10);
    if c101 then L572() else L573(check_args_db10);
  D147():
    deopt 524 [];
  D153():
    deopt 548 [rfiles];
  D205():
    deopt 728 [r404];
  L79():
    goto L85(NULL);
  L85(r327):
    goto L86();
  L102(r452):
    sym47 = ldf `rep.int`;
    base47 = ldf `rep.int` in base;
    guard47 = `==`.4(sym47, base47);
    if guard47 then L544() else L545();
  L111(r475):
    sym52 = ldf length;
    base52 = ldf length in base;
    guard52 = `==`.4(sym52, base52);
    if guard52 then L566() else L567();
  L113(dx85):
    st check_args_db = dx85;
    Map1 = ldf Map;
    check L576() else D245();
  L408():
    p77 = prom<V +>{
      pos14 = ld pos;
      pos15 = force? pos14;
      checkMissing(pos15);
      c76 = `is.object`(pos15);
      if c76 then L1() else L2(pos15);
    L0(dx57):
      return dx57;
    L1():
      dr50 = tryDispatchBuiltin.1("[", pos15);
      dc25 = getTryDispatchBuiltinDispatched(dr50);
      if dc25 then L3() else L2(dr50);
    L2(pos17):
      ind = ld ind;
      ind1 = force? ind;
      __14 = ldf `[` in base;
      r290 = dyn __14(pos17, ind1);
      goto L0(r290);
    L3():
      dx56 = getTryDispatchBuiltinValue(dr50);
      goto L0(dx56);
    };
    r292 = dyn unlist2[, `use.names`](p77, FALSE);
    check L409() else D148();
  L420():
    rfiles1 = force? rfiles;
    checkMissing(rfiles1);
    length5 = ldf length in base;
    r301 = dyn length5(rfiles1);
    check L421() else D154();
  L422():
    message1 = ldf message;
    check L423() else D155();
  L502():
    as_list3 = ldf `as.list`;
    check L503() else D206();
  L530():
    sym45 = ldf list;
    base45 = ldf list in base;
    guard45 = `==`.4(sym45, base45);
    if guard45 then L532() else L533();
  L531():
    r451 = dyn base44(<lang list(`[[`(check_args, 1))>, <lang length(pfiles)>);
    goto L102(r451);
  L562():
    check_args11 = ld check_args;
    check L564() else D238();
  L563():
    r474 = dyn base51(<sym check_args>);
    goto L111(r474);
  L572():
    dr78 = tryDispatchBuiltin.1("[", check_args_db10);
    dc39 = getTryDispatchBuiltinDispatched(dr78);
    if dc39 then L574() else L573(dr78);
  L573(check_args_db12):
    pnames12 = ld pnames;
    check L575() else D244();
  D148():
    deopt 528 [r292];
  D154():
    deopt 551 [r301];
  D155():
    deopt 553 [];
  D206():
    deopt 730 [];
  D238():
    deopt 830 [check_args11];
  D244():
    deopt 845 [check_args_db12, pnames12];
  D245():
    deopt 850 [];
  L103(r454):
    sym46 = ldf length;
    base46 = ldf length in base;
    guard46 = `==`.4(sym46, base46);
    if guard46 then L539() else L540();
  L106(r462):
    c100 = ldf c in base;
    r471 = dyn c100(r452, r462);
    check L558() else D237();
  L112(r478):
    rep_int3 = ldf `rep.int` in base;
    r480 = dyn rep_int3(r475, r478);
    check L570() else D242();
  L409():
    st pos = r292;
    goto L76();
  L421():
    goto L78(r301);
  L423():
    r302 = dyn message1("downloading reverse dependencies ...");
    check L424() else D156();
  L503():
    p111 = prom<V +>{
      sym38 = ldf `rep.int`;
      base38 = ldf `rep.int` in base;
      guard38 = `==`.4(sym38, base38);
      if guard38 then L2() else L3();
    L0(r406):
      return r406;
    L2():
      sym39 = ldf length;
      base39 = ldf length in base;
      guard39 = `==`.4(sym39, base39);
      if guard39 then L4() else L5();
    L3():
      r405 = dyn base38("--fake", <lang length(pnames_using_install_fake)>);
      goto L0(r405);
    L1(r408):
      rep_int = ldf `rep.int` in base;
      r410 = dyn rep_int("--fake", r408);
      goto L0(r410);
    L4():
      pnames_using_install_fake4 = ld pnames_using_install_fake;
      pnames_using_install_fake5 = force? pnames_using_install_fake4;
      checkMissing(pnames_using_install_fake5);
      length7 = ldf length in base;
      r409 = dyn length7(pnames_using_install_fake5);
      goto L1(r409);
    L5():
      r407 = dyn base39(<sym pnames_using_install_fake>);
      goto L1(r407);
    };
    r412 = dyn as_list3(p111);
    check L504() else D207();
  L532():
    check_args3 = ld check_args;
    check L534() else D227();
  L533():
    r453 = dyn base45(<lang `[[`(check_args, 1)>);
    goto L103(r453);
  L544():
    sym48 = ldf list;
    base48 = ldf list in base;
    guard48 = `==`.4(sym48, base48);
    if guard48 then L546() else L547();
  L545():
    r461 = dyn base47(<lang list(`[[`(check_args, 2))>, <lang length(rfiles)>);
    goto L106(r461);
  L564():
    check_args12 = force? check_args11;
    checkMissing(check_args12);
    list8 = ldf list in base;
    r476 = dyn list8(check_args12);
    check L565() else D239();
  L566():
    pnames10 = ld pnames;
    check L568() else D240();
  L567():
    r477 = dyn base52(<sym pnames>);
    goto L112(r477);
  L574():
    dx84 = getTryDispatchBuiltinValue(dr78);
    goto L113(dx84);
  L575():
    pnames13 = force? pnames12;
    __31 = ldf `[` in base;
    r481 = dyn __31(check_args_db12, pnames13);
    goto L113(r481);
  L576():
    p125 = prom<V +>{
      c102 = ld c;
      c103 = force? c102;
      checkMissing(c103);
      return c103;
    };
    p126 = prom<V +>{
      check_args13 = ld check_args;
      check_args14 = force? check_args13;
      checkMissing(check_args14);
      return check_args14;
    };
    p127 = prom<V +>{
      check_args_db13 = ld check_args_db;
      check_args_db14 = force? check_args_db13;
      checkMissing(check_args_db14);
      return check_args_db14;
    };
    r485 = dyn Map1(p125, p126, p127);
    check L577() else D246();
  D156():
    deopt 555 [r302];
  D207():
    deopt 732 [r412];
  D227():
    deopt 790 [check_args3];
  D237():
    deopt 825 [r471];
  D239():
    deopt 833 [r476];
  D240():
    deopt 836 [pnames10];
  D242():
    deopt 841 [r480];
  D246():
    deopt 854 [r485];
  L105(r458):
    rep_int1 = ldf `rep.int` in base;
    r460 = dyn rep_int1(r454, r458);
    check L543() else D231();
  L107(r464):
    sym49 = ldf length;
    base49 = ldf length in base;
    guard49 = `==`.4(sym49, base49);
    if guard49 then L553() else L554();
  L424():
    sprintf3 = ldf sprintf;
    check L425() else D157();
  L504():
    st iflags = r412;
    pnames_using_install_fake6 = ld pnames_using_install_fake;
    check L505() else D208();
  L534():
    check_args4 = force? check_args3;
    checkMissing(check_args4);
    c98 = `is.object`(check_args4);
    if c98 then L535() else L536(check_args4);
  L539():
    pfiles7 = ld pfiles;
    check L541() else D229();
  L540():
    r457 = dyn base46(<sym pfiles>);
    goto L105(r457);
  L546():
    check_args7 = ld check_args;
    check L548() else D232();
  L547():
    r463 = dyn base48(<lang `[[`(check_args, 2)>);
    goto L107(r463);
  L558():
    goto L101(r471);
  L565():
    goto L111(r476);
  L568():
    pnames11 = force? pnames10;
    checkMissing(pnames11);
    length10 = ldf length in base;
    r479 = dyn length10(pnames11);
    check L569() else D241();
  L570():
    goto L110(r480);
  L577():
    st check_args_db = r485;
    pnames14 = ld pnames;
    check L578() else D247();
  D157():
    deopt 557 [];
  D208():
    deopt 734 [pnames_using_install_fake6];
  D229():
    deopt 799 [pfiles7];
  D231():
    deopt 804 [r460];
  D232():
    deopt 809 [check_args7];
  D241():
    deopt 839 [r479];
  D247():
    deopt 856 [pnames14];
  L104(dx81):
    list6 = ldf list in base;
    r456 = dyn list6(dx81);
    check L538() else D228();
  L109(r468):
    rep_int2 = ldf `rep.int` in base;
    r470 = dyn rep_int2(r464, r468);
    check L557() else D236();
  L425():
    p80 = prom<V +>{
      available42 = ld available;
      available43 = force? available42;
      checkMissing(available43);
      c80 = `is.object`(available43);
      if c80 then L1() else L2(available43);
    L0(dx63):
      return dx63;
    L1():
      dr56 = tryDispatchBuiltin.1("[", available43);
      dc28 = getTryDispatchBuiltinDispatched(dr56);
      if dc28 then L3() else L2(dr56);
    L2(available45):
      pos22 = ld pos;
      pos23 = force? pos22;
      __17 = ldf `[` in base;
      r303 = dyn __17(available45, pos23, "Repository");
      goto L0(r303);
    L3():
      dx62 = getTryDispatchBuiltinValue(dr56);
      goto L0(dx62);
    };
    p81 = prom<V +>{
      rfiles2 = ld rfiles;
      rfiles3 = force? rfiles2;
      checkMissing(rfiles3);
      return rfiles3;
    };
    r306 = dyn sprintf3("%s/%s", p80, p81);
    check L426() else D158();
  L505():
    pnames_using_install_fake7 = force? pnames_using_install_fake6;
    checkMissing(pnames_using_install_fake7);
    l7 = ld iflags;
    names__ = ldf `names<-`;
    check L506() else D209();
  L535():
    dr74 = tryDispatchBuiltin.1("[[", check_args4);
    dc37 = getTryDispatchBuiltinDispatched(dr74);
    if dc37 then L537() else L536(dr74);
  L536(check_args6):
    __29 = ldf `[[` in base;
    r455 = dyn __29(check_args6, 1);
    goto L104(r455);
  L541():
    pfiles8 = force? pfiles7;
    checkMissing(pfiles8);
    length8 = ldf length in base;
    r459 = dyn length8(pfiles8);
    check L542() else D230();
  L543():
    goto L102(r460);
  L548():
    check_args8 = force? check_args7;
    checkMissing(check_args8);
    c99 = `is.object`(check_args8);
    if c99 then L549() else L550(check_args8);
  L553():
    rfiles14 = ld rfiles;
    check L555() else D234();
  L554():
    r467 = dyn base49(<sym rfiles>);
    goto L109(r467);
  L569():
    goto L112(r479);
  L578():
    pnames15 = force? pnames14;
    checkMissing(pnames15);
    l8 = ld check_args_db;
    names__1 = ldf `names<-`;
    check L579() else D248();
  D158():
    deopt 561 [r306];
  D209():
    deopt 737 [pnames_using_install_fake7, l7, pnames_using_install_fake7];
  D228():
    deopt 796 [r456];
  D230():
    deopt 802 [r459];
  D234():
    deopt 818 [rfiles14];
  D236():
    deopt 823 [r470];
  D248():
    deopt 859 [pnames15, l8, pnames15];
  L108(dx83):
    list7 = ldf list in base;
    r466 = dyn list7(dx83);
    check L552() else D233();
  L426():
    st rfurls = r306;
    sym32 = ldf seq_along;
    base32 = ldf seq_along in base;
    guard32 = `==`.4(sym32, base32);
    if guard32 then L427() else L428();
  L506():
    r413 = dyn names__(l7, NULL, pnames_using_install_fake7);
    check L507() else D210();
  L537():
    dx80 = getTryDispatchBuiltinValue(dr74);
    goto L104(dx80);
  L538():
    goto L103(r456);
  L542():
    goto L105(r459);
  L549():
    dr76 = tryDispatchBuiltin.1("[[", check_args8);
    dc38 = getTryDispatchBuiltinDispatched(dr76);
    if dc38 then L551() else L550(dr76);
  L550(check_args10):
    __30 = ldf `[[` in base;
    r465 = dyn __30(check_args10, 2);
    goto L108(r465);
  L555():
    rfiles15 = force? rfiles14;
    checkMissing(rfiles15);
    length9 = ldf length in base;
    r469 = dyn length9(rfiles15);
    check L556() else D235();
  L557():
    goto L106(r470);
  L579():
    r486 = dyn names__1(l8, NULL, pnames15);
    check L580() else D249();
  D210():
    deopt 739 [pnames_using_install_fake7, r413];
  D233():
    deopt 815 [r466];
  D235():
    deopt 821 [r469];
  D249():
    deopt 861 [pnames15, r486];
  L80(r308):
    s = toForSeq(r308);
    l6 = length(s);
    i = 0;
    goto L81(i);
  L427():
    rfiles4 = ld rfiles;
    check L429() else D159();
  L428():
    r307 = dyn base32(<sym rfiles>);
    goto L80(r307);
  L507():
    st iflags = r413;
    tempfile = ldf tempfile;
    check L508() else D211();
  L551():
    dx82 = getTryDispatchBuiltinValue(dr76);
    goto L108(dx82);
  L552():
    goto L107(r466);
  L556():
    goto L109(r469);
  L580():
    st check_args_db = r486;
    sym53 = ldf `is.list`;
    base53 = ldf `is.list` in base;
    guard53 = `==`.4(sym53, base53);
    if guard53 then L581() else L582();
  D159():
    deopt 564 [rfiles4];
  D211():
    deopt 742 [];
  L81(i1):
    i2 = `+`.1(i1, 1);
    c81 = `<`.1(l6, i2);
    if c81 then L430() else L84();
  L114(r488):
    c104 = `as.logical`(r488);
    if c104 then L585() else L115();
  L429():
    rfiles5 = force? rfiles4;
    checkMissing(rfiles5);
    r309 = seq_along(rfiles5);
    goto L80(r309);
  L508():
    p112 = prom<V +>{
      outdir2 = ld outdir;
      outdir3 = force? outdir2;
      checkMissing(outdir3);
      return outdir3;
    };
    r415 = dyn tempfile[tmpdir](p112);
    check L509() else D212();
  L581():
    check_env1 = ld check_env;
    check L583() else D250();
  L582():
    r487 = dyn base53(<sym check_env>);
    goto L114(r487);
  D212():
    deopt 745 [r415];
  D250():
    deopt 865 [check_env1];
  L84():
    x = `[[`(s, i2, NULL, TRUE);
    st i = x;
    message2 = ldf message;
    check L431() else D160();
  L115():
    sym61 = ldf `rep.int`;
    base61 = ldf `rep.int` in base;
    guard61 = `==`.4(sym61, base61);
    if guard61 then L618() else L619();
  L125(r513):
    st check_env = r513;
    as_list4 = ldf `as.list`;
    check L629() else D268();
  L430():
    message4 = ldf message;
    check L440() else D167();
  L509():
    st tmpdir = r415;
    dir_create2 = ldf `dir.create`;
    check L510() else D213();
  L583():
    check_env2 = force? check_env1;
    checkMissing(check_env2);
    is_list2 = ldf `is.list` in base;
    r489 = dyn is_list2(check_env2);
    check L584() else D251();
  L585():
    sym54 = ldf c;
    base54 = ldf c in base;
    guard54 = `==`.4(sym54, base54);
    if guard54 then L586() else L587();
  D160():
    deopt 568 [i2];
  D167():
    deopt 598 [];
  D213():
    deopt 748 [];
  D251():
    deopt 868 [r489];
  D268():
    deopt 929 [];
  L116(r491):
    goto L125(r491);
  L431():
    p83 = prom<V +>{
      sprintf4 = ldf sprintf;
      p82 = prom<V +>{
        rfiles6 = ld rfiles;
        rfiles7 = force? rfiles6;
        checkMissing(rfiles7);
        c82 = `is.object`(rfiles7);
        if c82 then L1() else L2(rfiles7);
      L0(dx65):
        return dx65;
      L1():
        dr58 = tryDispatchBuiltin.1("[", rfiles7);
        dc29 = getTryDispatchBuiltinDispatched(dr58);
        if dc29 then L3() else L2(dr58);
      L2(rfiles9):
        i5 = ld i;
        i6 = force? i5;
        __18 = ldf `[` in base;
        r310 = dyn __18(rfiles9, i6);
        goto L0(r310);
      L3():
        dx64 = getTryDispatchBuiltinValue(dr58);
        goto L0(dx64);
      };
      r312 = dyn sprintf4("downloading %s ... ", p82);
      return r312;
    };
    r314 = dyn message2[, appendLF](p83, FALSE);
    check L432() else D161();
  L440():
    r326 = dyn message4("");
    check L441() else D168();
  L510():
    p113 = prom<V +>{
      tmpdir = ld tmpdir;
      tmpdir1 = force? tmpdir;
      checkMissing(tmpdir1);
      return tmpdir1;
    };
    r417 = dyn dir_create2(p113);
    check L511() else D214();
  L584():
    goto L114(r489);
  L586():
    sym55 = ldf `rep.int`;
    base55 = ldf `rep.int` in base;
    guard55 = `==`.4(sym55, base55);
    if guard55 then L588() else L589();
  L587():
    r490 = dyn base54(<lang rep.int(list(`[[`(check_env, 1)), length(pfiles))>, <lang rep.int(list(`[[`(check_env, 2)), length(rfiles))>);
    goto L116(r490);
  L618():
    sym62 = ldf list;
    base62 = ldf list in base;
    guard62 = `==`.4(sym62, base62);
    if guard62 then L620() else L621();
  L619():
    r514 = dyn base61(<lang list(check_env)>, <lang length(pnames)>);
    goto L125(r514);
  L629():
    p128 = prom<V +>{
      check_env13 = ld check_env;
      check_env14 = force? check_env13;
      checkMissing(check_env14);
      return check_env14;
    };
    r523 = dyn as_list4(p128);
    check L630() else D269();
  D161():
    deopt 572 [i2, r314];
  D168():
    deopt 600 [r326];
  D214():
    deopt 750 [r417];
  D269():
    deopt 931 [r523];
  L117(r493):
    sym58 = ldf `rep.int`;
    base58 = ldf `rep.int` in base;
    guard58 = `==`.4(sym58, base58);
    if guard58 then L602() else L603();
  L126(r516):
    sym63 = ldf length;
    base63 = ldf length in base;
    guard63 = `==`.4(sym63, base63);
    if guard63 then L624() else L625();
  L432():
    __19 = ldf `::`;
    check L433() else D162();
  L441():
    goto L85(r326);
  L511():
    do_call = ldf `do.call`;
    check L512() else D215();
  L588():
    sym56 = ldf list;
    base56 = ldf list in base;
    guard56 = `==`.4(sym56, base56);
    if guard56 then L590() else L591();
  L589():
    r492 = dyn base55(<lang list(`[[`(check_env, 1))>, <lang length(pfiles)>);
    goto L117(r492);
  L620():
    check_env11 = ld check_env;
    check L622() else D263();
  L621():
    r515 = dyn base62(<sym check_env>);
    goto L126(r515);
  L630():
    st check_env_db = r523;
    pnames18 = ld pnames;
    check L631() else D270();
  D162():
    deopt 574 [i2];
  D215():
    deopt 752 [];
  D263():
    deopt 915 [check_env11];
  D270():
    deopt 933 [pnames18];
  L118(r495):
    sym57 = ldf length;
    base57 = ldf length in base;
    guard57 = `==`.4(sym57, base57);
    if guard57 then L597() else L598();
  L121(r503):
    c107 = ldf c in base;
    r512 = dyn c107(r493, r503);
    check L616() else D262();
  L127(r519):
    rep_int6 = ldf `rep.int` in base;
    r521 = dyn rep_int6(r516, r519);
    check L628() else D267();
  L433():
    r315 = dyn __19("utils", "download.file");
    check L434() else D163();
  L512():
    p114 = prom<V +>{
      __28 = ldf `::`;
      r418 = dyn __28("utils", "install.packages");
      return r418;
    };
    p115 = prom<V +>{
      sym40 = ldf c;
      base40 = ldf c in base;
      guard40 = `==`.4(sym40, base40);
      if guard40 then L2() else L3();
    L0(r421):
      return r421;
    L2():
      sym41 = ldf list;
      base41 = ldf list in base;
      guard41 = `==`.4(sym41, base41);
      if guard41 then L4() else L5();
    L3():
      r420 = dyn base40(<lang list(pkgs=depends, lib=libdir, contriburl=curls, available=available, dependencies=NA_LGL, INSTALL_opts=iflags, keep_outputs=tmpdir, Ncpus=Ncpus, type="source")>, <sym install_args>);
      goto L0(r420);
    L1(r423):
      install_args1 = ld install_args;
      install_args2 = force? install_args1;
      checkMissing(install_args2);
      c96 = ldf c in base;
      r425 = dyn c96(r423, install_args2);
      goto L0(r425);
    L4():
      depends10 = ld depends;
      depends11 = force? depends10;
      checkMissing(depends11);
      libdir4 = ld libdir;
      libdir5 = force? libdir4;
      checkMissing(libdir5);
      curls4 = ld curls;
      curls5 = force? curls4;
      checkMissing(curls5);
      available50 = ld available;
      available51 = force? available50;
      checkMissing(available51);
      iflags = ld iflags;
      iflags1 = force? iflags;
      checkMissing(iflags1);
      tmpdir2 = ld tmpdir;
      tmpdir3 = force? tmpdir2;
      checkMissing(tmpdir3);
      Ncpus1 = ld Ncpus;
      Ncpus2 = force? Ncpus1;
      checkMissing(Ncpus2);
      list5 = ldf list in base;
      r424 = dyn list5(depends11, libdir5, curls5, available51, NA_LGL, iflags1, tmpdir3, Ncpus2, "source");
      goto L1(r424);
    L5():
      r422 = dyn base41[pkgs, lib, contriburl, available, dependencies, INSTALL_opts, keep_outputs, Ncpus, type](<sym depends>, <sym libdir>, <sym curls>, <sym available>, NA_LGL, <sym iflags>, <sym tmpdir>, <sym Ncpus>, "source");
      goto L1(r422);
    };
    r427 = dyn do_call(p114, p115);
    check L513() else D216();
  L590():
    check_env3 = ld check_env;
    check L592() else D252();
  L591():
    r494 = dyn base56(<lang `[[`(check_env, 1)>);
    goto L118(r494);
  L602():
    sym59 = ldf list;
    base59 = ldf list in base;
    guard59 = `==`.4(sym59, base59);
    if guard59 then L604() else L605();
  L603():
    r502 = dyn base58(<lang list(`[[`(check_env, 2))>, <lang length(rfiles)>);
    goto L121(r502);
  L622():
    check_env12 = force? check_env11;
    checkMissing(check_env12);
    list11 = ldf list in base;
    r517 = dyn list11(check_env12);
    check L623() else D264();
  L624():
    pnames16 = ld pnames;
    check L626() else D265();
  L625():
    r518 = dyn base63(<sym pnames>);
    goto L127(r518);
  L631():
    pnames19 = force? pnames18;
    checkMissing(pnames19);
    l9 = ld check_env_db;
    names__2 = ldf `names<-`;
    check L632() else D271();
  D163():
    deopt 577 [i2, r315];
  D216():
    deopt 755 [r427];
  D252():
    deopt 875 [check_env3];
  D262():
    deopt 910 [r512];
  D264():
    deopt 918 [r517];
  D265():
    deopt 921 [pnames16];
  D267():
    deopt 926 [r521];
  D271():
    deopt 936 [pnames19, l9, pnames19];
  L120(r499):
    rep_int4 = ldf `rep.int` in base;
    r501 = dyn rep_int4(r495, r499);
    check L601() else D256();
  L122(r505):
    sym60 = ldf length;
    base60 = ldf length in base;
    guard60 = `==`.4(sym60, base60);
    if guard60 then L611() else L612();
  L434():
    checkFun.0(r315);
    r316 = r315 as cls;
    p84 = prom<V +>{
      rfurls = ld rfurls;
      rfurls1 = force? rfurls;
      checkMissing(rfurls1);
      c83 = `is.object`(rfurls1);
      if c83 then L1() else L2(rfurls1);
    L0(dx67):
      return dx67;
    L1():
      dr60 = tryDispatchBuiltin.1("[", rfurls1);
      dc30 = getTryDispatchBuiltinDispatched(dr60);
      if dc30 then L3() else L2(dr60);
    L2(rfurls3):
      i7 = ld i;
      i8 = force? i7;
      __20 = ldf `[` in base;
      r317 = dyn __20(rfurls3, i8);
      goto L0(r317);
    L3():
      dx66 = getTryDispatchBuiltinValue(dr60);
      goto L0(dx66);
    };
    p85 = prom<V +>{
      rfiles10 = ld rfiles;
      rfiles11 = force? rfiles10;
      checkMissing(rfiles11);
      c84 = `is.object`(rfiles11);
      if c84 then L1() else L2(rfiles11);
    L0(dx69):
      return dx69;
    L1():
      dr62 = tryDispatchBuiltin.1("[", rfiles11);
      dc31 = getTryDispatchBuiltinDispatched(dr62);
      if dc31 then L3() else L2(dr62);
    L2(rfiles13):
      i9 = ld i;
      i10 = force? i9;
      __21 = ldf `[` in base;
      r319 = dyn __21(rfiles13, i10);
      goto L0(r319);
    L3():
      dx68 = getTryDispatchBuiltinValue(dr62);
      goto L0(dx68);
    };
    r321 = dyn r316[, , quiet](p84, p85, TRUE);
    check L435() else D164();
  L513():
    Sys_glob1 = ldf `Sys.glob`;
    check L514() else D217();
  L592():
    check_env4 = force? check_env3;
    checkMissing(check_env4);
    c105 = `is.object`(check_env4);
    if c105 then L593() else L594(check_env4);
  L597():
    pfiles9 = ld pfiles;
    check L599() else D254();
  L598():
    r498 = dyn base57(<sym pfiles>);
    goto L120(r498);
  L604():
    check_env7 = ld check_env;
    check L606() else D257();
  L605():
    r504 = dyn base59(<lang `[[`(check_env, 2)>);
    goto L122(r504);
  L616():
    goto L116(r512);
  L623():
    goto L126(r517);
  L626():
    pnames17 = force? pnames16;
    checkMissing(pnames17);
    length13 = ldf length in base;
    r520 = dyn length13(pnames17);
    check L627() else D266();
  L628():
    goto L125(r521);
  L632():
    r524 = dyn names__2(l9, NULL, pnames19);
    check L633() else D272();
  D164():
    deopt 583 [i2, r321];
  D217():
    deopt 757 [];
  D254():
    deopt 884 [pfiles9];
  D256():
    deopt 889 [r501];
  D257():
    deopt 894 [check_env7];
  D266():
    deopt 924 [r520];
  D272():
    deopt 938 [pnames19, r524];
  L119(dx87):
    list9 = ldf list in base;
    r497 = dyn list9(dx87);
    check L596() else D253();
  L124(r509):
    rep_int5 = ldf `rep.int` in base;
    r511 = dyn rep_int5(r505, r509);
    check L615() else D261();
  L435():
    r322 = `!`(r321);
    c85 = `as.logical`(r322);
    if c85 then L436() else L82();
  L514():
    p117 = prom<V +>{
      file_path3 = ldf `file.path`;
      p116 = prom<V +>{
        tmpdir4 = ld tmpdir;
        tmpdir5 = force? tmpdir4;
        checkMissing(tmpdir5);
        return tmpdir5;
      };
      r429 = dyn file_path3(p116, "*.out");
      return r429;
    };
    r431 = dyn Sys_glob1(p117);
    check L515() else D218();
  L593():
    dr80 = tryDispatchBuiltin.1("[[", check_env4);
    dc40 = getTryDispatchBuiltinDispatched(dr80);
    if dc40 then L595() else L594(dr80);
  L594(check_env6):
    __32 = ldf `[[` in base;
    r496 = dyn __32(check_env6, 1);
    goto L119(r496);
  L599():
    pfiles10 = force? pfiles9;
    checkMissing(pfiles10);
    length11 = ldf length in base;
    r500 = dyn length11(pfiles10);
    check L600() else D255();
  L601():
    goto L117(r501);
  L606():
    check_env8 = force? check_env7;
    checkMissing(check_env8);
    c106 = `is.object`(check_env8);
    if c106 then L607() else L608(check_env8);
  L611():
    rfiles16 = ld rfiles;
    check L613() else D259();
  L612():
    r508 = dyn base60(<sym rfiles>);
    goto L124(r508);
  L627():
    goto L127(r520);
  L633():
    st check_env_db = r524;
    sym64 = ldf c;
    base64 = ldf c in base;
    guard64 = `==`.4(sym64, base64);
    if guard64 then L634() else L635();
  D218():
    deopt 759 [r431];
  D253():
    deopt 881 [r497];
  D255():
    deopt 887 [r500];
  D259():
    deopt 903 [rfiles16];
  D261():
    deopt 908 [r511];
  L82():
    goto L83(i2, "failed");
  L83(i13, r323):
    st status = r323;
    message3 = ldf message;
    check L438() else D165();
  L123(dx89):
    list10 = ldf list in base;
    r507 = dyn list10(dx89);
    check L610() else D258();
  L128(r526):
    st pfiles = r526;
    Sys_getenv1 = ldf `Sys.getenv`;
    check L639() else D276();
  L436():
    goto L83(i2, "ok");
  L515():
    st outfiles = r431;
    file_rename = ldf `file.rename`;
    check L516() else D219();
  L595():
    dx86 = getTryDispatchBuiltinValue(dr80);
    goto L119(dx86);
  L596():
    goto L118(r497);
  L600():
    goto L120(r500);
  L607():
    dr82 = tryDispatchBuiltin.1("[[", check_env8);
    dc41 = getTryDispatchBuiltinDispatched(dr82);
    if dc41 then L609() else L608(dr82);
  L608(check_env10):
    __33 = ldf `[[` in base;
    r506 = dyn __33(check_env10, 2);
    goto L123(r506);
  L613():
    rfiles17 = force? rfiles16;
    checkMissing(rfiles17);
    length12 = ldf length in base;
    r510 = dyn length12(rfiles17);
    check L614() else D260();
  L615():
    goto L121(r511);
  L634():
    pfiles11 = ld pfiles;
    check L636() else D273();
  L635():
    r525 = dyn base64(<sym pfiles>, <sym rfiles>);
    goto L128(r525);
  D165():
    deopt 591 [i13];
  D219():
    deopt 762 [];
  D258():
    deopt 900 [r507];
  D260():
    deopt 906 [r510];
  D273():
    deopt 942 [pfiles11];
  D276():
    deopt 950 [];
  L438():
    p86 = prom<V +>{
      status = ld status;
      status1 = force? status;
      checkMissing(status1);
      return status1;
    };
    r325 = dyn message3(p86);
    check L439() else D166();
  L516():
    p118 = prom<V +>{
      outfiles = ld outfiles;
      outfiles1 = force? outfiles;
      checkMissing(outfiles1);
      return outfiles1;
    };
    p123 = prom<V +>{
      file_path4 = ldf `file.path`;
      p119 = prom<V +>{
        outdir4 = ld outdir;
        outdir5 = force? outdir4;
        checkMissing(outdir5);
        return outdir5;
      };
      p122 = prom<V +>{
        sprintf6 = ldf sprintf;
        p121 = prom<V +>{
          basename = ldf basename;
          p120 = prom<V +>{
            outfiles2 = ld outfiles;
            outfiles3 = force? outfiles2;
            checkMissing(outfiles3);
            return outfiles3;
          };
          r435 = dyn basename(p120);
          return r435;
        };
        r437 = dyn sprintf6("install_%s", p121);
        return r437;
      };
      r439 = dyn file_path4(p119, p122);
      return r439;
    };
    r441 = dyn file_rename(p118, p123);
    check L517() else D220();
  L609():
    dx88 = getTryDispatchBuiltinValue(dr82);
    goto L123(dx88);
  L610():
    goto L122(r507);
  L614():
    goto L124(r510);
  L636():
    pfiles12 = force? pfiles11;
    checkMissing(pfiles12);
    rfiles18 = ld rfiles;
    check L637() else D274();
  L639():
    r528 = dyn Sys_getenv1("R_LIBS");
    check L640() else D277();
  D166():
    deopt 593 [i13, r325];
  D220():
    deopt 765 [r441];
  D274():
    deopt 944 [rfiles18];
  D277():
    deopt 952 [r528];
  L439():
    goto L81(i13);
  L517():
    unlink = ldf unlink;
    check L518() else D221();
  L637():
    rfiles19 = force? rfiles18;
    checkMissing(rfiles19);
    c108 = ldf c in base;
    r527 = dyn c108(pfiles12, rfiles19);
    check L638() else D275();
  L640():
    st oldrlibs = r528;
    Sys_setenv = ldf `Sys.setenv`;
    check L641() else D278();
  D221():
    deopt 767 [];
  D275():
    deopt 947 [r527];
  D278():
    deopt 955 [];
  L518():
    p124 = prom<V +>{
      tmpdir6 = ld tmpdir;
      tmpdir7 = force? tmpdir6;
      checkMissing(tmpdir7);
      return tmpdir7;
    };
    r443 = dyn unlink[, recursive](p124, TRUE);
    check L519() else D222();
  L638():
    goto L128(r527);
  L641():
    p131 = prom<V +>{
      paste3 = ldf paste;
      p129 = prom<V +>{
        libs2 = ld libs;
        libs3 = force? libs2;
        checkMissing(libs3);
        return libs3;
      };
      p130 = prom<V +>{
        _Platform4 = ld `.Platform`;
        _Platform5 = force? _Platform4;
        checkMissing(_Platform5);
        c109 = `is.object`(_Platform5);
        if c109 then L1() else L2(_Platform5);
      L0(dx91):
        return dx91;
      L1():
        dr84 = tryDispatchBuiltin.1("$", _Platform5);
        dc42 = getTryDispatchBuiltinDispatched(dr84);
        if dc42 then L3() else L2(dr84);
      L2(_Platform7):
        r530 = `$`(_Platform7, <sym path.sep>);
        goto L0(r530);
      L3():
        dx90 = getTryDispatchBuiltinValue(dr84);
        goto L0(dx90);
      };
      r532 = dyn paste3[, collapse](p129, p130);
      return r532;
    };
    r534 = dyn Sys_setenv[R_LIBS](p131);
    check L642() else D279();
  D222():
    deopt 771 [r443];
  D279():
    deopt 958 [r534];
  L519():
    message7 = ldf message;
    check L520() else D223();
  L642():
    sym65 = ldf `on.exit`;
    base65 = ldf `on.exit` in base;
    guard65 = `==`.4(sym65, base65);
    if guard65 then L643() else L644();
  D223():
    deopt 773 [];
  L129():
    r538 = clos inner914465884;
    st check_package = r538;
    Ncpus3 = ld Ncpus;
    check L645() else D280();
  L520():
    r444 = dyn message7("");
    check L521() else D224();
  L643():
    on_exit2 = ldf `on.exit` in base;
    r537 = dyn on_exit2(<lang Sys.setenv(R_LIBS=oldrlibs)>, TRUE);
    goto L129();
  L644():
    r535 = dyn base65[, add](<lang Sys.setenv(R_LIBS=oldrlibs)>, TRUE);
    goto L129();
  D224():
    deopt 775 [r444];
  D280():
    deopt 965 [Ncpus3];
  L521():
    goto L98();
  L645():
    Ncpus4 = force? Ncpus3;
    checkMissing(Ncpus4);
    r539 = `>`(Ncpus4, 1);
    c110 = `as.logical`(r539);
    if c110 then L646() else L130();
  L130():
    lapply2 = ldf lapply;
    check L660() else D289();
  L134():
    do_call3 = ldf `do.call`;
    check L662() else D291();
  L646():
    os_type4 = ld os_type;
    check L647() else D281();
  D281():
    deopt 969 [os_type4];
  D289():
    deopt 998 [];
  D291():
    deopt 1006 [];
  L647():
    os_type5 = force? os_type4;
    checkMissing(os_type5);
    r540 = `!=`(os_type5, "windows");
    c111 = `as.logical`(r540);
    if c111 then L648() else L131();
  L660():
    p137 = prom<V +>{
      pfiles17 = ld pfiles;
      pfiles18 = force? pfiles17;
      checkMissing(pfiles18);
      return pfiles18;
    };
    p138 = prom<V +>{
      check_package4 = ld check_package;
      check_package5 = force? check_package4;
      checkMissing(check_package5);
      return check_package5;
    };
    p139 = prom<V +>{
      check_args_db19 = ld check_args_db;
      check_args_db20 = force? check_args_db19;
      checkMissing(check_args_db20);
      return check_args_db20;
    };
    p140 = prom<V +>{
      check_env_db4 = ld check_env_db;
      check_env_db5 = force? check_env_db4;
      checkMissing(check_env_db5);
      return check_env_db5;
    };
    r574 = dyn lapply2(p137, p138, p139, p140);
    check L661() else D290();
  L662():
    p141 = prom<V +>{
      rbind1 = ld rbind;
      rbind2 = force? rbind1;
      checkMissing(rbind2);
      return rbind2;
    };
    p144 = prom<V +>{
      lapply3 = ldf lapply;
      p142 = prom<V +>{
        timings = ld timings;
        timings1 = force? timings;
        checkMissing(timings1);
        return timings1;
      };
      p143 = prom<V +>{
        summary = ld summary;
        summary1 = force? summary;
        checkMissing(summary1);
        return summary1;
      };
      r578 = dyn lapply3(p142, p143);
      return r578;
    };
    r580 = dyn do_call3(p141, p144);
    check L663() else D292();
  D290():
    deopt 1003 [r574];
  D292():
    deopt 1009 [r580];
  L131():
    __35 = ldf `::`;
    check L652() else D284();
  L132(r551):
    goto L134();
  L648():
    do_call1 = ldf `do.call`;
    check L649() else D282();
  L661():
    st timings = r574;
    goto L134();
  L663():
    st timings = r580;
    pnames20 = ld pnames;
    check L664() else D293();
  D282():
    deopt 974 [];
  D284():
    deopt 980 [];
  D293():
    deopt 1011 [pnames20];
  L649():
    p132 = prom<V +>{
      __34 = ldf `::`;
      r541 = dyn __34("parallel", "mclapply");
      return r541;
    };
    p133 = prom<V +>{
      sym66 = ldf c;
      base66 = ldf c in base;
      guard66 = `==`.4(sym66, base66);
      if guard66 then L2() else L3();
    L0(r544):
      return r544;
    L2():
      sym67 = ldf list;
      base67 = ldf list in base;
      guard67 = `==`.4(sym67, base67);
      if guard67 then L4() else L5();
    L3():
      r543 = dyn base66(<lang list(X=pfiles, FUN=check_package, args_db=check_args_db, env_db=check_env_db, mc.cores=Ncpus)>, <sym parallel_args>);
      goto L0(r543);
    L1(r546):
      parallel_args1 = ld parallel_args;
      parallel_args2 = force? parallel_args1;
      checkMissing(parallel_args2);
      c112 = ldf c in base;
      r548 = dyn c112(r546, parallel_args2);
      goto L0(r548);
    L4():
      pfiles13 = ld pfiles;
      pfiles14 = force? pfiles13;
      checkMissing(pfiles14);
      check_package = ld check_package;
      check_package1 = force? check_package;
      checkMissing(check_package1);
      check_args_db15 = ld check_args_db;
      check_args_db16 = force? check_args_db15;
      checkMissing(check_args_db16);
      check_env_db = ld check_env_db;
      check_env_db1 = force? check_env_db;
      checkMissing(check_env_db1);
      Ncpus5 = ld Ncpus;
      Ncpus6 = force? Ncpus5;
      checkMissing(Ncpus6);
      list12 = ldf list in base;
      r547 = dyn list12(pfiles14, check_package1, check_args_db16, check_env_db1, Ncpus6);
      goto L1(r547);
    L5():
      r545 = dyn base67[X, FUN, args_db, env_db, `mc.cores`](<sym pfiles>, <sym check_package>, <sym check_args_db>, <sym check_env_db>, <sym Ncpus>);
      goto L1(r545);
    };
    r550 = dyn do_call1(p132, p133);
    check L650() else D283();
  L652():
    r552 = dyn __35("parallel", "makeCluster");
    check L653() else D285();
  L664():
    pnames21 = force? pnames20;
    checkMissing(pnames21);
    l10 = ld timings;
    rownames__ = ldf `rownames<-`;
    check L665() else D294();
  D283():
    deopt 977 [r550];
  D285():
    deopt 983 [r552];
  D294():
    deopt 1014 [pnames21, l10, pnames21];
  L650():
    st timings = r550;
    goto L132(r550);
  L653():
    checkFun.0(r552);
    r553 = r552 as cls;
    p134 = prom<V +>{
      Ncpus7 = ld Ncpus;
      Ncpus8 = force? Ncpus7;
      checkMissing(Ncpus8);
      return Ncpus8;
    };
    r555 = dyn r553(p134);
    check L654() else D286();
  L665():
    r581 = dyn rownames__(l10, NULL, pnames21);
    check L666() else D295();
  D286():
    deopt 986 [r555];
  D295():
    deopt 1016 [pnames21, r581];
  L654():
    st cl = r555;
    sym68 = ldf `on.exit`;
    base68 = ldf `on.exit` in base;
    guard68 = `==`.4(sym68, base68);
    if guard68 then L655() else L656();
  L666():
    st timings = r581;
    __37 = ldf `::`;
    check L667() else D296();
  D296():
    deopt 1019 [];
  L133():
    do_call2 = ldf `do.call`;
    check L657() else D287();
  L655():
    on_exit3 = ldf `on.exit` in base;
    r558 = dyn on_exit3(<lang `::`(parallel, stopCluster)(cl)>, TRUE);
    goto L133();
  L656():
    r556 = dyn base68[, add](<lang `::`(parallel, stopCluster)(cl)>, TRUE);
    goto L133();
  L667():
    r582 = dyn __37("utils", "write.table");
    check L668() else D297();
  D287():
    deopt 992 [];
  D297():
    deopt 1022 [r582];
  L657():
    p135 = prom<V +>{
      __36 = ldf `::`;
      r559 = dyn __36("parallel", "parLapply");
      return r559;
    };
    p136 = prom<V +>{
      sym69 = ldf c;
      base69 = ldf c in base;
      guard69 = `==`.4(sym69, base69);
      if guard69 then L2() else L3();
    L0(r562):
      return r562;
    L2():
      sym70 = ldf list;
      base70 = ldf list in base;
      guard70 = `==`.4(sym70, base70);
      if guard70 then L4() else L5();
    L3():
      r561 = dyn base69(<lang list(cl=cl, X=pfiles, fun=check_package, args_db=check_args_db, env_db=check_env_db)>, <sym parallel_args>);
      goto L0(r561);
    L1(r564):
      parallel_args3 = ld parallel_args;
      parallel_args4 = force? parallel_args3;
      checkMissing(parallel_args4);
      c113 = ldf c in base;
      r566 = dyn c113(r564, parallel_args4);
      goto L0(r566);
    L4():
      cl = ld cl;
      cl1 = force? cl;
      checkMissing(cl1);
      pfiles15 = ld pfiles;
      pfiles16 = force? pfiles15;
      checkMissing(pfiles16);
      check_package2 = ld check_package;
      check_package3 = force? check_package2;
      checkMissing(check_package3);
      check_args_db17 = ld check_args_db;
      check_args_db18 = force? check_args_db17;
      checkMissing(check_args_db18);
      check_env_db2 = ld check_env_db;
      check_env_db3 = force? check_env_db2;
      checkMissing(check_env_db3);
      list13 = ldf list in base;
      r565 = dyn list13(cl1, pfiles16, check_package3, check_args_db18, check_env_db3);
      goto L1(r565);
    L5():
      r563 = dyn base70[cl, X, fun, args_db, env_db](<sym cl>, <sym pfiles>, <sym check_package>, <sym check_args_db>, <sym check_env_db>);
      goto L1(r563);
    };
    r568 = dyn do_call2(p135, p136);
    check L658() else D288();
  L668():
    checkFun.0(r582);
    r583 = r582 as cls;
    p145 = prom<V +>{
      timings2 = ld timings;
      timings3 = force? timings2;
      checkMissing(timings3);
      return timings3;
    };
    r585 = dyn r583(p145, "timings.tab");
    check L669() else D298();
  D288():
    deopt 995 [r568];
  D298():
    deopt 1026 [r585];
  L658():
    st timings = r568;
    goto L132(r568);
  L669():
    file_rename1 = ldf `file.rename`;
    check L670() else D299();
  D299():
    deopt 1028 [];
  L670():
    p147 = prom<V +>{
      sprintf7 = ldf sprintf;
      p146 = prom<V +>{
        rnames12 = ld rnames;
        rnames13 = force? rnames12;
        checkMissing(rnames13);
        return rnames13;
      };
      r587 = dyn sprintf7("%s.Rcheck", p146);
      return r587;
    };
    p149 = prom<V +>{
      sprintf8 = ldf sprintf;
      p148 = prom<V +>{
        rnames14 = ld rnames;
        rnames15 = force? rnames14;
        checkMissing(rnames15);
        return rnames15;
      };
      r590 = dyn sprintf8("rdepends_%s.Rcheck", p148);
      return r590;
    };
    r592 = dyn file_rename1(p147, p149);
    check L671() else D300();
  D300():
    deopt 1031 [r592];
  L671():
    clean1 = ld clean;
    check L672() else D301();
  D301():
    deopt 1032 [clean1];
  L672():
    clean2 = force? clean1;
    checkMissing(clean2);
    c114 = `as.logical`(clean2);
    if c114 then L673() else L135();
  L135():
    file_rename2 = ldf `file.rename`;
    check L677() else D304();
  L136():
    sym71 = ldf invisible;
    base71 = ldf invisible in base;
    guard71 = `==`.4(sym71, base71);
    if guard71 then L679() else L680();
  L673():
    file_remove = ldf `file.remove`;
    check L674() else D302();
  D302():
    deopt 1035 [];
  D304():
    deopt 1039 [];
  L137(r602):
    popenv;
    return r602;
  L674():
    p150 = prom<V +>{
      rfiles20 = ld rfiles;
      rfiles21 = force? rfiles20;
      checkMissing(rfiles21);
      return rfiles21;
    };
    r594 = dyn file_remove(p150);
    check L675() else D303();
  L677():
    p151 = prom<V +>{
      rfiles22 = ld rfiles;
      rfiles23 = force? rfiles22;
      checkMissing(rfiles23);
      return rfiles23;
    };
    p153 = prom<V +>{
      sprintf9 = ldf sprintf;
      p152 = prom<V +>{
        rfiles24 = ld rfiles;
        rfiles25 = force? rfiles24;
        checkMissing(rfiles25);
        return rfiles25;
      };
      r598 = dyn sprintf9("rdepends_%s", p152);
      return r598;
    };
    r600 = dyn file_rename2(p151, p153);
    check L678() else D305();
  L679():
    _check_packages_in_dir_retval1 = ldf `.check_packages_in_dir_retval`;
    check L681() else D306();
  L680():
    r601 = dyn base71(<lang .check_packages_in_dir_retval(dir, pfiles, setdiff(pnames, rnames), rnames)>);
    goto L137(r601);
  D303():
    deopt 1037 [r594];
  D305():
    deopt 1042 [r600];
  D306():
    deopt 1046 [];
  L675():
    goto L136();
  L678():
    goto L136();
  L681():
    p154 = prom<V +>{
      dir19 = ld dir;
      dir20 = force? dir19;
      checkMissing(dir20);
      return dir20;
    };
    p155 = prom<V +>{
      pfiles19 = ld pfiles;
      pfiles20 = force? pfiles19;
      checkMissing(pfiles20);
      return pfiles20;
    };
    p158 = prom<V +>{
      setdiff5 = ldf setdiff;
      p156 = prom<V +>{
        pnames22 = ld pnames;
        pnames23 = force? pnames22;
        checkMissing(pnames23);
        return pnames23;
      };
      p157 = prom<V +>{
        rnames16 = ld rnames;
        rnames17 = force? rnames16;
        checkMissing(rnames17);
        return rnames17;
      };
      r607 = dyn setdiff5(p156, p157);
      return r607;
    };
    p159 = prom<V +>{
      rnames18 = ld rnames;
      rnames19 = force? rnames18;
      checkMissing(rnames19);
      return rnames19;
    };
    r610 = dyn _check_packages_in_dir_retval1(p154, p155, p158, p159);
    check L682() else D307();
  D307():
    deopt 1051 [r610];
  L682():
    invisible1 = ldf invisible in base;
    r611 = dyn invisible1(r610);
    check L683() else D308();
  D308():
    deopt 1053 [r611];
  L683():
    goto L137(r611);
  }
}
fun inner3994259572(dir, pfiles, pnames, rnames) {
  (reg dir:*, reg pfiles:*, reg pnames:*, reg rnames:*) -+> V { var dir:*, var pfiles:*, var pnames:*, reg pnames_isMissing:L, reg pnames_orDefault:*, reg character:cls, reg r:V, reg p:p(V +), var rnames:*, reg rnames_isMissing:L, reg rnames_orDefault:*, reg character1:cls, reg r2:V, reg p1:p(V +), reg structure:cls, reg pfiles1:*, reg pfiles2:V, reg p2:p(V +), reg dir1:*, reg dir2:V, reg p3:p(V +), reg pnames1:*, reg pnames2:V, reg p4:p(V +), reg rnames1:*, reg rnames2:V, reg p5:p(V +), reg r8:V |
    mkenv;
    st dir = dir;
    st pfiles = pfiles;
    pnames_isMissing = missing.0(pnames);
    if pnames_isMissing then L0() else L1(pnames);
  L0():
    p = prom<V +>{
      character = ldf character;
      r = dyn character();
      return r;
    };
    goto L1(p);
  L1(pnames_orDefault):
    st pnames = pnames_orDefault;
    rnames_isMissing = missing.0(rnames);
    if rnames_isMissing then L2() else L3(rnames);
  L2():
    p1 = prom<V +>{
      character1 = ldf character;
      r2 = dyn character1();
      return r2;
    };
    goto L3(p1);
  L3(rnames_orDefault):
    st rnames = rnames_orDefault;
    structure = ldf structure;
    check L4() else D0();
  D0():
    deopt 1 [];
  L4():
    p2 = prom<V +>{
      pfiles1 = ld pfiles;
      pfiles2 = force? pfiles1;
      checkMissing(pfiles2);
      return pfiles2;
    };
    p3 = prom<V +>{
      dir1 = ld dir;
      dir2 = force? dir1;
      checkMissing(dir2);
      return dir2;
    };
    p4 = prom<V +>{
      pnames1 = ld pnames;
      pnames2 = force? pnames1;
      checkMissing(pnames2);
      return pnames2;
    };
    p5 = prom<V +>{
      rnames1 = ld rnames;
      rnames2 = force? rnames1;
      checkMissing(rnames2);
      return rnames2;
    };
    r8 = dyn structure[, dir, pnames, rnames, class](p2, p3, p4, p5, "check_packages_in_dir");
    check L5() else D1();
  D1():
    deopt 11 [r8];
  L5():
    popenv;
    return r8;
  }
}
fun inner3708401697(e) {
  (reg e:*) -+> V { var e:*, reg scan:cls, reg e1:*, reg e2:V, reg p:p(V +), reg character:cls, reg r1:V, reg p1:p(V +), reg r3:V |
    mkenv;
    st e = e;
    scan = ldf scan;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p = prom<V +>{
      e1 = ld e;
      e2 = force? e1;
      checkMissing(e2);
      return e2;
    };
    p1 = prom<V +>{
      character = ldf character;
      r1 = dyn character();
      return r1;
    };
    r3 = dyn scan[text, what, quiet](p, p1, TRUE);
    check L1() else D1();
  D1():
    deopt 8 [r3];
  L1():
    popenv;
    return r3;
  }
}
fun inner128442759(w, r) {
  (reg w:*, reg r:*) -+> V { var w:*, var r:*, reg package_dependencies:cls, reg setdiff:cls, reg pnames:*, reg pnames1:V, reg p:p(V +), reg pnames_using_install_no:*, reg pnames_using_install_no1:V, reg p1:p(V +), reg r3:V, reg p2:p(V +), reg available:*, reg available1:V, reg p3:p(V +), reg w1:*, reg w2:V, reg p4:p(V +), reg r7:*, reg r8:V, reg p5:p(V +), reg r10:V |
    mkenv;
    st w = w;
    st r = r;
    package_dependencies = ldf package_dependencies;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p2 = prom<V +>{
      setdiff = ldf setdiff;
      p = prom<V +>{
        pnames = ld pnames;
        pnames1 = force? pnames;
        checkMissing(pnames1);
        return pnames1;
      };
      p1 = prom<V +>{
        pnames_using_install_no = ld pnames_using_install_no;
        pnames_using_install_no1 = force? pnames_using_install_no;
        checkMissing(pnames_using_install_no1);
        return pnames_using_install_no1;
      };
      r3 = dyn setdiff(p, p1);
      return r3;
    };
    p3 = prom<V +>{
      available = ld available;
      available1 = force? available;
      checkMissing(available1);
      return available1;
    };
    p4 = prom<V +>{
      w1 = ld w;
      w2 = force? w1;
      checkMissing(w2);
      return w2;
    };
    p5 = prom<V +>{
      r7 = ld r;
      r8 = force? r7;
      checkMissing(r8);
      return r8;
    };
    r10 = dyn package_dependencies[, , which, recursive, reverse](p2, p3, p4, p5, TRUE);
    check L1() else D1();
  D1():
    deopt 10 [r10];
  L1():
    popenv;
    return r10;
  }
}
fun inner914465884(pfile, args_db, env_db) {
  (reg pfile:*, reg args_db:*, reg env_db:*) -+> V { var pfile:*, var args_db:*, reg args_db_isMissing:L, reg args_db_orDefault:*, var env_db:*, reg env_db_isMissing:L, reg env_db_orDefault:*, reg message:cls, reg sprintf:cls, reg pfile1:*, reg pfile2:V, reg p:p(V +), reg r1:V, reg p1:p(V +), reg r3:V, reg sub:cls, reg basename:cls, reg pfile3:*, reg pfile4:V, reg p2:p(V +), reg r5:V, reg p3:p(V +), reg r7:V, reg file_path:cls, reg outdir:*, reg outdir1:V, reg p4:p(V +), reg sprintf1:cls, reg pname:*, reg pname1:V, reg p5:p(V +), reg r10:V, reg p6:p(V +), reg r12:V, reg file_path1:cls, reg outdir2:*, reg outdir3:V, reg p7:p(V +), reg sprintf2:cls, reg pname2:*, reg pname3:V, reg p8:p(V +), reg r15:V, reg p9:p(V +), reg r17:V, reg get_timeout:cls, reg Sys_getenv:cls, reg r18:V, reg p10:p(V +), reg r20:V, reg system_time:cls, reg system2:cls, reg file_path2:cls, reg R_home:cls, reg r21:V, reg p11:p(V +), reg r23:V, reg p12:p(V +), reg sym:cls, reg base:cls, reg guard:L, reg r25:V, reg r26:V, reg args_db1:*, reg args_db2:V, reg c:L, reg args_db4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg pname4:*, reg pname5:V, reg __:cls, reg r27:V, reg pfile5:*, reg pfile6:V, reg c1:cls, reg r28:V, reg p13:p(V +), reg out:*, reg out1:V, reg p14:p(V +), reg err:*, reg err1:V, reg p15:p(V +), reg env_db1:*, reg env_db2:V, reg c2:L, reg env_db4:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg pname6:*, reg pname7:V, reg __1:cls, reg r32:V, reg p16:p(V +), reg lim:*, reg lim1:V, reg p17:p(V +), reg r35:V, reg p18:p(V +), reg r37:V |
    mkenv;
    st pfile = pfile;
    args_db_isMissing = missing.0(args_db);
    if args_db_isMissing then L0(NULL) else L0(args_db);
  L0(args_db_orDefault):
    st args_db = args_db_orDefault;
    env_db_isMissing = missing.0(env_db);
    if env_db_isMissing then L1(NULL) else L1(env_db);
  L1(env_db_orDefault):
    st env_db = env_db_orDefault;
    message = ldf message;
    check L2() else D0();
  D0():
    deopt 1 [];
  L2():
    p1 = prom<V +>{
      sprintf = ldf sprintf;
      p = prom<V +>{
        pfile1 = ld pfile;
        pfile2 = force? pfile1;
        checkMissing(pfile2);
        return pfile2;
      };
      r1 = dyn sprintf("checking %s ...", p);
      return r1;
    };
    r3 = dyn message(p1);
    check L3() else D1();
  D1():
    deopt 3 [r3];
  L3():
    sub = ldf sub;
    check L4() else D2();
  D2():
    deopt 5 [];
  L4():
    p3 = prom<V +>{
      basename = ldf basename;
      p2 = prom<V +>{
        pfile3 = ld pfile;
        pfile4 = force? pfile3;
        checkMissing(pfile4);
        return pfile4;
      };
      r5 = dyn basename(p2);
      return r5;
    };
    r7 = dyn sub("_.*", "", p3);
    check L5() else D3();
  D3():
    deopt 9 [r7];
  L5():
    st pname = r7;
    file_path = ldf `file.path`;
    check L6() else D4();
  D4():
    deopt 12 [];
  L6():
    p4 = prom<V +>{
      outdir = ld outdir;
      outdir1 = force? outdir;
      checkMissing(outdir1);
      return outdir1;
    };
    p6 = prom<V +>{
      sprintf1 = ldf sprintf;
      p5 = prom<V +>{
        pname = ld pname;
        pname1 = force? pname;
        checkMissing(pname1);
        return pname1;
      };
      r10 = dyn sprintf1("check_%s_stdout.txt", p5);
      return r10;
    };
    r12 = dyn file_path(p4, p6);
    check L7() else D5();
  D5():
    deopt 15 [r12];
  L7():
    st out = r12;
    file_path1 = ldf `file.path`;
    check L8() else D6();
  D6():
    deopt 18 [];
  L8():
    p7 = prom<V +>{
      outdir2 = ld outdir;
      outdir3 = force? outdir2;
      checkMissing(outdir3);
      return outdir3;
    };
    p9 = prom<V +>{
      sprintf2 = ldf sprintf;
      p8 = prom<V +>{
        pname2 = ld pname;
        pname3 = force? pname2;
        checkMissing(pname3);
        return pname3;
      };
      r15 = dyn sprintf2("check_%s_stderr.txt", p8);
      return r15;
    };
    r17 = dyn file_path1(p7, p9);
    check L9() else D7();
  D7():
    deopt 21 [r17];
  L9():
    st err = r17;
    get_timeout = ldf get_timeout;
    check L10() else D8();
  D8():
    deopt 24 [];
  L10():
    p10 = prom<V +>{
      Sys_getenv = ldf `Sys.getenv`;
      r18 = dyn Sys_getenv("_R_CHECK_ELAPSED_TIMEOUT_");
      return r18;
    };
    r20 = dyn get_timeout(p10);
    check L11() else D9();
  D9():
    deopt 26 [r20];
  L11():
    st lim = r20;
    system_time = ldf `system.time`;
    check L12() else D10();
  D10():
    deopt 29 [];
  L12():
    p18 = prom<V +>{
      system2 = ldf system2;
      p12 = prom<V +>{
        file_path2 = ldf `file.path`;
        p11 = prom<V +>{
          R_home = ldf `R.home`;
          r21 = dyn R_home("bin");
          return r21;
        };
        r23 = dyn file_path2(p11, "R");
        return r23;
      };
      p13 = prom<V +>{
        sym = ldf c;
        base = ldf c in base;
        guard = `==`.4(sym, base);
        if guard then L2() else L3();
      L0(r26):
        return r26;
      L2():
        args_db1 = ld args_db;
        args_db2 = force? args_db1;
        checkMissing(args_db2);
        c = `is.object`(args_db2);
        if c then L4() else L5(args_db2);
      L3():
        r25 = dyn base("CMD", "check", "--timings", <lang `[[`(args_db, pname)>, <sym pfile>);
        goto L0(r25);
      L1(dx1):
        pfile5 = ld pfile;
        pfile6 = force? pfile5;
        checkMissing(pfile6);
        c1 = ldf c in base;
        r28 = dyn c1("CMD", "check", "--timings", dx1, pfile6);
        goto L0(r28);
      L4():
        dr = tryDispatchBuiltin.1("[[", args_db2);
        dc = getTryDispatchBuiltinDispatched(dr);
        if dc then L6() else L5(dr);
      L5(args_db4):
        pname4 = ld pname;
        pname5 = force? pname4;
        __ = ldf `[[` in base;
        r27 = dyn __(args_db4, pname5);
        goto L1(r27);
      L6():
        dx = getTryDispatchBuiltinValue(dr);
        goto L1(dx);
      };
      p14 = prom<V +>{
        out = ld out;
        out1 = force? out;
        checkMissing(out1);
        return out1;
      };
      p15 = prom<V +>{
        err = ld err;
        err1 = force? err;
        checkMissing(err1);
        return err1;
      };
      p16 = prom<V +>{
        env_db1 = ld env_db;
        env_db2 = force? env_db1;
        checkMissing(env_db2);
        c2 = `is.object`(env_db2);
        if c2 then L1() else L2(env_db2);
      L0(dx3):
        return dx3;
      L1():
        dr2 = tryDispatchBuiltin.1("[[", env_db2);
        dc1 = getTryDispatchBuiltinDispatched(dr2);
        if dc1 then L3() else L2(dr2);
      L2(env_db4):
        pname6 = ld pname;
        pname7 = force? pname6;
        __1 = ldf `[[` in base;
        r32 = dyn __1(env_db4, pname7);
        goto L0(r32);
      L3():
        dx2 = getTryDispatchBuiltinValue(dr2);
        goto L0(dx2);
      };
      p17 = prom<V +>{
        lim = ld lim;
        lim1 = force? lim;
        checkMissing(lim1);
        return lim1;
      };
      r35 = dyn system2[, , stdout, stderr, env, timeout](p12, p13, p14, p15, p16, p17);
      return r35;
    };
    r37 = dyn system_time(p18);
    check L13() else D11();
  D11():
    deopt 31 [r37];
  L13():
    popenv;
    return r37;
  }
}