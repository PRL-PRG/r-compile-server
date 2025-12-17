fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1414009572;
    st texi2dvi = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1414009572(file, pdf, clean, quiet, texi2dvi, texinputs, index) {
  (reg file:*, reg pdf:*, reg clean:*, reg quiet:*, reg texi2dvi:*, reg texinputs:*, reg index:*) -+> V { var file:*, var pdf:*, reg pdf_isMissing:L, reg pdf_orDefault:*, var clean:*, reg clean_isMissing:L, reg clean_orDefault:*, var quiet:*, reg quiet_isMissing:L, reg quiet_orDefault:*, var texi2dvi:*, reg texi2dvi_isMissing:L, reg texi2dvi_orDefault:*, reg getOption:cls, reg r:V, reg p:p(V +), var texinputs:*, reg texinputs_isMissing:L, reg texinputs_orDefault:*, var index:*, reg index_isMissing:L, reg index_orDefault:*, reg clean1:*, reg clean2:V, reg c:L, reg list_files:cls, reg r2:V, reg r4:cls, reg sym:cls, reg base:cls, reg guard:L, reg r5:V, reg r6:V, reg texi2dvi1:*, reg texi2dvi2:V, reg identical:cls, reg r7:V, reg c1:L, reg sym1:cls, reg base1:cls, reg guard1:L, reg r9:V, reg r10:V, reg texi2dvi3:*, reg texi2dvi4:V, reg c2:V, reg c3:L, reg c4:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r11:V, reg c8:L, reg r12:V, reg texi2dvi5:*, reg texi2dvi6:V, reg nzchar:cls, reg r13:V, reg r14:V, reg c9:L, reg c10:V, reg c12:L, reg c13:V, reg texi2dvi7:*, reg texi2dvi8:V, reg r15:V, reg c15:L, reg c16:V, reg c18:L, reg Sys_which:cls, reg r16:V, reg _Platform:*, reg _Platform1:V, reg c19:L, reg _Platform3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r17:V, reg r18:V, reg c20:L, reg c22:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r19:V, reg c25:L, reg r20:V, reg texi2dvi9:*, reg texi2dvi10:V, reg nzchar1:cls, reg r21:V, reg r22:V, reg c26:L, reg c27:V, reg c29:L, reg Sys_which1:cls, reg r23:V, reg r24:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r25:V, reg r26:V, reg Sys_which2:cls, reg texi2dvi11:*, reg texi2dvi12:V, reg p1:p(V +), reg r28:V, reg nzchar2:cls, reg r29:V, reg r30:V, reg c30:L, reg warning:cls, reg r31:V, reg _Platform4:*, reg _Platform5:V, reg c31:L, reg _Platform7:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r32:V, reg texinputs1:*, reg texinputs2:V, reg file_path:cls, reg R_home:cls, reg r33:V, reg p2:p(V +), reg r35:V, reg file_path1:cls, reg Rtexmf:*, reg Rtexmf1:V, reg p3:p(V +), reg r37:V, reg paste:cls, reg sym5:cls, reg base5:cls, reg guard5:L, reg r38:V, reg r39:V, reg texinputs3:*, reg texinputs4:V, reg Rtexinputs:*, reg Rtexinputs1:V, reg c32:cls, reg r40:V, reg p4:p(V +), reg envSep:*, reg envSep1:V, reg p5:p(V +), reg r43:V, reg _Platform8:*, reg _Platform9:V, reg c33:L, reg _Platform11:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg r44:V, reg r45:V, reg c34:L, reg gsub:cls, reg texinputs5:*, reg texinputs6:V, reg p6:p(V +), reg r47:V, reg file_path2:cls, reg Rtexmf2:*, reg Rtexmf3:V, reg p7:p(V +), reg r50:V, reg paste1:cls, reg sym6:cls, reg base6:cls, reg guard6:L, reg r51:V, reg r52:V, reg texinputs7:*, reg texinputs8:V, reg Rbibinputs:*, reg Rbibinputs1:V, reg c35:cls, reg r53:V, reg p8:p(V +), reg envSep2:*, reg envSep3:V, reg p9:p(V +), reg r56:V, reg file_path3:cls, reg Rtexmf4:*, reg Rtexmf5:V, reg p10:p(V +), reg r58:V, reg paste2:cls, reg sym7:cls, reg base7:cls, reg guard7:L, reg r59:V, reg r60:V, reg texinputs9:*, reg texinputs10:V, reg Rbstinputs:*, reg Rbstinputs1:V, reg c36:cls, reg r61:V, reg p11:p(V +), reg envSep4:*, reg envSep5:V, reg p12:p(V +), reg r64:V, reg Sys_getenv:cls, reg r65:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r66:V, reg r67:V, reg otexinputs:*, reg otexinputs1:V, reg is_na:cls, reg r68:V, reg c37:L, reg sym9:cls, reg base9:cls, reg guard9:L, reg r69:V, reg on_exit:cls, reg r71:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r73:V, reg on_exit1:cls, reg r74:V, reg Sys_setenv:cls, reg paste3:cls, reg otexinputs2:*, reg otexinputs3:V, reg p13:p(V +), reg texinputs11:*, reg texinputs12:V, reg p14:p(V +), reg envSep6:*, reg envSep7:V, reg p15:p(V +), reg r78:V, reg p16:p(V +), reg r80:V, reg Sys_getenv1:cls, reg r81:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r82:V, reg r83:V, reg obibinputs:*, reg obibinputs1:V, reg is_na1:cls, reg r84:V, reg c38:L, reg sym12:cls, reg base12:cls, reg guard12:L, reg r85:V, reg on_exit2:cls, reg r87:V, reg sym13:cls, reg base13:cls, reg guard13:L, reg r89:V, reg on_exit3:cls, reg r90:V, reg Sys_setenv1:cls, reg paste4:cls, reg obibinputs2:*, reg obibinputs3:V, reg p17:p(V +), reg bibinputs:*, reg bibinputs1:V, reg p18:p(V +), reg envSep8:*, reg envSep9:V, reg p19:p(V +), reg r94:V, reg p20:p(V +), reg r96:V, reg Sys_getenv2:cls, reg r97:V, reg sym14:cls, reg base14:cls, reg guard14:L, reg r98:V, reg r99:V, reg obstinputs:*, reg obstinputs1:V, reg is_na2:cls, reg r100:V, reg c39:L, reg sym15:cls, reg base15:cls, reg guard15:L, reg r101:V, reg on_exit4:cls, reg r103:V, reg sym16:cls, reg base16:cls, reg guard16:L, reg r105:V, reg on_exit5:cls, reg r106:V, reg Sys_setenv2:cls, reg paste5:cls, reg obstinputs2:*, reg obstinputs3:V, reg p21:p(V +), reg bstinputs:*, reg bstinputs1:V, reg p22:p(V +), reg envSep10:*, reg envSep11:V, reg p23:p(V +), reg r110:V, reg p24:p(V +), reg r112:V, reg index1:*, reg index2:V, reg c40:L, reg c42:V, reg sym17:cls, reg base17:cls, reg guard17:L, reg r113:V, reg c45:L, reg r114:V, reg texi2dvi13:*, reg texi2dvi14:V, reg nzchar3:cls, reg r115:V, reg c46:L, reg c47:V, reg c49:L, reg c51:V, reg _Platform12:*, reg _Platform13:V, reg c52:L, reg c54:L, reg _Platform15:V, reg dr6:V, reg dc3:L, reg dx6:V, reg c56:L, reg dx7:V, reg r116:V, reg r117:V, reg c57:L, reg c58:V, reg c60:L, reg Sys_setenv3:cls, reg r118:V, reg sym18:cls, reg base18:cls, reg guard18:L, reg r119:V, reg on_exit6:cls, reg r121:V, reg pdf1:*, reg pdf2:V, reg c61:L, reg r122:S, reg quiet1:*, reg quiet2:V, reg c62:L, reg r123:S, reg _system_with_capture:cls, reg texi2dvi15:*, reg texi2dvi16:V, reg p25:p(V +), reg r125:V, reg sym19:cls, reg base19:cls, reg guard19:L, reg r126:V, reg r127:V, reg grep:cls, reg out:*, reg out1:V, reg c63:L, reg out3:V, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg r128:V, reg p26:p(V +), reg r130:V, reg length:cls, reg r131:V, reg c64:L, reg grepl:cls, reg Sys_getenv3:cls, reg r133:V, reg p27:p(V +), reg r135:V, reg c65:L, reg paste6:cls, reg env0:*, reg env1:V, reg p28:p(V +), reg r137:V, reg _system_with_capture1:cls, reg texi2dvi17:*, reg texi2dvi18:V, reg p29:p(V +), reg sym20:cls, reg base20:cls, reg guard20:L, reg r140:V, reg r141:V, reg opt_pdf:*, reg opt_pdf1:V, reg opt_quiet:*, reg opt_quiet1:V, reg opt_extra:*, reg opt_extra1:V, reg shQuote:cls, reg file1:*, reg file2:V, reg p30:p(V +), reg r143:V, reg c66:cls, reg r144:V, reg p31:p(V +), reg env2:*, reg env3:V, reg p32:p(V +), reg r147:V, reg paste7:cls, reg file_path_sans_ext:cls, reg file3:*, reg file4:V, reg p33:p(V +), reg r149:V, reg p34:p(V +), reg r151:V, reg out4:*, reg out5:V, reg c67:L, reg out7:V, reg dr10:V, reg dc5:L, reg dx10:V, reg dx11:V, reg r152:V, reg c68:L, reg c70:V, reg file_test:cls, reg log:*, reg log1:V, reg p35:p(V +), reg r154:V, reg c71:L, reg c72:V, reg c74:L, reg c76:V, reg sym21:cls, reg base21:cls, reg guard21:L, reg r155:V, reg c79:L, reg r156:V, reg grepl1:cls, reg readLines:cls, reg log2:*, reg log3:V, reg p36:p(V +), reg r158:V, reg p37:p(V +), reg r160:V, reg any:cls, reg r161:V, reg c80:L, reg c81:V, reg c83:L, reg _system_with_capture2:cls, reg texi2dvi19:*, reg texi2dvi20:V, reg p38:p(V +), reg sym22:cls, reg base22:cls, reg guard22:L, reg r163:V, reg r164:V, reg opt_pdf2:*, reg opt_pdf3:V, reg opt_quiet2:*, reg opt_quiet3:V, reg opt_extra2:*, reg opt_extra3:V, reg shQuote1:cls, reg file5:*, reg file6:V, reg p39:p(V +), reg r166:V, reg c84:cls, reg r167:V, reg p40:p(V +), reg env4:*, reg env5:V, reg p41:p(V +), reg r170:V, reg character:cls, reg r172:V, reg paste8:cls, reg file_path_sans_ext1:cls, reg file7:*, reg file8:V, reg p42:p(V +), reg r174:V, reg p43:p(V +), reg r176:V, reg file_test1:cls, reg log4:*, reg log5:V, reg p44:p(V +), reg r178:V, reg c85:L, reg _get_LaTeX_errors_from_log_file:cls, reg log6:*, reg log7:V, reg p45:p(V +), reg r180:V, reg sym23:cls, reg base23:cls, reg guard23:L, reg r181:V, reg r182:V, reg lines:*, reg lines1:V, reg length1:cls, reg r183:V, reg c86:L, reg paste9:cls, reg paste10:cls, reg lines2:*, reg lines3:V, reg p46:p(V +), reg r185:V, reg p47:p(V +), reg r187:V, reg r188:V, reg paste11:cls, reg file_path_sans_ext2:cls, reg file9:*, reg file10:V, reg p48:p(V +), reg r191:V, reg p49:p(V +), reg r193:V, reg file_test2:cls, reg log8:*, reg log9:V, reg p50:p(V +), reg r195:V, reg c87:L, reg _get_BibTeX_errors_from_blg_file:cls, reg log10:*, reg log11:V, reg p51:p(V +), reg r197:V, reg sym24:cls, reg base24:cls, reg guard24:L, reg r198:V, reg r199:V, reg lines4:*, reg lines5:V, reg length2:cls, reg r200:V, reg c88:L, reg paste12:cls, reg paste13:cls, reg lines6:*, reg lines7:V, reg p52:p(V +), reg r202:V, reg p53:p(V +), reg r204:V, reg r205:V, reg out8:*, reg out9:V, reg c89:L, reg out11:V, reg dr12:V, reg dc6:L, reg dx12:V, reg dx13:V, reg r207:V, reg c90:L, reg gettextf:cls, reg file11:*, reg file12:V, reg p54:p(V +), reg r209:V, reg sym25:cls, reg base25:cls, reg guard25:L, reg r210:V, reg r211:V, reg errors:*, reg errors1:V, reg length3:cls, reg r212:V, reg c91:L, reg paste14:cls, reg msg:*, reg msg1:V, reg p55:p(V +), reg errors2:*, reg errors3:V, reg p56:p(V +), reg r215:V, reg sym26:cls, reg base26:cls, reg guard26:L, reg r217:V, reg r218:V, reg out12:*, reg out13:V, reg c92:L, reg out15:V, reg dr14:V, reg dc7:L, reg dx14:V, reg dx15:V, reg r219:V, reg length4:cls, reg r220:V, reg c93:L, reg paste15:cls, reg msg2:*, reg msg3:V, reg p57:p(V +), reg paste16:cls, reg out16:*, reg out17:V, reg c94:L, reg out19:V, reg dr16:V, reg dc8:L, reg dx16:V, reg dx17:V, reg r222:V, reg p58:p(V +), reg r224:V, reg p59:p(V +), reg r226:V, reg quiet3:*, reg quiet4:V, reg r227:V, reg c95:L, reg paste17:cls, reg msg4:*, reg msg5:V, reg p60:p(V +), reg paste18:cls, reg out20:*, reg out21:V, reg c96:L, reg out23:V, reg dr18:V, reg dc9:L, reg dx18:V, reg dx19:V, reg r229:V, reg p61:p(V +), reg r231:V, reg p62:p(V +), reg r233:V, reg r234:V, reg do_cleanup:cls, reg clean3:*, reg clean4:V, reg p63:p(V +), reg r237:V, reg sym27:cls, reg base27:cls, reg guard27:L, reg r238:V, reg r239:V, reg msg6:*, reg msg7:V, reg nzchar4:cls, reg r240:V, reg c97:L, reg stop:cls, reg msg8:*, reg msg9:V, reg p64:p(V +), reg r242:V, reg r243:V, reg quiet5:*, reg quiet6:V, reg r244:V, reg c98:L, reg message:cls, reg paste19:cls, reg paste20:cls, reg out24:*, reg out25:V, reg c99:L, reg out27:V, reg dr20:V, reg dc10:L, reg dx20:V, reg dx21:V, reg r245:V, reg p65:p(V +), reg r247:V, reg p66:p(V +), reg paste21:cls, reg out28:*, reg out29:V, reg c100:L, reg out31:V, reg dr22:V, reg dc11:L, reg dx22:V, reg dx23:V, reg r249:V, reg p67:p(V +), reg r251:V, reg p68:p(V +), reg r253:V, reg p69:p(V +), reg r255:V, reg index3:*, reg index4:V, reg c101:L, reg c103:V, reg sym28:cls, reg base28:cls, reg guard28:L, reg r257:V, reg c106:L, reg r258:V, reg texi2dvi21:*, reg texi2dvi22:V, reg nzchar5:cls, reg r259:V, reg c107:L, reg c108:V, reg c110:L, reg system:cls, reg paste22:cls, reg shQuote2:cls, reg texi2dvi23:*, reg texi2dvi24:V, reg p70:p(V +), reg r261:V, reg p71:p(V +), reg r263:V, reg p72:p(V +), reg r265:V, reg sym29:cls, reg base29:cls, reg guard29:L, reg r266:V, reg r267:V, reg grep1:cls, reg ver:*, reg ver1:V, reg c111:L, reg ver3:V, reg dr24:V, reg dc12:L, reg dx24:V, reg dx25:V, reg __:cls, reg r268:V, reg p73:p(V +), reg r270:V, reg length5:cls, reg r271:V, reg c112:L, reg sym30:cls, reg base30:cls, reg guard30:L, reg r272:V, reg r273:V, reg texinputs13:*, reg texinputs14:V, reg Rtexinputs2:*, reg Rtexinputs3:V, reg Rbstinputs2:*, reg Rbstinputs3:V, reg c113:cls, reg r274:V, reg gsub1:cls, reg texinputs15:*, reg texinputs16:V, reg p74:p(V +), reg r276:V, reg paste23:cls, reg shQuote3:cls, reg texinputs17:*, reg texinputs18:V, reg p75:p(V +), reg r278:V, reg p76:p(V +), reg r280:V, reg paste24:cls, reg extra:*, reg extra1:V, reg p77:p(V +), reg paste25:cls, reg paths:*, reg paths1:V, reg p78:p(V +), reg r283:V, reg p79:p(V +), reg r285:V, reg basename:cls, reg file_path_sans_ext3:cls, reg file13:*, reg file14:V, reg p80:p(V +), reg r288:V, reg p81:p(V +), reg r290:V, reg system1:cls, reg paste26:cls, reg shQuote4:cls, reg texi2dvi25:*, reg texi2dvi26:V, reg p82:p(V +), reg r292:V, reg p83:p(V +), reg quiet7:*, reg quiet8:V, reg c114:L, reg p84:p(V +), reg pdf3:*, reg pdf4:V, reg c115:L, reg p85:p(V +), reg shQuote5:cls, reg file15:*, reg file16:V, reg p86:p(V +), reg r297:V, reg p87:p(V +), reg extra2:*, reg extra3:V, reg p88:p(V +), reg r300:V, reg p89:p(V +), reg r302:V, reg paste27:cls, reg base31:*, reg base32:V, reg p90:p(V +), reg r304:V, reg file_test3:cls, reg logfile:*, reg logfile1:V, reg p91:p(V +), reg r306:V, reg c116:L, reg _get_LaTeX_errors_from_log_file1:cls, reg logfile2:*, reg logfile3:V, reg p92:p(V +), reg r308:V, reg sym31:cls, reg base33:cls, reg guard31:L, reg r309:V, reg r310:V, reg lines8:*, reg lines9:V, reg length6:cls, reg r311:V, reg c117:L, reg paste28:cls, reg msg10:*, reg msg11:V, reg p93:p(V +), reg paste29:cls, reg lines10:*, reg lines11:V, reg p94:p(V +), reg r314:V, reg p95:p(V +), reg r316:V, reg r317:V, reg paste30:cls, reg base34:*, reg base35:V, reg p96:p(V +), reg r320:V, reg file_test4:cls, reg logfile4:*, reg logfile5:V, reg p97:p(V +), reg r322:V, reg c118:L, reg _get_BibTeX_errors_from_blg_file1:cls, reg logfile6:*, reg logfile7:V, reg p98:p(V +), reg r324:V, reg sym32:cls, reg base36:cls, reg guard32:L, reg r325:V, reg r326:V, reg lines12:*, reg lines13:V, reg length7:cls, reg r327:V, reg c119:L, reg paste31:cls, reg msg12:*, reg msg13:V, reg p99:p(V +), reg paste32:cls, reg lines14:*, reg lines15:V, reg p100:p(V +), reg r330:V, reg p101:p(V +), reg r332:V, reg r333:V, reg do_cleanup1:cls, reg clean5:*, reg clean6:V, reg p102:p(V +), reg r336:V, reg sym33:cls, reg base37:cls, reg guard33:L, reg r337:V, reg r338:V, reg msg14:*, reg msg15:V, reg nzchar6:cls, reg r339:V, reg c120:L, reg paste33:cls, reg gettextf1:cls, reg file17:*, reg file18:V, reg p103:p(V +), reg r341:V, reg p104:p(V +), reg msg16:*, reg msg17:V, reg p105:p(V +), reg r344:V, reg stop1:cls, reg msg18:*, reg msg19:V, reg p106:p(V +), reg r346:V, reg r347:V, reg shQuote6:cls, reg file19:*, reg file20:V, reg p107:p(V +), reg r349:V, reg basename1:cls, reg file_path_sans_ext4:cls, reg file21:*, reg file22:V, reg p108:p(V +), reg r351:V, reg p109:p(V +), reg r353:V, reg paste34:cls, reg base38:*, reg base39:V, reg p110:p(V +), reg r355:V, reg pdf5:*, reg pdf6:V, reg c121:L, reg Sys_getenv4:cls, reg r356:V, reg r357:V, reg Sys_getenv5:cls, reg r358:V, reg sym34:cls, reg base40:cls, reg guard34:L, reg r359:V, reg r360:V, reg Sys_which3:cls, reg latex:*, reg latex1:V, reg p111:p(V +), reg r362:V, reg nzchar7:cls, reg r363:V, reg r364:V, reg c122:L, reg stop2:cls, reg pdf7:*, reg pdf8:V, reg c123:L, reg p112:p(V +), reg r366:V, reg quiet9:*, reg quiet10:V, reg c124:L, reg r368:cls, reg r369:V, reg system2:*, reg system3:V, reg Sys_getenv6:cls, reg r370:V, reg Sys_getenv7:cls, reg r371:V, reg sym35:cls, reg base41:cls, reg guard35:L, reg r372:V, reg r373:V, reg texfile:*, reg texfile1:V, reg c125:cls, reg r374:V, reg sys2:cls, reg latex2:*, reg latex3:V, reg p113:p(V +), reg ltxargs:*, reg ltxargs1:V, reg p114:p(V +), reg r377:V, reg c126:L, reg _get_LaTeX_errors_from_log_file2:cls, reg paste35:cls, reg base42:*, reg base43:V, reg p115:p(V +), reg r379:V, reg p116:p(V +), reg r381:V, reg sym36:cls, reg base44:cls, reg guard36:L, reg r382:V, reg r383:V, reg lines16:*, reg lines17:V, reg length8:cls, reg r384:V, reg c127:L, reg paste36:cls, reg paste37:cls, reg lines18:*, reg lines19:V, reg p117:p(V +), reg r386:V, reg p118:p(V +), reg r388:V, reg r389:V, reg character1:cls, reg r390:V, reg stop3:cls, reg paste38:cls, reg gettextf2:cls, reg latex4:*, reg latex5:V, reg p119:p(V +), reg file23:*, reg file24:V, reg p120:p(V +), reg r393:V, reg p121:p(V +), reg errors4:*, reg errors5:V, reg p122:p(V +), reg r396:V, reg p123:p(V +), reg r398:V, reg sym37:cls, reg base45:cls, reg guard37:L, reg r400:V, reg r401:V, reg grep2:cls, reg readLines1:cls, reg paste39:cls, reg base46:*, reg base47:V, reg p124:p(V +), reg r403:V, reg p125:p(V +), reg r405:V, reg p126:p(V +), reg r407:V, reg length9:cls, reg r408:V, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c128:L, reg x:V, reg nmiss:*, reg nmiss1:V, reg c129:L, reg sys3:cls, reg bibtex:*, reg bibtex1:V, reg p127:p(V +), reg shQuote7:cls, reg base48:*, reg base49:V, reg p128:p(V +), reg r411:V, reg p129:p(V +), reg r413:V, reg i7:I, reg nmiss2:*, reg nmiss3:V, reg index5:*, reg index6:V, reg c130:L, reg i9:I, reg c132:V, reg file_exists:cls, reg idxfile:*, reg idxfile1:V, reg p130:p(V +), reg r416:V, reg c133:L, reg c134:V, reg c136:L, reg sys4:cls, reg makeindex:*, reg makeindex1:V, reg p131:p(V +), reg shQuote8:cls, reg idxfile2:*, reg idxfile3:V, reg p132:p(V +), reg r419:V, reg p133:p(V +), reg r421:V, reg c137:L, reg stop4:cls, reg gettextf3:cls, reg makeindex2:*, reg makeindex3:V, reg p134:p(V +), reg idxfile4:*, reg idxfile5:V, reg p135:p(V +), reg r424:V, reg p136:p(V +), reg r426:V, reg i15:I, reg r427:V, reg i16:I, reg sys5:cls, reg latex6:*, reg latex7:V, reg p137:p(V +), reg ltxargs2:*, reg ltxargs3:V, reg p138:p(V +), reg r431:V, reg c138:L, reg _get_LaTeX_errors_from_log_file3:cls, reg paste40:cls, reg base50:*, reg base51:V, reg p139:p(V +), reg r433:V, reg p140:p(V +), reg r435:V, reg sym38:cls, reg base52:cls, reg guard38:L, reg r436:V, reg i21:I, reg r437:V, reg lines20:*, reg lines21:V, reg length10:cls, reg r438:V, reg c139:L, reg paste41:cls, reg paste42:cls, reg lines22:*, reg lines23:V, reg p141:p(V +), reg r440:V, reg p142:p(V +), reg r442:V, reg i24:I, reg r443:V, reg character2:cls, reg r444:V, reg stop5:cls, reg paste43:cls, reg gettextf4:cls, reg latex8:*, reg latex9:V, reg p143:p(V +), reg file25:*, reg file26:V, reg p144:p(V +), reg r447:V, reg p145:p(V +), reg errors6:*, reg errors7:V, reg p146:p(V +), reg r450:V, reg p147:p(V +), reg r452:V, reg i25:I, reg readLines2:cls, reg paste44:cls, reg base53:*, reg base54:V, reg p148:p(V +), reg r455:V, reg p149:p(V +), reg r457:V, reg sym39:cls, reg base55:cls, reg guard39:L, reg r458:V, reg i28:I, reg r459:V, reg grep3:cls, reg Log:*, reg Log1:V, reg p150:p(V +), reg r461:V, reg length11:cls, reg r462:V, reg nmiss4:*, reg nmiss5:V, reg nmiss_prev:*, reg nmiss_prev1:V, reg r463:V, reg c140:L, reg i30:I, reg c142:V, reg sym40:cls, reg base56:cls, reg guard40:L, reg r464:V, reg i33:I, reg c145:L, reg r465:V, reg grepl2:cls, reg Log2:*, reg Log3:V, reg p151:p(V +), reg r467:V, reg any1:cls, reg r468:V, reg r469:V, reg c146:L, reg c147:V, reg c149:L, reg do_cleanup2:cls, reg clean7:*, reg clean8:V, reg p152:p(V +), reg r472:V, reg sym41:cls, reg base57:cls, reg guard41:L, reg r473:V, reg r474:V, reg invisible:cls, reg r475:V |
    mkenv;
    st file = file;
    pdf_isMissing = missing.0(pdf);
    if pdf_isMissing then L0(FALSE) else L0(pdf);
  L0(pdf_orDefault):
    st pdf = pdf_orDefault;
    clean_isMissing = missing.0(clean);
    if clean_isMissing then L1(FALSE) else L1(clean);
  L1(clean_orDefault):
    st clean = clean_orDefault;
    quiet_isMissing = missing.0(quiet);
    if quiet_isMissing then L2(TRUE) else L2(quiet);
  L2(quiet_orDefault):
    st quiet = quiet_orDefault;
    texi2dvi_isMissing = missing.0(texi2dvi);
    if texi2dvi_isMissing then L3() else L4(texi2dvi);
  L3():
    p = prom<V +>{
      getOption = ldf getOption;
      r = dyn getOption("texi2dvi");
      return r;
    };
    goto L4(p);
  L4(texi2dvi_orDefault):
    st texi2dvi = texi2dvi_orDefault;
    texinputs_isMissing = missing.0(texinputs);
    if texinputs_isMissing then L5(NULL) else L5(texinputs);
  L5(texinputs_orDefault):
    st texinputs = texinputs_orDefault;
    index_isMissing = missing.0(index);
    if index_isMissing then L6(TRUE) else L6(index);
  L6(index_orDefault):
    st index = index_orDefault;
    clean1 = ld clean;
    check L135() else D0();
  D0():
    deopt 0 [clean1];
  L135():
    clean2 = force? clean1;
    checkMissing(clean2);
    c = `as.logical`(clean2);
    if c then L136() else L7();
  L7():
    goto L8();
  L8():
    r4 = clos inner2357569541;
    st do_cleanup = r4;
    sym = ldf identical;
    base = ldf identical in base;
    guard = `==`.4(sym, base);
    if guard then L140() else L141();
  L136():
    list_files = ldf `list.files`;
    check L137() else D1();
  D1():
    deopt 3 [];
  L9(r6):
    c1 = `as.logical`(r6);
    if c1 then L144() else L10();
  L137():
    r2 = dyn list_files[`all.files`](TRUE);
    check L138() else D2();
  L140():
    texi2dvi1 = ld texi2dvi;
    check L142() else D3();
  L141():
    r5 = dyn base(<sym texi2dvi>, "emulation");
    goto L9(r5);
  D2():
    deopt 6 [r2];
  D3():
    deopt 15 [texi2dvi1];
  L10():
    sym1 = ldf `is.null`;
    base1 = ldf `is.null` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L146() else L147();
  L11():
    _Platform4 = ld `.Platform`;
    check L186() else D21();
  L138():
    st pre_files = r2;
    goto L8();
  L142():
    texi2dvi2 = force? texi2dvi1;
    checkMissing(texi2dvi2);
    identical = ldf identical in base;
    r7 = dyn identical(texi2dvi2, "emulation", TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
    check L143() else D4();
  L144():
    st texi2dvi = "";
    goto L11();
  D4():
    deopt 26 [r7];
  D21():
    deopt 90 [_Platform4];
  L12(r10):
    c3 = `as.logical`(r10);
    if c3 then L13(c3) else L149();
  L143():
    goto L9(r7);
  L146():
    texi2dvi3 = ld texi2dvi;
    check L148() else D5();
  L147():
    r9 = dyn base1(<sym texi2dvi>);
    goto L12(r9);
  L186():
    _Platform5 = force? _Platform4;
    checkMissing(_Platform5);
    c31 = `is.object`(_Platform5);
    if c31 then L188() else L189(_Platform5);
  D5():
    deopt 31 [texi2dvi3];
  L13(c4):
    c12 = `as.logical`(c4);
    if c12 then L15(c12) else L155();
  L148():
    texi2dvi4 = force? texi2dvi3;
    checkMissing(texi2dvi4);
    c2 = `==`(texi2dvi4, NULL);
    goto L12(c2);
  L149():
    sym2 = ldf nzchar;
    base2 = ldf nzchar in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L150() else L151();
  L187(dx3):
    st envSep = dx3;
    texinputs1 = ld texinputs;
    check L191() else D22();
  L188():
    dr2 = tryDispatchBuiltin.1("$", _Platform5);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L190() else L189(dr2);
  L189(_Platform7):
    r32 = `$`(_Platform7, <sym path.sep>);
    goto L187(r32);
  D22():
    deopt 94 [texinputs1];
  L14(c8, r12):
    r14 = `!`(r12);
    c9 = `as.logical`(r14);
    c10 = `||`(c8, c9);
    goto L13(c10);
  L15(c13):
    c18 = `as.logical`(c13);
    if c18 then L158() else L16();
  L150():
    texi2dvi5 = ld texi2dvi;
    check L152() else D6();
  L151():
    r11 = dyn base2(<sym texi2dvi>);
    goto L14(c3, r11);
  L155():
    texi2dvi7 = ld texi2dvi;
    check L156() else D8();
  L190():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L187(dx2);
  L191():
    texinputs2 = force? texinputs1;
    checkMissing(texinputs2);
    st texinputs0 = texinputs2;
    file_path = ldf `file.path`;
    check L192() else D23();
  D6():
    deopt 36 [c3, texi2dvi5];
  D8():
    deopt 42 [c12, texi2dvi7];
  D23():
    deopt 98 [];
  L16():
    sym4 = ldf nzchar;
    base4 = ldf nzchar in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L177() else L178();
  L152():
    texi2dvi6 = force? texi2dvi5;
    checkMissing(texi2dvi6);
    nzchar = ldf nzchar in base;
    r13 = dyn nzchar(texi2dvi6);
    check L153() else D7();
  L156():
    texi2dvi8 = force? texi2dvi7;
    checkMissing(texi2dvi8);
    r15 = `==`(texi2dvi8, "texi2dvi");
    c15 = `as.logical`(r15);
    c16 = `||`(c12, c15);
    goto L15(c16);
  L158():
    Sys_which = ldf `Sys.which`;
    check L159() else D9();
  L192():
    p2 = prom<V +>{
      R_home = ldf `R.home`;
      r33 = dyn R_home("share");
      return r33;
    };
    r35 = dyn file_path(p2, "texmf");
    check L193() else D24();
  D7():
    deopt 39 [c3, r13];
  D9():
    deopt 48 [];
  D24():
    deopt 101 [r35];
  L21(r26):
    r30 = `!`(r26);
    c30 = `as.logical`(r30);
    if c30 then L182() else L22();
  L153():
    goto L14(c3, r13);
  L159():
    r16 = dyn Sys_which("texi2dvi");
    check L160() else D10();
  L177():
    Sys_which2 = ldf `Sys.which`;
    check L179() else D16();
  L178():
    r25 = dyn base4(<lang Sys.which(texi2dvi)>);
    goto L21(r25);
  L193():
    st Rtexmf = r35;
    file_path1 = ldf `file.path`;
    check L194() else D25();
  D10():
    deopt 50 [r16];
  D16():
    deopt 75 [];
  D25():
    deopt 104 [];
  L22():
    goto L11();
  L160():
    st texi2dvi = r16;
    _Platform = ld `.Platform`;
    check L161() else D11();
  L179():
    p1 = prom<V +>{
      texi2dvi11 = ld texi2dvi;
      texi2dvi12 = force? texi2dvi11;
      checkMissing(texi2dvi12);
      return texi2dvi12;
    };
    r28 = dyn Sys_which2(p1);
    check L180() else D17();
  L182():
    warning = ldf warning;
    check L183() else D19();
  L194():
    p3 = prom<V +>{
      Rtexmf = ld Rtexmf;
      Rtexmf1 = force? Rtexmf;
      checkMissing(Rtexmf1);
      return Rtexmf1;
    };
    r37 = dyn file_path1(p3, "tex", "latex");
    check L195() else D26();
  D11():
    deopt 52 [_Platform];
  D17():
    deopt 77 [r28];
  D19():
    deopt 82 [];
  D26():
    deopt 108 [r37];
  L161():
    _Platform1 = force? _Platform;
    checkMissing(_Platform1);
    c19 = `is.object`(_Platform1);
    if c19 then L163() else L164(_Platform1);
  L180():
    nzchar2 = ldf nzchar in base;
    r29 = dyn nzchar2(r28);
    check L181() else D18();
  L183():
    r31 = dyn warning("texi2dvi script/program not available, using emulation");
    check L184() else D20();
  L195():
    st Rtexinputs = r37;
    paste = ldf paste;
    check L196() else D27();
  D18():
    deopt 79 [r29];
  D20():
    deopt 84 [r31];
  D27():
    deopt 111 [];
  L162(dx1):
    r18 = `==`(dx1, "windows");
    c20 = `as.logical`(r18);
    if c20 then L166() else L17(c20);
  L163():
    dr = tryDispatchBuiltin.1("$", _Platform1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L165() else L164(dr);
  L164(_Platform3):
    r17 = `$`(_Platform3, <sym OS.type>);
    goto L162(r17);
  L181():
    goto L21(r29);
  L184():
    st texi2dvi = "";
    goto L11();
  L196():
    p4 = prom<V +>{
      sym5 = ldf c;
      base5 = ldf c in base;
      guard5 = `==`.4(sym5, base5);
      if guard5 then L1() else L2();
    L0(r39):
      return r39;
    L1():
      texinputs3 = ld texinputs0;
      texinputs4 = force? texinputs3;
      checkMissing(texinputs4);
      Rtexinputs = ld Rtexinputs;
      Rtexinputs1 = force? Rtexinputs;
      checkMissing(Rtexinputs1);
      c32 = ldf c in base;
      r40 = dyn c32(texinputs4, Rtexinputs1, "");
      goto L0(r40);
    L2():
      r38 = dyn base5(<sym texinputs0>, <sym Rtexinputs>, "");
      goto L0(r38);
    };
    p5 = prom<V +>{
      envSep = ld envSep;
      envSep1 = force? envSep;
      checkMissing(envSep1);
      return envSep1;
    };
    r43 = dyn paste[, collapse](p4, p5);
    check L197() else D28();
  D28():
    deopt 115 [r43];
  L17(c22):
    c29 = `as.logical`(c22);
    if c29 then L172() else L19();
  L165():
    dx = getTryDispatchBuiltinValue(dr);
    goto L162(dx);
  L166():
    sym3 = ldf nzchar;
    base3 = ldf nzchar in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L167() else L168();
  L197():
    st texinputs = r43;
    _Platform8 = ld `.Platform`;
    check L198() else D29();
  D29():
    deopt 117 [_Platform8];
  L18(c25, r20):
    r22 = `!`(r20);
    c26 = `as.logical`(r22);
    c27 = `&&`(c25, c26);
    goto L17(c27);
  L19():
    goto L20(NULL);
  L20(r24):
    goto L11();
  L167():
    texi2dvi9 = ld texi2dvi;
    check L169() else D12();
  L168():
    r19 = dyn base3(<sym texi2dvi>);
    goto L18(c20, r19);
  L172():
    Sys_which1 = ldf `Sys.which`;
    check L173() else D14();
  L198():
    _Platform9 = force? _Platform8;
    checkMissing(_Platform9);
    c33 = `is.object`(_Platform9);
    if c33 then L200() else L201(_Platform9);
  D12():
    deopt 59 [c20, texi2dvi9];
  D14():
    deopt 66 [];
  L169():
    texi2dvi10 = force? texi2dvi9;
    checkMissing(texi2dvi10);
    nzchar1 = ldf nzchar in base;
    r21 = dyn nzchar1(texi2dvi10);
    check L170() else D13();
  L173():
    r23 = dyn Sys_which1("texify");
    check L174() else D15();
  L199(dx5):
    r45 = `==`(dx5, "windows");
    c34 = `as.logical`(r45);
    if c34 then L203() else L23();
  L200():
    dr4 = tryDispatchBuiltin.1("$", _Platform9);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L202() else L201(dr4);
  L201(_Platform11):
    r44 = `$`(_Platform11, <sym OS.type>);
    goto L199(r44);
  D13():
    deopt 62 [c20, r21];
  D15():
    deopt 68 [r23];
  L23():
    goto L24();
  L24():
    file_path2 = ldf `file.path`;
    check L207() else D32();
  L170():
    goto L18(c20, r21);
  L174():
    st texi2dvi = r23;
    goto L20(r23);
  L202():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L199(dx4);
  L203():
    gsub = ldf gsub;
    check L204() else D30();
  D30():
    deopt 123 [];
  D32():
    deopt 134 [];
  L204():
    p6 = prom<V +>{
      texinputs5 = ld texinputs;
      texinputs6 = force? texinputs5;
      checkMissing(texinputs6);
      return texinputs6;
    };
    r47 = dyn gsub[, , , fixed]("\\", "/", p6, TRUE);
    check L205() else D31();
  L207():
    p7 = prom<V +>{
      Rtexmf2 = ld Rtexmf;
      Rtexmf3 = force? Rtexmf2;
      checkMissing(Rtexmf3);
      return Rtexmf3;
    };
    r50 = dyn file_path2(p7, "bibtex", "bib");
    check L208() else D33();
  D31():
    deopt 129 [r47];
  D33():
    deopt 138 [r50];
  L205():
    st texinputs = r47;
    goto L24();
  L208():
    st Rbibinputs = r50;
    paste1 = ldf paste;
    check L209() else D34();
  D34():
    deopt 141 [];
  L209():
    p8 = prom<V +>{
      sym6 = ldf c;
      base6 = ldf c in base;
      guard6 = `==`.4(sym6, base6);
      if guard6 then L1() else L2();
    L0(r52):
      return r52;
    L1():
      texinputs7 = ld texinputs0;
      texinputs8 = force? texinputs7;
      checkMissing(texinputs8);
      Rbibinputs = ld Rbibinputs;
      Rbibinputs1 = force? Rbibinputs;
      checkMissing(Rbibinputs1);
      c35 = ldf c in base;
      r53 = dyn c35(texinputs8, Rbibinputs1, "");
      goto L0(r53);
    L2():
      r51 = dyn base6(<sym texinputs0>, <sym Rbibinputs>, "");
      goto L0(r51);
    };
    p9 = prom<V +>{
      envSep2 = ld envSep;
      envSep3 = force? envSep2;
      checkMissing(envSep3);
      return envSep3;
    };
    r56 = dyn paste1[, collapse](p8, p9);
    check L210() else D35();
  D35():
    deopt 145 [r56];
  L210():
    st bibinputs = r56;
    file_path3 = ldf `file.path`;
    check L211() else D36();
  D36():
    deopt 148 [];
  L211():
    p10 = prom<V +>{
      Rtexmf4 = ld Rtexmf;
      Rtexmf5 = force? Rtexmf4;
      checkMissing(Rtexmf5);
      return Rtexmf5;
    };
    r58 = dyn file_path3(p10, "bibtex", "bst");
    check L212() else D37();
  D37():
    deopt 152 [r58];
  L212():
    st Rbstinputs = r58;
    paste2 = ldf paste;
    check L213() else D38();
  D38():
    deopt 155 [];
  L213():
    p11 = prom<V +>{
      sym7 = ldf c;
      base7 = ldf c in base;
      guard7 = `==`.4(sym7, base7);
      if guard7 then L1() else L2();
    L0(r60):
      return r60;
    L1():
      texinputs9 = ld texinputs0;
      texinputs10 = force? texinputs9;
      checkMissing(texinputs10);
      Rbstinputs = ld Rbstinputs;
      Rbstinputs1 = force? Rbstinputs;
      checkMissing(Rbstinputs1);
      c36 = ldf c in base;
      r61 = dyn c36(texinputs10, Rbstinputs1, "");
      goto L0(r61);
    L2():
      r59 = dyn base7(<sym texinputs0>, <sym Rbstinputs>, "");
      goto L0(r59);
    };
    p12 = prom<V +>{
      envSep4 = ld envSep;
      envSep5 = force? envSep4;
      checkMissing(envSep5);
      return envSep5;
    };
    r64 = dyn paste2[, collapse](p11, p12);
    check L214() else D39();
  D39():
    deopt 159 [r64];
  L214():
    st bstinputs = r64;
    Sys_getenv = ldf `Sys.getenv`;
    check L215() else D40();
  D40():
    deopt 162 [];
  L215():
    r65 = dyn Sys_getenv[, unset]("TEXINPUTS", NA_STR);
    check L216() else D41();
  D41():
    deopt 166 [r65];
  L216():
    st otexinputs = r65;
    sym8 = ldf `is.na`;
    base8 = ldf `is.na` in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L217() else L218();
  L25(r67):
    c37 = `as.logical`(r67);
    if c37 then L221() else L26();
  L217():
    otexinputs = ld otexinputs;
    check L219() else D42();
  L218():
    r66 = dyn base8(<sym otexinputs>);
    goto L25(r66);
  D42():
    deopt 170 [otexinputs];
  L26():
    sym10 = ldf `on.exit`;
    base10 = ldf `on.exit` in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L225() else L226();
  L28():
    Sys_setenv = ldf `Sys.setenv`;
    check L227() else D44();
  L219():
    otexinputs1 = force? otexinputs;
    checkMissing(otexinputs1);
    is_na = ldf `is.na` in base;
    r68 = dyn is_na(otexinputs1);
    check L220() else D43();
  L221():
    sym9 = ldf `on.exit`;
    base9 = ldf `on.exit` in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L222() else L223();
  D43():
    deopt 173 [r68];
  D44():
    deopt 184 [];
  L27():
    st otexinputs = ".";
    goto L28();
  L220():
    goto L25(r68);
  L222():
    on_exit = ldf `on.exit` in base;
    r71 = dyn on_exit(<lang Sys.unsetenv("TEXINPUTS")>);
    goto L27();
  L223():
    r69 = dyn base9(<lang Sys.unsetenv("TEXINPUTS")>);
    goto L27();
  L225():
    on_exit1 = ldf `on.exit` in base;
    r74 = dyn on_exit1(<lang Sys.setenv(TEXINPUTS=otexinputs)>);
    goto L28();
  L226():
    r73 = dyn base10(<lang Sys.setenv(TEXINPUTS=otexinputs)>);
    goto L28();
  L227():
    p16 = prom<V +>{
      paste3 = ldf paste;
      p13 = prom<V +>{
        otexinputs2 = ld otexinputs;
        otexinputs3 = force? otexinputs2;
        checkMissing(otexinputs3);
        return otexinputs3;
      };
      p14 = prom<V +>{
        texinputs11 = ld texinputs;
        texinputs12 = force? texinputs11;
        checkMissing(texinputs12);
        return texinputs12;
      };
      p15 = prom<V +>{
        envSep6 = ld envSep;
        envSep7 = force? envSep6;
        checkMissing(envSep7);
        return envSep7;
      };
      r78 = dyn paste3[, , sep](p13, p14, p15);
      return r78;
    };
    r80 = dyn Sys_setenv[TEXINPUTS](p16);
    check L228() else D45();
  D45():
    deopt 187 [r80];
  L228():
    Sys_getenv1 = ldf `Sys.getenv`;
    check L229() else D46();
  D46():
    deopt 189 [];
  L229():
    r81 = dyn Sys_getenv1[, unset]("BIBINPUTS", NA_STR);
    check L230() else D47();
  D47():
    deopt 193 [r81];
  L230():
    st obibinputs = r81;
    sym11 = ldf `is.na`;
    base11 = ldf `is.na` in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L231() else L232();
  L29(r83):
    c38 = `as.logical`(r83);
    if c38 then L235() else L30();
  L231():
    obibinputs = ld obibinputs;
    check L233() else D48();
  L232():
    r82 = dyn base11(<sym obibinputs>);
    goto L29(r82);
  D48():
    deopt 197 [obibinputs];
  L30():
    sym13 = ldf `on.exit`;
    base13 = ldf `on.exit` in base;
    guard13 = `==`.4(sym13, base13);
    if guard13 then L239() else L240();
  L32():
    Sys_setenv1 = ldf `Sys.setenv`;
    check L241() else D50();
  L233():
    obibinputs1 = force? obibinputs;
    checkMissing(obibinputs1);
    is_na1 = ldf `is.na` in base;
    r84 = dyn is_na1(obibinputs1);
    check L234() else D49();
  L235():
    sym12 = ldf `on.exit`;
    base12 = ldf `on.exit` in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L236() else L237();
  D49():
    deopt 200 [r84];
  D50():
    deopt 211 [];
  L31():
    st obibinputs = ".";
    goto L32();
  L234():
    goto L29(r84);
  L236():
    on_exit2 = ldf `on.exit` in base;
    r87 = dyn on_exit2(<lang Sys.unsetenv("BIBINPUTS")>, TRUE);
    goto L31();
  L237():
    r85 = dyn base12[, add](<lang Sys.unsetenv("BIBINPUTS")>, TRUE);
    goto L31();
  L239():
    on_exit3 = ldf `on.exit` in base;
    r90 = dyn on_exit3(<lang Sys.setenv(BIBINPUTS=obibinputs, add=TRUE)>);
    goto L32();
  L240():
    r89 = dyn base13(<lang Sys.setenv(BIBINPUTS=obibinputs, add=TRUE)>);
    goto L32();
  L241():
    p20 = prom<V +>{
      paste4 = ldf paste;
      p17 = prom<V +>{
        obibinputs2 = ld obibinputs;
        obibinputs3 = force? obibinputs2;
        checkMissing(obibinputs3);
        return obibinputs3;
      };
      p18 = prom<V +>{
        bibinputs = ld bibinputs;
        bibinputs1 = force? bibinputs;
        checkMissing(bibinputs1);
        return bibinputs1;
      };
      p19 = prom<V +>{
        envSep8 = ld envSep;
        envSep9 = force? envSep8;
        checkMissing(envSep9);
        return envSep9;
      };
      r94 = dyn paste4[, , sep](p17, p18, p19);
      return r94;
    };
    r96 = dyn Sys_setenv1[BIBINPUTS](p20);
    check L242() else D51();
  D51():
    deopt 214 [r96];
  L242():
    Sys_getenv2 = ldf `Sys.getenv`;
    check L243() else D52();
  D52():
    deopt 216 [];
  L243():
    r97 = dyn Sys_getenv2[, unset]("BSTINPUTS", NA_STR);
    check L244() else D53();
  D53():
    deopt 220 [r97];
  L244():
    st obstinputs = r97;
    sym14 = ldf `is.na`;
    base14 = ldf `is.na` in base;
    guard14 = `==`.4(sym14, base14);
    if guard14 then L245() else L246();
  L33(r99):
    c39 = `as.logical`(r99);
    if c39 then L249() else L34();
  L245():
    obstinputs = ld obstinputs;
    check L247() else D54();
  L246():
    r98 = dyn base14(<sym obstinputs>);
    goto L33(r98);
  D54():
    deopt 224 [obstinputs];
  L34():
    sym16 = ldf `on.exit`;
    base16 = ldf `on.exit` in base;
    guard16 = `==`.4(sym16, base16);
    if guard16 then L253() else L254();
  L36():
    Sys_setenv2 = ldf `Sys.setenv`;
    check L255() else D56();
  L247():
    obstinputs1 = force? obstinputs;
    checkMissing(obstinputs1);
    is_na2 = ldf `is.na` in base;
    r100 = dyn is_na2(obstinputs1);
    check L248() else D55();
  L249():
    sym15 = ldf `on.exit`;
    base15 = ldf `on.exit` in base;
    guard15 = `==`.4(sym15, base15);
    if guard15 then L250() else L251();
  D55():
    deopt 227 [r100];
  D56():
    deopt 238 [];
  L35():
    st obstinputs = ".";
    goto L36();
  L248():
    goto L33(r100);
  L250():
    on_exit4 = ldf `on.exit` in base;
    r103 = dyn on_exit4(<lang Sys.unsetenv("BSTINPUTS")>, TRUE);
    goto L35();
  L251():
    r101 = dyn base15[, add](<lang Sys.unsetenv("BSTINPUTS")>, TRUE);
    goto L35();
  L253():
    on_exit5 = ldf `on.exit` in base;
    r106 = dyn on_exit5(<lang Sys.setenv(BSTINPUTS=obstinputs)>, TRUE);
    goto L36();
  L254():
    r105 = dyn base16[, add](<lang Sys.setenv(BSTINPUTS=obstinputs)>, TRUE);
    goto L36();
  L255():
    p24 = prom<V +>{
      paste5 = ldf paste;
      p21 = prom<V +>{
        obstinputs2 = ld obstinputs;
        obstinputs3 = force? obstinputs2;
        checkMissing(obstinputs3);
        return obstinputs3;
      };
      p22 = prom<V +>{
        bstinputs = ld bstinputs;
        bstinputs1 = force? bstinputs;
        checkMissing(bstinputs1);
        return bstinputs1;
      };
      p23 = prom<V +>{
        envSep10 = ld envSep;
        envSep11 = force? envSep10;
        checkMissing(envSep11);
        return envSep11;
      };
      r110 = dyn paste5[, , sep](p21, p22, p23);
      return r110;
    };
    r112 = dyn Sys_setenv2[BSTINPUTS](p24);
    check L256() else D57();
  D57():
    deopt 241 [r112];
  L256():
    index1 = ld index;
    check L257() else D58();
  D58():
    deopt 242 [index1];
  L257():
    index2 = force? index1;
    checkMissing(index2);
    c40 = `as.logical`(index2);
    if c40 then L258() else L37(c40);
  L37(c42):
    c49 = `as.logical`(c42);
    if c49 then L264() else L39(c49);
  L258():
    sym17 = ldf nzchar;
    base17 = ldf nzchar in base;
    guard17 = `==`.4(sym17, base17);
    if guard17 then L259() else L260();
  L38(c45, r114):
    c46 = `as.logical`(r114);
    c47 = `&&`(c45, c46);
    goto L37(c47);
  L39(c51):
    c60 = `as.logical`(c51);
    if c60 then L271() else L40();
  L259():
    texi2dvi13 = ld texi2dvi;
    check L261() else D59();
  L260():
    r113 = dyn base17(<sym texi2dvi>);
    goto L38(c40, r113);
  L264():
    _Platform12 = ld `.Platform`;
    check L265() else D61();
  D59():
    deopt 246 [c40, texi2dvi13];
  D61():
    deopt 251 [c49, _Platform12];
  L40():
    index3 = ld index;
    check L405() else D132();
  L79():
    sym41 = ldf invisible;
    base57 = ldf invisible in base;
    guard41 = `==`.4(sym41, base57);
    if guard41 then L599() else L600();
  L261():
    texi2dvi14 = force? texi2dvi13;
    checkMissing(texi2dvi14);
    nzchar3 = ldf nzchar in base;
    r115 = dyn nzchar3(texi2dvi14);
    check L262() else D60();
  L265():
    _Platform13 = force? _Platform12;
    checkMissing(_Platform13);
    c52 = `is.object`(_Platform13);
    if c52 then L267() else L268(c49, _Platform13);
  L271():
    Sys_setenv3 = ldf `Sys.setenv`;
    check L272() else D62();
  D60():
    deopt 249 [c40, r115];
  D62():
    deopt 258 [];
  D132():
    deopt 516 [index3];
  L134(r474):
    popenv;
    return r474;
  L262():
    goto L38(c40, r115);
  L266(c56, dx7):
    r117 = `!=`(dx7, "windows");
    c57 = `as.logical`(r117);
    c58 = `&&`(c56, c57);
    goto L39(c58);
  L267():
    dr6 = tryDispatchBuiltin.1("$", _Platform13);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L269() else L268(c49, dr6);
  L268(c54, _Platform15):
    r116 = `$`(_Platform15, <sym OS.type>);
    goto L266(c54, r116);
  L272():
    r118 = dyn Sys_setenv3[TEXINDY]("false");
    check L273() else D63();
  L405():
    index4 = force? index3;
    checkMissing(index4);
    c101 = `as.logical`(index4);
    if c101 then L406() else L80(c101);
  L599():
    invisible = ldf invisible in base;
    r475 = dyn invisible(NULL);
    check L601() else D256();
  L600():
    r473 = dyn base57(NULL);
    goto L134(r473);
  D63():
    deopt 261 [r118];
  D256():
    deopt 933 [r475];
  L80(c103):
    c110 = `as.logical`(c103);
    if c110 then L412() else L82();
  L269():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L266(c49, dx6);
  L273():
    sym18 = ldf `on.exit`;
    base18 = ldf `on.exit` in base;
    guard18 = `==`.4(sym18, base18);
    if guard18 then L274() else L275();
  L406():
    sym28 = ldf nzchar;
    base28 = ldf nzchar in base;
    guard28 = `==`.4(sym28, base28);
    if guard28 then L407() else L408();
  L601():
    goto L134(r475);
  L41():
    pdf1 = ld pdf;
    check L276() else D64();
  L81(c106, r258):
    c107 = `as.logical`(r258);
    c108 = `&&`(c106, c107);
    goto L80(c108);
  L82():
    shQuote6 = ldf shQuote;
    check L483() else D182();
  L274():
    on_exit6 = ldf `on.exit` in base;
    r121 = dyn on_exit6(<lang Sys.unsetenv("TEXINDY")>, TRUE);
    goto L41();
  L275():
    r119 = dyn base18[, add](<lang Sys.unsetenv("TEXINDY")>, TRUE);
    goto L41();
  L407():
    texi2dvi21 = ld texi2dvi;
    check L409() else D133();
  L408():
    r257 = dyn base28(<sym texi2dvi>);
    goto L81(c101, r257);
  L412():
    st extra = "";
    system = ldf system;
    check L413() else D135();
  D64():
    deopt 265 [pdf1];
  D133():
    deopt 520 [c101, texi2dvi21];
  D135():
    deopt 529 [];
  D182():
    deopt 697 [];
  L276():
    pdf2 = force? pdf1;
    checkMissing(pdf2);
    c61 = `as.logical`(pdf2);
    if c61 then L277() else L42();
  L409():
    texi2dvi22 = force? texi2dvi21;
    checkMissing(texi2dvi22);
    nzchar5 = ldf nzchar in base;
    r259 = dyn nzchar5(texi2dvi22);
    check L410() else D134();
  L413():
    p72 = prom<V +>{
      paste22 = ldf paste;
      p71 = prom<V +>{
        shQuote2 = ldf shQuote;
        p70 = prom<V +>{
          texi2dvi23 = ld texi2dvi;
          texi2dvi24 = force? texi2dvi23;
          checkMissing(texi2dvi24);
          return texi2dvi24;
        };
        r261 = dyn shQuote2(p70);
        return r261;
      };
      r263 = dyn paste22(p71, "--version");
      return r263;
    };
    r265 = dyn system[, intern](p72, TRUE);
    check L414() else D136();
  L483():
    p107 = prom<V +>{
      file19 = ld file;
      file20 = force? file19;
      checkMissing(file20);
      return file20;
    };
    r349 = dyn shQuote6(p107);
    check L484() else D183();
  D134():
    deopt 523 [c101, r259];
  D136():
    deopt 533 [r265];
  D183():
    deopt 699 [r349];
  L42():
    goto L43("");
  L43(r122):
    st opt_pdf = r122;
    quiet1 = ld quiet;
    check L279() else D65();
  L277():
    goto L43("--pdf");
  L410():
    goto L81(c101, r259);
  L414():
    st ver = r265;
    sym29 = ldf length;
    base29 = ldf length in base;
    guard29 = `==`.4(sym29, base29);
    if guard29 then L415() else L416();
  L484():
    st texfile = r349;
    basename1 = ldf basename;
    check L485() else D184();
  D65():
    deopt 272 [quiet1];
  D184():
    deopt 702 [];
  L83(r267):
    c112 = `as.logical`(r267);
    if c112 then L420() else L84();
  L279():
    quiet2 = force? quiet1;
    checkMissing(quiet2);
    c62 = `as.logical`(quiet2);
    if c62 then L280() else L44();
  L415():
    grep1 = ldf grep;
    check L417() else D137();
  L416():
    r266 = dyn base29(<lang grep("MiKTeX", `[`(ver, 1))>);
    goto L83(r266);
  L485():
    p109 = prom<V +>{
      file_path_sans_ext4 = ldf file_path_sans_ext;
      p108 = prom<V +>{
        file21 = ld file;
        file22 = force? file21;
        checkMissing(file22);
        return file22;
      };
      r351 = dyn file_path_sans_ext4(p108);
      return r351;
    };
    r353 = dyn basename1(p109);
    check L486() else D185();
  D137():
    deopt 538 [];
  D185():
    deopt 704 [r353];
  L44():
    goto L45("");
  L45(r123):
    st opt_quiet = r123;
    st opt_extra = "--max-iterations=20";
    _system_with_capture = ldf `.system_with_capture`;
    check L282() else D66();
  L84():
    goto L86();
  L86():
    basename = ldf basename;
    check L434() else D150();
  L280():
    goto L45("--quiet");
  L417():
    p73 = prom<V +>{
      ver = ld ver;
      ver1 = force? ver;
      checkMissing(ver1);
      c111 = `is.object`(ver1);
      if c111 then L1() else L2(ver1);
    L0(dx25):
      return dx25;
    L1():
      dr24 = tryDispatchBuiltin.1("[", ver1);
      dc12 = getTryDispatchBuiltinDispatched(dr24);
      if dc12 then L3() else L2(dr24);
    L2(ver3):
      __ = ldf `[` in base;
      r268 = dyn __(ver3, 1);
      goto L0(r268);
    L3():
      dx24 = getTryDispatchBuiltinValue(dr24);
      goto L0(dx24);
    };
    r270 = dyn grep1("MiKTeX", p73);
    check L418() else D138();
  L420():
    sym30 = ldf c;
    base30 = ldf c in base;
    guard30 = `==`.4(sym30, base30);
    if guard30 then L421() else L422();
  L486():
    st base = r353;
    paste34 = ldf paste0;
    check L487() else D186();
  D66():
    deopt 283 [];
  D138():
    deopt 541 [r270];
  D150():
    deopt 582 [];
  D186():
    deopt 707 [];
  L85(r273):
    st texinputs = r273;
    gsub1 = ldf gsub;
    check L427() else D144();
  L282():
    p25 = prom<V +>{
      texi2dvi15 = ld texi2dvi;
      texi2dvi16 = force? texi2dvi15;
      checkMissing(texi2dvi16);
      return texi2dvi16;
    };
    r125 = dyn _system_with_capture(p25, "--help");
    check L283() else D67();
  L418():
    length5 = ldf length in base;
    r271 = dyn length5(r270);
    check L419() else D139();
  L421():
    texinputs13 = ld texinputs0;
    check L423() else D140();
  L422():
    r272 = dyn base30(<sym texinputs0>, <sym Rtexinputs>, <sym Rbstinputs>);
    goto L85(r272);
  L434():
    p81 = prom<V +>{
      file_path_sans_ext3 = ldf file_path_sans_ext;
      p80 = prom<V +>{
        file13 = ld file;
        file14 = force? file13;
        checkMissing(file14);
        return file14;
      };
      r288 = dyn file_path_sans_ext3(p80);
      return r288;
    };
    r290 = dyn basename(p81);
    check L435() else D151();
  L487():
    p110 = prom<V +>{
      base38 = ld base;
      base39 = force? base38;
      checkMissing(base39);
      return base39;
    };
    r355 = dyn paste34(p110, ".idx");
    check L488() else D187();
  D67():
    deopt 286 [r125];
  D139():
    deopt 543 [r271];
  D140():
    deopt 546 [texinputs13];
  D144():
    deopt 556 [];
  D151():
    deopt 584 [r290];
  D187():
    deopt 710 [r355];
  L283():
    st out = r125;
    sym19 = ldf length;
    base19 = ldf length in base;
    guard19 = `==`.4(sym19, base19);
    if guard19 then L284() else L285();
  L419():
    goto L83(r271);
  L423():
    texinputs14 = force? texinputs13;
    checkMissing(texinputs14);
    Rtexinputs2 = ld Rtexinputs;
    check L424() else D141();
  L427():
    p74 = prom<V +>{
      texinputs15 = ld texinputs;
      texinputs16 = force? texinputs15;
      checkMissing(texinputs16);
      return texinputs16;
    };
    r276 = dyn gsub1[, , , fixed]("\\", "/", p74, TRUE);
    check L428() else D145();
  L435():
    st base = r290;
    system1 = ldf system;
    check L436() else D152();
  L488():
    st idxfile = r355;
    pdf5 = ld pdf;
    check L489() else D188();
  D141():
    deopt 548 [Rtexinputs2];
  D145():
    deopt 562 [r276];
  D152():
    deopt 587 [];
  D188():
    deopt 712 [pdf5];
  L46(r127):
    c64 = `as.logical`(r127);
    if c64 then L289() else L47();
  L284():
    grep = ldf grep;
    check L286() else D68();
  L285():
    r126 = dyn base19(<lang grep("--no-line-error", `$`(out, stdout))>);
    goto L46(r126);
  L424():
    Rtexinputs3 = force? Rtexinputs2;
    checkMissing(Rtexinputs3);
    Rbstinputs2 = ld Rbstinputs;
    check L425() else D142();
  L428():
    st texinputs = r276;
    paste23 = ldf paste;
    check L429() else D146();
  L436():
    p89 = prom<V +>{
      paste26 = ldf paste;
      p83 = prom<V +>{
        shQuote4 = ldf shQuote;
        p82 = prom<V +>{
          texi2dvi25 = ld texi2dvi;
          texi2dvi26 = force? texi2dvi25;
          checkMissing(texi2dvi26);
          return texi2dvi26;
        };
        r292 = dyn shQuote4(p82);
        return r292;
      };
      p84 = prom<V +>{
        quiet7 = ld quiet;
        quiet8 = force? quiet7;
        checkMissing(quiet8);
        c114 = `as.logical`(quiet8);
        if c114 then L1() else L0();
      L0():
        return "";
      L1():
        return "--quiet";
      };
      p85 = prom<V +>{
        pdf3 = ld pdf;
        pdf4 = force? pdf3;
        checkMissing(pdf4);
        c115 = `as.logical`(pdf4);
        if c115 then L1() else L0();
      L0():
        return "";
      L1():
        return "--pdf";
      };
      p87 = prom<V +>{
        shQuote5 = ldf shQuote;
        p86 = prom<V +>{
          file15 = ld file;
          file16 = force? file15;
          checkMissing(file16);
          return file16;
        };
        r297 = dyn shQuote5(p86);
        return r297;
      };
      p88 = prom<V +>{
        extra2 = ld extra;
        extra3 = force? extra2;
        checkMissing(extra3);
        return extra3;
      };
      r300 = dyn paste26(p83, p84, p85, p87, p88);
      return r300;
    };
    r302 = dyn system1[, intern, `ignore.stderr`](p89, TRUE, TRUE);
    check L437() else D153();
  L489():
    pdf6 = force? pdf5;
    checkMissing(pdf6);
    c121 = `as.logical`(pdf6);
    if c121 then L490() else L100();
  D68():
    deopt 291 [];
  D142():
    deopt 550 [Rbstinputs2];
  D146():
    deopt 565 [];
  D153():
    deopt 593 [r302];
  L47():
    goto L48();
  L48():
    st env0 = "LC_COLLATE=C";
    grepl = ldf grepl;
    check L291() else D71();
  L100():
    Sys_getenv5 = ldf `Sys.getenv`;
    check L494() else D191();
  L101(r357):
    st latex = r357;
    sym34 = ldf nzchar;
    base40 = ldf nzchar in base;
    guard34 = `==`.4(sym34, base40);
    if guard34 then L496() else L497();
  L286():
    p26 = prom<V +>{
      out = ld out;
      out1 = force? out;
      checkMissing(out1);
      c63 = `is.object`(out1);
      if c63 then L1() else L2(out1);
    L0(dx9):
      return dx9;
    L1():
      dr8 = tryDispatchBuiltin.1("$", out1);
      dc4 = getTryDispatchBuiltinDispatched(dr8);
      if dc4 then L3() else L2(dr8);
    L2(out3):
      r128 = `$`(out3, <sym stdout>);
      goto L0(r128);
    L3():
      dx8 = getTryDispatchBuiltinValue(dr8);
      goto L0(dx8);
    };
    r130 = dyn grep("--no-line-error", p26);
    check L287() else D69();
  L289():
    st opt_extra = "--no-line-error";
    goto L48();
  L425():
    Rbstinputs3 = force? Rbstinputs2;
    checkMissing(Rbstinputs3);
    c113 = ldf c in base;
    r274 = dyn c113(texinputs14, Rtexinputs3, Rbstinputs3);
    check L426() else D143();
  L429():
    p76 = prom<V +>{
      shQuote3 = ldf shQuote;
      p75 = prom<V +>{
        texinputs17 = ld texinputs;
        texinputs18 = force? texinputs17;
        checkMissing(texinputs18);
        return texinputs18;
      };
      r278 = dyn shQuote3(p75);
      return r278;
    };
    r280 = dyn paste23("-I", p76);
    check L430() else D147();
  L437():
    st msg = "";
    paste27 = ldf paste0;
    check L438() else D154();
  L490():
    Sys_getenv4 = ldf `Sys.getenv`;
    check L491() else D189();
  D69():
    deopt 294 [r130];
  D71():
    deopt 306 [];
  D143():
    deopt 553 [r274];
  D147():
    deopt 568 [r280];
  D154():
    deopt 598 [];
  D189():
    deopt 715 [];
  D191():
    deopt 720 [];
  L102(r360):
    r364 = `!`(r360);
    c122 = `as.logical`(r364);
    if c122 then L501() else L103();
  L287():
    length = ldf length in base;
    r131 = dyn length(r130);
    check L288() else D70();
  L291():
    p27 = prom<V +>{
      Sys_getenv3 = ldf `Sys.getenv`;
      r133 = dyn Sys_getenv3("TMPDIR");
      return r133;
    };
    r135 = dyn grepl(" ", p27);
    check L292() else D72();
  L426():
    goto L85(r274);
  L430():
    st paths = r280;
    st extra = "--max-iterations=20";
    paste24 = ldf paste;
    check L431() else D148();
  L438():
    p90 = prom<V +>{
      base31 = ld base;
      base32 = force? base31;
      checkMissing(base32);
      return base32;
    };
    r304 = dyn paste27(p90, ".log");
    check L439() else D155();
  L491():
    r356 = dyn Sys_getenv4("PDFLATEX", "pdflatex");
    check L492() else D190();
  L494():
    r358 = dyn Sys_getenv5("LATEX", "latex");
    check L495() else D192();
  L496():
    Sys_which3 = ldf `Sys.which`;
    check L498() else D193();
  L497():
    r359 = dyn base40(<lang Sys.which(latex)>);
    goto L102(r359);
  D70():
    deopt 296 [r131];
  D72():
    deopt 309 [r135];
  D148():
    deopt 574 [];
  D155():
    deopt 601 [r304];
  D190():
    deopt 718 [r356];
  D192():
    deopt 723 [r358];
  D193():
    deopt 728 [];
  L103():
    goto L104();
  L104():
    quiet9 = ld quiet;
    check L505() else D198();
  L288():
    goto L46(r131);
  L292():
    c65 = `as.logical`(r135);
    if c65 then L293() else L49();
  L431():
    p77 = prom<V +>{
      extra = ld extra;
      extra1 = force? extra;
      checkMissing(extra1);
      return extra1;
    };
    p79 = prom<V +>{
      paste25 = ldf paste;
      p78 = prom<V +>{
        paths = ld paths;
        paths1 = force? paths;
        checkMissing(paths1);
        return paths1;
      };
      r283 = dyn paste25[, collapse](p78, " ");
      return r283;
    };
    r285 = dyn paste24(p77, p79);
    check L432() else D149();
  L439():
    st logfile = r304;
    file_test3 = ldf file_test;
    check L440() else D156();
  L492():
    goto L101(r356);
  L495():
    goto L101(r358);
  L498():
    p111 = prom<V +>{
      latex = ld latex;
      latex1 = force? latex;
      checkMissing(latex1);
      return latex1;
    };
    r362 = dyn Sys_which3(p111);
    check L499() else D194();
  L501():
    stop2 = ldf stop;
    check L502() else D196();
  D149():
    deopt 577 [r285];
  D156():
    deopt 604 [];
  D194():
    deopt 730 [r362];
  D196():
    deopt 735 [];
  D198():
    deopt 743 [quiet9];
  L49():
    goto L50();
  L50():
    _system_with_capture1 = ldf `.system_with_capture`;
    check L297() else D75();
  L293():
    paste6 = ldf paste;
    check L294() else D73();
  L432():
    st extra = r285;
    goto L86();
  L440():
    p91 = prom<V +>{
      logfile = ld logfile;
      logfile1 = force? logfile;
      checkMissing(logfile1);
      return logfile1;
    };
    r306 = dyn file_test3("-f", p91);
    check L441() else D157();
  L499():
    nzchar7 = ldf nzchar in base;
    r363 = dyn nzchar7(r362);
    check L500() else D195();
  L502():
    p112 = prom<V +>{
      pdf7 = ld pdf;
      pdf8 = force? pdf7;
      checkMissing(pdf8);
      c123 = `as.logical`(pdf8);
      if c123 then L1() else L0();
    L0():
      return "latex";
    L1():
      return "pdflatex";
    };
    r366 = dyn stop2[, , domain](p112, " is not available", NA_LGL);
    check L503() else D197();
  L505():
    quiet10 = force? quiet9;
    checkMissing(quiet10);
    c124 = `as.logical`(quiet10);
    if c124 then L506() else L105();
  D73():
    deopt 311 [];
  D75():
    deopt 319 [];
  D157():
    deopt 607 [r306];
  D195():
    deopt 732 [r363];
  D197():
    deopt 740 [r366];
  L105():
    system2 = ld system2;
    check L508() else D199();
  L106(r369):
    st sys2 = r369;
    Sys_getenv6 = ldf `Sys.getenv`;
    check L509() else D200();
  L294():
    p28 = prom<V +>{
      env0 = ld env0;
      env1 = force? env0;
      checkMissing(env1);
      return env1;
    };
    r137 = dyn paste6(p28, "TMPDIR=/tmp");
    check L295() else D74();
  L297():
    p29 = prom<V +>{
      texi2dvi17 = ld texi2dvi;
      texi2dvi18 = force? texi2dvi17;
      checkMissing(texi2dvi18);
      return texi2dvi18;
    };
    p31 = prom<V +>{
      sym20 = ldf c;
      base20 = ldf c in base;
      guard20 = `==`.4(sym20, base20);
      if guard20 then L1() else L2();
    L0(r141):
      return r141;
    L1():
      opt_pdf = ld opt_pdf;
      opt_pdf1 = force? opt_pdf;
      checkMissing(opt_pdf1);
      opt_quiet = ld opt_quiet;
      opt_quiet1 = force? opt_quiet;
      checkMissing(opt_quiet1);
      opt_extra = ld opt_extra;
      opt_extra1 = force? opt_extra;
      checkMissing(opt_extra1);
      shQuote = ldf shQuote;
      p30 = prom<V +>{
        file1 = ld file;
        file2 = force? file1;
        checkMissing(file2);
        return file2;
      };
      r143 = dyn shQuote(p30);
      c66 = ldf c in base;
      r144 = dyn c66(opt_pdf1, opt_quiet1, opt_extra1, r143);
      goto L0(r144);
    L2():
      r140 = dyn base20(<sym opt_pdf>, <sym opt_quiet>, <sym opt_extra>, <lang shQuote(file)>);
      goto L0(r140);
    };
    p32 = prom<V +>{
      env2 = ld env0;
      env3 = force? env2;
      checkMissing(env3);
      return env3;
    };
    r147 = dyn _system_with_capture1[, , env](p29, p31, p32);
    check L298() else D76();
  L441():
    c116 = `as.logical`(r306);
    if c116 then L442() else L87();
  L500():
    goto L102(r363);
  L503():
    goto L104();
  L506():
    r368 = clos inner1246119658;
    goto L106(r368);
  D74():
    deopt 314 [r137];
  D76():
    deopt 324 [r147];
  D199():
    deopt 747 [system2];
  D200():
    deopt 751 [];
  L87():
    goto L91();
  L91():
    paste30 = ldf paste0;
    check L454() else D164();
  L295():
    st env0 = r137;
    goto L50();
  L298():
    st out = r147;
    paste7 = ldf paste0;
    check L299() else D77();
  L442():
    _get_LaTeX_errors_from_log_file1 = ldf `.get_LaTeX_errors_from_log_file`;
    check L443() else D158();
  L508():
    system3 = force? system2;
    checkMissing(system3);
    goto L106(system3);
  L509():
    r370 = dyn Sys_getenv6("BIBTEX", "bibtex");
    check L510() else D201();
  D77():
    deopt 327 [];
  D158():
    deopt 609 [];
  D164():
    deopt 633 [];
  D201():
    deopt 754 [r370];
  L299():
    p34 = prom<V +>{
      file_path_sans_ext = ldf file_path_sans_ext;
      p33 = prom<V +>{
        file3 = ld file;
        file4 = force? file3;
        checkMissing(file4);
        return file4;
      };
      r149 = dyn file_path_sans_ext(p33);
      return r149;
    };
    r151 = dyn paste7(p34, ".log");
    check L300() else D78();
  L443():
    p92 = prom<V +>{
      logfile2 = ld logfile;
      logfile3 = force? logfile2;
      checkMissing(logfile3);
      return logfile3;
    };
    r308 = dyn _get_LaTeX_errors_from_log_file1(p92);
    check L444() else D159();
  L454():
    p96 = prom<V +>{
      base34 = ld base;
      base35 = force? base34;
      checkMissing(base35);
      return base35;
    };
    r320 = dyn paste30(p96, ".blg");
    check L455() else D165();
  L510():
    st bibtex = r370;
    Sys_getenv7 = ldf `Sys.getenv`;
    check L511() else D202();
  D78():
    deopt 330 [r151];
  D159():
    deopt 611 [r308];
  D165():
    deopt 636 [r320];
  D202():
    deopt 757 [];
  L300():
    st log = r151;
    out4 = ld out;
    check L301() else D79();
  L444():
    st lines = r308;
    sym31 = ldf length;
    base33 = ldf length in base;
    guard31 = `==`.4(sym31, base33);
    if guard31 then L445() else L446();
  L455():
    st logfile = r320;
    file_test4 = ldf file_test;
    check L456() else D166();
  L511():
    r371 = dyn Sys_getenv7("MAKEINDEX", "makeindex");
    check L512() else D203();
  D79():
    deopt 332 [out4];
  D166():
    deopt 639 [];
  D203():
    deopt 760 [r371];
  L88(r310):
    c117 = `as.logical`(r310);
    if c117 then L449() else L89();
  L301():
    out5 = force? out4;
    checkMissing(out5);
    c67 = `is.object`(out5);
    if c67 then L303() else L304(out5);
  L445():
    lines8 = ld lines;
    check L447() else D160();
  L446():
    r309 = dyn base33(<sym lines>);
    goto L88(r309);
  L456():
    p97 = prom<V +>{
      logfile4 = ld logfile;
      logfile5 = force? logfile4;
      checkMissing(logfile5);
      return logfile5;
    };
    r322 = dyn file_test4("-f", p97);
    check L457() else D167();
  L512():
    st makeindex = r371;
    sym35 = ldf c;
    base41 = ldf c in base;
    guard35 = `==`.4(sym35, base41);
    if guard35 then L513() else L514();
  D160():
    deopt 615 [lines8];
  D167():
    deopt 642 [r322];
  L89():
    goto L90(NULL);
  L90(r317):
    goto L91();
  L107(r373):
    st ltxargs = r373;
    sys2 = ldf sys2;
    check L517() else D206();
  L302(dx11):
    c68 = `as.logical`(dx11);
    if c68 then L306() else L51(c68);
  L303():
    dr10 = tryDispatchBuiltin.1("$", out5);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L305() else L304(dr10);
  L304(out7):
    r152 = `$`(out7, <sym status>);
    goto L302(r152);
  L447():
    lines9 = force? lines8;
    checkMissing(lines9);
    length6 = ldf length in base;
    r311 = dyn length6(lines9);
    check L448() else D161();
  L449():
    paste28 = ldf paste;
    check L450() else D162();
  L457():
    c118 = `as.logical`(r322);
    if c118 then L458() else L92();
  L513():
    texfile = ld texfile;
    check L515() else D204();
  L514():
    r372 = dyn base41("-interaction=nonstopmode", <sym texfile>);
    goto L107(r372);
  D161():
    deopt 618 [r311];
  D162():
    deopt 620 [];
  D204():
    deopt 765 [texfile];
  D206():
    deopt 771 [];
  L51(c70):
    c74 = `as.logical`(c70);
    if c74 then L310() else L52(c74);
  L92():
    goto L96();
  L96():
    do_cleanup1 = ldf do_cleanup;
    check L470() else D174();
  L305():
    dx10 = getTryDispatchBuiltinValue(dr10);
    goto L302(dx10);
  L306():
    file_test = ldf file_test;
    check L307() else D80();
  L448():
    goto L88(r311);
  L450():
    p93 = prom<V +>{
      msg10 = ld msg;
      msg11 = force? msg10;
      checkMissing(msg11);
      return msg11;
    };
    p95 = prom<V +>{
      paste29 = ldf paste;
      p94 = prom<V +>{
        lines10 = ld lines;
        lines11 = force? lines10;
        checkMissing(lines11);
        return lines11;
      };
      r314 = dyn paste29[, collapse](p94, "\n");
      return r314;
    };
    r316 = dyn paste28[, , , sep](p93, "LaTeX errors:", p95, "\n");
    check L451() else D163();
  L458():
    _get_BibTeX_errors_from_blg_file1 = ldf `.get_BibTeX_errors_from_blg_file`;
    check L459() else D168();
  L515():
    texfile1 = force? texfile;
    checkMissing(texfile1);
    c125 = ldf c in base;
    r374 = dyn c125("-interaction=nonstopmode", texfile1);
    check L516() else D205();
  L517():
    p113 = prom<V +>{
      latex2 = ld latex;
      latex3 = force? latex2;
      checkMissing(latex3);
      return latex3;
    };
    p114 = prom<V +>{
      ltxargs = ld ltxargs;
      ltxargs1 = force? ltxargs;
      checkMissing(ltxargs1);
      return ltxargs1;
    };
    r377 = dyn sys2(p113, p114);
    check L518() else D207();
  D80():
    deopt 336 [c68];
  D163():
    deopt 626 [r316];
  D168():
    deopt 644 [];
  D174():
    deopt 668 [];
  D205():
    deopt 768 [r374];
  D207():
    deopt 774 [r377];
  L52(c76):
    c83 = `as.logical`(c76);
    if c83 then L317() else L54();
  L307():
    p35 = prom<V +>{
      log = ld log;
      log1 = force? log;
      checkMissing(log1);
      return log1;
    };
    r154 = dyn file_test("-f", p35);
    check L308() else D81();
  L310():
    sym21 = ldf any;
    base21 = ldf any in base;
    guard21 = `==`.4(sym21, base21);
    if guard21 then L311() else L312();
  L451():
    st msg = r316;
    goto L90(r316);
  L459():
    p98 = prom<V +>{
      logfile6 = ld logfile;
      logfile7 = force? logfile6;
      checkMissing(logfile7);
      return logfile7;
    };
    r324 = dyn _get_BibTeX_errors_from_blg_file1(p98);
    check L460() else D169();
  L470():
    p102 = prom<V +>{
      clean5 = ld clean;
      clean6 = force? clean5;
      checkMissing(clean6);
      return clean6;
    };
    r336 = dyn do_cleanup1(p102);
    check L471() else D175();
  L516():
    goto L107(r374);
  L518():
    c126 = `as.logical`(r377);
    if c126 then L519() else L108();
  D81():
    deopt 339 [c68, r154];
  D169():
    deopt 646 [r324];
  D175():
    deopt 670 [r336];
  L53(c79, r156):
    c80 = `as.logical`(r156);
    c81 = `&&`(c79, c80);
    goto L52(c81);
  L54():
    goto L55();
  L55():
    character = ldf character;
    check L321() else D87();
  L108():
    goto L112();
  L112():
    sym37 = ldf length;
    base45 = ldf length in base;
    guard37 = `==`.4(sym37, base45);
    if guard37 then L535() else L536();
  L308():
    c71 = `as.logical`(r154);
    c72 = `&&`(c68, c71);
    goto L51(c72);
  L311():
    grepl1 = ldf grepl;
    check L313() else D82();
  L312():
    r155 = dyn base21(<lang grepl("(Rerun to get|biblatex.*\\(re\\)run)", readLines(log, warn=FALSE), useBytes=TRUE)>);
    goto L53(c74, r155);
  L317():
    _system_with_capture2 = ldf `.system_with_capture`;
    check L318() else D85();
  L460():
    st lines = r324;
    sym32 = ldf length;
    base36 = ldf length in base;
    guard32 = `==`.4(sym32, base36);
    if guard32 then L461() else L462();
  L471():
    sym33 = ldf nzchar;
    base37 = ldf nzchar in base;
    guard33 = `==`.4(sym33, base37);
    if guard33 then L472() else L473();
  L519():
    _get_LaTeX_errors_from_log_file2 = ldf `.get_LaTeX_errors_from_log_file`;
    check L520() else D208();
  D82():
    deopt 344 [c74];
  D85():
    deopt 354 [];
  D87():
    deopt 364 [];
  D208():
    deopt 776 [];
  L93(r326):
    c119 = `as.logical`(r326);
    if c119 then L465() else L94();
  L97(r338):
    c120 = `as.logical`(r338);
    if c120 then L476() else L98();
  L113(r401):
    st nmiss = r401;
    s = toForSeq(<int 1, 2, 3, 4, 5, 6, 7, 8, 9, 10>);
    l = length(s);
    i = 0;
    goto L114(i);
  L313():
    p37 = prom<V +>{
      readLines = ldf readLines;
      p36 = prom<V +>{
        log2 = ld log;
        log3 = force? log2;
        checkMissing(log3);
        return log3;
      };
      r158 = dyn readLines[, warn](p36, FALSE);
      return r158;
    };
    r160 = dyn grepl1[, , useBytes]("(Rerun to get|biblatex.*\\(re\\)run)", p37, TRUE);
    check L314() else D83();
  L318():
    p38 = prom<V +>{
      texi2dvi19 = ld texi2dvi;
      texi2dvi20 = force? texi2dvi19;
      checkMissing(texi2dvi20);
      return texi2dvi20;
    };
    p40 = prom<V +>{
      sym22 = ldf c;
      base22 = ldf c in base;
      guard22 = `==`.4(sym22, base22);
      if guard22 then L1() else L2();
    L0(r164):
      return r164;
    L1():
      opt_pdf2 = ld opt_pdf;
      opt_pdf3 = force? opt_pdf2;
      checkMissing(opt_pdf3);
      opt_quiet2 = ld opt_quiet;
      opt_quiet3 = force? opt_quiet2;
      checkMissing(opt_quiet3);
      opt_extra2 = ld opt_extra;
      opt_extra3 = force? opt_extra2;
      checkMissing(opt_extra3);
      shQuote1 = ldf shQuote;
      p39 = prom<V +>{
        file5 = ld file;
        file6 = force? file5;
        checkMissing(file6);
        return file6;
      };
      r166 = dyn shQuote1(p39);
      c84 = ldf c in base;
      r167 = dyn c84(opt_pdf3, opt_quiet3, opt_extra3, r166);
      goto L0(r167);
    L2():
      r163 = dyn base22(<sym opt_pdf>, <sym opt_quiet>, <sym opt_extra>, <lang shQuote(file)>);
      goto L0(r163);
    };
    p41 = prom<V +>{
      env4 = ld env0;
      env5 = force? env4;
      checkMissing(env5);
      return env5;
    };
    r170 = dyn _system_with_capture2[, , env](p38, p40, p41);
    check L319() else D86();
  L321():
    r172 = dyn character();
    check L322() else D88();
  L461():
    lines12 = ld lines;
    check L463() else D170();
  L462():
    r325 = dyn base36(<sym lines>);
    goto L93(r325);
  L472():
    msg14 = ld msg;
    check L474() else D176();
  L473():
    r337 = dyn base37(<sym msg>);
    goto L97(r337);
  L520():
    p116 = prom<V +>{
      paste35 = ldf paste0;
      p115 = prom<V +>{
        base42 = ld base;
        base43 = force? base42;
        checkMissing(base43);
        return base43;
      };
      r379 = dyn paste35(p115, ".log");
      return r379;
    };
    r381 = dyn _get_LaTeX_errors_from_log_file2(p116);
    check L521() else D209();
  L535():
    grep2 = ldf grep;
    check L537() else D218();
  L536():
    r400 = dyn base45(<lang grep("Warning:.*Citation.*undefined", readLines(paste0(base, ".log")), useBytes=TRUE)>);
    goto L113(r400);
  D83():
    deopt 349 [c74, r160];
  D86():
    deopt 359 [r170];
  D88():
    deopt 365 [r172];
  D170():
    deopt 650 [lines12];
  D176():
    deopt 673 [msg14];
  D209():
    deopt 778 [r381];
  D218():
    deopt 806 [];
  L94():
    goto L95(NULL);
  L95(r333):
    goto L96();
  L98():
    goto L99(NULL);
  L99(r347):
    goto L79();
  L114(i1):
    i2 = `+`.1(i1, 1);
    c128 = `<`.1(l, i2);
    if c128 then L540() else L133();
  L314():
    any = ldf any in base;
    r161 = dyn any(r160);
    check L315() else D84();
  L319():
    st out = r170;
    goto L55();
  L322():
    st errors = r172;
    paste8 = ldf paste0;
    check L323() else D89();
  L463():
    lines13 = force? lines12;
    checkMissing(lines13);
    length7 = ldf length in base;
    r327 = dyn length7(lines13);
    check L464() else D171();
  L465():
    paste31 = ldf paste;
    check L466() else D172();
  L474():
    msg15 = force? msg14;
    checkMissing(msg15);
    nzchar6 = ldf nzchar in base;
    r339 = dyn nzchar6(msg15);
    check L475() else D177();
  L476():
    paste33 = ldf paste;
    check L477() else D178();
  L521():
    st lines = r381;
    sym36 = ldf length;
    base44 = ldf length in base;
    guard36 = `==`.4(sym36, base44);
    if guard36 then L522() else L523();
  L537():
    p126 = prom<V +>{
      readLines1 = ldf readLines;
      p125 = prom<V +>{
        paste39 = ldf paste0;
        p124 = prom<V +>{
          base46 = ld base;
          base47 = force? base46;
          checkMissing(base47);
          return base47;
        };
        r403 = dyn paste39(p124, ".log");
        return r403;
      };
      r405 = dyn readLines1(p125);
      return r405;
    };
    r407 = dyn grep2[, , useBytes]("Warning:.*Citation.*undefined", p126, TRUE);
    check L538() else D219();
  D84():
    deopt 351 [c74, r161];
  D89():
    deopt 368 [];
  D171():
    deopt 653 [r327];
  D172():
    deopt 655 [];
  D177():
    deopt 676 [r339];
  D178():
    deopt 678 [];
  D219():
    deopt 811 [r407];
  L109(r383):
    c127 = `as.logical`(r383);
    if c127 then L526() else L110();
  L131():
    do_cleanup2 = ldf do_cleanup;
    check L597() else D254();
  L133():
    x = `[[`(s, i2, NULL, TRUE);
    st iter = x;
    nmiss = ld nmiss;
    check L541() else D221();
  L315():
    goto L53(c74, r161);
  L323():
    p43 = prom<V +>{
      file_path_sans_ext1 = ldf file_path_sans_ext;
      p42 = prom<V +>{
        file7 = ld file;
        file8 = force? file7;
        checkMissing(file8);
        return file8;
      };
      r174 = dyn file_path_sans_ext1(p42);
      return r174;
    };
    r176 = dyn paste8(p43, ".log");
    check L324() else D90();
  L464():
    goto L93(r327);
  L466():
    p99 = prom<V +>{
      msg12 = ld msg;
      msg13 = force? msg12;
      checkMissing(msg13);
      return msg13;
    };
    p101 = prom<V +>{
      paste32 = ldf paste;
      p100 = prom<V +>{
        lines14 = ld lines;
        lines15 = force? lines14;
        checkMissing(lines15);
        return lines15;
      };
      r330 = dyn paste32[, collapse](p100, "\n");
      return r330;
    };
    r332 = dyn paste31[, , , sep](p99, "BibTeX errors:", p101, "\n");
    check L467() else D173();
  L475():
    goto L97(r339);
  L477():
    p104 = prom<V +>{
      gettextf1 = ldf gettextf;
      p103 = prom<V +>{
        file17 = ld file;
        file18 = force? file17;
        checkMissing(file18);
        return file18;
      };
      r341 = dyn gettextf1("running 'texi2dvi' on '%s' failed", p103);
      return r341;
    };
    p105 = prom<V +>{
      msg16 = ld msg;
      msg17 = force? msg16;
      checkMissing(msg17);
      return msg17;
    };
    r344 = dyn paste33[, , , sep](p104, p105, "", "\n");
    check L478() else D179();
  L522():
    lines16 = ld lines;
    check L524() else D210();
  L523():
    r382 = dyn base44(<sym lines>);
    goto L109(r382);
  L538():
    length9 = ldf length in base;
    r408 = dyn length9(r407);
    check L539() else D220();
  L540():
    goto L131();
  D90():
    deopt 371 [r176];
  D173():
    deopt 661 [r332];
  D179():
    deopt 684 [r344];
  D210():
    deopt 782 [lines16];
  D220():
    deopt 813 [r408];
  D221():
    deopt 817 [i2, nmiss];
  D254():
    deopt 926 [];
  L110():
    character1 = ldf character;
    check L530() else D214();
  L111(r389):
    st errors = r389;
    stop3 = ldf stop;
    check L532() else D216();
  L324():
    st log = r176;
    file_test1 = ldf file_test;
    check L325() else D91();
  L467():
    st msg = r332;
    goto L95(r332);
  L478():
    st msg = r344;
    stop1 = ldf stop;
    check L479() else D180();
  L524():
    lines17 = force? lines16;
    checkMissing(lines17);
    length8 = ldf length in base;
    r384 = dyn length8(lines17);
    check L525() else D211();
  L526():
    paste36 = ldf paste0;
    check L527() else D212();
  L539():
    goto L113(r408);
  L541():
    nmiss1 = force? nmiss;
    checkMissing(nmiss1);
    c129 = `as.logical`(nmiss1);
    if c129 then L542() else L115();
  L597():
    p152 = prom<V +>{
      clean7 = ld clean;
      clean8 = force? clean7;
      checkMissing(clean8);
      return clean8;
    };
    r472 = dyn do_cleanup2(p152);
    check L598() else D255();
  D91():
    deopt 374 [];
  D180():
    deopt 687 [];
  D211():
    deopt 785 [r384];
  D212():
    deopt 787 [];
  D214():
    deopt 792 [];
  D216():
    deopt 796 [];
  D255():
    deopt 928 [r472];
  L115():
    goto L116(i2);
  L116(i7):
    nmiss2 = ld nmiss;
    check L546() else D224();
  L325():
    p44 = prom<V +>{
      log4 = ld log;
      log5 = force? log4;
      checkMissing(log5);
      return log5;
    };
    r178 = dyn file_test1("-f", p44);
    check L326() else D92();
  L479():
    p106 = prom<V +>{
      msg18 = ld msg;
      msg19 = force? msg18;
      checkMissing(msg19);
      return msg19;
    };
    r346 = dyn stop1[, `call.`, domain](p106, FALSE, NA_LGL);
    check L480() else D181();
  L525():
    goto L109(r384);
  L527():
    p118 = prom<V +>{
      paste37 = ldf paste;
      p117 = prom<V +>{
        lines18 = ld lines;
        lines19 = force? lines18;
        checkMissing(lines19);
        return lines19;
      };
      r386 = dyn paste37[, collapse](p117, "\n");
      return r386;
    };
    r388 = dyn paste36("LaTeX errors:\n", p118);
    check L528() else D213();
  L530():
    r390 = dyn character1();
    check L531() else D215();
  L532():
    p123 = prom<V +>{
      paste38 = ldf paste;
      p121 = prom<V +>{
        gettextf2 = ldf gettextf;
        p119 = prom<V +>{
          latex4 = ld latex;
          latex5 = force? latex4;
          checkMissing(latex5);
          return latex5;
        };
        p120 = prom<V +>{
          file23 = ld file;
          file24 = force? file23;
          checkMissing(file24);
          return file24;
        };
        r393 = dyn gettextf2("unable to run %s on '%s'", p119, p120);
        return r393;
      };
      p122 = prom<V +>{
        errors4 = ld errors;
        errors5 = force? errors4;
        checkMissing(errors5);
        return errors5;
      };
      r396 = dyn paste38[, , sep](p121, p122, "\n");
      return r396;
    };
    r398 = dyn stop3[, domain](p123, NA_LGL);
    check L533() else D217();
  L542():
    sys3 = ldf sys2;
    check L543() else D222();
  L598():
    goto L79();
  D92():
    deopt 377 [r178];
  D181():
    deopt 693 [r346];
  D213():
    deopt 790 [r388];
  D215():
    deopt 793 [r390];
  D217():
    deopt 800 [r398];
  D222():
    deopt 820 [i2];
  D224():
    deopt 826 [i7, nmiss2];
  L326():
    c85 = `as.logical`(r178);
    if c85 then L327() else L56();
  L480():
    goto L99(r346);
  L528():
    goto L111(r388);
  L531():
    goto L111(r390);
  L533():
    goto L112();
  L543():
    p127 = prom<V +>{
      bibtex = ld bibtex;
      bibtex1 = force? bibtex;
      checkMissing(bibtex1);
      return bibtex1;
    };
    p129 = prom<V +>{
      shQuote7 = ldf shQuote;
      p128 = prom<V +>{
        base48 = ld base;
        base49 = force? base48;
        checkMissing(base49);
        return base49;
      };
      r411 = dyn shQuote7(p128);
      return r411;
    };
    r413 = dyn sys3(p127, p129);
    check L544() else D223();
  L546():
    nmiss3 = force? nmiss2;
    checkMissing(nmiss3);
    st nmiss_prev = nmiss3;
    index5 = ld index;
    check L547() else D225();
  D223():
    deopt 823 [i2, r413];
  D225():
    deopt 829 [i7, index5];
  L56():
    goto L60();
  L60():
    paste11 = ldf paste0;
    check L339() else D99();
  L327():
    _get_LaTeX_errors_from_log_file = ldf `.get_LaTeX_errors_from_log_file`;
    check L328() else D93();
  L544():
    goto L116(i2);
  L547():
    index6 = force? index5;
    checkMissing(index6);
    c130 = `as.logical`(index6);
    if c130 then L548() else L117(i7, c130);
  D93():
    deopt 379 [];
  D99():
    deopt 400 [];
  L117(i9, c132):
    c136 = `as.logical`(c132);
    if c136 then L552() else L118();
  L328():
    p45 = prom<V +>{
      log6 = ld log;
      log7 = force? log6;
      checkMissing(log7);
      return log7;
    };
    r180 = dyn _get_LaTeX_errors_from_log_file(p45);
    check L329() else D94();
  L339():
    p49 = prom<V +>{
      file_path_sans_ext2 = ldf file_path_sans_ext;
      p48 = prom<V +>{
        file9 = ld file;
        file10 = force? file9;
        checkMissing(file10);
        return file10;
      };
      r191 = dyn file_path_sans_ext2(p48);
      return r191;
    };
    r193 = dyn paste11(p49, ".blg");
    check L340() else D100();
  L548():
    file_exists = ldf `file.exists`;
    check L549() else D226();
  D94():
    deopt 381 [r180];
  D100():
    deopt 403 [r193];
  D226():
    deopt 832 [i7, c130];
  L118():
    goto L121(i9);
  L121(i16):
    sys5 = ldf sys2;
    check L560() else D232();
  L329():
    st lines = r180;
    sym23 = ldf length;
    base23 = ldf length in base;
    guard23 = `==`.4(sym23, base23);
    if guard23 then L330() else L331();
  L340():
    st log = r193;
    file_test2 = ldf file_test;
    check L341() else D101();
  L549():
    p130 = prom<V +>{
      idxfile = ld idxfile;
      idxfile1 = force? idxfile;
      checkMissing(idxfile1);
      return idxfile1;
    };
    r416 = dyn file_exists(p130);
    check L550() else D227();
  L552():
    sys4 = ldf sys2;
    check L553() else D228();
  D101():
    deopt 406 [];
  D227():
    deopt 834 [i7, c130, r416];
  D228():
    deopt 837 [i9];
  D232():
    deopt 852 [i16];
  L57(r182):
    c86 = `as.logical`(r182);
    if c86 then L334() else L58();
  L330():
    lines = ld lines;
    check L332() else D95();
  L331():
    r181 = dyn base23(<sym lines>);
    goto L57(r181);
  L341():
    p50 = prom<V +>{
      log8 = ld log;
      log9 = force? log8;
      checkMissing(log9);
      return log9;
    };
    r195 = dyn file_test2("-f", p50);
    check L342() else D102();
  L550():
    c133 = `as.logical`(r416);
    c134 = `&&`(c130, c133);
    goto L117(i7, c134);
  L553():
    p131 = prom<V +>{
      makeindex = ld makeindex;
      makeindex1 = force? makeindex;
      checkMissing(makeindex1);
      return makeindex1;
    };
    p133 = prom<V +>{
      shQuote8 = ldf shQuote;
      p132 = prom<V +>{
        idxfile2 = ld idxfile;
        idxfile3 = force? idxfile2;
        checkMissing(idxfile3);
        return idxfile3;
      };
      r419 = dyn shQuote8(p132);
      return r419;
    };
    r421 = dyn sys4(p131, p133);
    check L554() else D229();
  L560():
    p137 = prom<V +>{
      latex6 = ld latex;
      latex7 = force? latex6;
      checkMissing(latex7);
      return latex7;
    };
    p138 = prom<V +>{
      ltxargs2 = ld ltxargs;
      ltxargs3 = force? ltxargs2;
      checkMissing(ltxargs3);
      return ltxargs3;
    };
    r431 = dyn sys5(p137, p138);
    check L561() else D233();
  D95():
    deopt 385 [lines];
  D102():
    deopt 409 [r195];
  D229():
    deopt 840 [i9, r421];
  D233():
    deopt 855 [i16, r431];
  L58():
    goto L59(NULL);
  L59(r188):
    goto L60();
  L332():
    lines1 = force? lines;
    checkMissing(lines1);
    length1 = ldf length in base;
    r183 = dyn length1(lines1);
    check L333() else D96();
  L334():
    paste9 = ldf paste0;
    check L335() else D97();
  L342():
    c87 = `as.logical`(r195);
    if c87 then L343() else L61();
  L554():
    c137 = `as.logical`(r421);
    if c137 then L555() else L119();
  L561():
    c138 = `as.logical`(r431);
    if c138 then L562() else L122();
  D96():
    deopt 388 [r183];
  D97():
    deopt 390 [];
  L61():
    goto L65();
  L65():
    st msg = "";
    out8 = ld out;
    check L355() else D109();
  L119():
    goto L120(i9, NULL);
  L120(i15, r427):
    goto L121(i15);
  L122():
    goto L126(i16);
  L126(i25):
    readLines2 = ldf readLines;
    check L578() else D244();
  L333():
    goto L57(r183);
  L335():
    p47 = prom<V +>{
      paste10 = ldf paste;
      p46 = prom<V +>{
        lines2 = ld lines;
        lines3 = force? lines2;
        checkMissing(lines3);
        return lines3;
      };
      r185 = dyn paste10[, collapse](p46, "\n");
      return r185;
    };
    r187 = dyn paste9("LaTeX errors:\n", p47);
    check L336() else D98();
  L343():
    _get_BibTeX_errors_from_blg_file = ldf `.get_BibTeX_errors_from_blg_file`;
    check L344() else D103();
  L555():
    stop4 = ldf stop;
    check L556() else D230();
  L562():
    _get_LaTeX_errors_from_log_file3 = ldf `.get_LaTeX_errors_from_log_file`;
    check L563() else D234();
  D98():
    deopt 393 [r187];
  D103():
    deopt 411 [];
  D109():
    deopt 434 [out8];
  D230():
    deopt 842 [i9];
  D234():
    deopt 857 [i16];
  D244():
    deopt 885 [i25];
  L336():
    st errors = r187;
    goto L59(r187);
  L344():
    p51 = prom<V +>{
      log10 = ld log;
      log11 = force? log10;
      checkMissing(log11);
      return log11;
    };
    r197 = dyn _get_BibTeX_errors_from_blg_file(p51);
    check L345() else D104();
  L355():
    out9 = force? out8;
    checkMissing(out9);
    c89 = `is.object`(out9);
    if c89 then L357() else L358(out9);
  L556():
    p136 = prom<V +>{
      gettextf3 = ldf gettextf;
      p134 = prom<V +>{
        makeindex2 = ld makeindex;
        makeindex3 = force? makeindex2;
        checkMissing(makeindex3);
        return makeindex3;
      };
      p135 = prom<V +>{
        idxfile4 = ld idxfile;
        idxfile5 = force? idxfile4;
        checkMissing(idxfile5);
        return idxfile5;
      };
      r424 = dyn gettextf3("unable to run '%s' on '%s'", p134, p135);
      return r424;
    };
    r426 = dyn stop4[, domain](p136, NA_LGL);
    check L557() else D231();
  L563():
    p140 = prom<V +>{
      paste40 = ldf paste0;
      p139 = prom<V +>{
        base50 = ld base;
        base51 = force? base50;
        checkMissing(base51);
        return base51;
      };
      r433 = dyn paste40(p139, ".log");
      return r433;
    };
    r435 = dyn _get_LaTeX_errors_from_log_file3(p140);
    check L564() else D235();
  L578():
    p149 = prom<V +>{
      paste44 = ldf paste0;
      p148 = prom<V +>{
        base53 = ld base;
        base54 = force? base53;
        checkMissing(base54);
        return base54;
      };
      r455 = dyn paste44(p148, ".log");
      return r455;
    };
    r457 = dyn readLines2(p149);
    check L579() else D245();
  D104():
    deopt 413 [r197];
  D231():
    deopt 846 [i9, r426];
  D235():
    deopt 859 [i16, r435];
  D245():
    deopt 887 [i25, r457];
  L345():
    st lines = r197;
    sym24 = ldf length;
    base24 = ldf length in base;
    guard24 = `==`.4(sym24, base24);
    if guard24 then L346() else L347();
  L356(dx13):
    c90 = `as.logical`(dx13);
    if c90 then L360() else L66();
  L357():
    dr12 = tryDispatchBuiltin.1("$", out9);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L359() else L358(dr12);
  L358(out11):
    r207 = `$`(out11, <sym status>);
    goto L356(r207);
  L557():
    goto L120(i9, r426);
  L564():
    st lines = r435;
    sym38 = ldf length;
    base52 = ldf length in base;
    guard38 = `==`.4(sym38, base52);
    if guard38 then L565() else L566();
  L579():
    st Log = r457;
    sym39 = ldf length;
    base55 = ldf length in base;
    guard39 = `==`.4(sym39, base55);
    if guard39 then L580() else L581();
  L62(r199):
    c88 = `as.logical`(r199);
    if c88 then L350() else L63();
  L66():
    goto L74();
  L74():
    do_cleanup = ldf do_cleanup;
    check L389() else D123();
  L123(i21, r437):
    c139 = `as.logical`(r437);
    if c139 then L569() else L124();
  L127(i28, r459):
    st nmiss = r459;
    nmiss4 = ld nmiss;
    check L585() else D249();
  L346():
    lines4 = ld lines;
    check L348() else D105();
  L347():
    r198 = dyn base24(<sym lines>);
    goto L62(r198);
  L359():
    dx12 = getTryDispatchBuiltinValue(dr12);
    goto L356(dx12);
  L360():
    gettextf = ldf gettextf;
    check L361() else D110();
  L565():
    lines20 = ld lines;
    check L567() else D236();
  L566():
    r436 = dyn base52(<sym lines>);
    goto L123(i16, r436);
  L580():
    grep3 = ldf grep;
    check L582() else D246();
  L581():
    r458 = dyn base55(<lang grep("Warning:.*Citation.*undefined", Log, useBytes=TRUE)>);
    goto L127(i25, r458);
  D105():
    deopt 417 [lines4];
  D110():
    deopt 438 [];
  D123():
    deopt 492 [];
  D236():
    deopt 863 [i16, lines20];
  D246():
    deopt 892 [i25];
  D249():
    deopt 901 [i28, nmiss4];
  L63():
    goto L64(NULL);
  L64(r205):
    goto L65();
  L124():
    character2 = ldf character;
    check L573() else D240();
  L125(i24, r443):
    st errors = r443;
    stop5 = ldf stop;
    check L575() else D242();
  L348():
    lines5 = force? lines4;
    checkMissing(lines5);
    length2 = ldf length in base;
    r200 = dyn length2(lines5);
    check L349() else D106();
  L350():
    paste12 = ldf paste0;
    check L351() else D107();
  L361():
    p54 = prom<V +>{
      file11 = ld file;
      file12 = force? file11;
      checkMissing(file12);
      return file12;
    };
    r209 = dyn gettextf("Running 'texi2dvi' on '%s' failed.", p54);
    check L362() else D111();
  L389():
    p63 = prom<V +>{
      clean3 = ld clean;
      clean4 = force? clean3;
      checkMissing(clean4);
      return clean4;
    };
    r237 = dyn do_cleanup(p63);
    check L390() else D124();
  L567():
    lines21 = force? lines20;
    checkMissing(lines21);
    length10 = ldf length in base;
    r438 = dyn length10(lines21);
    check L568() else D237();
  L569():
    paste41 = ldf paste0;
    check L570() else D238();
  L582():
    p150 = prom<V +>{
      Log = ld Log;
      Log1 = force? Log;
      checkMissing(Log1);
      return Log1;
    };
    r461 = dyn grep3[, , useBytes]("Warning:.*Citation.*undefined", p150, TRUE);
    check L583() else D247();
  L585():
    nmiss5 = force? nmiss4;
    checkMissing(nmiss5);
    nmiss_prev = ld nmiss_prev;
    check L586() else D250();
  D106():
    deopt 420 [r200];
  D107():
    deopt 422 [];
  D111():
    deopt 441 [r209];
  D124():
    deopt 494 [r237];
  D237():
    deopt 866 [i16, r438];
  D238():
    deopt 868 [i21];
  D240():
    deopt 873 [i21];
  D242():
    deopt 877 [i24];
  D247():
    deopt 897 [i25, r461];
  D250():
    deopt 902 [i28, nmiss5, nmiss_prev];
  L349():
    goto L62(r200);
  L351():
    p53 = prom<V +>{
      paste13 = ldf paste;
      p52 = prom<V +>{
        lines6 = ld lines;
        lines7 = force? lines6;
        checkMissing(lines7);
        return lines7;
      };
      r202 = dyn paste13[, collapse](p52, "\n");
      return r202;
    };
    r204 = dyn paste12("BibTeX errors:\n", p53);
    check L352() else D108();
  L362():
    st msg = r209;
    sym25 = ldf length;
    base25 = ldf length in base;
    guard25 = `==`.4(sym25, base25);
    if guard25 then L363() else L364();
  L390():
    sym27 = ldf nzchar;
    base27 = ldf nzchar in base;
    guard27 = `==`.4(sym27, base27);
    if guard27 then L391() else L392();
  L568():
    goto L123(i16, r438);
  L570():
    p142 = prom<V +>{
      paste42 = ldf paste;
      p141 = prom<V +>{
        lines22 = ld lines;
        lines23 = force? lines22;
        checkMissing(lines23);
        return lines23;
      };
      r440 = dyn paste42[, collapse](p141, "\n");
      return r440;
    };
    r442 = dyn paste41("LaTeX errors:\n", p142);
    check L571() else D239();
  L573():
    r444 = dyn character2();
    check L574() else D241();
  L575():
    p147 = prom<V +>{
      paste43 = ldf paste;
      p145 = prom<V +>{
        gettextf4 = ldf gettextf;
        p143 = prom<V +>{
          latex8 = ld latex;
          latex9 = force? latex8;
          checkMissing(latex9);
          return latex9;
        };
        p144 = prom<V +>{
          file25 = ld file;
          file26 = force? file25;
          checkMissing(file26);
          return file26;
        };
        r447 = dyn gettextf4("unable to run %s on '%s'", p143, p144);
        return r447;
      };
      p146 = prom<V +>{
        errors6 = ld errors;
        errors7 = force? errors6;
        checkMissing(errors7);
        return errors7;
      };
      r450 = dyn paste43[, , sep](p145, p146, "\n");
      return r450;
    };
    r452 = dyn stop5[, domain](p147, NA_LGL);
    check L576() else D243();
  L583():
    length11 = ldf length in base;
    r462 = dyn length11(r461);
    check L584() else D248();
  L586():
    nmiss_prev1 = force? nmiss_prev;
    checkMissing(nmiss_prev1);
    r463 = `==`(nmiss5, nmiss_prev1);
    c140 = `as.logical`(r463);
    if c140 then L587() else L128(i28, c140);
  D108():
    deopt 425 [r204];
  D239():
    deopt 871 [i21, r442];
  D241():
    deopt 874 [i21, r444];
  D243():
    deopt 881 [i24, r452];
  D248():
    deopt 899 [i25, r462];
  L67(r211):
    c91 = `as.logical`(r211);
    if c91 then L367() else L68();
  L75(r239):
    c97 = `as.logical`(r239);
    if c97 then L395() else L76();
  L128(i30, c142):
    c149 = `as.logical`(c142);
    if c149 then L594() else L130();
  L352():
    st errors = r204;
    goto L64(r204);
  L363():
    errors = ld errors;
    check L365() else D112();
  L364():
    r210 = dyn base25(<sym errors>);
    goto L67(r210);
  L391():
    msg6 = ld msg;
    check L393() else D125();
  L392():
    r238 = dyn base27(<sym msg>);
    goto L75(r238);
  L571():
    goto L125(i21, r442);
  L574():
    goto L125(i21, r444);
  L576():
    goto L126(i24);
  L584():
    goto L127(i25, r462);
  L587():
    sym40 = ldf any;
    base56 = ldf any in base;
    guard40 = `==`.4(sym40, base56);
    if guard40 then L588() else L589();
  D112():
    deopt 445 [errors];
  D125():
    deopt 497 [msg6];
  L68():
    sym26 = ldf length;
    base26 = ldf length in base;
    guard26 = `==`.4(sym26, base26);
    if guard26 then L371() else L372();
  L69():
    quiet3 = ld quiet;
    check L383() else D120();
  L76():
    quiet5 = ld quiet;
    check L399() else D129();
  L77(r243):
    goto L79();
  L129(i33, c145, r465):
    r469 = `!`(r465);
    c146 = `as.logical`(r469);
    c147 = `&&`(c145, c146);
    goto L128(i33, c147);
  L130():
    goto L114(i30);
  L365():
    errors1 = force? errors;
    checkMissing(errors1);
    length3 = ldf length in base;
    r212 = dyn length3(errors1);
    check L366() else D113();
  L367():
    paste14 = ldf paste;
    check L368() else D114();
  L393():
    msg7 = force? msg6;
    checkMissing(msg7);
    nzchar4 = ldf nzchar in base;
    r240 = dyn nzchar4(msg7);
    check L394() else D126();
  L395():
    stop = ldf stop;
    check L396() else D127();
  L588():
    grepl2 = ldf grepl;
    check L590() else D251();
  L589():
    r464 = dyn base56(<lang grepl("(Rerun to get|biblatex.*\\(re\\)run)", Log, useBytes=TRUE)>);
    goto L129(i28, c140, r464);
  L594():
    goto L131();
  D113():
    deopt 448 [r212];
  D114():
    deopt 450 [];
  D120():
    deopt 475 [quiet3];
  D126():
    deopt 500 [r240];
  D127():
    deopt 502 [];
  D129():
    deopt 507 [quiet5];
  D251():
    deopt 908 [i28, c140];
  L70(r218):
    c93 = `as.logical`(r218);
    if c93 then L379() else L71();
  L366():
    goto L67(r212);
  L368():
    p55 = prom<V +>{
      msg = ld msg;
      msg1 = force? msg;
      checkMissing(msg1);
      return msg1;
    };
    p56 = prom<V +>{
      errors2 = ld errors;
      errors3 = force? errors2;
      checkMissing(errors3);
      return errors3;
    };
    r215 = dyn paste14[, , sep](p55, p56, "\n");
    check L369() else D115();
  L371():
    out12 = ld out;
    check L373() else D116();
  L372():
    r217 = dyn base26(<lang `$`(out, stderr)>);
    goto L70(r217);
  L383():
    quiet4 = force? quiet3;
    checkMissing(quiet4);
    r227 = `!`(quiet4);
    c95 = `as.logical`(r227);
    if c95 then L384() else L72();
  L394():
    goto L75(r240);
  L396():
    p64 = prom<V +>{
      msg8 = ld msg;
      msg9 = force? msg8;
      checkMissing(msg9);
      return msg9;
    };
    r242 = dyn stop[, domain](p64, NA_LGL);
    check L397() else D128();
  L399():
    quiet6 = force? quiet5;
    checkMissing(quiet6);
    r244 = `!`(quiet6);
    c98 = `as.logical`(r244);
    if c98 then L400() else L78();
  L590():
    p151 = prom<V +>{
      Log2 = ld Log;
      Log3 = force? Log2;
      checkMissing(Log3);
      return Log3;
    };
    r467 = dyn grepl2[, , useBytes]("(Rerun to get|biblatex.*\\(re\\)run)", p151, TRUE);
    check L591() else D252();
  D115():
    deopt 455 [r215];
  D116():
    deopt 459 [out12];
  D128():
    deopt 506 [r242];
  D252():
    deopt 913 [i28, c140, r467];
  L71():
    goto L69();
  L72():
    goto L73(NULL);
  L73(r234):
    goto L74();
  L78():
    goto L77(NULL);
  L369():
    st msg = r215;
    goto L69();
  L373():
    out13 = force? out12;
    checkMissing(out13);
    c92 = `is.object`(out13);
    if c92 then L375() else L376(out13);
  L379():
    paste15 = ldf paste;
    check L380() else D118();
  L384():
    paste17 = ldf paste;
    check L385() else D121();
  L397():
    goto L77(r242);
  L400():
    message = ldf message;
    check L401() else D130();
  L591():
    any1 = ldf any in base;
    r468 = dyn any1(r467);
    check L592() else D253();
  D118():
    deopt 465 [];
  D121():
    deopt 479 [];
  D130():
    deopt 511 [];
  D253():
    deopt 915 [i28, c140, r468];
  L374(dx15):
    length4 = ldf length in base;
    r220 = dyn length4(dx15);
    check L378() else D117();
  L375():
    dr14 = tryDispatchBuiltin.1("$", out13);
    dc7 = getTryDispatchBuiltinDispatched(dr14);
    if dc7 then L377() else L376(dr14);
  L376(out15):
    r219 = `$`(out15, <sym stderr>);
    goto L374(r219);
  L380():
    p57 = prom<V +>{
      msg2 = ld msg;
      msg3 = force? msg2;
      checkMissing(msg3);
      return msg3;
    };
    p59 = prom<V +>{
      paste16 = ldf paste;
      p58 = prom<V +>{
        out16 = ld out;
        out17 = force? out16;
        checkMissing(out17);
        c94 = `is.object`(out17);
        if c94 then L1() else L2(out17);
      L0(dx17):
        return dx17;
      L1():
        dr16 = tryDispatchBuiltin.1("$", out17);
        dc8 = getTryDispatchBuiltinDispatched(dr16);
        if dc8 then L3() else L2(dr16);
      L2(out19):
        r222 = `$`(out19, <sym stderr>);
        goto L0(r222);
      L3():
        dx16 = getTryDispatchBuiltinValue(dr16);
        goto L0(dx16);
      };
      r224 = dyn paste16[, collapse](p58, "\n");
      return r224;
    };
    r226 = dyn paste15[, , , sep](p57, "Messages:", p59, "\n");
    check L381() else D119();
  L385():
    p60 = prom<V +>{
      msg4 = ld msg;
      msg5 = force? msg4;
      checkMissing(msg5);
      return msg5;
    };
    p62 = prom<V +>{
      paste18 = ldf paste;
      p61 = prom<V +>{
        out20 = ld out;
        out21 = force? out20;
        checkMissing(out21);
        c96 = `is.object`(out21);
        if c96 then L1() else L2(out21);
      L0(dx19):
        return dx19;
      L1():
        dr18 = tryDispatchBuiltin.1("$", out21);
        dc9 = getTryDispatchBuiltinDispatched(dr18);
        if dc9 then L3() else L2(dr18);
      L2(out23):
        r229 = `$`(out23, <sym stdout>);
        goto L0(r229);
      L3():
        dx18 = getTryDispatchBuiltinValue(dr18);
        goto L0(dx18);
      };
      r231 = dyn paste18[, collapse](p61, "\n");
      return r231;
    };
    r233 = dyn paste17[, , , sep](p60, "Output:", p62, "\n");
    check L386() else D122();
  L401():
    p69 = prom<V +>{
      paste19 = ldf paste;
      p66 = prom<V +>{
        paste20 = ldf paste;
        p65 = prom<V +>{
          out24 = ld out;
          out25 = force? out24;
          checkMissing(out25);
          c99 = `is.object`(out25);
          if c99 then L1() else L2(out25);
        L0(dx21):
          return dx21;
        L1():
          dr20 = tryDispatchBuiltin.1("$", out25);
          dc10 = getTryDispatchBuiltinDispatched(dr20);
          if dc10 then L3() else L2(dr20);
        L2(out27):
          r245 = `$`(out27, <sym stderr>);
          goto L0(r245);
        L3():
          dx20 = getTryDispatchBuiltinValue(dr20);
          goto L0(dx20);
        };
        r247 = dyn paste20[, collapse](p65, "\n");
        return r247;
      };
      p68 = prom<V +>{
        paste21 = ldf paste;
        p67 = prom<V +>{
          out28 = ld out;
          out29 = force? out28;
          checkMissing(out29);
          c100 = `is.object`(out29);
          if c100 then L1() else L2(out29);
        L0(dx23):
          return dx23;
        L1():
          dr22 = tryDispatchBuiltin.1("$", out29);
          dc11 = getTryDispatchBuiltinDispatched(dr22);
          if dc11 then L3() else L2(dr22);
        L2(out31):
          r249 = `$`(out31, <sym stdout>);
          goto L0(r249);
        L3():
          dx22 = getTryDispatchBuiltinValue(dr22);
          goto L0(dx22);
        };
        r251 = dyn paste21[, collapse](p67, "\n");
        return r251;
      };
      r253 = dyn paste19[, , sep](p66, p68, "\n");
      return r253;
    };
    r255 = dyn message(p69);
    check L402() else D131();
  L592():
    goto L129(i28, c140, r468);
  D117():
    deopt 463 [r220];
  D119():
    deopt 471 [r226];
  D122():
    deopt 485 [r233];
  D131():
    deopt 513 [r255];
  L377():
    dx14 = getTryDispatchBuiltinValue(dr14);
    goto L374(dx14);
  L378():
    goto L70(r220);
  L381():
    st msg = r226;
    goto L69();
  L386():
    st msg = r233;
    goto L73(r233);
  L402():
    goto L77(r255);
  }
}
fun inner2357569541(clean) {
  (reg clean:*) -+> V { var clean:*, reg clean1:*, reg clean2:V, reg c:L, reg paste:cls, reg basename:cls, reg file_path_sans_ext:cls, reg file:*, reg file1:V, reg p:p(V +), reg r1:V, reg p1:p(V +), reg r3:V, reg p2:p(V +), reg pdf:*, reg pdf1:V, reg c1:L, reg p3:p(V +), reg r6:V, reg setdiff:cls, reg list_files:cls, reg r7:V, reg p4:p(V +), reg sym:cls, reg base:cls, reg guard:L, reg r9:V, reg r10:V, reg out_file:*, reg out_file1:V, reg pre_files:*, reg pre_files1:V, reg c2:cls, reg r11:V, reg p5:p(V +), reg r13:V, reg file_remove:cls, reg files:*, reg files1:V, reg p6:p(V +), reg r15:V |
    mkenv;
    st clean = clean;
    clean1 = ld clean;
    check L1() else D0();
  D0():
    deopt 0 [clean1];
  L1():
    clean2 = force? clean1;
    checkMissing(clean2);
    c = `as.logical`(clean2);
    if c then L2() else L0();
  L0():
    invisible.0();
    popenv;
    return NULL;
  L2():
    paste = ldf paste;
    check L3() else D1();
  D1():
    deopt 3 [];
  L3():
    p2 = prom<V +>{
      basename = ldf basename;
      p1 = prom<V +>{
        file_path_sans_ext = ldf file_path_sans_ext;
        p = prom<V +>{
          file = ld file;
          file1 = force? file;
          checkMissing(file1);
          return file1;
        };
        r1 = dyn file_path_sans_ext(p);
        return r1;
      };
      r3 = dyn basename(p1);
      return r3;
    };
    p3 = prom<V +>{
      pdf = ld pdf;
      pdf1 = force? pdf;
      checkMissing(pdf1);
      c1 = `as.logical`(pdf1);
      if c1 then L1() else L0();
    L0():
      return "dvi";
    L1():
      return "pdf";
    };
    r6 = dyn paste[, , sep](p2, p3, ".");
    check L4() else D2();
  D2():
    deopt 8 [r6];
  L4():
    st out_file = r6;
    setdiff = ldf setdiff;
    check L5() else D3();
  D3():
    deopt 11 [];
  L5():
    p4 = prom<V +>{
      list_files = ldf `list.files`;
      r7 = dyn list_files[`all.files`](TRUE);
      return r7;
    };
    p5 = prom<V +>{
      sym = ldf c;
      base = ldf c in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r10):
      return r10;
    L1():
      out_file = ld out_file;
      out_file1 = force? out_file;
      checkMissing(out_file1);
      pre_files = ld pre_files;
      pre_files1 = force? pre_files;
      checkMissing(pre_files1);
      c2 = ldf c in base;
      r11 = dyn c2(".", "..", out_file1, pre_files1);
      goto L0(r11);
    L2():
      r9 = dyn base(".", "..", <sym out_file>, <sym pre_files>);
      goto L0(r9);
    };
    r13 = dyn setdiff(p4, p5);
    check L6() else D4();
  D4():
    deopt 14 [r13];
  L6():
    st files = r13;
    file_remove = ldf `file.remove`;
    check L7() else D5();
  D5():
    deopt 17 [];
  L7():
    p6 = prom<V +>{
      files = ld files;
      files1 = force? files;
      checkMissing(files1);
      return files1;
    };
    r15 = dyn file_remove(p6);
    check L8() else D6();
  D6():
    deopt 19 [r15];
  L8():
    popenv;
    return r15;
  }
}
fun inner1246119658(`...`) {
  (reg ddd:dots) -+> V { var `...`:dots?, reg system2:cls, reg ddd1:dots?, reg r:V |
    mkenv;
    st `...` = ddd;
    system2 = ldf system2;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    ddd1 = ld `...`;
    r = dyn system2[`...`, stdout, stderr](ddd1, FALSE, FALSE);
    check L1() else D1();
  D1():
    deopt 7 [r];
  L1():
    popenv;
    return r;
  }
}