fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner308589897;
    st update_PACKAGES = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner308589897(dir, fields, type, `verbose.level`, latestOnly, addFiles, rds_compress, strict, dryrun) {
  (reg dir:*, reg fields:*, reg type:*, reg verbose_level:*, reg latestOnly:*, reg addFiles:*, reg rds_compress:*, reg strict:*, reg dryrun:*) -+> V { var dir:*, reg dir_isMissing:L, reg dir_orDefault:*, var fields:*, reg fields_isMissing:L, reg fields_orDefault:*, var type:*, reg type_isMissing:L, reg type_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg c:cls, reg r2:V, reg p:p(V +), var `verbose.level`:*, reg verbose_level_isMissing:L, reg verbose_level_orDefault:*, reg sym1:cls, reg base1:cls, reg guard1:L, reg r4:V, reg r5:V, reg dryrun1:*, reg dryrun2:V, reg as_integer:cls, reg r6:V, reg p1:p(V +), var latestOnly:*, reg latestOnly_isMissing:L, reg latestOnly_orDefault:*, var addFiles:*, reg addFiles_isMissing:L, reg addFiles_orDefault:*, var rds_compress:*, reg rds_compress_isMissing:L, reg rds_compress_orDefault:*, var strict:*, reg strict_isMissing:L, reg strict_orDefault:*, var dryrun:*, reg dryrun_isMissing:L, reg dryrun_orDefault:*, reg sym2:cls, reg base2:cls, reg guard2:L, reg r8:V, reg r9:V, reg verbose_level1:*, reg verbose_level2:V, reg c1:L, reg r10:V, reg c2:L, reg sym3:cls, reg base3:cls, reg guard3:L, reg r11:V, reg r12:V, reg verbose_level3:*, reg verbose_level4:V, reg as_integer1:cls, reg r13:V, reg match_arg:cls, reg type1:*, reg type2:V, reg p2:p(V +), reg r16:V, reg stopifnot:cls, reg verbose_level5:*, reg verbose_level6:V, reg r17:V, reg c3:L, reg c5:V, reg verbose_level7:*, reg verbose_level8:V, reg r18:V, reg c6:L, reg c7:V, reg p3:p(V +), reg r20:V, reg file_path:cls, reg dir1:*, reg dir2:V, reg p4:p(V +), reg r22:V, reg type3:*, reg type4:V, reg r23:V, reg c9:L, reg c11:V, reg strict1:*, reg strict2:V, reg c12:L, reg c13:V, reg c15:L, reg warning:cls, reg r24:V, reg file_exists:cls, reg PKGSfile:*, reg PKGSfile1:V, reg p5:p(V +), reg r27:V, reg r28:V, reg c16:L, reg warning1:cls, reg PKGSfile2:*, reg PKGSfile3:V, reg p6:p(V +), reg r30:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r31:V, reg r32:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r33:V, reg r34:V, reg as_data_frame:cls, reg read_dcf:cls, reg PKGSfile4:*, reg PKGSfile5:V, reg p7:p(V +), reg r36:V, reg p8:p(V +), reg r38:V, reg dim:cls, reg r39:V, reg r40:V, reg all:cls, reg r41:V, reg r42:V, reg c17:L, reg warning2:cls, reg r43:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r44:V, reg r45:V, reg retdat:*, reg retdat1:V, reg names:cls, reg r46:V, reg calldown:*, reg calldown1:V, reg r47:V, reg c18:L, reg c20:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r48:V, reg c23:L, reg r49:V, reg fields1:*, reg fields2:V, reg c24:V, reg r50:V, reg c25:L, reg c26:V, reg c28:L, reg c30:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r51:V, reg c33:L, reg r52:V, reg _in_:cls, reg fields3:*, reg fields4:V, reg p9:p(V +), reg okfields:*, reg okfields1:V, reg p10:p(V +), reg r55:V, reg all1:cls, reg r56:V, reg r57:V, reg c34:L, reg c35:V, reg c37:L, reg warning3:cls, reg paste:cls, reg setdiff:cls, reg fields5:*, reg fields6:V, reg p11:p(V +), reg okfields2:*, reg okfields3:V, reg p12:p(V +), reg r60:V, reg p13:p(V +), reg r62:V, reg p14:p(V +), reg r64:V, reg calldown2:*, reg calldown3:V, reg c38:L, reg verbose_level9:*, reg verbose_level10:V, reg r66:V, reg c39:L, reg message:cls, reg r67:V, reg write_PACKAGES:cls, reg dir3:*, reg dir4:V, reg p15:p(V +), reg fields7:*, reg fields8:V, reg p16:p(V +), reg type5:*, reg type6:V, reg p17:p(V +), reg verbose_level11:*, reg verbose_level12:V, reg r72:V, reg p18:p(V +), reg latestOnly1:*, reg latestOnly2:V, reg p19:p(V +), reg addFiles1:*, reg addFiles2:V, reg p20:p(V +), reg rds_compress1:*, reg rds_compress2:V, reg p21:p(V +), reg r77:V, reg file_info:cls, reg PKGSfile6:*, reg PKGSfile7:V, reg p22:p(V +), reg r81:V, reg c40:L, reg r83:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r84:V, reg verbose_level13:*, reg verbose_level14:V, reg r85:V, reg c41:L, reg message1:cls, reg strict3:*, reg strict4:V, reg c42:L, reg p23:p(V +), reg nrow:cls, reg retdat2:*, reg retdat3:V, reg p24:p(V +), reg r88:V, reg p25:p(V +), reg PKGSfile8:*, reg PKGSfile9:V, reg p26:p(V +), reg r91:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r93:V, reg r94:V, reg fields9:*, reg fields10:V, reg c43:V, reg r95:V, reg c44:L, reg retdat4:*, reg retdat5:V, reg c45:L, reg retdat7:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg fields11:*, reg fields12:V, reg __:cls, reg r96:V, reg list_files:cls, reg dir5:*, reg dir6:V, reg p27:p(V +), reg _get_pkg_file_pattern:cls, reg type7:*, reg type8:V, reg p28:p(V +), reg r99:V, reg p29:p(V +), reg r101:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r102:V, reg r103:V, reg pkgfiles:*, reg pkgfiles1:V, reg length:cls, reg r104:V, reg r105:V, reg c46:L, reg stop:cls, reg dir7:*, reg dir8:V, reg p30:p(V +), reg r107:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r109:V, reg r110:V, reg retdat8:*, reg retdat9:V, reg c47:L, reg retdat11:V, reg dr4:V, reg dc2:L, reg dx5:V, reg dx6:V, reg r111:V, reg c48:V, reg c49:L, reg sym12:cls, reg base12:cls, reg guard12:L, reg r112:V, reg r113:V, reg paste1:cls, reg retdat12:*, reg retdat13:V, reg c50:L, reg retdat15:V, reg dr6:V, reg dc3:L, reg dx7:V, reg dx8:V, reg r114:V, reg p31:p(V +), reg retdat16:*, reg retdat17:V, reg c51:L, reg retdat19:V, reg dr8:V, reg dc4:L, reg dx9:V, reg dx10:V, reg r116:V, reg p32:p(V +), reg r118:V, reg gsub:cls, reg _get_pkg_file_pattern1:cls, reg type9:*, reg type10:V, reg p33:p(V +), reg r120:V, reg p34:p(V +), reg basename:cls, reg pkgfiles2:*, reg pkgfiles3:V, reg p35:p(V +), reg r123:V, reg p36:p(V +), reg r125:V, reg match:cls, reg r126:V, reg pkgfiles4:*, reg pkgfiles5:V, reg c52:L, reg pkgfiles7:V, reg dr10:V, reg dc5:L, reg dx11:V, reg dx12:V, reg tbmatches:*, reg tbmatches1:V, reg __1:cls, reg r127:V, reg l:*, reg c53:L, reg dx14:V, reg l2:*, reg dr12:V, reg dc6:L, reg dx16:V, reg dx17:V, reg dx18:V, reg r128:V, reg retdat20:*, reg retdat21:V, reg c54:L, reg retdat23:V, reg dr14:V, reg dc7:L, reg dx20:V, reg dx21:V, reg r129:V, reg l3:*, reg c55:L, reg dx23:V, reg l5:*, reg dr16:V, reg dc8:L, reg dx25:V, reg dx26:V, reg dx27:V, reg r130:V, reg l6:*, reg c56:L, reg r132:L, reg l8:*, reg dr18:V, reg dc9:L, reg dx28:V, reg dx29:V, reg r135:V, reg file_exists1:cls, reg retdat24:*, reg retdat25:V, reg c57:L, reg retdat27:V, reg dr20:V, reg dc10:L, reg dx30:V, reg dx31:V, reg r136:V, reg p37:p(V +), reg r138:V, reg verbose_level15:*, reg verbose_level16:V, reg r139:V, reg c58:L, reg paste2:cls, reg sym13:cls, reg base13:cls, reg guard13:L, reg r140:V, reg r141:V, reg keeprows:*, reg keeprows1:V, reg sum:cls, reg r142:V, reg p38:p(V +), reg nrow1:cls, reg retdat28:*, reg retdat29:V, reg p39:p(V +), reg r145:V, reg p40:p(V +), reg r147:V, reg message2:cls, reg msg:*, reg msg1:V, reg p41:p(V +), reg r149:V, reg retdat30:*, reg retdat31:V, reg c59:L, reg retdat33:V, reg dr22:V, reg dc11:L, reg dx32:V, reg dx33:V, reg keeprows2:*, reg keeprows3:V, reg __2:cls, reg r151:V, reg file_info1:cls, reg retdat34:*, reg retdat35:V, reg c60:L, reg retdat37:V, reg dr24:V, reg dc12:L, reg dx34:V, reg dx35:V, reg r152:V, reg p42:p(V +), reg r154:V, reg c61:L, reg r156:V, reg dr26:V, reg dc13:L, reg dx36:V, reg dx37:V, reg r157:V, reg which:cls, reg tbmtimes:*, reg tbmtimes1:V, reg pmtime:*, reg pmtime1:V, reg r158:V, reg p43:p(V +), reg r160:V, reg sym14:cls, reg base14:cls, reg guard14:L, reg r161:V, reg r162:V, reg toonew:*, reg toonew1:V, reg length1:cls, reg r163:V, reg r164:V, reg c62:L, reg verbose_level17:*, reg verbose_level18:V, reg r165:V, reg c63:L, reg paste3:cls, reg sym15:cls, reg base15:cls, reg guard15:L, reg r166:V, reg r167:V, reg toonew2:*, reg toonew3:V, reg length2:cls, reg r168:V, reg p44:p(V +), reg r170:V, reg message3:cls, reg msg2:*, reg msg3:V, reg p45:p(V +), reg r172:V, reg retdat38:*, reg retdat39:V, reg c64:L, reg retdat41:V, reg dr28:V, reg dc14:L, reg dx38:V, reg dx39:V, reg toonew4:*, reg toonew5:V, reg r174:V, reg __3:cls, reg r175:V, reg strict5:*, reg strict6:V, reg c65:L, reg c67:V, reg NROW:cls, reg retdat42:*, reg retdat43:V, reg p46:p(V +), reg r177:V, reg r178:V, reg c68:L, reg c69:V, reg c71:L, reg verbose_level19:*, reg verbose_level20:V, reg r179:V, reg c72:L, reg paste4:cls, reg r180:V, reg message4:cls, reg msg4:*, reg msg5:V, reg p47:p(V +), reg r182:V, reg md5sum:cls, reg normalizePath:cls, reg retdat44:*, reg retdat45:V, reg c73:L, reg retdat47:V, reg dr30:V, reg dc15:L, reg dx41:V, reg dx42:V, reg r184:V, reg p48:p(V +), reg r186:V, reg p49:p(V +), reg r188:V, reg which1:cls, reg retdat48:*, reg retdat49:V, reg c74:L, reg retdat51:V, reg dr32:V, reg dc16:L, reg dx43:V, reg dx44:V, reg r189:V, reg curMD5sums:*, reg curMD5sums1:V, reg r190:V, reg p50:p(V +), reg r192:V, reg sym16:cls, reg base16:cls, reg guard16:L, reg r193:V, reg r194:V, reg notokinds:*, reg notokinds1:V, reg length3:cls, reg r195:V, reg r196:V, reg c75:L, reg paste5:cls, reg sym17:cls, reg base17:cls, reg guard17:L, reg r197:V, reg r198:V, reg notokinds2:*, reg notokinds3:V, reg length4:cls, reg r199:V, reg p51:p(V +), reg r201:V, reg warning4:cls, reg msg6:*, reg msg7:V, reg p52:p(V +), reg r203:V, reg verbose_level21:*, reg verbose_level22:V, reg r205:V, reg c76:L, reg message5:cls, reg r206:V, reg sym18:cls, reg base18:cls, reg guard18:L, reg r207:V, reg r208:V, reg notokinds4:*, reg notokinds5:V, reg length5:cls, reg r209:V, reg r210:V, reg c77:L, reg retdat52:*, reg retdat53:V, reg c78:L, reg retdat55:V, reg dr34:V, reg dc17:L, reg dx45:V, reg dx46:V, reg notokinds6:*, reg notokinds7:V, reg r211:V, reg __4:cls, reg r212:V, reg dx47:V, reg setdiff1:cls, reg normalizePath1:cls, reg pkgfiles8:*, reg pkgfiles9:V, reg p53:p(V +), reg r214:V, reg p54:p(V +), reg normalizePath2:cls, reg retdat56:*, reg retdat57:V, reg c79:L, reg retdat59:V, reg dr36:V, reg dc18:L, reg dx49:V, reg dx50:V, reg r216:V, reg p55:p(V +), reg r218:V, reg p56:p(V +), reg r220:V, reg strict7:*, reg strict8:V, reg r221:V, reg c80:L, reg c82:V, reg latestOnly3:*, reg latestOnly4:V, reg c83:L, reg c84:V, reg c86:L, reg c88:V, reg sym19:cls, reg base19:cls, reg guard19:L, reg r222:V, reg c91:L, reg r223:V, reg newpkgfiles:*, reg newpkgfiles1:V, reg length6:cls, reg r224:V, reg r225:V, reg c92:L, reg c93:V, reg c95:L, reg gsub1:cls, reg _get_pkg_file_pattern2:cls, reg type11:*, reg type12:V, reg p57:p(V +), reg r227:V, reg p58:p(V +), reg basename1:cls, reg newpkgfiles2:*, reg newpkgfiles3:V, reg p59:p(V +), reg r230:V, reg p60:p(V +), reg r232:V, reg strsplit:cls, reg basename2:cls, reg newpkgtmp:*, reg newpkgtmp1:V, reg p61:p(V +), reg r234:V, reg p62:p(V +), reg r236:V, reg do_call:cls, reg rbind_data_frame:*, reg rbind_data_frame1:V, reg p63:p(V +), reg sym20:cls, reg base20:cls, reg guard20:L, reg r238:V, reg r239:V, reg newpkgspl:*, reg newpkgspl1:V, reg c96:cls, reg r240:V, reg p64:p(V +), reg r242:V, reg newpkgdf:*, reg newpkgdf1:V, reg c97:L, reg dr38:V, reg dc19:L, reg dx51:V, reg dx52:V, reg __5:cls, reg r243:V, reg sym21:cls, reg base21:cls, reg guard21:L, reg r244:V, reg r245:V, reg c98:cls, reg r246:V, reg l9:*, reg names__:cls, reg r247:V, reg _filldfcols:cls, reg newpkgdf4:*, reg newpkgdf5:V, reg p65:p(V +), reg retdat60:*, reg retdat61:V, reg p66:p(V +), reg r250:V, reg l10:*, reg c99:L, reg r252:L, reg l12:*, reg dr40:V, reg dc20:L, reg dx53:V, reg dx54:V, reg r255:V, reg newpkgfiles4:*, reg newpkgfiles5:V, reg l13:*, reg c100:L, reg newpkgfiles7:V, reg l15:*, reg dr42:V, reg dc21:L, reg dx55:V, reg dx56:V, reg r256:V, reg rbind:cls, reg retdat62:*, reg retdat63:V, reg p67:p(V +), reg newpkgdf6:*, reg newpkgdf7:V, reg p68:p(V +), reg r259:V, reg _remove_stale_dups:cls, reg retdat64:*, reg retdat65:V, reg p69:p(V +), reg r261:V, reg retdat66:*, reg retdat67:V, reg c101:L, reg retdat69:V, reg dr44:V, reg dc22:L, reg dx57:V, reg dx58:V, reg r262:V, reg c102:L, reg dx60:V, reg dr46:V, reg dc23:L, reg dx61:V, reg dx62:V, reg retdat70:*, reg retdat71:V, reg c103:L, reg dx64:V, reg retdat73:V, reg dr48:V, reg dc24:L, reg dx66:V, reg dx67:V, reg dx68:V, reg r263:V, reg __6:cls, reg r264:V, reg sym22:cls, reg base22:cls, reg guard22:L, reg r265:V, reg r266:V, reg newpkgfiles10:*, reg newpkgfiles11:V, reg length7:cls, reg r267:V, reg numnew:*, reg numnew1:V, reg r268:V, reg c104:L, reg verbose_level23:*, reg verbose_level24:V, reg r269:V, reg c105:L, reg message6:cls, reg numnew2:*, reg numnew3:V, reg p70:p(V +), reg r271:V, reg _process_package_files_for_repository_db:cls, reg newpkgfiles12:*, reg newpkgfiles13:V, reg p71:p(V +), reg type13:*, reg type14:V, reg p72:p(V +), reg fields13:*, reg fields14:V, reg p73:p(V +), reg verbose_level25:*, reg verbose_level26:V, reg r276:V, reg p74:p(V +), reg r278:V, reg _process_repository_package_db_to_matrix:cls, reg newpkgdat:*, reg newpkgdat1:V, reg p75:p(V +), reg addFiles3:*, reg addFiles4:V, reg p76:p(V +), reg latestOnly5:*, reg latestOnly6:V, reg p77:p(V +), reg r282:V, reg as_data_frame1:cls, reg newpkgdat2:*, reg newpkgdat3:V, reg p78:p(V +), reg r284:V, reg sym23:cls, reg base23:cls, reg guard23:L, reg r285:V, reg r286:V, reg sym24:cls, reg base24:cls, reg guard24:L, reg r287:V, reg r288:V, reg newpkgdf8:*, reg newpkgdf9:V, reg names1:cls, reg r289:V, reg sym25:cls, reg base25:cls, reg guard25:L, reg r290:V, reg r291:V, reg retdat74:*, reg retdat75:V, reg names2:cls, reg r292:V, reg identical:cls, reg r293:V, reg r294:V, reg c106:L, reg _filldfcols1:cls, reg newpkgdf10:*, reg newpkgdf11:V, reg p79:p(V +), reg retdat76:*, reg retdat77:V, reg p80:p(V +), reg r297:V, reg _filldfcols2:cls, reg retdat78:*, reg retdat79:V, reg p81:p(V +), reg newpkgdf12:*, reg newpkgdf13:V, reg p82:p(V +), reg r300:V, reg verbose_level27:*, reg verbose_level28:V, reg r302:V, reg c107:L, reg paste6:cls, reg nrow2:cls, reg newpkgdf14:*, reg newpkgdf15:V, reg p83:p(V +), reg r304:V, reg p84:p(V +), reg r306:V, reg message7:cls, reg msg8:*, reg msg9:V, reg p85:p(V +), reg r308:V, reg l16:*, reg c108:L, reg r311:L, reg l18:*, reg dr50:V, reg dc25:L, reg dx70:V, reg dx71:V, reg r314:V, reg rbind1:cls, reg retdat80:*, reg retdat81:V, reg c109:L, reg retdat83:V, reg dr52:V, reg dc26:L, reg dx72:V, reg dx73:V, reg retdat84:*, reg retdat85:V, reg c110:L, reg retdat88:V, reg retdat89:V, reg dr54:V, reg dc27:L, reg dx74:V, reg dx75:V, reg r315:V, reg r316:V, reg __7:cls, reg r317:V, reg p86:p(V +), reg newpkgdf16:*, reg newpkgdf17:V, reg p87:p(V +), reg r320:V, reg latestOnly7:*, reg latestOnly8:V, reg c111:L, reg _remove_stale_dups1:cls, reg retdat92:*, reg retdat93:V, reg p88:p(V +), reg r322:V, reg verbose_level29:*, reg verbose_level30:V, reg r324:V, reg c112:L, reg paste7:cls, reg sym26:cls, reg base26:cls, reg guard26:L, reg r325:V, reg r326:V, reg retdat94:*, reg retdat95:V, reg c113:L, reg retdat97:V, reg dr56:V, reg dc28:L, reg dx76:V, reg dx77:V, reg r327:V, reg sum1:cls, reg r328:V, reg p89:p(V +), reg sym27:cls, reg base27:cls, reg guard27:L, reg r330:V, reg r331:V, reg retdat98:*, reg retdat99:V, reg c114:L, reg retdat101:V, reg dr58:V, reg dc29:L, reg dx78:V, reg dx79:V, reg r332:V, reg r333:V, reg sum2:cls, reg r334:V, reg p90:p(V +), reg r336:V, reg message8:cls, reg msg10:*, reg msg11:V, reg p91:p(V +), reg r338:V, reg r339:V, reg verbose_level31:*, reg verbose_level32:V, reg r341:V, reg c115:L, reg message9:cls, reg r342:V, reg verbose_level33:*, reg verbose_level34:V, reg r343:V, reg c116:L, reg paste8:cls, reg nrow3:cls, reg retdat102:*, reg retdat103:V, reg p92:p(V +), reg r345:V, reg p93:p(V +), reg r347:V, reg message10:cls, reg msg12:*, reg msg13:V, reg p94:p(V +), reg r349:V, reg retdat104:*, reg retdat105:V, reg c117:L, reg retdat107:V, reg dr60:V, reg dc30:L, reg dx80:V, reg dx81:V, reg order:cls, reg paste9:cls, reg retdat108:*, reg retdat109:V, reg c118:L, reg retdat111:V, reg dr62:V, reg dc31:L, reg dx82:V, reg dx83:V, reg r351:V, reg p95:p(V +), reg retdat112:*, reg retdat113:V, reg c119:L, reg retdat115:V, reg dr64:V, reg dc32:L, reg dx84:V, reg dx85:V, reg r353:V, reg p96:p(V +), reg r355:V, reg p97:p(V +), reg r357:V, reg __8:cls, reg r358:V, reg l19:*, reg c120:L, reg r360:dots, reg l21:*, reg dr66:V, reg dc33:L, reg dx86:V, reg dx87:V, reg r363:V, reg l22:*, reg c121:L, reg r365:dots, reg l24:*, reg dr68:V, reg dc34:L, reg dx88:V, reg dx89:V, reg r368:V, reg setdiff2:cls, reg sym28:cls, reg base28:cls, reg guard28:L, reg r369:V, reg r370:V, reg retdat116:*, reg retdat117:V, reg names3:cls, reg r371:V, reg p98:p(V +), reg fieldorder:*, reg fieldorder1:V, reg p99:p(V +), reg r374:V, reg fieldorder2:*, reg fieldorder3:V, reg c122:L, reg fieldorder5:V, reg dr70:V, reg dc35:L, reg dx90:V, reg dx91:V, reg _in_1:cls, reg fieldorder6:*, reg fieldorder7:V, reg p100:p(V +), reg sym29:cls, reg base29:cls, reg guard29:L, reg r376:V, reg r377:V, reg retdat118:*, reg retdat119:V, reg names4:cls, reg r378:V, reg p101:p(V +), reg r380:V, reg __9:cls, reg r381:V, reg retdat120:*, reg retdat121:V, reg c123:L, reg retdat123:V, reg dr72:V, reg dc36:L, reg dx92:V, reg dx93:V, reg sym30:cls, reg base30:cls, reg guard30:L, reg r382:V, reg r383:V, reg canonfs:*, reg canonfs1:V, reg noncanonfs:*, reg noncanonfs1:V, reg c124:cls, reg r384:V, reg __10:cls, reg r385:V, reg dryrun3:*, reg dryrun4:V, reg c125:L, reg verbose_level35:*, reg verbose_level36:V, reg r386:V, reg c126:L, reg message11:cls, reg r387:V, reg verbose_level37:*, reg verbose_level38:V, reg r388:V, reg c127:L, reg message12:cls, reg r389:V, reg as_matrix:cls, reg retdat127:*, reg retdat128:V, reg p102:p(V +), reg r392:V, reg _write_repository_package_db:cls, reg db:*, reg db1:V, reg p103:p(V +), reg dir9:*, reg dir10:V, reg p104:p(V +), reg rds_compress3:*, reg rds_compress4:V, reg p105:p(V +), reg r396:V, reg verbose_level39:*, reg verbose_level40:V, reg r397:V, reg c128:L, reg message13:cls, reg r398:V |
    mkenv;
    dir_isMissing = missing.0(dir);
    if dir_isMissing then L0(".") else L0(dir);
  L0(dir_orDefault):
    st dir = dir_orDefault;
    fields_isMissing = missing.0(fields);
    if fields_isMissing then L1(NULL) else L1(fields);
  L1(fields_orDefault):
    st fields = fields_orDefault;
    type_isMissing = missing.0(type);
    if type_isMissing then L2() else L3(type);
  L2():
    p = prom<V +>{
      sym = ldf c;
      base = ldf c in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r1):
      return r1;
    L1():
      c = ldf c in base;
      r2 = dyn c("source", "mac.binary", "win.binary");
      goto L0(r2);
    L2():
      r = dyn base("source", "mac.binary", "win.binary");
      goto L0(r);
    };
    goto L3(p);
  L3(type_orDefault):
    st type = type_orDefault;
    verbose_level_isMissing = missing.0(verbose_level);
    if verbose_level_isMissing then L4() else L5(verbose_level);
  L4():
    p1 = prom<V +>{
      sym1 = ldf `as.integer`;
      base1 = ldf `as.integer` in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r5):
      return r5;
    L1():
      dryrun1 = ld dryrun;
      dryrun2 = force? dryrun1;
      checkMissing(dryrun2);
      as_integer = ldf `as.integer` in base;
      r6 = dyn as_integer(dryrun2);
      goto L0(r6);
    L2():
      r4 = dyn base1(<sym dryrun>);
      goto L0(r4);
    };
    goto L5(p1);
  L5(verbose_level_orDefault):
    st `verbose.level` = verbose_level_orDefault;
    latestOnly_isMissing = missing.0(latestOnly);
    if latestOnly_isMissing then L6(TRUE) else L6(latestOnly);
  L6(latestOnly_orDefault):
    st latestOnly = latestOnly_orDefault;
    addFiles_isMissing = missing.0(addFiles);
    if addFiles_isMissing then L7(FALSE) else L7(addFiles);
  L7(addFiles_orDefault):
    st addFiles = addFiles_orDefault;
    rds_compress_isMissing = missing.0(rds_compress);
    if rds_compress_isMissing then L8("xz") else L8(rds_compress);
  L8(rds_compress_orDefault):
    st rds_compress = rds_compress_orDefault;
    strict_isMissing = missing.0(strict);
    if strict_isMissing then L9(TRUE) else L9(strict);
  L9(strict_orDefault):
    st strict = strict_orDefault;
    dryrun_isMissing = missing.0(dryrun);
    if dryrun_isMissing then L10(FALSE) else L10(dryrun);
  L10(dryrun_orDefault):
    st dryrun = dryrun_orDefault;
    sym2 = ldf `is.integer`;
    base2 = ldf `is.integer` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L105() else L106();
  L11(r9):
    r10 = `!`(r9);
    c2 = `as.logical`(r10);
    if c2 then L108() else L12();
  L105():
    verbose_level1 = ld `verbose.level`;
    check L107() else D0();
  L106():
    r8 = dyn base2(<sym verbose.level>);
    goto L11(r8);
  D0():
    deopt 1 [verbose_level1];
  L12():
    goto L14();
  L14():
    match_arg = ldf `match.arg`;
    check L114() else D3();
  L107():
    verbose_level2 = force? verbose_level1;
    checkMissing(verbose_level2);
    c1 = `is.integer`(verbose_level2);
    goto L11(c1);
  L108():
    sym3 = ldf `as.integer`;
    base3 = ldf `as.integer` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L109() else L110();
  D3():
    deopt 15 [];
  L13(r12):
    st `verbose.level` = r12;
    goto L14();
  L109():
    verbose_level3 = ld `verbose.level`;
    check L111() else D1();
  L110():
    r11 = dyn base3(<sym verbose.level>);
    goto L13(r11);
  L114():
    p2 = prom<V +>{
      type1 = ld type;
      type2 = force? type1;
      checkMissing(type2);
      return type2;
    };
    r16 = dyn match_arg(p2);
    check L115() else D4();
  D1():
    deopt 7 [verbose_level3];
  D4():
    deopt 17 [r16];
  L111():
    verbose_level4 = force? verbose_level3;
    checkMissing(verbose_level4);
    as_integer1 = ldf `as.integer` in base;
    r13 = dyn as_integer1(verbose_level4);
    check L112() else D2();
  L115():
    st type = r16;
    stopifnot = ldf stopifnot;
    check L116() else D5();
  D2():
    deopt 10 [r13];
  D5():
    deopt 20 [];
  L112():
    goto L13(r13);
  L116():
    p3 = prom<V +>{
      verbose_level5 = ld `verbose.level`;
      verbose_level6 = force? verbose_level5;
      checkMissing(verbose_level6);
      r17 = `>=`(verbose_level6, 0);
      c3 = `as.logical`(r17);
      if c3 then L1() else L0(c3);
    L0(c5):
      return c5;
    L1():
      verbose_level7 = ld `verbose.level`;
      verbose_level8 = force? verbose_level7;
      checkMissing(verbose_level8);
      r18 = `<=`(verbose_level8, 2);
      c6 = `as.logical`(r18);
      c7 = `&&`(c3, c6);
      goto L0(c7);
    };
    r20 = dyn stopifnot(p3);
    check L117() else D6();
  D6():
    deopt 22 [r20];
  L117():
    file_path = ldf `file.path`;
    check L118() else D7();
  D7():
    deopt 24 [];
  L118():
    p4 = prom<V +>{
      dir1 = ld dir;
      dir2 = force? dir1;
      checkMissing(dir2);
      return dir2;
    };
    r22 = dyn file_path(p4, "PACKAGES");
    check L119() else D8();
  D8():
    deopt 27 [r22];
  L119():
    st PKGSfile = r22;
    st calldown = FALSE;
    st retdat = NULL;
    type3 = ld type;
    check L120() else D9();
  D9():
    deopt 35 [type3];
  L120():
    type4 = force? type3;
    checkMissing(type4);
    r23 = `==`(type4, "win.binary");
    c9 = `as.logical`(r23);
    if c9 then L121() else L15(c9);
  L15(c11):
    c15 = `as.logical`(c11);
    if c15 then L124() else L16();
  L121():
    strict1 = ld strict;
    check L122() else D10();
  D10():
    deopt 39 [c9, strict1];
  L16():
    file_exists = ldf `file.exists`;
    check L128() else D13();
  L17():
    sym6 = ldf names;
    base6 = ldf names in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L146() else L147();
  L122():
    strict2 = force? strict1;
    checkMissing(strict2);
    c12 = `as.logical`(strict2);
    c13 = `&&`(c9, c12);
    goto L15(c13);
  L124():
    warning = ldf warning;
    check L125() else D11();
  D11():
    deopt 43 [];
  D13():
    deopt 52 [];
  L22(r45):
    st okfields = r45;
    calldown = ld calldown;
    check L150() else D25();
  L125():
    r24 = dyn warning("PACKAGES files do not include MD5 sums in the win.binary case", ", so strict checking is impossible. Calling down to write_PACKAGES ", "directly.");
    check L126() else D12();
  L128():
    p5 = prom<V +>{
      PKGSfile = ld PKGSfile;
      PKGSfile1 = force? PKGSfile;
      checkMissing(PKGSfile1);
      return PKGSfile1;
    };
    r27 = dyn file_exists(p5);
    check L129() else D14();
  L146():
    retdat = ld retdat;
    check L148() else D23();
  L147():
    r44 = dyn base6(<sym retdat>);
    goto L22(r44);
  D12():
    deopt 47 [r24];
  D14():
    deopt 54 [r27];
  D23():
    deopt 93 [retdat];
  D25():
    deopt 98 [calldown];
  L126():
    st calldown = TRUE;
    goto L17();
  L129():
    r28 = `!`(r27);
    c16 = `as.logical`(r28);
    if c16 then L130() else L18();
  L148():
    retdat1 = force? retdat;
    checkMissing(retdat1);
    names = ldf names in base;
    r46 = dyn names(retdat1);
    check L149() else D24();
  L150():
    calldown1 = force? calldown;
    checkMissing(calldown1);
    r47 = `!`(calldown1);
    c18 = `as.logical`(r47);
    if c18 then L151() else L23(c18);
  D24():
    deopt 96 [r46];
  L18():
    sym4 = ldf all;
    base4 = ldf all in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L134() else L135();
  L23(c20):
    c28 = `as.logical`(c20);
    if c28 then L156() else L25(c28);
  L130():
    warning1 = ldf warning;
    check L131() else D15();
  L149():
    goto L22(r46);
  L151():
    sym7 = ldf `is.null`;
    base7 = ldf `is.null` in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L152() else L153();
  D15():
    deopt 57 [];
  L19(r32):
    r42 = `!`(r32);
    c17 = `as.logical`(r42);
    if c17 then L142() else L21();
  L24(c23, r49):
    r50 = `!`(r49);
    c25 = `as.logical`(r50);
    c26 = `&&`(c23, c25);
    goto L23(c26);
  L25(c30):
    c37 = `as.logical`(c30);
    if c37 then L163() else L27();
  L131():
    p6 = prom<V +>{
      PKGSfile2 = ld PKGSfile;
      PKGSfile3 = force? PKGSfile2;
      checkMissing(PKGSfile3);
      return PKGSfile3;
    };
    r30 = dyn warning1("No existing PACKAGES file found at ", p6);
    check L132() else D16();
  L134():
    sym5 = ldf dim;
    base5 = ldf dim in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L136() else L137();
  L135():
    r31 = dyn base4(<lang `>`(dim(`<-`(retdat, as.data.frame(read.dcf(PKGSfile), stringsAsFactors=FALSE))), 0)>);
    goto L19(r31);
  L152():
    fields1 = ld fields;
    check L154() else D26();
  L153():
    r48 = dyn base7(<sym fields>);
    goto L24(c18, r48);
  L156():
    sym8 = ldf all;
    base8 = ldf all in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L157() else L158();
  D16():
    deopt 60 [r30];
  D26():
    deopt 102 [c18, fields1];
  L20(r34):
    r40 = `>`(r34, 0);
    all = ldf all in base;
    r41 = dyn all(r40);
    check L141() else D20();
  L21():
    goto L17();
  L26(c33, r52):
    r57 = `!`(r52);
    c34 = `as.logical`(r57);
    c35 = `&&`(c33, c34);
    goto L25(c35);
  L27():
    goto L28();
  L28():
    calldown2 = ld calldown;
    check L167() else D32();
  L132():
    st calldown = TRUE;
    goto L17();
  L136():
    as_data_frame = ldf `as.data.frame`;
    check L138() else D17();
  L137():
    r33 = dyn base5(<lang `<-`(retdat, as.data.frame(read.dcf(PKGSfile), stringsAsFactors=FALSE))>);
    goto L20(r33);
  L142():
    warning2 = ldf warning;
    check L143() else D21();
  L154():
    fields2 = force? fields1;
    checkMissing(fields2);
    c24 = `==`(fields2, NULL);
    goto L24(c18, c24);
  L157():
    _in_ = ldf `%in%`;
    check L159() else D27();
  L158():
    r51 = dyn base8(<lang `%in%`(fields, okfields)>);
    goto L26(c28, r51);
  L163():
    warning3 = ldf warning;
    check L164() else D30();
  D17():
    deopt 69 [];
  D20():
    deopt 80 [r41];
  D21():
    deopt 83 [];
  D27():
    deopt 110 [c28];
  D30():
    deopt 119 [];
  D32():
    deopt 128 [calldown2];
  L138():
    p8 = prom<V +>{
      read_dcf = ldf `read.dcf`;
      p7 = prom<V +>{
        PKGSfile4 = ld PKGSfile;
        PKGSfile5 = force? PKGSfile4;
        checkMissing(PKGSfile5);
        return PKGSfile5;
      };
      r36 = dyn read_dcf(p7);
      return r36;
    };
    r38 = dyn as_data_frame[, stringsAsFactors](p8, FALSE);
    check L139() else D18();
  L141():
    goto L19(r41);
  L143():
    r43 = dyn warning2("Existing PACKAGES file contained no rows and/or no columns");
    check L144() else D22();
  L159():
    p9 = prom<V +>{
      fields3 = ld fields;
      fields4 = force? fields3;
      checkMissing(fields4);
      return fields4;
    };
    p10 = prom<V +>{
      okfields = ld okfields;
      okfields1 = force? okfields;
      checkMissing(okfields1);
      return okfields1;
    };
    r55 = dyn _in_(p9, p10);
    check L160() else D28();
  L164():
    p14 = prom<V +>{
      paste = ldf paste;
      p13 = prom<V +>{
        setdiff = ldf setdiff;
        p11 = prom<V +>{
          fields5 = ld fields;
          fields6 = force? fields5;
          checkMissing(fields6);
          return fields6;
        };
        p12 = prom<V +>{
          okfields2 = ld okfields;
          okfields3 = force? okfields2;
          checkMissing(okfields3);
          return okfields3;
        };
        r60 = dyn setdiff(p11, p12);
        return r60;
      };
      r62 = dyn paste[, collapse](p13, " ");
      return r62;
    };
    r64 = dyn warning3("Specified fields no present in existing PACKAGES file: ", p14);
    check L165() else D31();
  L167():
    calldown3 = force? calldown2;
    checkMissing(calldown3);
    c38 = `as.logical`(calldown3);
    if c38 then L168() else L29();
  D18():
    deopt 73 [r38];
  D22():
    deopt 85 [r43];
  D28():
    deopt 113 [c28, r55];
  D31():
    deopt 122 [r64];
  L29():
    file_info = ldf `file.info`;
    check L178() else D38();
  L139():
    st retdat = r38;
    dim = ldf dim in base;
    r39 = dyn dim(r38);
    check L140() else D19();
  L144():
    st calldown = TRUE;
    goto L17();
  L160():
    all1 = ldf all in base;
    r56 = dyn all1(r55);
    check L161() else D29();
  L165():
    st calldown = TRUE;
    goto L28();
  L168():
    verbose_level9 = ld `verbose.level`;
    check L169() else D33();
  D19():
    deopt 76 [r39];
  D29():
    deopt 115 [c28, r56];
  D33():
    deopt 130 [verbose_level9];
  D38():
    deopt 161 [];
  L140():
    goto L20(r39);
  L161():
    goto L26(c28, r56);
  L169():
    verbose_level10 = force? verbose_level9;
    checkMissing(verbose_level10);
    r66 = `>`(verbose_level10, 0);
    c39 = `as.logical`(r66);
    if c39 then L170() else L30();
  L178():
    p22 = prom<V +>{
      PKGSfile6 = ld PKGSfile;
      PKGSfile7 = force? PKGSfile6;
      checkMissing(PKGSfile7);
      return PKGSfile7;
    };
    r81 = dyn file_info(p22);
    check L179() else D39();
  D39():
    deopt 163 [r81];
  L30():
    goto L31();
  L31():
    write_PACKAGES = ldf write_PACKAGES;
    check L174() else D36();
  L170():
    message = ldf message;
    check L171() else D34();
  L179():
    c40 = `is.object`(r81);
    if c40 then L181() else L182(r81);
  D34():
    deopt 135 [];
  D36():
    deopt 141 [];
  L171():
    r67 = dyn message("Unable to update existing PACKAGES file. Calling write_PACKAGES directly.");
    check L172() else D35();
  L174():
    p15 = prom<V +>{
      dir3 = ld dir;
      dir4 = force? dir3;
      checkMissing(dir4);
      return dir4;
    };
    p16 = prom<V +>{
      fields7 = ld fields;
      fields8 = force? fields7;
      checkMissing(fields8);
      return fields8;
    };
    p17 = prom<V +>{
      type5 = ld type;
      type6 = force? type5;
      checkMissing(type6);
      return type6;
    };
    p18 = prom<V +>{
      verbose_level11 = ld `verbose.level`;
      verbose_level12 = force? verbose_level11;
      checkMissing(verbose_level12);
      r72 = `==`(verbose_level12, 2.0);
      return r72;
    };
    p19 = prom<V +>{
      latestOnly1 = ld latestOnly;
      latestOnly2 = force? latestOnly1;
      checkMissing(latestOnly2);
      return latestOnly2;
    };
    p20 = prom<V +>{
      addFiles1 = ld addFiles;
      addFiles2 = force? addFiles1;
      checkMissing(addFiles2);
      return addFiles2;
    };
    p21 = prom<V +>{
      rds_compress1 = ld rds_compress;
      rds_compress2 = force? rds_compress1;
      checkMissing(rds_compress2);
      return rds_compress2;
    };
    r77 = dyn write_PACKAGES[dir, fields, type, verbose, latestOnly, addFiles, rds_compress](p15, p16, p17, p18, p19, p20, p21);
    check L175() else D37();
  L180(dx1):
    st pmtime = dx1;
    verbose_level13 = ld `verbose.level`;
    check L184() else D40();
  L181():
    dr = tryDispatchBuiltin.1("$", r81);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L183() else L182(dr);
  L182(r83):
    r84 = `$`(r83, <sym mtime>);
    goto L180(r84);
  D35():
    deopt 137 [r67];
  D37():
    deopt 156 [r77];
  D40():
    deopt 166 [verbose_level13];
  L172():
    goto L31();
  L175():
    popenv;
    return r77;
  L183():
    dx = getTryDispatchBuiltinValue(dr);
    goto L180(dx);
  L184():
    verbose_level14 = force? verbose_level13;
    checkMissing(verbose_level14);
    r85 = `>`(verbose_level14, 0);
    c41 = `as.logical`(r85);
    if c41 then L185() else L33();
  L33():
    goto L34();
  L34():
    sym9 = ldf `is.null`;
    base9 = ldf `is.null` in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L189() else L190();
  L185():
    message1 = ldf message;
    check L186() else D41();
  D41():
    deopt 171 [];
  L35(r94):
    r95 = `!`(r94);
    c44 = `as.logical`(r95);
    if c44 then L192() else L36();
  L186():
    p23 = prom<V +>{
      strict3 = ld strict;
      strict4 = force? strict3;
      checkMissing(strict4);
      c42 = `as.logical`(strict4);
      if c42 then L1() else L0();
    L0():
      return "OFF";
    L1():
      return "ON";
    };
    p25 = prom<V +>{
      nrow = ldf nrow;
      p24 = prom<V +>{
        retdat2 = ld retdat;
        retdat3 = force? retdat2;
        checkMissing(retdat3);
        return retdat3;
      };
      r88 = dyn nrow(p24);
      return r88;
    };
    p26 = prom<V +>{
      PKGSfile8 = ld PKGSfile;
      PKGSfile9 = force? PKGSfile8;
      checkMissing(PKGSfile9);
      return PKGSfile9;
    };
    r91 = dyn message1("Updating existing repository [strict mode: ", p23, "]\nDetected PACKAGES file with ", p25, " entries at ", p26);
    check L187() else D42();
  L189():
    fields9 = ld fields;
    check L191() else D43();
  L190():
    r93 = dyn base9(<sym fields>);
    goto L35(r93);
  D42():
    deopt 178 [r91];
  D43():
    deopt 182 [fields9];
  L36():
    goto L38();
  L38():
    list_files = ldf `list.files`;
    check L199() else D46();
  L187():
    goto L34();
  L191():
    fields10 = force? fields9;
    checkMissing(fields10);
    c43 = `==`(fields10, NULL);
    goto L35(c43);
  L192():
    retdat4 = ld retdat;
    check L193() else D44();
  D44():
    deopt 186 [retdat4];
  D46():
    deopt 197 [];
  L193():
    retdat5 = force? retdat4;
    checkMissing(retdat5);
    c45 = `is.object`(retdat5);
    if c45 then L194() else L195(retdat5);
  L199():
    p27 = prom<V +>{
      dir5 = ld dir;
      dir6 = force? dir5;
      checkMissing(dir6);
      return dir6;
    };
    p29 = prom<V +>{
      _get_pkg_file_pattern = ldf `.get_pkg_file_pattern`;
      p28 = prom<V +>{
        type7 = ld type;
        type8 = force? type7;
        checkMissing(type8);
        return type8;
      };
      r99 = dyn _get_pkg_file_pattern(p28);
      return r99;
    };
    r101 = dyn list_files[, pattern, `full.names`](p27, p29, TRUE);
    check L200() else D47();
  D47():
    deopt 203 [r101];
  L37(dx3):
    st retdat = dx3;
    goto L38();
  L194():
    dr2 = tryDispatchBuiltin.1("[", retdat5);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L196() else L195(dr2);
  L195(retdat7):
    fields11 = ld fields;
    check L197() else D45();
  L200():
    st pkgfiles = r101;
    sym10 = ldf length;
    base10 = ldf length in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L201() else L202();
  D45():
    deopt 189 [retdat7, fields11];
  L39(r103):
    r105 = `==`(r103, 0);
    c46 = `as.logical`(r105);
    if c46 then L205() else L40();
  L196():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L37(dx2);
  L197():
    fields12 = force? fields11;
    __ = ldf `[` in base;
    r96 = dyn __(retdat5, <missing>, fields12);
    goto L37(r96);
  L201():
    pkgfiles = ld pkgfiles;
    check L203() else D48();
  L202():
    r102 = dyn base10(<sym pkgfiles>);
    goto L39(r102);
  D48():
    deopt 207 [pkgfiles];
  L40():
    goto L41();
  L41():
    sym11 = ldf `is.null`;
    base11 = ldf `is.null` in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L209() else L210();
  L203():
    pkgfiles1 = force? pkgfiles;
    checkMissing(pkgfiles1);
    length = ldf length in base;
    r104 = dyn length(pkgfiles1);
    check L204() else D49();
  L205():
    stop = ldf stop;
    check L206() else D50();
  D49():
    deopt 210 [r104];
  D50():
    deopt 214 [];
  L42(r110):
    c49 = `as.logical`(r110);
    if c49 then L216() else L43();
  L204():
    goto L39(r104);
  L206():
    p30 = prom<V +>{
      dir7 = ld dir;
      dir8 = force? dir7;
      checkMissing(dir8);
      return dir8;
    };
    r107 = dyn stop("unable to find any package tarballs in ", p30);
    check L207() else D51();
  L209():
    retdat8 = ld retdat;
    check L211() else D52();
  L210():
    r109 = dyn base11(<lang `$`(retdat, File)>);
    goto L42(r109);
  D51():
    deopt 217 [r107];
  D52():
    deopt 221 [retdat8];
  L43():
    retdat20 = ld retdat;
    check L234() else D60();
  L46():
    l6 = ld retdat;
    c56 = `is.object`(l6);
    if c56 then L244() else L245(FALSE, l6);
  L207():
    goto L41();
  L211():
    retdat9 = force? retdat8;
    checkMissing(retdat9);
    c47 = `is.object`(retdat9);
    if c47 then L213() else L214(retdat9);
  L216():
    sym12 = ldf match;
    base12 = ldf match in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L217() else L218();
  D60():
    deopt 253 [retdat20];
  L44(r113):
    st tbmatches = r113;
    pkgfiles4 = ld pkgfiles;
    check L224() else D58();
  L212(dx6):
    c48 = `==`(dx6, NULL);
    goto L42(c48);
  L213():
    dr4 = tryDispatchBuiltin.1("$", retdat9);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L215() else L214(dr4);
  L214(retdat11):
    r111 = `$`(retdat11, <sym File>);
    goto L212(r111);
  L217():
    paste1 = ldf paste;
    check L219() else D53();
  L218():
    r112 = dyn base12(<lang paste(`$`(retdat, Package), `$`(retdat, Version), sep="_")>, <lang gsub(.get_pkg_file_pattern(type, ext.only=TRUE), "", basename(pkgfiles))>);
    goto L44(r112);
  L234():
    retdat21 = force? retdat20;
    checkMissing(retdat21);
    c54 = `is.object`(retdat21);
    if c54 then L236() else L237(retdat21);
  L243(dx29):
    st retdat = dx29;
    file_exists1 = ldf `file.exists`;
    check L247() else D61();
  L244():
    dr18 = tryDispatchBuiltin.0("$<-", l6, FALSE);
    dc9 = getTryDispatchBuiltinDispatched(dr18);
    if dc9 then L246() else L245(FALSE, dr18);
  L245(r132, l8):
    r135 = `$<-`(l8, <sym IsNew>, FALSE);
    goto L243(r135);
  D53():
    deopt 228 [];
  D58():
    deopt 245 [pkgfiles4];
  D61():
    deopt 265 [];
  L215():
    dx5 = getTryDispatchBuiltinValue(dr4);
    goto L212(dx5);
  L219():
    p31 = prom<V +>{
      retdat12 = ld retdat;
      retdat13 = force? retdat12;
      checkMissing(retdat13);
      c50 = `is.object`(retdat13);
      if c50 then L1() else L2(retdat13);
    L0(dx8):
      return dx8;
    L1():
      dr6 = tryDispatchBuiltin.1("$", retdat13);
      dc3 = getTryDispatchBuiltinDispatched(dr6);
      if dc3 then L3() else L2(dr6);
    L2(retdat15):
      r114 = `$`(retdat15, <sym Package>);
      goto L0(r114);
    L3():
      dx7 = getTryDispatchBuiltinValue(dr6);
      goto L0(dx7);
    };
    p32 = prom<V +>{
      retdat16 = ld retdat;
      retdat17 = force? retdat16;
      checkMissing(retdat17);
      c51 = `is.object`(retdat17);
      if c51 then L1() else L2(retdat17);
    L0(dx10):
      return dx10;
    L1():
      dr8 = tryDispatchBuiltin.1("$", retdat17);
      dc4 = getTryDispatchBuiltinDispatched(dr8);
      if dc4 then L3() else L2(dr8);
    L2(retdat19):
      r116 = `$`(retdat19, <sym Version>);
      goto L0(r116);
    L3():
      dx9 = getTryDispatchBuiltinValue(dr8);
      goto L0(dx9);
    };
    r118 = dyn paste1[, , sep](p31, p32, "_");
    check L220() else D54();
  L224():
    pkgfiles5 = force? pkgfiles4;
    checkMissing(pkgfiles5);
    c52 = `is.object`(pkgfiles5);
    if c52 then L225() else L226(pkgfiles5);
  L235(dx21):
    l3 = ld retdat;
    c55 = `is.object`(l3);
    if c55 then L240() else L241(dx21, l3);
  L236():
    dr14 = tryDispatchBuiltin.1("$", retdat21);
    dc7 = getTryDispatchBuiltinDispatched(dr14);
    if dc7 then L238() else L237(dr14);
  L237(retdat23):
    r129 = `$`(retdat23, <sym File>);
    goto L235(r129);
  L246():
    dx28 = getTryDispatchBuiltinValue(dr18);
    goto L243(dx28);
  L247():
    p37 = prom<V +>{
      retdat24 = ld retdat;
      retdat25 = force? retdat24;
      checkMissing(retdat25);
      c57 = `is.object`(retdat25);
      if c57 then L1() else L2(retdat25);
    L0(dx31):
      return dx31;
    L1():
      dr20 = tryDispatchBuiltin.1("$", retdat25);
      dc10 = getTryDispatchBuiltinDispatched(dr20);
      if dc10 then L3() else L2(dr20);
    L2(retdat27):
      r136 = `$`(retdat27, <sym tarball>);
      goto L0(r136);
    L3():
      dx30 = getTryDispatchBuiltinValue(dr20);
      goto L0(dx30);
    };
    r138 = dyn file_exists1(p37);
    check L248() else D62();
  D54():
    deopt 233 [r118];
  D62():
    deopt 267 [r138];
  L45(dx12):
    l = ld retdat;
    c53 = `is.object`(l);
    if c53 then L230() else L231(dx12, l);
  L220():
    gsub = ldf gsub;
    check L221() else D55();
  L225():
    dr10 = tryDispatchBuiltin.1("[", pkgfiles5);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L227() else L226(dr10);
  L226(pkgfiles7):
    tbmatches = ld tbmatches;
    check L228() else D59();
  L238():
    dx20 = getTryDispatchBuiltinValue(dr14);
    goto L235(dx20);
  L239(dx26, dx27):
    st retdat = dx27;
    goto L46();
  L240():
    dr16 = tryDispatchBuiltin.0("$<-", l3, dx21);
    dc8 = getTryDispatchBuiltinDispatched(dr16);
    if dc8 then L242() else L241(dx21, dr16);
  L241(dx23, l5):
    r130 = `$<-`(l5, <sym tarball>, dx21);
    goto L239(dx23, r130);
  L248():
    st keeprows = r138;
    verbose_level15 = ld `verbose.level`;
    check L249() else D63();
  D55():
    deopt 235 [];
  D59():
    deopt 247 [pkgfiles7, tbmatches];
  D63():
    deopt 269 [verbose_level15];
  L221():
    p34 = prom<V +>{
      _get_pkg_file_pattern1 = ldf `.get_pkg_file_pattern`;
      p33 = prom<V +>{
        type9 = ld type;
        type10 = force? type9;
        checkMissing(type10);
        return type10;
      };
      r120 = dyn _get_pkg_file_pattern1[, `ext.only`](p33, TRUE);
      return r120;
    };
    p36 = prom<V +>{
      basename = ldf basename;
      p35 = prom<V +>{
        pkgfiles2 = ld pkgfiles;
        pkgfiles3 = force? pkgfiles2;
        checkMissing(pkgfiles3);
        return pkgfiles3;
      };
      r123 = dyn basename(p35);
      return r123;
    };
    r125 = dyn gsub(p34, "", p36);
    check L222() else D56();
  L227():
    dx11 = getTryDispatchBuiltinValue(dr10);
    goto L45(dx11);
  L228():
    tbmatches1 = force? tbmatches;
    __1 = ldf `[` in base;
    r127 = dyn __1(pkgfiles7, tbmatches1);
    goto L45(r127);
  L229(dx17, dx18):
    st retdat = dx18;
    goto L46();
  L230():
    dr12 = tryDispatchBuiltin.0("$<-", l, dx12);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L232() else L231(dx12, dr12);
  L231(dx14, l2):
    r128 = `$<-`(l2, <sym tarball>, dx12);
    goto L229(dx14, r128);
  L242():
    dx25 = getTryDispatchBuiltinValue(dr16);
    goto L239(dx21, dx25);
  L249():
    verbose_level16 = force? verbose_level15;
    checkMissing(verbose_level16);
    r139 = `>`(verbose_level16, 0);
    c58 = `as.logical`(r139);
    if c58 then L250() else L47();
  D56():
    deopt 239 [r125];
  L47():
    goto L48();
  L48():
    retdat30 = ld retdat;
    check L256() else D68();
  L222():
    match = ldf match in base;
    r126 = dyn match(r118, r125, NA_INT, NULL);
    check L223() else D57();
  L232():
    dx16 = getTryDispatchBuiltinValue(dr12);
    goto L229(dx12, dx16);
  L250():
    paste2 = ldf paste;
    check L251() else D64();
  D57():
    deopt 243 [r126];
  D64():
    deopt 274 [];
  D68():
    deopt 288 [retdat30];
  L223():
    goto L44(r126);
  L251():
    p38 = prom<V +>{
      sym13 = ldf sum;
      base13 = ldf sum in base;
      guard13 = `==`.4(sym13, base13);
      if guard13 then L1() else L2();
    L0(r141):
      return r141;
    L1():
      keeprows = ld keeprows;
      keeprows1 = force? keeprows;
      checkMissing(keeprows1);
      sum = ldf sum in base;
      r142 = dyn sum(keeprows1);
      goto L0(r142);
    L2():
      r140 = dyn base13(<sym keeprows>);
      goto L0(r140);
    };
    p40 = prom<V +>{
      nrow1 = ldf nrow;
      p39 = prom<V +>{
        retdat28 = ld retdat;
        retdat29 = force? retdat28;
        checkMissing(retdat29);
        return retdat29;
      };
      r145 = dyn nrow1(p39);
      return r145;
    };
    r147 = dyn paste2("Tarballs found for", p38, " of ", p40, "existing PACKAGES entries.");
    check L252() else D65();
  L256():
    retdat31 = force? retdat30;
    checkMissing(retdat31);
    c59 = `is.object`(retdat31);
    if c59 then L257() else L258(retdat31);
  D65():
    deopt 280 [r147];
  L49(dx33):
    st retdat = dx33;
    file_info1 = ldf `file.info`;
    check L261() else D70();
  L252():
    st msg = r147;
    message2 = ldf message;
    check L253() else D66();
  L257():
    dr22 = tryDispatchBuiltin.1("[", retdat31);
    dc11 = getTryDispatchBuiltinDispatched(dr22);
    if dc11 then L259() else L258(dr22);
  L258(retdat33):
    keeprows2 = ld keeprows;
    check L260() else D69();
  D66():
    deopt 283 [];
  D69():
    deopt 290 [retdat33, keeprows2];
  D70():
    deopt 297 [];
  L253():
    p41 = prom<V +>{
      msg = ld msg;
      msg1 = force? msg;
      checkMissing(msg1);
      return msg1;
    };
    r149 = dyn message2(p41);
    check L254() else D67();
  L259():
    dx32 = getTryDispatchBuiltinValue(dr22);
    goto L49(dx32);
  L260():
    keeprows3 = force? keeprows2;
    __2 = ldf `[` in base;
    r151 = dyn __2(retdat31, keeprows3, <missing>);
    goto L49(r151);
  L261():
    p42 = prom<V +>{
      retdat34 = ld retdat;
      retdat35 = force? retdat34;
      checkMissing(retdat35);
      c60 = `is.object`(retdat35);
      if c60 then L1() else L2(retdat35);
    L0(dx35):
      return dx35;
    L1():
      dr24 = tryDispatchBuiltin.1("$", retdat35);
      dc12 = getTryDispatchBuiltinDispatched(dr24);
      if dc12 then L3() else L2(dr24);
    L2(retdat37):
      r152 = `$`(retdat37, <sym tarball>);
      goto L0(r152);
    L3():
      dx34 = getTryDispatchBuiltinValue(dr24);
      goto L0(dx34);
    };
    r154 = dyn file_info1(p42);
    check L262() else D71();
  D67():
    deopt 285 [r149];
  D71():
    deopt 299 [r154];
  L254():
    goto L48();
  L262():
    c61 = `is.object`(r154);
    if c61 then L264() else L265(r154);
  L263(dx37):
    st tbmtimes = dx37;
    which = ldf which;
    check L267() else D72();
  L264():
    dr26 = tryDispatchBuiltin.1("$", r154);
    dc13 = getTryDispatchBuiltinDispatched(dr26);
    if dc13 then L266() else L265(dr26);
  L265(r156):
    r157 = `$`(r156, <sym mtime>);
    goto L263(r157);
  D72():
    deopt 303 [];
  L266():
    dx36 = getTryDispatchBuiltinValue(dr26);
    goto L263(dx36);
  L267():
    p43 = prom<V +>{
      tbmtimes = ld tbmtimes;
      tbmtimes1 = force? tbmtimes;
      checkMissing(tbmtimes1);
      pmtime = ld pmtime;
      pmtime1 = force? pmtime;
      checkMissing(pmtime1);
      r158 = `>`(tbmtimes1, pmtime1);
      return r158;
    };
    r160 = dyn which(p43);
    check L268() else D73();
  D73():
    deopt 305 [r160];
  L268():
    st toonew = r160;
    sym14 = ldf length;
    base14 = ldf length in base;
    guard14 = `==`.4(sym14, base14);
    if guard14 then L269() else L270();
  L50(r162):
    r164 = `>`(r162, 0);
    c62 = `as.logical`(r164);
    if c62 then L273() else L51();
  L269():
    toonew = ld toonew;
    check L271() else D74();
  L270():
    r161 = dyn base14(<sym toonew>);
    goto L50(r161);
  D74():
    deopt 309 [toonew];
  L51():
    goto L55();
  L55():
    strict5 = ld strict;
    check L287() else D83();
  L271():
    toonew1 = force? toonew;
    checkMissing(toonew1);
    length1 = ldf length in base;
    r163 = dyn length1(toonew1);
    check L272() else D75();
  L273():
    verbose_level17 = ld `verbose.level`;
    check L274() else D76();
  D75():
    deopt 312 [r163];
  D76():
    deopt 315 [verbose_level17];
  D83():
    deopt 343 [strict5];
  L272():
    goto L50(r163);
  L274():
    verbose_level18 = force? verbose_level17;
    checkMissing(verbose_level18);
    r165 = `>`(verbose_level18, 0);
    c63 = `as.logical`(r165);
    if c63 then L275() else L52();
  L287():
    strict6 = force? strict5;
    checkMissing(strict6);
    c65 = `as.logical`(strict6);
    if c65 then L288() else L56(c65);
  L52():
    goto L53();
  L53():
    retdat38 = ld retdat;
    check L281() else D81();
  L56(c67):
    c71 = `as.logical`(c67);
    if c71 then L292() else L57();
  L275():
    paste3 = ldf paste;
    check L276() else D77();
  L288():
    NROW = ldf NROW;
    check L289() else D84();
  D77():
    deopt 320 [];
  D81():
    deopt 332 [retdat38];
  D84():
    deopt 346 [c65];
  L57():
    goto L68();
  L68():
    setdiff1 = ldf setdiff;
    check L331() else D108();
  L276():
    p44 = prom<V +>{
      sym15 = ldf length;
      base15 = ldf length in base;
      guard15 = `==`.4(sym15, base15);
      if guard15 then L1() else L2();
    L0(r167):
      return r167;
    L1():
      toonew2 = ld toonew;
      toonew3 = force? toonew2;
      checkMissing(toonew3);
      length2 = ldf length in base;
      r168 = dyn length2(toonew3);
      goto L0(r168);
    L2():
      r166 = dyn base15(<sym toonew>);
      goto L0(r166);
    };
    r170 = dyn paste3(p44, " tarball(s) matching existing entries are ", "newer than PACKAGES file and must be reprocessed.");
    check L277() else D78();
  L281():
    retdat39 = force? retdat38;
    checkMissing(retdat39);
    c64 = `is.object`(retdat39);
    if c64 then L282() else L283(retdat39);
  L289():
    p46 = prom<V +>{
      retdat42 = ld retdat;
      retdat43 = force? retdat42;
      checkMissing(retdat43);
      return retdat43;
    };
    r177 = dyn NROW(p46);
    check L290() else D85();
  L292():
    verbose_level19 = ld `verbose.level`;
    check L293() else D86();
  D78():
    deopt 324 [r170];
  D85():
    deopt 348 [c65, r177];
  D86():
    deopt 352 [verbose_level19];
  D108():
    deopt 430 [];
  L54(dx39):
    st retdat = dx39;
    goto L55();
  L277():
    st msg = r170;
    message3 = ldf message;
    check L278() else D79();
  L282():
    dr28 = tryDispatchBuiltin.1("[", retdat39);
    dc14 = getTryDispatchBuiltinDispatched(dr28);
    if dc14 then L284() else L283(dr28);
  L283(retdat41):
    toonew4 = ld toonew;
    check L285() else D82();
  L290():
    r178 = `>`(r177, 0);
    c68 = `as.logical`(r178);
    c69 = `&&`(c65, c68);
    goto L56(c69);
  L293():
    verbose_level20 = force? verbose_level19;
    checkMissing(verbose_level20);
    r179 = `>`(verbose_level20, 0);
    c72 = `as.logical`(r179);
    if c72 then L294() else L58();
  L331():
    p54 = prom<V +>{
      normalizePath1 = ldf normalizePath;
      p53 = prom<V +>{
        pkgfiles8 = ld pkgfiles;
        pkgfiles9 = force? pkgfiles8;
        checkMissing(pkgfiles9);
        return pkgfiles9;
      };
      r214 = dyn normalizePath1(p53);
      return r214;
    };
    p56 = prom<V +>{
      normalizePath2 = ldf normalizePath;
      p55 = prom<V +>{
        retdat56 = ld retdat;
        retdat57 = force? retdat56;
        checkMissing(retdat57);
        c79 = `is.object`(retdat57);
        if c79 then L1() else L2(retdat57);
      L0(dx50):
        return dx50;
      L1():
        dr36 = tryDispatchBuiltin.1("$", retdat57);
        dc18 = getTryDispatchBuiltinDispatched(dr36);
        if dc18 then L3() else L2(dr36);
      L2(retdat59):
        r216 = `$`(retdat59, <sym tarball>);
        goto L0(r216);
      L3():
        dx49 = getTryDispatchBuiltinValue(dr36);
        goto L0(dx49);
      };
      r218 = dyn normalizePath2(p55);
      return r218;
    };
    r220 = dyn setdiff1(p54, p56);
    check L332() else D109();
  D79():
    deopt 327 [];
  D82():
    deopt 334 [retdat41, toonew4];
  D109():
    deopt 433 [r220];
  L58():
    goto L59();
  L59():
    md5sum = ldf md5sum;
    check L300() else D91();
  L278():
    p45 = prom<V +>{
      msg2 = ld msg;
      msg3 = force? msg2;
      checkMissing(msg3);
      return msg3;
    };
    r172 = dyn message3(p45);
    check L279() else D80();
  L284():
    dx38 = getTryDispatchBuiltinValue(dr28);
    goto L54(dx38);
  L285():
    toonew5 = force? toonew4;
    checkMissing(toonew5);
    r174 = `-`(<missing>, toonew5);
    __3 = ldf `[` in base;
    r175 = dyn __3(retdat39, r174, <missing>);
    goto L54(r175);
  L294():
    paste4 = ldf paste;
    check L295() else D87();
  L332():
    st newpkgfiles = r220;
    strict7 = ld strict;
    check L333() else D110();
  D80():
    deopt 329 [r172];
  D87():
    deopt 357 [];
  D91():
    deopt 369 [];
  D110():
    deopt 435 [strict7];
  L279():
    goto L53();
  L295():
    r180 = dyn paste4("[strict mode] Checking if MD5sums match ", "for existing tarballs");
    check L296() else D88();
  L300():
    p49 = prom<V +>{
      normalizePath = ldf normalizePath;
      p48 = prom<V +>{
        retdat44 = ld retdat;
        retdat45 = force? retdat44;
        checkMissing(retdat45);
        c73 = `is.object`(retdat45);
        if c73 then L1() else L2(retdat45);
      L0(dx42):
        return dx42;
      L1():
        dr30 = tryDispatchBuiltin.1("$", retdat45);
        dc15 = getTryDispatchBuiltinDispatched(dr30);
        if dc15 then L3() else L2(dr30);
      L2(retdat47):
        r184 = `$`(retdat47, <sym tarball>);
        goto L0(r184);
      L3():
        dx41 = getTryDispatchBuiltinValue(dr30);
        goto L0(dx41);
      };
      r186 = dyn normalizePath(p48);
      return r186;
    };
    r188 = dyn md5sum(p49);
    check L301() else D92();
  L333():
    strict8 = force? strict7;
    checkMissing(strict8);
    r221 = `!`(strict8);
    c80 = `as.logical`(r221);
    if c80 then L334() else L69(c80);
  D88():
    deopt 360 [r180];
  D92():
    deopt 371 [r188];
  L69(c82):
    c86 = `as.logical`(c82);
    if c86 then L337() else L70(c86);
  L296():
    st msg = r180;
    message4 = ldf message;
    check L297() else D89();
  L301():
    st curMD5sums = r188;
    which1 = ldf which;
    check L302() else D93();
  L334():
    latestOnly3 = ld latestOnly;
    check L335() else D111();
  D89():
    deopt 363 [];
  D93():
    deopt 374 [];
  D111():
    deopt 438 [c80, latestOnly3];
  L70(c88):
    c95 = `as.logical`(c88);
    if c95 then L343() else L72();
  L297():
    p47 = prom<V +>{
      msg4 = ld msg;
      msg5 = force? msg4;
      checkMissing(msg5);
      return msg5;
    };
    r182 = dyn message4(p47);
    check L298() else D90();
  L302():
    p50 = prom<V +>{
      retdat48 = ld retdat;
      retdat49 = force? retdat48;
      checkMissing(retdat49);
      c74 = `is.object`(retdat49);
      if c74 then L1() else L2(retdat49);
    L0(dx44):
      curMD5sums = ld curMD5sums;
      curMD5sums1 = force? curMD5sums;
      checkMissing(curMD5sums1);
      r190 = `!=`(dx44, curMD5sums1);
      return r190;
    L1():
      dr32 = tryDispatchBuiltin.1("$", retdat49);
      dc16 = getTryDispatchBuiltinDispatched(dr32);
      if dc16 then L3() else L2(dr32);
    L2(retdat51):
      r189 = `$`(retdat51, <sym MD5sum>);
      goto L0(r189);
    L3():
      dx43 = getTryDispatchBuiltinValue(dr32);
      goto L0(dx43);
    };
    r192 = dyn which1(p50);
    check L303() else D94();
  L335():
    latestOnly4 = force? latestOnly3;
    checkMissing(latestOnly4);
    c83 = `as.logical`(latestOnly4);
    c84 = `&&`(c80, c83);
    goto L69(c84);
  L337():
    sym19 = ldf length;
    base19 = ldf length in base;
    guard19 = `==`.4(sym19, base19);
    if guard19 then L338() else L339();
  D90():
    deopt 365 [r182];
  D94():
    deopt 376 [r192];
  L71(c91, r223):
    r225 = `>`(r223, 0);
    c92 = `as.logical`(r225);
    c93 = `&&`(c91, c92);
    goto L70(c93);
  L72():
    goto L76();
  L76():
    sym22 = ldf length;
    base22 = ldf length in base;
    guard22 = `==`.4(sym22, base22);
    if guard22 then L388() else L389();
  L298():
    goto L59();
  L303():
    st notokinds = r192;
    sym16 = ldf length;
    base16 = ldf length in base;
    guard16 = `==`.4(sym16, base16);
    if guard16 then L304() else L305();
  L338():
    newpkgfiles = ld newpkgfiles;
    check L340() else D112();
  L339():
    r222 = dyn base19(<sym newpkgfiles>);
    goto L71(c86, r222);
  L343():
    gsub1 = ldf gsub;
    check L344() else D114();
  D112():
    deopt 443 [c86, newpkgfiles];
  D114():
    deopt 451 [];
  L60(r194):
    r196 = `>`(r194, 0);
    c75 = `as.logical`(r196);
    if c75 then L308() else L61();
  L77(r266):
    st numnew = r266;
    numnew = ld numnew;
    check L392() else D135();
  L304():
    notokinds = ld notokinds;
    check L306() else D95();
  L305():
    r193 = dyn base16(<sym notokinds>);
    goto L60(r193);
  L340():
    newpkgfiles1 = force? newpkgfiles;
    checkMissing(newpkgfiles1);
    length6 = ldf length in base;
    r224 = dyn length6(newpkgfiles1);
    check L341() else D113();
  L344():
    p58 = prom<V +>{
      _get_pkg_file_pattern2 = ldf `.get_pkg_file_pattern`;
      p57 = prom<V +>{
        type11 = ld type;
        type12 = force? type11;
        checkMissing(type12);
        return type12;
      };
      r227 = dyn _get_pkg_file_pattern2[, `ext.only`](p57, TRUE);
      return r227;
    };
    p60 = prom<V +>{
      basename1 = ldf basename;
      p59 = prom<V +>{
        newpkgfiles2 = ld newpkgfiles;
        newpkgfiles3 = force? newpkgfiles2;
        checkMissing(newpkgfiles3);
        return newpkgfiles3;
      };
      r230 = dyn basename1(p59);
      return r230;
    };
    r232 = dyn gsub1(p58, "", p60);
    check L345() else D115();
  L388():
    newpkgfiles10 = ld newpkgfiles;
    check L390() else D133();
  L389():
    r265 = dyn base22(<sym newpkgfiles>);
    goto L77(r265);
  D95():
    deopt 380 [notokinds];
  D113():
    deopt 446 [c86, r224];
  D115():
    deopt 455 [r232];
  D133():
    deopt 527 [newpkgfiles10];
  D135():
    deopt 532 [numnew];
  L61():
    verbose_level21 = ld `verbose.level`;
    check L314() else D101();
  L62():
    sym18 = ldf length;
    base18 = ldf length in base;
    guard18 = `==`.4(sym18, base18);
    if guard18 then L319() else L320();
  L306():
    notokinds1 = force? notokinds;
    checkMissing(notokinds1);
    length3 = ldf length in base;
    r195 = dyn length3(notokinds1);
    check L307() else D96();
  L308():
    paste5 = ldf paste0;
    check L309() else D97();
  L341():
    goto L71(c86, r224);
  L345():
    st newpkgtmp = r232;
    strsplit = ldf strsplit;
    check L346() else D116();
  L390():
    newpkgfiles11 = force? newpkgfiles10;
    checkMissing(newpkgfiles11);
    length7 = ldf length in base;
    r267 = dyn length7(newpkgfiles11);
    check L391() else D134();
  L392():
    numnew1 = force? numnew;
    checkMissing(numnew1);
    r268 = `>`(numnew1, 0);
    c104 = `as.logical`(r268);
    if c104 then L393() else L78();
  D96():
    deopt 383 [r195];
  D97():
    deopt 387 [];
  D101():
    deopt 398 [verbose_level21];
  D116():
    deopt 458 [];
  D134():
    deopt 530 [r267];
  L64(r208):
    r210 = `>`(r208, 0);
    c77 = `as.logical`(r210);
    if c77 then L323() else L65();
  L78():
    verbose_level31 = ld `verbose.level`;
    check L448() else D169();
  L92():
    verbose_level33 = ld `verbose.level`;
    check L453() else D172();
  L307():
    goto L60(r195);
  L309():
    p51 = prom<V +>{
      sym17 = ldf length;
      base17 = ldf length in base;
      guard17 = `==`.4(sym17, base17);
      if guard17 then L1() else L2();
    L0(r198):
      return r198;
    L1():
      notokinds2 = ld notokinds;
      notokinds3 = force? notokinds2;
      checkMissing(notokinds3);
      length4 = ldf length in base;
      r199 = dyn length4(notokinds3);
      goto L0(r199);
    L2():
      r197 = dyn base17(<sym notokinds>);
      goto L0(r197);
    };
    r201 = dyn paste5("Detected ", p51, " MD5sum mismatches", " between existing PACKAGES file and tarballs");
    check L310() else D98();
  L314():
    verbose_level22 = force? verbose_level21;
    checkMissing(verbose_level22);
    r205 = `>`(verbose_level22, 0);
    c76 = `as.logical`(r205);
    if c76 then L315() else L63();
  L319():
    notokinds4 = ld notokinds;
    check L321() else D104();
  L320():
    r207 = dyn base18(<sym notokinds>);
    goto L64(r207);
  L346():
    p62 = prom<V +>{
      basename2 = ldf basename;
      p61 = prom<V +>{
        newpkgtmp = ld newpkgtmp;
        newpkgtmp1 = force? newpkgtmp;
        checkMissing(newpkgtmp1);
        return newpkgtmp1;
      };
      r234 = dyn basename2(p61);
      return r234;
    };
    r236 = dyn strsplit(p62, "_");
    check L347() else D117();
  L391():
    goto L77(r267);
  L393():
    verbose_level23 = ld `verbose.level`;
    check L394() else D136();
  D98():
    deopt 392 [r201];
  D104():
    deopt 410 [notokinds4];
  D117():
    deopt 461 [r236];
  D136():
    deopt 536 [verbose_level23];
  D169():
    deopt 668 [verbose_level31];
  D172():
    deopt 678 [verbose_level33];
  L63():
    goto L62();
  L65():
    goto L67(NULL);
  L67(dx47):
    goto L68();
  L310():
    st msg = r201;
    warning4 = ldf warning;
    check L311() else D99();
  L315():
    message5 = ldf message;
    check L316() else D102();
  L321():
    notokinds5 = force? notokinds4;
    checkMissing(notokinds5);
    length5 = ldf length in base;
    r209 = dyn length5(notokinds5);
    check L322() else D105();
  L323():
    retdat52 = ld retdat;
    check L324() else D106();
  L347():
    st newpkgspl = r236;
    do_call = ldf `do.call`;
    check L348() else D118();
  L394():
    verbose_level24 = force? verbose_level23;
    checkMissing(verbose_level24);
    r269 = `>`(verbose_level24, 0);
    c105 = `as.logical`(r269);
    if c105 then L395() else L79();
  L448():
    verbose_level32 = force? verbose_level31;
    checkMissing(verbose_level32);
    r341 = `>`(verbose_level32, 0);
    c115 = `as.logical`(r341);
    if c115 then L449() else L93();
  L453():
    verbose_level34 = force? verbose_level33;
    checkMissing(verbose_level34);
    r343 = `>`(verbose_level34, 0);
    c116 = `as.logical`(r343);
    if c116 then L454() else L94();
  D99():
    deopt 395 [];
  D102():
    deopt 403 [];
  D105():
    deopt 413 [r209];
  D106():
    deopt 416 [retdat52];
  D118():
    deopt 464 [];
  L79():
    goto L80();
  L80():
    _process_package_files_for_repository_db = ldf `.process_package_files_for_repository_db`;
    check L399() else D139();
  L93():
    goto L92();
  L94():
    goto L95();
  L95():
    retdat104 = ld retdat;
    check L460() else D177();
  L311():
    p52 = prom<V +>{
      msg6 = ld msg;
      msg7 = force? msg6;
      checkMissing(msg7);
      return msg7;
    };
    r203 = dyn warning4(p52);
    check L312() else D100();
  L316():
    r206 = dyn message5("All existing entry MD5sums match tarballs.");
    check L317() else D103();
  L322():
    goto L64(r209);
  L324():
    retdat53 = force? retdat52;
    checkMissing(retdat53);
    c78 = `is.object`(retdat53);
    if c78 then L325() else L326(retdat53);
  L348():
    p63 = prom<V +>{
      rbind_data_frame = ld `rbind.data.frame`;
      rbind_data_frame1 = force? rbind_data_frame;
      checkMissing(rbind_data_frame1);
      return rbind_data_frame1;
    };
    p64 = prom<V +>{
      sym20 = ldf c;
      base20 = ldf c in base;
      guard20 = `==`.4(sym20, base20);
      if guard20 then L1() else L2();
    L0(r239):
      return r239;
    L1():
      newpkgspl = ld newpkgspl;
      newpkgspl1 = force? newpkgspl;
      checkMissing(newpkgspl1);
      c96 = ldf c in base;
      r240 = dyn c96(newpkgspl1, FALSE);
      goto L0(r240);
    L2():
      r238 = dyn base20[, stringsAsFactors](<sym newpkgspl>, FALSE);
      goto L0(r238);
    };
    r242 = dyn do_call(p63, p64);
    check L349() else D119();
  L395():
    message6 = ldf message;
    check L396() else D137();
  L449():
    message9 = ldf message;
    check L450() else D170();
  L454():
    paste8 = ldf paste;
    check L455() else D173();
  D100():
    deopt 397 [r203];
  D103():
    deopt 405 [r206];
  D119():
    deopt 467 [r242];
  D137():
    deopt 541 [];
  D139():
    deopt 549 [];
  D170():
    deopt 673 [];
  D173():
    deopt 683 [];
  D177():
    deopt 695 [retdat104];
  L66(dx46):
    st retdat = dx46;
    goto L67(dx46);
  L312():
    goto L62();
  L317():
    goto L62();
  L325():
    dr34 = tryDispatchBuiltin.1("[", retdat53);
    dc17 = getTryDispatchBuiltinDispatched(dr34);
    if dc17 then L327() else L326(dr34);
  L326(retdat55):
    notokinds6 = ld notokinds;
    check L328() else D107();
  L349():
    st newpkgdf = r242;
    newpkgdf = ld newpkgdf;
    check L350() else D120();
  L396():
    p70 = prom<V +>{
      numnew2 = ld numnew;
      numnew3 = force? numnew2;
      checkMissing(numnew3);
      return numnew3;
    };
    r271 = dyn message6("Found ", p70, " package versions to process.");
    check L397() else D138();
  L399():
    p71 = prom<V +>{
      newpkgfiles12 = ld newpkgfiles;
      newpkgfiles13 = force? newpkgfiles12;
      checkMissing(newpkgfiles13);
      return newpkgfiles13;
    };
    p72 = prom<V +>{
      type13 = ld type;
      type14 = force? type13;
      checkMissing(type14);
      return type14;
    };
    p73 = prom<V +>{
      fields13 = ld fields;
      fields14 = force? fields13;
      checkMissing(fields14);
      return fields14;
    };
    p74 = prom<V +>{
      verbose_level25 = ld `verbose.level`;
      verbose_level26 = force? verbose_level25;
      checkMissing(verbose_level26);
      r276 = `>`(verbose_level26, 1.0);
      return r276;
    };
    r278 = dyn _process_package_files_for_repository_db(p71, p72, p73, p74);
    check L400() else D140();
  L450():
    r342 = dyn message9("No new packages or updated package versions detected");
    check L451() else D171();
  L455():
    p93 = prom<V +>{
      nrow3 = ldf nrow;
      p92 = prom<V +>{
        retdat102 = ld retdat;
        retdat103 = force? retdat102;
        checkMissing(retdat103);
        return retdat103;
      };
      r345 = dyn nrow3(p92);
      return r345;
    };
    r347 = dyn paste8("Final updated PACKAGES db contains ", p93, " entries.");
    check L456() else D174();
  L460():
    retdat105 = force? retdat104;
    checkMissing(retdat105);
    c117 = `is.object`(retdat105);
    if c117 then L461() else L462(retdat105);
  D107():
    deopt 418 [retdat55, notokinds6];
  D120():
    deopt 469 [newpkgdf];
  D138():
    deopt 545 [r271];
  D140():
    deopt 554 [r278];
  D171():
    deopt 675 [r342];
  D174():
    deopt 687 [r347];
  L96(dx81):
    st retdat = dx81;
    l19 = ld retdat;
    c120 = `is.object`(l19);
    if c120 then L467() else L468(NULL, l19);
  L327():
    dx45 = getTryDispatchBuiltinValue(dr34);
    goto L66(dx45);
  L328():
    notokinds7 = force? notokinds6;
    checkMissing(notokinds7);
    r211 = `-`(<missing>, notokinds7);
    __4 = ldf `[` in base;
    r212 = dyn __4(retdat53, r211, <missing>);
    goto L66(r212);
  L350():
    newpkgdf1 = force? newpkgdf;
    checkMissing(newpkgdf1);
    c97 = `is.object`(newpkgdf1);
    if c97 then L351() else L352();
  L397():
    goto L80();
  L400():
    st newpkgdat = r278;
    _process_repository_package_db_to_matrix = ldf `.process_repository_package_db_to_matrix`;
    check L401() else D141();
  L451():
    goto L92();
  L456():
    st msg = r347;
    message10 = ldf message;
    check L457() else D175();
  L461():
    dr60 = tryDispatchBuiltin.1("[", retdat105);
    dc30 = getTryDispatchBuiltinDispatched(dr60);
    if dc30 then L463() else L462(dr60);
  L462(retdat107):
    order = ldf order;
    check L464() else D178();
  D141():
    deopt 557 [];
  D175():
    deopt 690 [];
  D178():
    deopt 698 [retdat107];
  L73(dx52):
    st newpkgdf = dx52;
    sym21 = ldf c;
    base21 = ldf c in base;
    guard21 = `==`.4(sym21, base21);
    if guard21 then L354() else L355();
  L351():
    dr38 = tryDispatchBuiltin.1("[", newpkgdf1);
    dc19 = getTryDispatchBuiltinDispatched(dr38);
    if dc19 then L353() else L352();
  L352():
    __5 = ldf `[` in base;
    r243 = dyn __5(newpkgdf1, <missing>, <int 1, 2>);
    goto L73(r243);
  L401():
    p75 = prom<V +>{
      newpkgdat = ld newpkgdat;
      newpkgdat1 = force? newpkgdat;
      checkMissing(newpkgdat1);
      return newpkgdat1;
    };
    p76 = prom<V +>{
      addFiles3 = ld addFiles;
      addFiles4 = force? addFiles3;
      checkMissing(addFiles4);
      return addFiles4;
    };
    p77 = prom<V +>{
      latestOnly5 = ld latestOnly;
      latestOnly6 = force? latestOnly5;
      checkMissing(latestOnly6);
      return latestOnly6;
    };
    r282 = dyn _process_repository_package_db_to_matrix[, path, , addPaths, ](p75, "", p76, FALSE, p77);
    check L402() else D142();
  L457():
    p94 = prom<V +>{
      msg12 = ld msg;
      msg13 = force? msg12;
      checkMissing(msg13);
      return msg13;
    };
    r349 = dyn message10(p94);
    check L458() else D176();
  L463():
    dx80 = getTryDispatchBuiltinValue(dr60);
    goto L96(dx80);
  L464():
    p97 = prom<V +>{
      paste9 = ldf paste0;
      p95 = prom<V +>{
        retdat108 = ld retdat;
        retdat109 = force? retdat108;
        checkMissing(retdat109);
        c118 = `is.object`(retdat109);
        if c118 then L1() else L2(retdat109);
      L0(dx83):
        return dx83;
      L1():
        dr62 = tryDispatchBuiltin.1("$", retdat109);
        dc31 = getTryDispatchBuiltinDispatched(dr62);
        if dc31 then L3() else L2(dr62);
      L2(retdat111):
        r351 = `$`(retdat111, <sym Package>);
        goto L0(r351);
      L3():
        dx82 = getTryDispatchBuiltinValue(dr62);
        goto L0(dx82);
      };
      p96 = prom<V +>{
        retdat112 = ld retdat;
        retdat113 = force? retdat112;
        checkMissing(retdat113);
        c119 = `is.object`(retdat113);
        if c119 then L1() else L2(retdat113);
      L0(dx85):
        return dx85;
      L1():
        dr64 = tryDispatchBuiltin.1("$", retdat113);
        dc32 = getTryDispatchBuiltinDispatched(dr64);
        if dc32 then L3() else L2(dr64);
      L2(retdat115):
        r353 = `$`(retdat115, <sym Version>);
        goto L0(r353);
      L3():
        dx84 = getTryDispatchBuiltinValue(dr64);
        goto L0(dx84);
      };
      r355 = dyn paste9(p95, p96);
      return r355;
    };
    r357 = dyn order(p97);
    check L465() else D179();
  L466(dx87):
    st retdat = dx87;
    l22 = ld retdat;
    c121 = `is.object`(l22);
    if c121 then L471() else L472(NULL, l22);
  L467():
    dr66 = tryDispatchBuiltin.0("$<-", l19, NULL);
    dc33 = getTryDispatchBuiltinDispatched(dr66);
    if dc33 then L469() else L468(NULL, dr66);
  L468(r360, l21):
    r363 = `$<-`(l21, <sym IsNew>, NULL);
    goto L466(r363);
  D142():
    deopt 565 [r282];
  D176():
    deopt 692 [r349];
  D179():
    deopt 700 [retdat107, r357];
  L74(r245):
    l9 = ld newpkgdf;
    names__ = ldf `names<-`;
    check L357() else D122();
  L353():
    dx51 = getTryDispatchBuiltinValue(dr38);
    goto L73(dx51);
  L354():
    c98 = ldf c in base;
    r246 = dyn c98("Package", "Version");
    check L356() else D121();
  L355():
    r244 = dyn base21("Package", "Version");
    goto L74(r244);
  L402():
    st newpkgdat = r282;
    as_data_frame1 = ldf `as.data.frame`;
    check L403() else D143();
  L458():
    goto L95();
  L465():
    __8 = ldf `[` in base;
    r358 = dyn __8(retdat105, r357, <missing>);
    goto L96(r358);
  L469():
    dx86 = getTryDispatchBuiltinValue(dr66);
    goto L466(dx86);
  L470(dx89):
    st retdat = dx89;
    setdiff2 = ldf setdiff;
    check L474() else D180();
  L471():
    dr68 = tryDispatchBuiltin.0("$<-", l22, NULL);
    dc34 = getTryDispatchBuiltinDispatched(dr68);
    if dc34 then L473() else L472(NULL, dr68);
  L472(r365, l24):
    r368 = `$<-`(l24, <sym tarball>, NULL);
    goto L470(r368);
  D121():
    deopt 482 [r246];
  D122():
    deopt 484 [r245, l9, r245];
  D143():
    deopt 568 [];
  D180():
    deopt 716 [];
  L356():
    goto L74(r246);
  L357():
    r247 = dyn names__(l9, NULL, r245);
    check L358() else D123();
  L403():
    p78 = prom<V +>{
      newpkgdat2 = ld newpkgdat;
      newpkgdat3 = force? newpkgdat2;
      checkMissing(newpkgdat3);
      return newpkgdat3;
    };
    r284 = dyn as_data_frame1[, stringsAsFactors](p78, FALSE);
    check L404() else D144();
  L473():
    dx88 = getTryDispatchBuiltinValue(dr68);
    goto L470(dx88);
  L474():
    p98 = prom<V +>{
      sym28 = ldf names;
      base28 = ldf names in base;
      guard28 = `==`.4(sym28, base28);
      if guard28 then L1() else L2();
    L0(r370):
      return r370;
    L1():
      retdat116 = ld retdat;
      retdat117 = force? retdat116;
      checkMissing(retdat117);
      names3 = ldf names in base;
      r371 = dyn names3(retdat117);
      goto L0(r371);
    L2():
      r369 = dyn base28(<sym retdat>);
      goto L0(r369);
    };
    p99 = prom<V +>{
      fieldorder = ld fieldorder;
      fieldorder1 = force? fieldorder;
      checkMissing(fieldorder1);
      return fieldorder1;
    };
    r374 = dyn setdiff2(p98, p99);
    check L475() else D181();
  D123():
    deopt 486 [r245, r247];
  D144():
    deopt 572 [r284];
  D181():
    deopt 719 [r374];
  L358():
    st newpkgdf = r247;
    _filldfcols = ldf `.filldfcols`;
    check L359() else D124();
  L404():
    st newpkgdf = r284;
    sym23 = ldf identical;
    base23 = ldf identical in base;
    guard23 = `==`.4(sym23, base23);
    if guard23 then L405() else L406();
  L475():
    st noncanonfs = r374;
    fieldorder2 = ld fieldorder;
    check L476() else D182();
  D124():
    deopt 489 [];
  D182():
    deopt 721 [fieldorder2];
  L81(r286):
    r294 = `!`(r286);
    c106 = `as.logical`(r294);
    if c106 then L416() else L84();
  L359():
    p65 = prom<V +>{
      newpkgdf4 = ld newpkgdf;
      newpkgdf5 = force? newpkgdf4;
      checkMissing(newpkgdf5);
      return newpkgdf5;
    };
    p66 = prom<V +>{
      retdat60 = ld retdat;
      retdat61 = force? retdat60;
      checkMissing(retdat61);
      return retdat61;
    };
    r250 = dyn _filldfcols(p65, p66);
    check L360() else D125();
  L405():
    sym24 = ldf names;
    base24 = ldf names in base;
    guard24 = `==`.4(sym24, base24);
    if guard24 then L407() else L408();
  L406():
    r285 = dyn base23(<lang names(newpkgdf)>, <lang names(retdat)>);
    goto L81(r285);
  L476():
    fieldorder3 = force? fieldorder2;
    checkMissing(fieldorder3);
    c122 = `is.object`(fieldorder3);
    if c122 then L477() else L478(fieldorder3);
  D125():
    deopt 492 [r250];
  L82(r288):
    sym25 = ldf names;
    base25 = ldf names in base;
    guard25 = `==`.4(sym25, base25);
    if guard25 then L411() else L412();
  L84():
    goto L85();
  L85():
    verbose_level27 = ld `verbose.level`;
    check L422() else D154();
  L97(dx91):
    st canonfs = dx91;
    retdat120 = ld retdat;
    check L482() else D185();
  L360():
    st newpkgdf = r250;
    l10 = ld newpkgdf;
    c99 = `is.object`(l10);
    if c99 then L362() else L363(TRUE, l10);
  L407():
    newpkgdf8 = ld newpkgdf;
    check L409() else D145();
  L408():
    r287 = dyn base24(<sym newpkgdf>);
    goto L82(r287);
  L416():
    _filldfcols1 = ldf `.filldfcols`;
    check L417() else D150();
  L477():
    dr70 = tryDispatchBuiltin.1("[", fieldorder3);
    dc35 = getTryDispatchBuiltinDispatched(dr70);
    if dc35 then L479() else L478(dr70);
  L478(fieldorder5):
    _in_1 = ldf `%in%`;
    check L480() else D183();
  D145():
    deopt 578 [newpkgdf8];
  D150():
    deopt 599 [];
  D154():
    deopt 612 [verbose_level27];
  D183():
    deopt 724 [fieldorder5];
  D185():
    deopt 730 [retdat120];
  L83(r291):
    identical = ldf identical in base;
    r293 = dyn identical(r288, r291, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
    check L415() else D149();
  L361(dx54):
    st newpkgdf = dx54;
    newpkgfiles4 = ld newpkgfiles;
    check L365() else D126();
  L362():
    dr40 = tryDispatchBuiltin.0("$<-", l10, TRUE);
    dc20 = getTryDispatchBuiltinDispatched(dr40);
    if dc20 then L364() else L363(TRUE, dr40);
  L363(r252, l12):
    r255 = `$<-`(l12, <sym IsNew>, TRUE);
    goto L361(r255);
  L409():
    newpkgdf9 = force? newpkgdf8;
    checkMissing(newpkgdf9);
    names1 = ldf names in base;
    r289 = dyn names1(newpkgdf9);
    check L410() else D146();
  L411():
    retdat74 = ld retdat;
    check L413() else D147();
  L412():
    r290 = dyn base25(<sym retdat>);
    goto L83(r290);
  L417():
    p79 = prom<V +>{
      newpkgdf10 = ld newpkgdf;
      newpkgdf11 = force? newpkgdf10;
      checkMissing(newpkgdf11);
      return newpkgdf11;
    };
    p80 = prom<V +>{
      retdat76 = ld retdat;
      retdat77 = force? retdat76;
      checkMissing(retdat77);
      return retdat77;
    };
    r297 = dyn _filldfcols1(p79, p80);
    check L418() else D151();
  L422():
    verbose_level28 = force? verbose_level27;
    checkMissing(verbose_level28);
    r302 = `>`(verbose_level28, 0);
    c107 = `as.logical`(r302);
    if c107 then L423() else L86();
  L479():
    dx90 = getTryDispatchBuiltinValue(dr70);
    goto L97(dx90);
  L480():
    p100 = prom<V +>{
      fieldorder6 = ld fieldorder;
      fieldorder7 = force? fieldorder6;
      checkMissing(fieldorder7);
      return fieldorder7;
    };
    p101 = prom<V +>{
      sym29 = ldf names;
      base29 = ldf names in base;
      guard29 = `==`.4(sym29, base29);
      if guard29 then L1() else L2();
    L0(r377):
      return r377;
    L1():
      retdat118 = ld retdat;
      retdat119 = force? retdat118;
      checkMissing(retdat119);
      names4 = ldf names in base;
      r378 = dyn names4(retdat119);
      goto L0(r378);
    L2():
      r376 = dyn base29(<sym retdat>);
      goto L0(r376);
    };
    r380 = dyn _in_1(p100, p101);
    check L481() else D184();
  L482():
    retdat121 = force? retdat120;
    checkMissing(retdat121);
    c123 = `is.object`(retdat121);
    if c123 then L483() else L484(retdat121);
  D126():
    deopt 499 [newpkgfiles4];
  D146():
    deopt 581 [r289];
  D147():
    deopt 584 [retdat74];
  D149():
    deopt 596 [r293];
  D151():
    deopt 602 [r297];
  D184():
    deopt 727 [fieldorder5, r380];
  L86():
    goto L87();
  L87():
    l16 = ld newpkgdf;
    c108 = `is.object`(l16);
    if c108 then L430() else L431(TRUE, l16);
  L98(dx93):
    st retdat = dx93;
    dryrun3 = ld dryrun;
    check L491() else D189();
  L364():
    dx53 = getTryDispatchBuiltinValue(dr40);
    goto L361(dx53);
  L365():
    newpkgfiles5 = force? newpkgfiles4;
    checkMissing(newpkgfiles5);
    l13 = ld newpkgdf;
    c100 = `is.object`(l13);
    if c100 then L367() else L368(newpkgfiles5, l13);
  L410():
    goto L82(r289);
  L413():
    retdat75 = force? retdat74;
    checkMissing(retdat75);
    names2 = ldf names in base;
    r292 = dyn names2(retdat75);
    check L414() else D148();
  L415():
    goto L81(r293);
  L418():
    st newpkgdf = r297;
    _filldfcols2 = ldf `.filldfcols`;
    check L419() else D152();
  L423():
    paste6 = ldf paste;
    check L424() else D155();
  L481():
    __9 = ldf `[` in base;
    r381 = dyn __9(fieldorder5, r380);
    goto L97(r381);
  L483():
    dr72 = tryDispatchBuiltin.1("[", retdat121);
    dc36 = getTryDispatchBuiltinDispatched(dr72);
    if dc36 then L485() else L484(dr72);
  L484(retdat123):
    sym30 = ldf c;
    base30 = ldf c in base;
    guard30 = `==`.4(sym30, base30);
    if guard30 then L486() else L487();
  D148():
    deopt 587 [r292];
  D152():
    deopt 605 [];
  D155():
    deopt 617 [];
  D189():
    deopt 744 [dryrun3];
  L99(r383):
    __10 = ldf `[` in base;
    r385 = dyn __10(retdat121, <missing>, r383);
    goto L98(r385);
  L366(dx56):
    st newpkgdf = dx56;
    rbind = ldf rbind;
    check L370() else D127();
  L367():
    dr42 = tryDispatchBuiltin.0("$<-", l13, newpkgfiles5);
    dc21 = getTryDispatchBuiltinDispatched(dr42);
    if dc21 then L369() else L368(newpkgfiles5, dr42);
  L368(newpkgfiles7, l15):
    r256 = `$<-`(l15, <sym tarball>, newpkgfiles5);
    goto L366(r256);
  L414():
    goto L83(r292);
  L419():
    p81 = prom<V +>{
      retdat78 = ld retdat;
      retdat79 = force? retdat78;
      checkMissing(retdat79);
      return retdat79;
    };
    p82 = prom<V +>{
      newpkgdf12 = ld newpkgdf;
      newpkgdf13 = force? newpkgdf12;
      checkMissing(newpkgdf13);
      return newpkgdf13;
    };
    r300 = dyn _filldfcols2(p81, p82);
    check L420() else D153();
  L424():
    p84 = prom<V +>{
      nrow2 = ldf nrow;
      p83 = prom<V +>{
        newpkgdf14 = ld newpkgdf;
        newpkgdf15 = force? newpkgdf14;
        checkMissing(newpkgdf15);
        return newpkgdf15;
      };
      r304 = dyn nrow2(p83);
      return r304;
    };
    r306 = dyn paste6("Processed", p84, "entries from ", "package tarballs.");
    check L425() else D156();
  L429(dx71):
    st newpkgdf = dx71;
    rbind1 = ldf rbind;
    check L433() else D159();
  L430():
    dr50 = tryDispatchBuiltin.0("$<-", l16, TRUE);
    dc25 = getTryDispatchBuiltinDispatched(dr50);
    if dc25 then L432() else L431(TRUE, dr50);
  L431(r311, l18):
    r314 = `$<-`(l18, <sym IsNew>, TRUE);
    goto L429(r314);
  L485():
    dx92 = getTryDispatchBuiltinValue(dr72);
    goto L98(dx92);
  L486():
    canonfs = ld canonfs;
    check L488() else D186();
  L487():
    r382 = dyn base30(<sym canonfs>, <sym noncanonfs>);
    goto L99(r382);
  L491():
    dryrun4 = force? dryrun3;
    checkMissing(dryrun4);
    c125 = `as.logical`(dryrun4);
    if c125 then L492() else L100();
  D127():
    deopt 505 [];
  D153():
    deopt 608 [r300];
  D156():
    deopt 622 [r306];
  D159():
    deopt 636 [];
  D186():
    deopt 735 [retdat123, canonfs];
  L100():
    verbose_level37 = ld `verbose.level`;
    check L499() else D193();
  L369():
    dx55 = getTryDispatchBuiltinValue(dr42);
    goto L366(dx55);
  L370():
    p67 = prom<V +>{
      retdat62 = ld retdat;
      retdat63 = force? retdat62;
      checkMissing(retdat63);
      return retdat63;
    };
    p68 = prom<V +>{
      newpkgdf6 = ld newpkgdf;
      newpkgdf7 = force? newpkgdf6;
      checkMissing(newpkgdf7);
      return newpkgdf7;
    };
    r259 = dyn rbind(p67, p68);
    check L371() else D128();
  L420():
    st retdat = r300;
    goto L85();
  L425():
    st msg = r306;
    message7 = ldf message;
    check L426() else D157();
  L432():
    dx70 = getTryDispatchBuiltinValue(dr50);
    goto L429(dx70);
  L433():
    p86 = prom<V +>{
      retdat80 = ld retdat;
      retdat81 = force? retdat80;
      checkMissing(retdat81);
      c109 = `is.object`(retdat81);
      if c109 then L1() else L2(retdat81);
    L0(dx73):
      return dx73;
    L1():
      dr52 = tryDispatchBuiltin.1("[", retdat81);
      dc26 = getTryDispatchBuiltinDispatched(dr52);
      if dc26 then L3() else L2(dr52);
    L2(retdat83):
      retdat84 = ld retdat;
      retdat85 = force? retdat84;
      checkMissing(retdat85);
      c110 = `is.object`(retdat85);
      if c110 then L5() else L6(retdat83, retdat85);
    L3():
      dx72 = getTryDispatchBuiltinValue(dr52);
      goto L0(dx72);
    L4(dx75):
      r316 = `!`(dx75);
      __7 = ldf `[` in base;
      r317 = dyn __7(retdat81, r316, <missing>);
      goto L0(r317);
    L5():
      dr54 = tryDispatchBuiltin.1("$", retdat85);
      dc27 = getTryDispatchBuiltinDispatched(dr54);
      if dc27 then L7() else L6(retdat83, dr54);
    L6(retdat88, retdat89):
      r315 = `$`(retdat89, <sym IsNew>);
      goto L4(r315);
    L7():
      dx74 = getTryDispatchBuiltinValue(dr54);
      goto L4(dx74);
    };
    p87 = prom<V +>{
      newpkgdf16 = ld newpkgdf;
      newpkgdf17 = force? newpkgdf16;
      checkMissing(newpkgdf17);
      return newpkgdf17;
    };
    r320 = dyn rbind1(p86, p87);
    check L434() else D160();
  L488():
    canonfs1 = force? canonfs;
    checkMissing(canonfs1);
    noncanonfs = ld noncanonfs;
    check L489() else D187();
  L492():
    verbose_level35 = ld `verbose.level`;
    check L493() else D190();
  D128():
    deopt 508 [r259];
  D157():
    deopt 625 [];
  D160():
    deopt 639 [r320];
  D187():
    deopt 737 [retdat123, noncanonfs];
  D190():
    deopt 746 [verbose_level35];
  D193():
    deopt 757 [verbose_level37];
  L371():
    st retdat = r259;
    _remove_stale_dups = ldf `.remove_stale_dups`;
    check L372() else D129();
  L426():
    p85 = prom<V +>{
      msg8 = ld msg;
      msg9 = force? msg8;
      checkMissing(msg9);
      return msg9;
    };
    r308 = dyn message7(p85);
    check L427() else D158();
  L434():
    st retdat = r320;
    latestOnly7 = ld latestOnly;
    check L435() else D161();
  L489():
    noncanonfs1 = force? noncanonfs;
    checkMissing(noncanonfs1);
    c124 = ldf c in base;
    r384 = dyn c124(canonfs1, noncanonfs1);
    check L490() else D188();
  L493():
    verbose_level36 = force? verbose_level35;
    checkMissing(verbose_level36);
    r386 = `>`(verbose_level36, 0);
    c126 = `as.logical`(r386);
    if c126 then L494() else L101();
  L499():
    verbose_level38 = force? verbose_level37;
    checkMissing(verbose_level38);
    r388 = `>`(verbose_level38, 0);
    c127 = `as.logical`(r388);
    if c127 then L500() else L102();
  D129():
    deopt 511 [];
  D158():
    deopt 627 [r308];
  D161():
    deopt 641 [latestOnly7];
  D188():
    deopt 740 [retdat123, r384];
  L101():
    invisible.0();
    popenv;
    return NULL;
  L102():
    goto L103();
  L103():
    as_matrix = ldf `as.matrix`;
    check L504() else D196();
  L372():
    p69 = prom<V +>{
      retdat64 = ld retdat;
      retdat65 = force? retdat64;
      checkMissing(retdat65);
      return retdat65;
    };
    r261 = dyn _remove_stale_dups(p69);
    check L373() else D130();
  L427():
    goto L87();
  L435():
    latestOnly8 = force? latestOnly7;
    checkMissing(latestOnly8);
    c111 = `as.logical`(latestOnly8);
    if c111 then L436() else L88();
  L490():
    goto L99(r384);
  L494():
    message11 = ldf message;
    check L495() else D191();
  L500():
    message12 = ldf message;
    check L501() else D194();
  D130():
    deopt 513 [r261];
  D191():
    deopt 751 [];
  D194():
    deopt 762 [];
  D196():
    deopt 768 [];
  L88():
    goto L89();
  L89():
    verbose_level29 = ld `verbose.level`;
    check L440() else D164();
  L373():
    st retdat = r261;
    retdat66 = ld retdat;
    check L374() else D131();
  L436():
    _remove_stale_dups1 = ldf `.remove_stale_dups`;
    check L437() else D162();
  L495():
    r387 = dyn message11("[dryrun mode] Dryrun complete.");
    check L496() else D192();
  L501():
    r389 = dyn message12("Writing final updated PACKAGES files.");
    check L502() else D195();
  L504():
    p102 = prom<V +>{
      retdat127 = ld retdat;
      retdat128 = force? retdat127;
      checkMissing(retdat128);
      return retdat128;
    };
    r392 = dyn as_matrix(p102);
    check L505() else D197();
  D131():
    deopt 515 [retdat66];
  D162():
    deopt 644 [];
  D164():
    deopt 650 [verbose_level29];
  D192():
    deopt 753 [r387];
  D195():
    deopt 764 [r389];
  D197():
    deopt 770 [r392];
  L374():
    retdat67 = force? retdat66;
    checkMissing(retdat67);
    c101 = `is.object`(retdat67);
    if c101 then L376() else L377(retdat67);
  L437():
    p88 = prom<V +>{
      retdat92 = ld retdat;
      retdat93 = force? retdat92;
      checkMissing(retdat93);
      return retdat93;
    };
    r322 = dyn _remove_stale_dups1(p88);
    check L438() else D163();
  L440():
    verbose_level30 = force? verbose_level29;
    checkMissing(verbose_level30);
    r324 = `>`(verbose_level30, 0);
    c112 = `as.logical`(r324);
    if c112 then L441() else L90();
  L496():
    popenv;
    return r387;
  L502():
    goto L103();
  L505():
    st db = r392;
    _write_repository_package_db = ldf `.write_repository_package_db`;
    check L506() else D198();
  D163():
    deopt 646 [r322];
  D198():
    deopt 773 [];
  L90():
    goto L91(NULL);
  L91(r339):
    goto L92();
  L375(dx58):
    c102 = `is.object`(dx58);
    if c102 then L379() else L380(dx58);
  L376():
    dr44 = tryDispatchBuiltin.1("$", retdat67);
    dc22 = getTryDispatchBuiltinDispatched(dr44);
    if dc22 then L378() else L377(dr44);
  L377(retdat69):
    r262 = `$`(retdat69, <sym tarball>);
    goto L375(r262);
  L438():
    st retdat = r322;
    goto L89();
  L441():
    paste7 = ldf paste;
    check L442() else D165();
  L506():
    p103 = prom<V +>{
      db = ld db;
      db1 = force? db;
      checkMissing(db1);
      return db1;
    };
    p104 = prom<V +>{
      dir9 = ld dir;
      dir10 = force? dir9;
      checkMissing(dir10);
      return dir10;
    };
    p105 = prom<V +>{
      rds_compress3 = ld rds_compress;
      rds_compress4 = force? rds_compress3;
      checkMissing(rds_compress4);
      return rds_compress4;
    };
    r396 = dyn _write_repository_package_db(p103, p104, p105);
    check L507() else D199();
  D165():
    deopt 655 [];
  D199():
    deopt 777 [r396];
  L75(dx62):
    st newpkgfiles = dx62;
    goto L76();
  L378():
    dx57 = getTryDispatchBuiltinValue(dr44);
    goto L375(dx57);
  L379():
    dr46 = tryDispatchBuiltin.1("[", dx58);
    dc23 = getTryDispatchBuiltinDispatched(dr46);
    if dc23 then L381() else L380(dr46);
  L380(dx60):
    retdat70 = ld retdat;
    check L382() else D132();
  L442():
    p89 = prom<V +>{
      sym26 = ldf sum;
      base26 = ldf sum in base;
      guard26 = `==`.4(sym26, base26);
      if guard26 then L1() else L2();
    L0(r326):
      return r326;
    L1():
      retdat94 = ld retdat;
      retdat95 = force? retdat94;
      checkMissing(retdat95);
      c113 = `is.object`(retdat95);
      if c113 then L4() else L5(retdat95);
    L2():
      r325 = dyn base26(<lang `$`(retdat, IsNew)>);
      goto L0(r325);
    L3(dx77):
      sum1 = ldf sum in base;
      r328 = dyn sum1(dx77);
      goto L0(r328);
    L4():
      dr56 = tryDispatchBuiltin.1("$", retdat95);
      dc28 = getTryDispatchBuiltinDispatched(dr56);
      if dc28 then L6() else L5(dr56);
    L5(retdat97):
      r327 = `$`(retdat97, <sym IsNew>);
      goto L3(r327);
    L6():
      dx76 = getTryDispatchBuiltinValue(dr56);
      goto L3(dx76);
    };
    p90 = prom<V +>{
      sym27 = ldf sum;
      base27 = ldf sum in base;
      guard27 = `==`.4(sym27, base27);
      if guard27 then L1() else L2();
    L0(r331):
      return r331;
    L1():
      retdat98 = ld retdat;
      retdat99 = force? retdat98;
      checkMissing(retdat99);
      c114 = `is.object`(retdat99);
      if c114 then L4() else L5(retdat99);
    L2():
      r330 = dyn base27(<lang `!`(`$`(retdat, IsNew))>);
      goto L0(r330);
    L3(dx79):
      r333 = `!`(dx79);
      sum2 = ldf sum in base;
      r334 = dyn sum2(r333);
      goto L0(r334);
    L4():
      dr58 = tryDispatchBuiltin.1("$", retdat99);
      dc29 = getTryDispatchBuiltinDispatched(dr58);
      if dc29 then L6() else L5(dr58);
    L5(retdat101):
      r332 = `$`(retdat101, <sym IsNew>);
      goto L3(r332);
    L6():
      dx78 = getTryDispatchBuiltinValue(dr58);
      goto L3(dx78);
    };
    r336 = dyn paste7(p89, "entries added or updated, ", p90, " entries retained unchanged.");
    check L443() else D166();
  L507():
    st np = r396;
    verbose_level39 = ld `verbose.level`;
    check L508() else D200();
  D132():
    deopt 518 [dx60, retdat70];
  D166():
    deopt 660 [r336];
  D200():
    deopt 779 [verbose_level39];
  L381():
    dx61 = getTryDispatchBuiltinValue(dr46);
    goto L75(dx61);
  L382():
    retdat71 = force? retdat70;
    checkMissing(retdat71);
    c103 = `is.object`(retdat71);
    if c103 then L384() else L385(dx60, retdat71);
  L443():
    st msg = r336;
    message8 = ldf message;
    check L444() else D167();
  L508():
    verbose_level40 = force? verbose_level39;
    checkMissing(verbose_level40);
    r397 = `>`(verbose_level40, 0);
    c128 = `as.logical`(r397);
    if c128 then L509() else L104();
  D167():
    deopt 663 [];
  L104():
    invisible.0();
    popenv;
    return NULL;
  L383(dx67, dx68):
    __6 = ldf `[` in base;
    r264 = dyn __6(dx67, dx68);
    goto L75(r264);
  L384():
    dr48 = tryDispatchBuiltin.1("$", retdat71);
    dc24 = getTryDispatchBuiltinDispatched(dr48);
    if dc24 then L386() else L385(dx60, dr48);
  L385(dx64, retdat73):
    r263 = `$`(retdat73, <sym IsNew>);
    goto L383(dx64, r263);
  L444():
    p91 = prom<V +>{
      msg10 = ld msg;
      msg11 = force? msg10;
      checkMissing(msg11);
      return msg11;
    };
    r338 = dyn message8(p91);
    check L445() else D168();
  L509():
    message13 = ldf message;
    check L510() else D201();
  D168():
    deopt 665 [r338];
  D201():
    deopt 784 [];
  L386():
    dx66 = getTryDispatchBuiltinValue(dr48);
    goto L383(dx60, dx66);
  L445():
    goto L91(r338);
  L510():
    r398 = dyn message13("update_PACKAGES complete.");
    check L511() else D202();
  D202():
    deopt 786 [r398];
  L511():
    popenv;
    return r398;
  }
}