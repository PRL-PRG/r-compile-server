fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1284735019;
    st `.pkg2tex` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1284735019(pkgdir, outfile, internals, asChapter, encoding, outputEncoding, extraDirs, append, silent, pkglist) {
  (reg pkgdir:*, reg outfile:*, reg internals:*, reg asChapter:*, reg encoding:*, reg outputEncoding:*, reg extraDirs:*, reg append:*, reg silent:*, reg pkglist:*) -+> V { var pkgdir:*, var outfile:*, var internals:*, reg internals_isMissing:L, reg internals_orDefault:*, var asChapter:*, reg asChapter_isMissing:L, reg asChapter_orDefault:*, var encoding:*, reg encoding_isMissing:L, reg encoding_orDefault:*, var outputEncoding:*, reg outputEncoding_isMissing:L, reg outputEncoding_orDefault:*, var extraDirs:*, reg extraDirs_isMissing:L, reg extraDirs_orDefault:*, var append:*, reg append_isMissing:L, reg append_orDefault:*, var silent:*, reg silent_isMissing:L, reg silent_orDefault:*, var pkglist:*, reg pkglist_isMissing:L, reg pkglist_orDefault:*, reg normalizePath:cls, reg pkgdir1:*, reg pkgdir2:V, reg p:p(V +), reg r1:V, reg file_exists:cls, reg file_path:cls, reg path:*, reg path1:V, reg p1:p(V +), reg r3:V, reg p2:p(V +), reg r5:V, reg c:L, reg Sys_setenv:cls, reg path2:*, reg path3:V, reg p3:p(V +), reg r7:V, reg basename:cls, reg path4:*, reg path5:V, reg p4:p(V +), reg r10:V, reg r11:V, reg c1:L, reg c3:V, reg file_exists1:cls, reg file_path1:cls, reg dirname:cls, reg path6:*, reg path7:V, reg p5:p(V +), reg r13:V, reg p6:p(V +), reg r15:V, reg p7:p(V +), reg r17:V, reg c4:L, reg c5:V, reg c7:L, reg Sys_setenv1:cls, reg dirname1:cls, reg path8:*, reg path9:V, reg p8:p(V +), reg r19:V, reg p9:p(V +), reg r21:V, reg r22:cls, reg options:cls, reg r23:V, reg sym:cls, reg base:cls, reg guard:L, reg r24:V, reg r25:V, reg missing:cls, reg r26:V, reg c8:L, reg paste0:cls, reg basename1:cls, reg pkgdir3:*, reg pkgdir4:V, reg p10:p(V +), reg r28:V, reg p11:p(V +), reg r30:V, reg file_path2:cls, reg pkgdir5:*, reg pkgdir6:V, reg p12:p(V +), reg r33:V, reg dir_exists:cls, reg latexdir:*, reg latexdir1:V, reg p13:p(V +), reg r35:V, reg r36:V, reg c9:L, reg dir_exists1:cls, reg file_path3:cls, reg pkgdir7:*, reg pkgdir8:V, reg p14:p(V +), reg r38:V, reg p15:p(V +), reg r40:V, reg c10:L, reg tempfile:cls, reg r41:V, reg dir_create:cls, reg latexdir2:*, reg latexdir3:V, reg p16:p(V +), reg r43:V, reg silent1:*, reg silent2:V, reg r44:V, reg c11:L, reg message:cls, reg r45:V, reg Rd_db:cls, reg basename2:cls, reg pkgdir9:*, reg pkgdir10:V, reg p17:p(V +), reg r48:V, reg p18:p(V +), reg dirname2:cls, reg pkgdir11:*, reg pkgdir12:V, reg p19:p(V +), reg r51:V, reg p20:p(V +), reg r53:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r54:V, reg r55:V, reg Rd:*, reg Rd1:V, reg length:cls, reg r56:V, reg r57:V, reg c12:L, reg sym2:cls, reg base2:cls, reg guard2:L, reg r58:V, reg r59:V, reg outfile1:*, reg outfile2:V, reg c13:L, reg c14:L, reg close:cls, reg file:cls, reg outfile3:*, reg outfile4:V, reg p21:p(V +), reg append1:*, reg append2:V, reg c15:L, reg p22:p(V +), reg r62:V, reg p23:p(V +), reg r64:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r66:V, reg r67:V, reg character:cls, reg r68:V, reg invisible:cls, reg r69:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r72:V, reg r73:V, reg Rd2:*, reg Rd3:V, reg names:cls, reg r74:V, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c16:L, reg x:V, reg cnt:*, reg cnt1:V, reg r75:V, reg silent3:*, reg silent4:V, reg r76:V, reg c17:L, reg i6:I, reg c19:V, reg cnt2:*, reg cnt3:V, reg __:cls, reg r77:V, reg r78:V, reg c20:L, reg c21:V, reg c23:L, reg message1:cls, reg r79:V, reg i10:I, reg sub:cls, reg basename3:cls, reg f:*, reg f1:V, reg p24:p(V +), reg r82:V, reg p25:p(V +), reg r84:V, reg file_path4:cls, reg latexdir4:*, reg latexdir5:V, reg p26:p(V +), reg out:*, reg out1:V, reg p27:p(V +), reg r87:V, reg Rd2latex:cls, reg Rd4:*, reg Rd5:V, reg c24:L, reg Rd7:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg f2:*, reg f3:V, reg __1:cls, reg r88:V, reg p28:p(V +), reg outfilename:*, reg outfilename1:V, reg p29:p(V +), reg outputEncoding1:*, reg outputEncoding2:V, reg p30:p(V +), reg r92:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r93:V, reg i13:I, reg r94:V, reg res:*, reg res1:V, reg attr:cls, reg r95:V, reg c25:L, reg readLines:cls, reg outfilename2:*, reg outfilename3:V, reg p31:p(V +), reg r97:V, reg file_path5:cls, reg pkgdir13:*, reg pkgdir14:V, reg p32:p(V +), reg r99:V, reg writeLines:cls, reg sym6:cls, reg base6:cls, reg guard6:L, reg r100:V, reg r101:V, reg _file_path_to_LaTeX_graphicspath:cls, reg graphicspath:*, reg graphicspath1:V, reg p33:p(V +), reg r103:V, reg lines:*, reg lines1:V, reg c26:cls, reg r104:V, reg p34:p(V +), reg outfilename4:*, reg outfilename5:V, reg p35:p(V +), reg r107:V, reg i16:I, reg silent5:*, reg silent6:V, reg r109:V, reg c27:L, reg message2:cls, reg r110:V, reg r111:V, reg r112:V, reg file_path6:cls, reg pkgdir15:*, reg pkgdir16:V, reg p36:p(V +), reg r114:V, reg dir_exists2:cls, reg mandir:*, reg mandir1:V, reg p37:p(V +), reg r116:V, reg c28:L, reg sym7:cls, reg base7:cls, reg guard7:L, reg r117:V, reg r118:V, reg Sys_glob:cls, reg file_path7:cls, reg mandir2:*, reg mandir3:V, reg p38:p(V +), reg r120:V, reg p39:p(V +), reg r122:V, reg Sys_glob1:cls, reg file_path8:cls, reg mandir4:*, reg mandir5:V, reg p40:p(V +), reg r124:V, reg p41:p(V +), reg r126:V, reg c29:cls, reg r127:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r128:V, reg r129:V, reg extraDirs1:*, reg extraDirs2:V, reg c30:V, reg c31:L, reg _Platform:*, reg _Platform1:V, reg c32:L, reg _Platform3:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r130:V, reg extraDirs3:*, reg extraDirs4:V, reg s1:V, reg l1:I, reg i17:I, reg i18:I, reg i19:I, reg c33:L, reg x1:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r131:V, reg i24:I, reg r132:V, reg files:*, reg files1:V, reg Sys_glob2:cls, reg file_path9:cls, reg mandir6:*, reg mandir7:V, reg p42:p(V +), reg e:*, reg e1:V, reg p43:p(V +), reg r135:V, reg p44:p(V +), reg r137:V, reg Sys_glob3:cls, reg file_path10:cls, reg mandir8:*, reg mandir9:V, reg p45:p(V +), reg e2:*, reg e3:V, reg p46:p(V +), reg r140:V, reg p47:p(V +), reg r142:V, reg c34:cls, reg r143:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r144:V, reg r145:V, reg files2:*, reg files3:V, reg length1:cls, reg r146:V, reg r147:V, reg c35:L, reg stop:cls, reg sQuote:cls, reg r148:V, reg p48:p(V +), reg r150:V, reg loadPkgRdMacros:cls, reg pkgdir17:*, reg pkgdir18:V, reg p49:p(V +), reg r153:V, reg initialRdMacros:cls, reg pkglist1:*, reg pkglist2:V, reg p50:p(V +), reg macros:*, reg macros1:V, reg p51:p(V +), reg r156:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r158:V, reg r159:V, reg Sys_glob4:cls, reg file_path11:cls, reg pkgdir19:*, reg pkgdir20:V, reg p52:p(V +), reg r161:V, reg p53:p(V +), reg r163:V, reg Sys_glob5:cls, reg file_path12:cls, reg pkgdir21:*, reg pkgdir22:V, reg p54:p(V +), reg r165:V, reg p55:p(V +), reg r167:V, reg c36:cls, reg r168:V, reg sym12:cls, reg base12:cls, reg guard12:L, reg r169:V, reg r170:V, reg files4:*, reg files5:V, reg length2:cls, reg r171:V, reg r172:V, reg c37:L, reg stop1:cls, reg sQuote1:cls, reg r173:V, reg p56:p(V +), reg sQuote2:cls, reg r175:V, reg p57:p(V +), reg r177:V, reg initialRdMacros1:cls, reg pkglist3:*, reg pkglist4:V, reg p58:p(V +), reg r180:V, reg files6:*, reg files7:V, reg file_path13:cls, reg pkgdir23:*, reg pkgdir24:V, reg p59:p(V +), reg r182:V, reg file_test:cls, reg built_file:*, reg built_file1:V, reg p60:p(V +), reg r184:V, reg c38:L, reg readRDS:cls, reg built_file2:*, reg built_file3:V, reg p61:p(V +), reg r186:V, reg sym13:cls, reg base13:cls, reg guard13:L, reg r187:V, reg r188:V, reg sym14:cls, reg base14:cls, reg guard14:L, reg r189:V, reg r190:V, reg db:*, reg db1:V, reg names1:cls, reg r191:V, reg basename4:cls, reg paths:*, reg paths1:V, reg p62:p(V +), reg r193:V, reg match:cls, reg r194:V, reg as_list:cls, reg files8:*, reg files9:V, reg p63:p(V +), reg r196:V, reg db2:*, reg db3:V, reg c39:L, reg db5:V, reg dr4:V, reg dc2:L, reg dx5:V, reg dx6:V, reg pos:*, reg pos1:V, reg r197:V, reg __2:cls, reg r198:V, reg l2:*, reg c40:L, reg dx8:V, reg l4:*, reg dr6:V, reg dc3:L, reg dx10:V, reg dx11:V, reg dx12:V, reg pos2:*, reg pos3:V, reg ___:cls, reg r199:V, reg file_path14:cls, reg pkgdir25:*, reg pkgdir26:V, reg p64:p(V +), reg r201:V, reg file_test1:cls, reg built_file4:*, reg built_file5:V, reg p65:p(V +), reg r203:V, reg c41:L, reg Sys_getenv:cls, reg r204:V, reg isTRUE:cls, reg config_val_to_logical:cls, reg use:*, reg use1:V, reg p66:p(V +), reg r206:V, reg p67:p(V +), reg r208:V, reg c42:L, reg readRDS1:cls, reg built_file6:*, reg built_file7:V, reg p68:p(V +), reg r210:V, reg sym15:cls, reg base15:cls, reg guard15:L, reg r211:V, reg r212:V, reg sym16:cls, reg base16:cls, reg guard16:L, reg r213:V, reg r214:V, reg db6:*, reg db7:V, reg names2:cls, reg r215:V, reg basename5:cls, reg paths2:*, reg paths3:V, reg p69:p(V +), reg r217:V, reg match1:cls, reg r218:V, reg as_list1:cls, reg files10:*, reg files11:V, reg p70:p(V +), reg r220:V, reg db8:*, reg db9:V, reg c43:L, reg db11:V, reg dr8:V, reg dc4:L, reg dx14:V, reg dx15:V, reg pos4:*, reg pos5:V, reg r221:V, reg __3:cls, reg r222:V, reg l5:*, reg c44:L, reg dx17:V, reg l7:*, reg dr10:V, reg dc5:L, reg dx19:V, reg dx20:V, reg dx21:V, reg pos6:*, reg pos7:V, reg ___1:cls, reg r223:V, reg dx22:V, reg tempfile1:cls, reg r224:V, reg dir_create1:cls, reg latexdir6:*, reg latexdir7:V, reg p71:p(V +), reg r226:V, reg silent7:*, reg silent8:V, reg r227:V, reg c45:L, reg message3:cls, reg r228:V, reg sym17:cls, reg base17:cls, reg guard17:L, reg r230:V, reg r231:V, reg paths4:*, reg paths5:V, reg r232:I, reg s2:V, reg l8:I, reg i25:I, reg i26:I, reg i27:I, reg c46:L, reg x2:V, reg cnt4:*, reg cnt5:V, reg r233:V, reg silent9:*, reg silent10:V, reg r234:V, reg c47:L, reg i31:I, reg c49:V, reg cnt6:*, reg cnt7:V, reg __4:cls, reg r235:V, reg r236:V, reg c50:L, reg c51:V, reg c53:L, reg message4:cls, reg r237:V, reg i35:I, reg sub1:cls, reg basename6:cls, reg paths6:*, reg paths7:V, reg c54:L, reg paths9:V, reg dr12:V, reg dc6:L, reg dx24:V, reg dx25:V, reg i36:*, reg i37:V, reg __5:cls, reg r239:V, reg p72:p(V +), reg r241:V, reg p73:p(V +), reg r243:V, reg file_path15:cls, reg latexdir8:*, reg latexdir9:V, reg p74:p(V +), reg out2:*, reg out3:V, reg p75:p(V +), reg r246:V, reg Rd2latex1:cls, reg files12:*, reg files13:V, reg c55:L, reg files15:V, reg dr14:V, reg dc7:L, reg dx26:V, reg dx27:V, reg i38:*, reg i39:V, reg __6:cls, reg r247:V, reg p76:p(V +), reg outfilename6:*, reg outfilename7:V, reg p77:p(V +), reg sym18:cls, reg base18:cls, reg guard18:L, reg r250:V, reg r251:V, reg c56:cls, reg r252:V, reg p78:p(V +), reg encoding1:*, reg encoding2:V, reg p79:p(V +), reg outputEncoding3:*, reg outputEncoding4:V, reg p80:p(V +), reg macros2:*, reg macros3:V, reg p81:p(V +), reg r257:V, reg sym19:cls, reg base19:cls, reg guard19:L, reg r258:V, reg i42:I, reg r259:V, reg res2:*, reg res3:V, reg attr1:cls, reg r260:V, reg c57:L, reg readLines1:cls, reg outfilename8:*, reg outfilename9:V, reg p82:p(V +), reg r262:V, reg file_path16:cls, reg dirname3:cls, reg paths10:*, reg paths11:V, reg c58:L, reg paths13:V, reg dr16:V, reg dc8:L, reg dx28:V, reg dx29:V, reg i45:*, reg i46:V, reg __7:cls, reg r263:V, reg p83:p(V +), reg r265:V, reg p84:p(V +), reg r267:V, reg writeLines1:cls, reg sym20:cls, reg base20:cls, reg guard20:L, reg r268:V, reg r269:V, reg _file_path_to_LaTeX_graphicspath1:cls, reg graphicspath2:*, reg graphicspath3:V, reg p85:p(V +), reg r271:V, reg lines2:*, reg lines3:V, reg c59:cls, reg r272:V, reg p86:p(V +), reg outfilename10:*, reg outfilename11:V, reg p87:p(V +), reg r275:V, reg i47:I, reg silent11:*, reg silent12:V, reg r277:V, reg c60:L, reg message5:cls, reg r278:V, reg dir:cls, reg latexdir10:*, reg latexdir11:V, reg p88:p(V +), reg r281:V, reg sym21:cls, reg base21:cls, reg guard21:L, reg r282:V, reg r283:V, reg files16:*, reg files17:V, reg length3:cls, reg r284:V, reg r285:V, reg c61:L, reg stop2:cls, reg sQuote3:cls, reg r286:V, reg p89:p(V +), reg r288:V, reg sym22:cls, reg base22:cls, reg guard22:L, reg r290:V, reg r291:V, reg outfile5:*, reg outfile6:V, reg c62:L, reg c63:L, reg file1:cls, reg outfile7:*, reg outfile8:V, reg p90:p(V +), reg append3:*, reg append4:V, reg c64:L, reg p91:p(V +), reg r294:V, reg sym23:cls, reg base23:cls, reg guard23:L, reg r295:V, reg r296:V, reg on_exit:cls, reg r297:V, reg outfile9:*, reg outfile10:V, reg asChapter1:*, reg asChapter2:V, reg c65:L, reg cat:cls, reg basename7:cls, reg pkgdir27:*, reg pkgdir28:V, reg p92:p(V +), reg r300:V, reg p93:p(V +), reg outcon:*, reg outcon1:V, reg p94:p(V +), reg r303:V, reg sym24:cls, reg base24:cls, reg guard24:L, reg r305:V, reg r306:V, reg sym25:cls, reg base25:cls, reg guard25:L, reg r307:V, reg r308:V, reg files18:*, reg files19:V, reg length4:cls, reg r309:V, reg rep_int:cls, reg r310:V, reg files20:*, reg files21:V, reg l9:*, reg names__:cls, reg r311:V, reg files22:*, reg files23:V, reg s3:V, reg l10:I, reg i48:I, reg i49:I, reg i50:I, reg c66:L, reg x3:V, reg readLines2:cls, reg f4:*, reg f5:V, reg p95:p(V +), reg r313:V, reg grep:cls, reg lines4:*, reg lines5:V, reg p96:p(V +), reg r315:V, reg sym26:cls, reg base26:cls, reg guard26:L, reg r316:V, reg i55:I, reg r317:V, reg hd:*, reg hd1:V, reg length5:cls, reg r318:V, reg r319:V, reg c67:L, reg warning:cls, reg sQuote4:cls, reg f6:*, reg f7:V, reg p97:p(V +), reg r321:V, reg p98:p(V +), reg r323:V, reg sub2:cls, reg hd2:*, reg hd3:V, reg c68:L, reg hd5:V, reg dr18:V, reg dc9:L, reg dx30:V, reg dx31:V, reg __8:cls, reg r325:V, reg p99:p(V +), reg r327:V, reg internals1:*, reg internals2:V, reg r328:V, reg c69:L, reg i61:I, reg c71:V, reg sym27:cls, reg base27:cls, reg guard27:L, reg r329:V, reg i64:I, reg c74:L, reg r330:V, reg startsWith:cls, reg lines6:*, reg lines7:V, reg p100:p(V +), reg r332:V, reg any:cls, reg r333:V, reg c75:L, reg c76:V, reg c78:L, reg this:*, reg this1:V, reg l11:*, reg c79:L, reg i71:I, reg this3:V, reg l13:*, reg dr20:V, reg dc10:L, reg dx32:V, reg i73:I, reg dx33:V, reg f8:*, reg f9:V, reg ___2:cls, reg r335:V, reg topics:*, reg topics1:V, reg c80:L, reg topics3:V, reg dr22:V, reg dc11:L, reg dx34:V, reg dx35:V, reg sym28:cls, reg base28:cls, reg guard28:L, reg r336:V, reg topics6:V, reg r337:V, reg topics7:*, reg topics8:V, reg nzchar:cls, reg r338:V, reg __9:cls, reg r339:V, reg grep1:cls, reg topics9:*, reg topics10:V, reg p101:p(V +), reg r341:V, reg sym29:cls, reg base29:cls, reg guard29:L, reg r342:V, reg r343:V, reg summ:*, reg summ1:V, reg length6:cls, reg r344:V, reg c81:L, reg sym30:cls, reg base30:cls, reg guard30:L, reg r345:V, reg r346:V, reg topics11:*, reg topics12:V, reg c82:L, reg topics14:V, reg dr24:V, reg dc12:L, reg dx36:V, reg dx37:V, reg summ2:*, reg summ3:V, reg __10:cls, reg r347:V, reg re:cls, reg topics15:*, reg topics16:V, reg c83:L, reg topics18:V, reg dr26:V, reg dc13:L, reg dx38:V, reg dx39:V, reg summ4:*, reg summ5:V, reg r348:V, reg __11:cls, reg r349:V, reg p102:p(V +), reg r351:V, reg c84:cls, reg r352:V, reg r353:V, reg re1:cls, reg topics19:*, reg topics20:V, reg p103:p(V +), reg r355:V, reg sym31:cls, reg base31:cls, reg guard31:L, reg r356:V, reg r357:V, reg topics21:*, reg topics22:V, reg names3:cls, reg r358:V, reg s4:V, reg l14:I, reg i74:I, reg i75:I, reg i76:I, reg c85:L, reg x4:V, reg writeLines2:cls, reg readLines3:cls, reg f10:*, reg f11:V, reg p104:p(V +), reg r360:V, reg p105:p(V +), reg outcon2:*, reg outcon3:V, reg p106:p(V +), reg r363:V, reg asChapter3:*, reg asChapter4:V, reg c86:L, reg cat1:cls, reg outcon4:*, reg outcon5:V, reg p107:p(V +), reg r365:V, reg sym32:cls, reg base32:cls, reg guard32:L, reg r367:V, reg r368:V, reg sym33:cls, reg base33:cls, reg guard33:L, reg r369:V, reg r370:V, reg hasFigures:*, reg hasFigures1:V, reg list:cls, reg r371:V, reg invisible1:cls, reg r372:V |
    mkenv;
    st pkgdir = pkgdir;
    st outfile = outfile;
    internals_isMissing = missing.0(internals);
    if internals_isMissing then L0(FALSE) else L0(internals);
  L0(internals_orDefault):
    st internals = internals_orDefault;
    asChapter_isMissing = missing.0(asChapter);
    if asChapter_isMissing then L1(TRUE) else L1(asChapter);
  L1(asChapter_orDefault):
    st asChapter = asChapter_orDefault;
    encoding_isMissing = missing.0(encoding);
    if encoding_isMissing then L2("unknown") else L2(encoding);
  L2(encoding_orDefault):
    st encoding = encoding_orDefault;
    outputEncoding_isMissing = missing.0(outputEncoding);
    if outputEncoding_isMissing then L3("UTF-8") else L3(outputEncoding);
  L3(outputEncoding_orDefault):
    st outputEncoding = outputEncoding_orDefault;
    extraDirs_isMissing = missing.0(extraDirs);
    if extraDirs_isMissing then L4(NULL) else L4(extraDirs);
  L4(extraDirs_orDefault):
    st extraDirs = extraDirs_orDefault;
    append_isMissing = missing.0(append);
    if append_isMissing then L5(FALSE) else L5(append);
  L5(append_orDefault):
    st append = append_orDefault;
    silent_isMissing = missing.0(silent);
    if silent_isMissing then L6(FALSE) else L6(silent);
  L6(silent_orDefault):
    st silent = silent_orDefault;
    pkglist_isMissing = missing.0(pkglist);
    if pkglist_isMissing then L7(NULL) else L7(pkglist);
  L7(pkglist_orDefault):
    st pkglist = pkglist_orDefault;
    normalizePath = ldf normalizePath;
    check L116() else D0();
  D0():
    deopt 1 [];
  L116():
    p = prom<V +>{
      pkgdir1 = ld pkgdir;
      pkgdir2 = force? pkgdir1;
      checkMissing(pkgdir2);
      return pkgdir2;
    };
    r1 = dyn normalizePath(p);
    check L117() else D1();
  D1():
    deopt 3 [r1];
  L117():
    st path = r1;
    file_exists = ldf `file.exists`;
    check L118() else D2();
  D2():
    deopt 6 [];
  L118():
    p2 = prom<V +>{
      file_path = ldf `file.path`;
      p1 = prom<V +>{
        path = ld path;
        path1 = force? path;
        checkMissing(path1);
        return path1;
      };
      r3 = dyn file_path(p1, "DESCRIPTION");
      return r3;
    };
    r5 = dyn file_exists(p2);
    check L119() else D3();
  D3():
    deopt 8 [r5];
  L119():
    c = `as.logical`(r5);
    if c then L120() else L8();
  L8():
    basename = ldf basename;
    check L124() else D6();
  L9():
    r22 = clos inner2501545716;
    st re = r22;
    options = ldf options;
    check L134() else D12();
  L120():
    Sys_setenv = ldf `Sys.setenv`;
    check L121() else D4();
  D4():
    deopt 10 [];
  D6():
    deopt 15 [];
  D12():
    deopt 36 [];
  L121():
    p3 = prom<V +>{
      path2 = ld path;
      path3 = force? path2;
      checkMissing(path3);
      return path3;
    };
    r7 = dyn Sys_setenv[_R_RD_MACROS_PACKAGE_DIR_](p3);
    check L122() else D5();
  L124():
    p4 = prom<V +>{
      path4 = ld path;
      path5 = force? path4;
      checkMissing(path5);
      return path5;
    };
    r10 = dyn basename(p4);
    check L125() else D7();
  L134():
    r23 = dyn options[warn](1.0);
    check L135() else D13();
  D5():
    deopt 13 [r7];
  D7():
    deopt 17 [r10];
  D13():
    deopt 39 [r23];
  L122():
    goto L9();
  L125():
    r11 = `==`(r10, "man");
    c1 = `as.logical`(r11);
    if c1 then L126() else L10(c1);
  L135():
    sym = ldf missing;
    base = ldf missing in base;
    guard = `==`.4(sym, base);
    if guard then L136() else L137();
  L10(c3):
    c7 = `as.logical`(c3);
    if c7 then L130() else L11();
  L12(r25):
    c8 = `as.logical`(r25);
    if c8 then L138() else L13();
  L126():
    file_exists1 = ldf `file.exists`;
    check L127() else D8();
  L136():
    missing = ldf missing in base;
    r26 = dyn missing(<sym outfile>);
    goto L12(r26);
  L137():
    r24 = dyn base(<sym outfile>);
    goto L12(r24);
  D8():
    deopt 21 [c1];
  L11():
    goto L9();
  L13():
    goto L14();
  L14():
    st hasFigures = FALSE;
    file_path2 = ldf `file.path`;
    check L142() else D16();
  L127():
    p7 = prom<V +>{
      file_path1 = ldf `file.path`;
      p6 = prom<V +>{
        dirname = ldf dirname;
        p5 = prom<V +>{
          path6 = ld path;
          path7 = force? path6;
          checkMissing(path7);
          return path7;
        };
        r13 = dyn dirname(p5);
        return r13;
      };
      r15 = dyn file_path1(p6, "DESCRIPTION");
      return r15;
    };
    r17 = dyn file_exists1(p7);
    check L128() else D9();
  L130():
    Sys_setenv1 = ldf `Sys.setenv`;
    check L131() else D10();
  L138():
    paste0 = ldf paste0;
    check L139() else D14();
  D9():
    deopt 23 [c1, r17];
  D10():
    deopt 26 [];
  D14():
    deopt 44 [];
  D16():
    deopt 55 [];
  L128():
    c4 = `as.logical`(r17);
    c5 = `&&`(c1, c4);
    goto L10(c5);
  L131():
    p9 = prom<V +>{
      dirname1 = ldf dirname;
      p8 = prom<V +>{
        path8 = ld path;
        path9 = force? path8;
        checkMissing(path9);
        return path9;
      };
      r19 = dyn dirname1(p8);
      return r19;
    };
    r21 = dyn Sys_setenv1[_R_RD_MACROS_PACKAGE_DIR_](p9);
    check L132() else D11();
  L139():
    p11 = prom<V +>{
      basename1 = ldf basename;
      p10 = prom<V +>{
        pkgdir3 = ld pkgdir;
        pkgdir4 = force? pkgdir3;
        checkMissing(pkgdir4);
        return pkgdir4;
      };
      r28 = dyn basename1(p10);
      return r28;
    };
    r30 = dyn paste0(p11, "-pkg.tex");
    check L140() else D15();
  L142():
    p12 = prom<V +>{
      pkgdir5 = ld pkgdir;
      pkgdir6 = force? pkgdir5;
      checkMissing(pkgdir6);
      return pkgdir6;
    };
    r33 = dyn file_path2(p12, "latex");
    check L143() else D17();
  D11():
    deopt 29 [r21];
  D15():
    deopt 47 [r30];
  D17():
    deopt 58 [r33];
  L132():
    goto L9();
  L140():
    st outfile = r30;
    goto L14();
  L143():
    st latexdir = r33;
    dir_exists = ldf `dir.exists`;
    check L144() else D18();
  D18():
    deopt 61 [];
  L144():
    p13 = prom<V +>{
      latexdir = ld latexdir;
      latexdir1 = force? latexdir;
      checkMissing(latexdir1);
      return latexdir1;
    };
    r35 = dyn dir_exists(p13);
    check L145() else D19();
  D19():
    deopt 63 [r35];
  L145():
    r36 = `!`(r35);
    c9 = `as.logical`(r36);
    if c9 then L146() else L15();
  L15():
    goto L80();
  L80():
    dir = ldf dir;
    check L391() else D169();
  L146():
    dir_exists1 = ldf `dir.exists`;
    check L147() else D20();
  D20():
    deopt 66 [];
  D169():
    deopt 596 [];
  L147():
    p15 = prom<V +>{
      file_path3 = ldf `file.path`;
      p14 = prom<V +>{
        pkgdir7 = ld pkgdir;
        pkgdir8 = force? pkgdir7;
        checkMissing(pkgdir8);
        return pkgdir8;
      };
      r38 = dyn file_path3(p14, "help");
      return r38;
    };
    r40 = dyn dir_exists1(p15);
    check L148() else D21();
  L391():
    p88 = prom<V +>{
      latexdir10 = ld latexdir;
      latexdir11 = force? latexdir10;
      checkMissing(latexdir11);
      return latexdir11;
    };
    r281 = dyn dir[, pattern, `full.names`](p88, "\\.tex$", TRUE);
    check L392() else D170();
  D21():
    deopt 68 [r40];
  D170():
    deopt 602 [r281];
  L148():
    c10 = `as.logical`(r40);
    if c10 then L149() else L16();
  L392():
    st files = r281;
    sym21 = ldf length;
    base21 = ldf length in base;
    guard21 = `==`.4(sym21, base21);
    if guard21 then L393() else L394();
  L16():
    file_path6 = ldf `file.path`;
    check L219() else D64();
  L37(r112):
    goto L80();
  L81(r283):
    r285 = `!`(r283);
    c61 = `as.logical`(r285);
    if c61 then L397() else L82();
  L149():
    tempfile = ldf tempfile;
    check L150() else D22();
  L393():
    files16 = ld files;
    check L395() else D171();
  L394():
    r282 = dyn base21(<sym files>);
    goto L81(r282);
  D22():
    deopt 70 [];
  D64():
    deopt 229 [];
  D171():
    deopt 606 [files16];
  L82():
    goto L83();
  L83():
    sym22 = ldf `is.character`;
    base22 = ldf `is.character` in base;
    guard22 = `==`.4(sym22, base22);
    if guard22 then L401() else L402();
  L150():
    r41 = dyn tempfile("ltx");
    check L151() else D23();
  L219():
    p36 = prom<V +>{
      pkgdir15 = ld pkgdir;
      pkgdir16 = force? pkgdir15;
      checkMissing(pkgdir16);
      return pkgdir16;
    };
    r114 = dyn file_path6(p36, "man");
    check L220() else D65();
  L395():
    files17 = force? files16;
    checkMissing(files17);
    length3 = ldf length in base;
    r284 = dyn length3(files17);
    check L396() else D172();
  L397():
    stop2 = ldf stop;
    check L398() else D173();
  D23():
    deopt 72 [r41];
  D65():
    deopt 232 [r114];
  D172():
    deopt 609 [r284];
  D173():
    deopt 612 [];
  L84(r291):
    c63 = `as.logical`(r291);
    if c63 then L404() else L85();
  L151():
    st latexdir = r41;
    dir_create = ldf `dir.create`;
    check L152() else D24();
  L220():
    st mandir = r114;
    dir_exists2 = ldf `dir.exists`;
    check L221() else D66();
  L396():
    goto L81(r284);
  L398():
    p89 = prom<V +>{
      sQuote3 = ldf sQuote;
      r286 = dyn sQuote3("latex");
      return r286;
    };
    r288 = dyn stop2[, , , domain]("no validly-named files in the ", p89, " directory", NA_LGL);
    check L399() else D174();
  L401():
    outfile5 = ld outfile;
    check L403() else D175();
  L402():
    r290 = dyn base22(<sym outfile>);
    goto L84(r290);
  D24():
    deopt 75 [];
  D66():
    deopt 235 [];
  D174():
    deopt 618 [r288];
  D175():
    deopt 622 [outfile5];
  L85():
    outfile9 = ld outfile;
    check L410() else D178();
  L87():
    asChapter1 = ld asChapter;
    check L411() else D179();
  L152():
    p16 = prom<V +>{
      latexdir2 = ld latexdir;
      latexdir3 = force? latexdir2;
      checkMissing(latexdir3);
      return latexdir3;
    };
    r43 = dyn dir_create(p16);
    check L153() else D25();
  L221():
    p37 = prom<V +>{
      mandir = ld mandir;
      mandir1 = force? mandir;
      checkMissing(mandir1);
      return mandir1;
    };
    r116 = dyn dir_exists2(p37);
    check L222() else D67();
  L399():
    goto L83();
  L403():
    outfile6 = force? outfile5;
    checkMissing(outfile6);
    c62 = `is.character`(outfile6);
    goto L84(c62);
  L404():
    file1 = ldf file;
    check L405() else D176();
  D25():
    deopt 77 [r43];
  D67():
    deopt 237 [r116];
  D176():
    deopt 626 [];
  D178():
    deopt 634 [outfile9];
  D179():
    deopt 637 [asChapter1];
  L153():
    silent1 = ld silent;
    check L154() else D26();
  L222():
    c28 = `as.logical`(r116);
    if c28 then L223() else L38();
  L405():
    p90 = prom<V +>{
      outfile7 = ld outfile;
      outfile8 = force? outfile7;
      checkMissing(outfile8);
      return outfile8;
    };
    p91 = prom<V +>{
      append3 = ld append;
      append4 = force? append3;
      checkMissing(append4);
      c64 = `as.logical`(append4);
      if c64 then L1() else L0();
    L0():
      return "wt";
    L1():
      return "at";
    };
    r294 = dyn file1(p90, p91);
    check L406() else D177();
  L410():
    outfile10 = force? outfile9;
    checkMissing(outfile10);
    st outcon = outfile10;
    goto L87();
  L411():
    asChapter2 = force? asChapter1;
    checkMissing(asChapter2);
    c65 = `as.logical`(asChapter2);
    if c65 then L412() else L88();
  D26():
    deopt 78 [silent1];
  D177():
    deopt 629 [r294];
  L38():
    sym11 = ldf c;
    base11 = ldf c in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L264() else L265();
  L49():
    files6 = ld files;
    check L281() else D101();
  L88():
    goto L89();
  L89():
    sym24 = ldf `rep.int`;
    base24 = ldf `rep.int` in base;
    guard24 = `==`.4(sym24, base24);
    if guard24 then L416() else L417();
  L154():
    silent2 = force? silent1;
    checkMissing(silent2);
    r44 = `!`(silent2);
    c11 = `as.logical`(r44);
    if c11 then L155() else L17();
  L223():
    sym7 = ldf c;
    base7 = ldf c in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L224() else L225();
  L406():
    st outcon = r294;
    sym23 = ldf `on.exit`;
    base23 = ldf `on.exit` in base;
    guard23 = `==`.4(sym23, base23);
    if guard23 then L407() else L408();
  L412():
    cat = ldf cat;
    check L413() else D180();
  D101():
    deopt 346 [files6];
  D180():
    deopt 640 [];
  L17():
    goto L18();
  L18():
    Rd_db = ldf Rd_db;
    check L159() else D29();
  L39(r118):
    st files = r118;
    sym8 = ldf `is.null`;
    base8 = ldf `is.null` in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L231() else L232();
  L50(r159):
    st files = r159;
    sym12 = ldf length;
    base12 = ldf length in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L271() else L272();
  L86(r296):
    goto L87();
  L90(r306):
    st topics = r306;
    files20 = ld files;
    check L423() else D185();
  L155():
    message = ldf message;
    check L156() else D27();
  L224():
    Sys_glob = ldf `Sys.glob`;
    check L226() else D68();
  L225():
    r117 = dyn base7(<lang Sys.glob(file.path(mandir, "*.Rd"))>, <lang Sys.glob(file.path(mandir, "*.rd"))>);
    goto L39(r117);
  L264():
    Sys_glob4 = ldf `Sys.glob`;
    check L266() else D90();
  L265():
    r158 = dyn base11(<lang Sys.glob(file.path(pkgdir, "*.Rd"))>, <lang Sys.glob(file.path(pkgdir, "*.rd"))>);
    goto L50(r158);
  L281():
    files7 = force? files6;
    checkMissing(files7);
    st paths = files7;
    file_path13 = ldf `file.path`;
    check L282() else D102();
  L407():
    on_exit = ldf `on.exit` in base;
    r297 = dyn on_exit(<lang close(outcon)>);
    goto L86(r297);
  L408():
    r295 = dyn base23(<lang close(outcon)>);
    goto L86(r295);
  L413():
    p93 = prom<V +>{
      basename7 = ldf basename;
      p92 = prom<V +>{
        pkgdir27 = ld pkgdir;
        pkgdir28 = force? pkgdir27;
        checkMissing(pkgdir28);
        return pkgdir28;
      };
      r300 = dyn basename7(p92);
      return r300;
    };
    p94 = prom<V +>{
      outcon = ld outcon;
      outcon1 = force? outcon;
      checkMissing(outcon1);
      return outcon1;
    };
    r303 = dyn cat[, , , sep, file]("\n\\chapter{The \\texttt{", p93, "} package}\n", "", p94);
    check L414() else D181();
  L416():
    sym25 = ldf length;
    base25 = ldf length in base;
    guard25 = `==`.4(sym25, base25);
    if guard25 then L418() else L419();
  L417():
    r305 = dyn base24("", <lang length(files)>);
    goto L90(r305);
  D27():
    deopt 82 [];
  D29():
    deopt 92 [];
  D68():
    deopt 241 [];
  D90():
    deopt 312 [];
  D102():
    deopt 350 [];
  D181():
    deopt 648 [r303];
  D185():
    deopt 663 [files20];
  L40(r129):
    c31 = `as.logical`(r129);
    if c31 then L234() else L41();
  L51(r170):
    r172 = `!`(r170);
    c37 = `as.logical`(r172);
    if c37 then L275() else L52();
  L91(r308):
    rep_int = ldf `rep.int` in base;
    r310 = dyn rep_int("", r308);
    check L422() else D184();
  L156():
    r45 = dyn message[, appendLF, domain]("Converting parsed Rd's to LaTeX ", FALSE, NA_LGL);
    check L157() else D28();
  L159():
    p18 = prom<V +>{
      basename2 = ldf basename;
      p17 = prom<V +>{
        pkgdir9 = ld pkgdir;
        pkgdir10 = force? pkgdir9;
        checkMissing(pkgdir10);
        return pkgdir10;
      };
      r48 = dyn basename2(p17);
      return r48;
    };
    p20 = prom<V +>{
      dirname2 = ldf dirname;
      p19 = prom<V +>{
        pkgdir11 = ld pkgdir;
        pkgdir12 = force? pkgdir11;
        checkMissing(pkgdir12);
        return pkgdir12;
      };
      r51 = dyn dirname2(p19);
      return r51;
    };
    r53 = dyn Rd_db[, `lib.loc`](p18, p20);
    check L160() else D30();
  L226():
    p39 = prom<V +>{
      file_path7 = ldf `file.path`;
      p38 = prom<V +>{
        mandir2 = ld mandir;
        mandir3 = force? mandir2;
        checkMissing(mandir3);
        return mandir3;
      };
      r120 = dyn file_path7(p38, "*.Rd");
      return r120;
    };
    r122 = dyn Sys_glob(p39);
    check L227() else D69();
  L231():
    extraDirs1 = ld extraDirs;
    check L233() else D73();
  L232():
    r128 = dyn base8(<sym extraDirs>);
    goto L40(r128);
  L266():
    p53 = prom<V +>{
      file_path11 = ldf `file.path`;
      p52 = prom<V +>{
        pkgdir19 = ld pkgdir;
        pkgdir20 = force? pkgdir19;
        checkMissing(pkgdir20);
        return pkgdir20;
      };
      r161 = dyn file_path11(p52, "*.Rd");
      return r161;
    };
    r163 = dyn Sys_glob4(p53);
    check L267() else D91();
  L271():
    files4 = ld files;
    check L273() else D95();
  L272():
    r169 = dyn base12(<sym files>);
    goto L51(r169);
  L282():
    p59 = prom<V +>{
      pkgdir23 = ld pkgdir;
      pkgdir24 = force? pkgdir23;
      checkMissing(pkgdir24);
      return pkgdir24;
    };
    r182 = dyn file_path13(p59, "build", "partial.rdb");
    check L283() else D103();
  L414():
    goto L89();
  L418():
    files18 = ld files;
    check L420() else D182();
  L419():
    r307 = dyn base25(<sym files>);
    goto L91(r307);
  L423():
    files21 = force? files20;
    checkMissing(files21);
    l9 = ld topics;
    names__ = ldf `names<-`;
    check L424() else D186();
  D28():
    deopt 88 [r45];
  D30():
    deopt 96 [r53];
  D69():
    deopt 243 [r122];
  D73():
    deopt 252 [extraDirs1];
  D91():
    deopt 314 [r163];
  D95():
    deopt 324 [files4];
  D103():
    deopt 354 [r182];
  D182():
    deopt 656 [files18];
  D184():
    deopt 661 [r310];
  D186():
    deopt 666 [files21, l9, files21];
  L41():
    goto L42();
  L42():
    extraDirs3 = ld extraDirs;
    check L241() else D75();
  L52():
    goto L53();
  L53():
    initialRdMacros1 = ldf initialRdMacros;
    check L279() else D99();
  L157():
    goto L18();
  L160():
    st Rd = r53;
    sym1 = ldf length;
    base1 = ldf length in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L161() else L162();
  L227():
    Sys_glob1 = ldf `Sys.glob`;
    check L228() else D70();
  L233():
    extraDirs2 = force? extraDirs1;
    checkMissing(extraDirs2);
    c30 = `==`(extraDirs2, NULL);
    goto L40(c30);
  L234():
    _Platform = ld `.Platform`;
    check L235() else D74();
  L267():
    Sys_glob5 = ldf `Sys.glob`;
    check L268() else D92();
  L273():
    files5 = force? files4;
    checkMissing(files5);
    length2 = ldf length in base;
    r171 = dyn length2(files5);
    check L274() else D96();
  L275():
    stop1 = ldf stop;
    check L276() else D97();
  L283():
    st built_file = r182;
    file_test = ldf file_test;
    check L284() else D104();
  L420():
    files19 = force? files18;
    checkMissing(files19);
    length4 = ldf length in base;
    r309 = dyn length4(files19);
    check L421() else D183();
  L422():
    goto L90(r310);
  L424():
    r311 = dyn names__(l9, NULL, files21);
    check L425() else D187();
  D70():
    deopt 245 [];
  D74():
    deopt 255 [_Platform];
  D75():
    deopt 261 [extraDirs3];
  D92():
    deopt 316 [];
  D96():
    deopt 327 [r171];
  D97():
    deopt 330 [];
  D99():
    deopt 342 [];
  D104():
    deopt 357 [];
  D183():
    deopt 659 [r309];
  D187():
    deopt 668 [files21, r311];
  L19(r55):
    r57 = `!`(r55);
    c12 = `as.logical`(r57);
    if c12 then L165() else L20();
  L161():
    Rd = ld Rd;
    check L163() else D31();
  L162():
    r54 = dyn base1(<sym Rd>);
    goto L19(r54);
  L228():
    p41 = prom<V +>{
      file_path8 = ldf `file.path`;
      p40 = prom<V +>{
        mandir4 = ld mandir;
        mandir5 = force? mandir4;
        checkMissing(mandir5);
        return mandir5;
      };
      r124 = dyn file_path8(p40, "*.rd");
      return r124;
    };
    r126 = dyn Sys_glob1(p41);
    check L229() else D71();
  L235():
    _Platform1 = force? _Platform;
    checkMissing(_Platform1);
    c32 = `is.object`(_Platform1);
    if c32 then L237() else L238(_Platform1);
  L241():
    extraDirs4 = force? extraDirs3;
    checkMissing(extraDirs4);
    s1 = toForSeq(extraDirs4);
    l1 = length(s1);
    i17 = 0;
    goto L43(i17);
  L268():
    p55 = prom<V +>{
      file_path12 = ldf `file.path`;
      p54 = prom<V +>{
        pkgdir21 = ld pkgdir;
        pkgdir22 = force? pkgdir21;
        checkMissing(pkgdir22);
        return pkgdir22;
      };
      r165 = dyn file_path12(p54, "*.rd");
      return r165;
    };
    r167 = dyn Sys_glob5(p55);
    check L269() else D93();
  L274():
    goto L51(r171);
  L276():
    p56 = prom<V +>{
      sQuote1 = ldf sQuote;
      r173 = dyn sQuote1("latex");
      return r173;
    };
    p57 = prom<V +>{
      sQuote2 = ldf sQuote;
      r175 = dyn sQuote2("man");
      return r175;
    };
    r177 = dyn stop1[, , , , , domain]("this package does not have either a ", p56, " or a (source) ", p57, " directory", NA_LGL);
    check L277() else D98();
  L279():
    p58 = prom<V +>{
      pkglist3 = ld pkglist;
      pkglist4 = force? pkglist3;
      checkMissing(pkglist4);
      return pkglist4;
    };
    r180 = dyn initialRdMacros1(p58);
    check L280() else D100();
  L284():
    p60 = prom<V +>{
      built_file = ld built_file;
      built_file1 = force? built_file;
      checkMissing(built_file1);
      return built_file1;
    };
    r184 = dyn file_test("-f", p60);
    check L285() else D105();
  L421():
    goto L91(r309);
  L425():
    st topics = r311;
    files22 = ld files;
    check L426() else D188();
  D31():
    deopt 100 [Rd];
  D71():
    deopt 247 [r126];
  D93():
    deopt 318 [r167];
  D98():
    deopt 338 [r177];
  D100():
    deopt 344 [r180];
  D105():
    deopt 360 [r184];
  D188():
    deopt 670 [files22];
  L20():
    st cnt = 0;
    sym4 = ldf names;
    base4 = ldf names in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L180() else L181();
  L43(i18):
    i19 = `+`.1(i18, 1);
    c33 = `<`.1(l1, i19);
    if c33 then L242() else L45();
  L163():
    Rd1 = force? Rd;
    checkMissing(Rd1);
    length = ldf length in base;
    r56 = dyn length(Rd1);
    check L164() else D32();
  L165():
    sym2 = ldf `is.character`;
    base2 = ldf `is.character` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L166() else L167();
  L229():
    c29 = ldf c in base;
    r127 = dyn c29(r122, r126);
    check L230() else D72();
  L236(dx3):
    st extraDirs = dx3;
    goto L42();
  L237():
    dr2 = tryDispatchBuiltin.1("$", _Platform1);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L239() else L238(dr2);
  L238(_Platform3):
    r130 = `$`(_Platform3, <sym OS.type>);
    goto L236(r130);
  L269():
    c36 = ldf c in base;
    r168 = dyn c36(r163, r167);
    check L270() else D94();
  L277():
    goto L53();
  L280():
    st macros = r180;
    goto L49();
  L285():
    c38 = `as.logical`(r184);
    if c38 then L286() else L54();
  L426():
    files23 = force? files22;
    checkMissing(files23);
    s3 = toForSeq(files23);
    l10 = length(s3);
    i48 = 0;
    goto L92(i48);
  D32():
    deopt 103 [r56];
  D72():
    deopt 249 [r127];
  D94():
    deopt 320 [r168];
  L21(r59):
    c14 = `as.logical`(r59);
    if c14 then L169() else L22();
  L26(r73):
    s = toForSeq(r73);
    l = length(s);
    i = 0;
    goto L27(i);
  L45():
    x1 = `[[`(s1, i19, NULL, TRUE);
    st e = x1;
    sym9 = ldf c;
    base9 = ldf c in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L243() else L244();
  L54():
    goto L59();
  L59():
    file_path14 = ldf `file.path`;
    check L310() else D118();
  L92(i49):
    i50 = `+`.1(i49, 1);
    c66 = `<`.1(l10, i50);
    if c66 then L427() else L101();
  L164():
    goto L19(r56);
  L166():
    outfile1 = ld outfile;
    check L168() else D33();
  L167():
    r58 = dyn base2(<sym outfile>);
    goto L21(r58);
  L180():
    Rd2 = ld Rd;
    check L182() else D39();
  L181():
    r72 = dyn base4(<sym Rd>);
    goto L26(r72);
  L230():
    goto L39(r127);
  L239():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L236(dx2);
  L242():
    sym10 = ldf length;
    base10 = ldf length in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L251() else L252();
  L270():
    goto L50(r168);
  L286():
    readRDS = ldf readRDS;
    check L287() else D106();
  D33():
    deopt 106 [outfile1];
  D39():
    deopt 130 [Rd2];
  D106():
    deopt 362 [];
  D118():
    deopt 403 [];
  L22():
    goto L23();
  L23():
    sym3 = ldf invisible;
    base3 = ldf invisible in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L173() else L174();
  L27(i1):
    i2 = `+`.1(i1, 1);
    c16 = `<`.1(l, i2);
    if c16 then L184() else L34();
  L44(i24, r132):
    st files = r132;
    goto L43(i24);
  L46(r145):
    r147 = `!`(r145);
    c35 = `as.logical`(r147);
    if c35 then L255() else L47();
  L101():
    x3 = `[[`(s3, i50, NULL, TRUE);
    st f = x3;
    readLines2 = ldf readLines;
    check L428() else D189();
  L168():
    outfile2 = force? outfile1;
    checkMissing(outfile2);
    c13 = `is.character`(outfile2);
    goto L21(c13);
  L169():
    close = ldf close;
    check L170() else D34();
  L182():
    Rd3 = force? Rd2;
    checkMissing(Rd3);
    names = ldf names in base;
    r74 = dyn names(Rd3);
    check L183() else D40();
  L243():
    files = ld files;
    check L245() else D76();
  L244():
    r131 = dyn base9(<sym files>, <lang Sys.glob(file.path(mandir, e, "*.Rd"))>, <lang Sys.glob(file.path(mandir, e, "*.rd"))>);
    goto L44(i19, r131);
  L251():
    files2 = ld files;
    check L253() else D82();
  L252():
    r144 = dyn base10(<sym files>);
    goto L46(r144);
  L287():
    p61 = prom<V +>{
      built_file2 = ld built_file;
      built_file3 = force? built_file2;
      checkMissing(built_file3);
      return built_file3;
    };
    r186 = dyn readRDS(p61);
    check L288() else D107();
  L310():
    p64 = prom<V +>{
      pkgdir25 = ld pkgdir;
      pkgdir26 = force? pkgdir25;
      checkMissing(pkgdir26);
      return pkgdir26;
    };
    r201 = dyn file_path14(p64, "build", "stage23.rdb");
    check L311() else D119();
  L427():
    topics = ld topics;
    check L459() else D205();
  D34():
    deopt 110 [];
  D40():
    deopt 133 [r74];
  D76():
    deopt 265 [i19, files];
  D82():
    deopt 283 [files2];
  D107():
    deopt 364 [r186];
  D119():
    deopt 407 [r201];
  D189():
    deopt 673 [i50];
  D205():
    deopt 744 [topics];
  L24(r67):
    popenv;
    return r67;
  L34():
    x = `[[`(s, i2, NULL, TRUE);
    st f = x;
    cnt = ld cnt;
    check L185() else D41();
  L47():
    goto L48();
  L48():
    loadPkgRdMacros = ldf loadPkgRdMacros;
    check L259() else D86();
  L170():
    p23 = prom<V +>{
      file = ldf file;
      p21 = prom<V +>{
        outfile3 = ld outfile;
        outfile4 = force? outfile3;
        checkMissing(outfile4);
        return outfile4;
      };
      p22 = prom<V +>{
        append1 = ld append;
        append2 = force? append1;
        checkMissing(append2);
        c15 = `as.logical`(append2);
        if c15 then L1() else L0();
      L0():
        return "wt";
      L1():
        return "at";
      };
      r62 = dyn file(p21, p22);
      return r62;
    };
    r64 = dyn close(p23);
    check L171() else D35();
  L173():
    character = ldf character;
    check L175() else D36();
  L174():
    r66 = dyn base3(<lang character()>);
    goto L24(r66);
  L183():
    goto L26(r74);
  L184():
    silent5 = ld silent;
    check L213() else D61();
  L245():
    files1 = force? files;
    checkMissing(files1);
    Sys_glob2 = ldf `Sys.glob`;
    check L246() else D77();
  L253():
    files3 = force? files2;
    checkMissing(files3);
    length1 = ldf length in base;
    r146 = dyn length1(files3);
    check L254() else D83();
  L255():
    stop = ldf stop;
    check L256() else D84();
  L288():
    st db = r186;
    sym13 = ldf match;
    base13 = ldf match in base;
    guard13 = `==`.4(sym13, base13);
    if guard13 then L289() else L290();
  L311():
    st built_file = r201;
    file_test1 = ldf file_test;
    check L312() else D120();
  L428():
    p95 = prom<V +>{
      f4 = ld f;
      f5 = force? f4;
      checkMissing(f5);
      return f5;
    };
    r313 = dyn readLines2(p95);
    check L429() else D190();
  L459():
    topics1 = force? topics;
    checkMissing(topics1);
    c80 = `is.object`(topics1);
    if c80 then L460() else L461(topics1);
  D35():
    deopt 112 [r64];
  D36():
    deopt 118 [];
  D41():
    deopt 134 [i2, cnt];
  D61():
    deopt 218 [silent5];
  D77():
    deopt 268 [i19];
  D83():
    deopt 286 [r146];
  D84():
    deopt 289 [];
  D86():
    deopt 299 [];
  D120():
    deopt 410 [];
  D190():
    deopt 675 [i50, r313];
  L55(r188):
    st pos = r188;
    as_list = ldf `as.list`;
    check L298() else D113();
  L102(dx35):
    st topics = dx35;
    grep1 = ldf grep;
    check L467() else D208();
  L171():
    goto L23();
  L175():
    r68 = dyn character();
    check L176() else D37();
  L185():
    cnt1 = force? cnt;
    checkMissing(cnt1);
    r75 = `+`(cnt1, 1);
    st cnt = r75;
    silent3 = ld silent;
    check L186() else D42();
  L213():
    silent6 = force? silent5;
    checkMissing(silent6);
    r109 = `!`(silent6);
    c27 = `as.logical`(r109);
    if c27 then L214() else L35();
  L246():
    p44 = prom<V +>{
      file_path9 = ldf `file.path`;
      p42 = prom<V +>{
        mandir6 = ld mandir;
        mandir7 = force? mandir6;
        checkMissing(mandir7);
        return mandir7;
      };
      p43 = prom<V +>{
        e = ld e;
        e1 = force? e;
        checkMissing(e1);
        return e1;
      };
      r135 = dyn file_path9(p42, p43, "*.Rd");
      return r135;
    };
    r137 = dyn Sys_glob2(p44);
    check L247() else D78();
  L254():
    goto L46(r146);
  L256():
    p48 = prom<V +>{
      sQuote = ldf sQuote;
      r148 = dyn sQuote("man");
      return r148;
    };
    r150 = dyn stop[, , , domain]("this package has a ", p48, " directory but no .Rd files", NA_LGL);
    check L257() else D85();
  L259():
    p49 = prom<V +>{
      pkgdir17 = ld pkgdir;
      pkgdir18 = force? pkgdir17;
      checkMissing(pkgdir18);
      return pkgdir18;
    };
    r153 = dyn loadPkgRdMacros(p49);
    check L260() else D87();
  L289():
    sym14 = ldf names;
    base14 = ldf names in base;
    guard14 = `==`.4(sym14, base14);
    if guard14 then L291() else L292();
  L290():
    r187 = dyn base13[, , nomatch](<lang names(db)>, <lang basename(paths)>, 0);
    goto L55(r187);
  L312():
    p65 = prom<V +>{
      built_file4 = ld built_file;
      built_file5 = force? built_file4;
      checkMissing(built_file5);
      return built_file5;
    };
    r203 = dyn file_test1("-f", p65);
    check L313() else D121();
  L429():
    st lines = r313;
    grep = ldf grep;
    check L430() else D191();
  L460():
    dr22 = tryDispatchBuiltin.1("[", topics1);
    dc11 = getTryDispatchBuiltinDispatched(dr22);
    if dc11 then L462() else L461(dr22);
  L461(topics3):
    sym28 = ldf nzchar;
    base28 = ldf nzchar in base;
    guard28 = `==`.4(sym28, base28);
    if guard28 then L463() else L464();
  D37():
    deopt 119 [r68];
  D42():
    deopt 139 [i2, silent3];
  D78():
    deopt 270 [i19, r137];
  D85():
    deopt 295 [r150];
  D87():
    deopt 301 [r153];
  D113():
    deopt 384 [];
  D121():
    deopt 413 [r203];
  D191():
    deopt 678 [i50];
  D208():
    deopt 755 [];
  L35():
    goto L36(NULL);
  L36(r111):
    goto L37(r111);
  L56(r190):
    basename4 = ldf basename;
    check L295() else D110();
  L103(topics6, r337):
    __9 = ldf `[` in base;
    r339 = dyn __9(topics6, r337);
    goto L102(r339);
  L176():
    invisible = ldf invisible in base;
    r69 = dyn invisible(r68);
    check L177() else D38();
  L186():
    silent4 = force? silent3;
    checkMissing(silent4);
    r76 = `!`(silent4);
    c17 = `as.logical`(r76);
    if c17 then L187() else L28(i2, c17);
  L214():
    message2 = ldf message;
    check L215() else D62();
  L247():
    Sys_glob3 = ldf `Sys.glob`;
    check L248() else D79();
  L257():
    goto L48();
  L260():
    st macros = r153;
    initialRdMacros = ldf initialRdMacros;
    check L261() else D88();
  L291():
    db = ld db;
    check L293() else D108();
  L292():
    r189 = dyn base14(<sym db>);
    goto L56(r189);
  L298():
    p63 = prom<V +>{
      files8 = ld files;
      files9 = force? files8;
      checkMissing(files9);
      return files9;
    };
    r196 = dyn as_list(p63);
    check L299() else D114();
  L313():
    c41 = `as.logical`(r203);
    if c41 then L314() else L60();
  L430():
    p96 = prom<V +>{
      lines4 = ld lines;
      lines5 = force? lines4;
      checkMissing(lines5);
      return lines5;
    };
    r315 = dyn grep[, , value, perl, useBytes]("^\\\\HeaderA", p96, TRUE, TRUE, TRUE);
    check L431() else D192();
  L462():
    dx34 = getTryDispatchBuiltinValue(dr22);
    goto L102(dx34);
  L463():
    topics7 = ld topics;
    check L465() else D206();
  L464():
    r336 = dyn base28(<sym topics>);
    goto L103(topics3, r336);
  L467():
    p101 = prom<V +>{
      topics9 = ld topics;
      topics10 = force? topics9;
      checkMissing(topics10);
      return topics10;
    };
    r341 = dyn grep1[, , perl]("-package$", p101, TRUE);
    check L468() else D209();
  D38():
    deopt 121 [r69];
  D62():
    deopt 222 [];
  D79():
    deopt 272 [i19];
  D88():
    deopt 304 [];
  D108():
    deopt 370 [db];
  D110():
    deopt 375 [];
  D114():
    deopt 386 [r196];
  D192():
    deopt 687 [i50, r315];
  D206():
    deopt 748 [topics3, topics7];
  D209():
    deopt 760 [r341];
  L28(i6, c19):
    c23 = `as.logical`(c19);
    if c23 then L191() else L29();
  L60():
    goto L67();
  L67():
    tempfile1 = ldf tempfile;
    check L344() else D138();
  L177():
    goto L24(r69);
  L187():
    cnt2 = ld cnt;
    check L188() else D43();
  L215():
    r110 = dyn message2[domain](NA_LGL);
    check L216() else D63();
  L248():
    p47 = prom<V +>{
      file_path10 = ldf `file.path`;
      p45 = prom<V +>{
        mandir8 = ld mandir;
        mandir9 = force? mandir8;
        checkMissing(mandir9);
        return mandir9;
      };
      p46 = prom<V +>{
        e2 = ld e;
        e3 = force? e2;
        checkMissing(e3);
        return e3;
      };
      r140 = dyn file_path10(p45, p46, "*.rd");
      return r140;
    };
    r142 = dyn Sys_glob3(p47);
    check L249() else D80();
  L261():
    p50 = prom<V +>{
      pkglist1 = ld pkglist;
      pkglist2 = force? pkglist1;
      checkMissing(pkglist2);
      return pkglist2;
    };
    p51 = prom<V +>{
      macros = ld macros;
      macros1 = force? macros;
      checkMissing(macros1);
      return macros1;
    };
    r156 = dyn initialRdMacros(p50, p51);
    check L262() else D89();
  L293():
    db1 = force? db;
    checkMissing(db1);
    names1 = ldf names in base;
    r191 = dyn names1(db1);
    check L294() else D109();
  L295():
    p62 = prom<V +>{
      paths = ld paths;
      paths1 = force? paths;
      checkMissing(paths1);
      return paths1;
    };
    r193 = dyn basename4(p62);
    check L296() else D111();
  L299():
    st files = r196;
    db2 = ld db;
    check L300() else D115();
  L314():
    Sys_getenv = ldf `Sys.getenv`;
    check L315() else D122();
  L431():
    st hd = r315;
    sym26 = ldf length;
    base26 = ldf length in base;
    guard26 = `==`.4(sym26, base26);
    if guard26 then L432() else L433();
  L465():
    topics8 = force? topics7;
    checkMissing(topics8);
    nzchar = ldf nzchar in base;
    r338 = dyn nzchar(topics8);
    check L466() else D207();
  L468():
    st summ = r341;
    sym29 = ldf length;
    base29 = ldf length in base;
    guard29 = `==`.4(sym29, base29);
    if guard29 then L469() else L470();
  D43():
    deopt 143 [i2, c17, cnt2];
  D63():
    deopt 225 [r110];
  D80():
    deopt 274 [i19, r142];
  D89():
    deopt 307 [r156];
  D109():
    deopt 373 [r191];
  D111():
    deopt 377 [r193];
  D115():
    deopt 388 [db2];
  D122():
    deopt 415 [];
  D138():
    deopt 468 [];
  D207():
    deopt 751 [topics3, r338];
  L29():
    goto L30(i6);
  L30(i10):
    sub = ldf sub;
    check L195() else D47();
  L93(i55, r317):
    r319 = `!`(r317);
    c67 = `as.logical`(r319);
    if c67 then L436() else L94();
  L104(r343):
    c81 = `as.logical`(r343);
    if c81 then L473() else L105();
  L188():
    cnt3 = force? cnt2;
    checkMissing(cnt3);
    __ = ldf `%%` in base;
    r77 = dyn __(cnt3, 10);
    check L189() else D44();
  L191():
    message1 = ldf message;
    check L192() else D45();
  L216():
    goto L36(r110);
  L249():
    c34 = ldf c in base;
    r143 = dyn c34(files1, r137, r142);
    check L250() else D81();
  L262():
    st macros = r156;
    goto L49();
  L294():
    goto L56(r191);
  L296():
    match = ldf match in base;
    r194 = dyn match(r190, r193, 0, NULL);
    check L297() else D112();
  L300():
    db3 = force? db2;
    checkMissing(db3);
    c39 = `is.object`(db3);
    if c39 then L301() else L302(db3);
  L315():
    r204 = dyn Sys_getenv("_RD2PDF_USE_BUILT_STAGE23_RD_DB_IF_AVAILABLE_", "FALSE");
    check L316() else D123();
  L344():
    r224 = dyn tempfile1("ltx");
    check L345() else D139();
  L432():
    hd = ld hd;
    check L434() else D193();
  L433():
    r316 = dyn base26(<sym hd>);
    goto L93(i50, r316);
  L466():
    goto L103(topics3, r338);
  L469():
    summ = ld summ;
    check L471() else D210();
  L470():
    r342 = dyn base29(<sym summ>);
    goto L104(r342);
  D44():
    deopt 147 [i2, c17, r77];
  D45():
    deopt 152 [i6];
  D47():
    deopt 162 [i10];
  D81():
    deopt 276 [i19, r143];
  D112():
    deopt 381 [r194];
  D123():
    deopt 418 [r204];
  D139():
    deopt 470 [r224];
  D193():
    deopt 691 [i50, hd];
  D210():
    deopt 764 [summ];
  L57(dx6):
    l2 = ld files;
    c40 = `is.object`(l2);
    if c40 then L305() else L306(dx6, l2);
  L94():
    sub2 = ldf sub;
    check L441() else D197();
  L105():
    re1 = ldf re;
    check L485() else D217();
  L108(r353):
    st topics = r353;
    sym31 = ldf names;
    base31 = ldf names in base;
    guard31 = `==`.4(sym31, base31);
    if guard31 then L487() else L488();
  L189():
    r78 = `==`(r77, 0);
    c20 = `as.logical`(r78);
    c21 = `&&`(c17, c20);
    goto L28(i2, c21);
  L192():
    r79 = dyn message1[, appendLF, domain](".", FALSE, NA_LGL);
    check L193() else D46();
  L195():
    p25 = prom<V +>{
      basename3 = ldf basename;
      p24 = prom<V +>{
        f = ld f;
        f1 = force? f;
        checkMissing(f1);
        return f1;
      };
      r82 = dyn basename3(p24);
      return r82;
    };
    r84 = dyn sub("[Rr]d$", "tex", p25);
    check L196() else D48();
  L250():
    goto L44(i19, r143);
  L297():
    goto L55(r194);
  L301():
    dr4 = tryDispatchBuiltin.1("[", db3);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L303() else L302(dr4);
  L302(db5):
    pos = ld pos;
    check L304() else D116();
  L316():
    st use = r204;
    isTRUE = ldf isTRUE;
    check L317() else D124();
  L345():
    st latexdir = r224;
    dir_create1 = ldf `dir.create`;
    check L346() else D140();
  L434():
    hd1 = force? hd;
    checkMissing(hd1);
    length5 = ldf length in base;
    r318 = dyn length5(hd1);
    check L435() else D194();
  L436():
    warning = ldf warning;
    check L437() else D195();
  L471():
    summ1 = force? summ;
    checkMissing(summ1);
    length6 = ldf length in base;
    r344 = dyn length6(summ1);
    check L472() else D211();
  L473():
    sym30 = ldf c;
    base30 = ldf c in base;
    guard30 = `==`.4(sym30, base30);
    if guard30 then L474() else L475();
  D46():
    deopt 158 [i6, r79];
  D48():
    deopt 166 [i10, r84];
  D116():
    deopt 390 [db5, pos];
  D124():
    deopt 421 [];
  D140():
    deopt 473 [];
  D194():
    deopt 694 [i50, r318];
  D195():
    deopt 697 [i55];
  D197():
    deopt 709 [i55];
  D211():
    deopt 767 [r344];
  D217():
    deopt 782 [];
  L58(dx11, dx12):
    st files = dx12;
    goto L59();
  L106(r346):
    goto L108(r346);
  L109(r357):
    s4 = toForSeq(r357);
    l14 = length(s4);
    i74 = 0;
    goto L110(i74);
  L193():
    goto L30(i6);
  L196():
    st out = r84;
    file_path4 = ldf `file.path`;
    check L197() else D49();
  L303():
    dx5 = getTryDispatchBuiltinValue(dr4);
    goto L57(dx5);
  L304():
    pos1 = force? pos;
    checkMissing(pos1);
    r197 = `>`(pos1, 0);
    __2 = ldf `[` in base;
    r198 = dyn __2(db5, r197);
    goto L57(r198);
  L305():
    dr6 = tryDispatchBuiltin.0("[<-", l2, dx6);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L307() else L306(dx6, dr6);
  L306(dx8, l4):
    pos2 = ld pos;
    check L308() else D117();
  L317():
    p67 = prom<V +>{
      config_val_to_logical = ldf config_val_to_logical;
      p66 = prom<V +>{
        use = ld use;
        use1 = force? use;
        checkMissing(use1);
        return use1;
      };
      r206 = dyn config_val_to_logical(p66);
      return r206;
    };
    r208 = dyn isTRUE(p67);
    check L318() else D125();
  L346():
    p71 = prom<V +>{
      latexdir6 = ld latexdir;
      latexdir7 = force? latexdir6;
      checkMissing(latexdir7);
      return latexdir7;
    };
    r226 = dyn dir_create1(p71);
    check L347() else D141();
  L435():
    goto L93(i50, r318);
  L437():
    p98 = prom<V +>{
      sQuote4 = ldf sQuote;
      p97 = prom<V +>{
        f6 = ld f;
        f7 = force? f6;
        checkMissing(f7);
        return f7;
      };
      r321 = dyn sQuote4(p97);
      return r321;
    };
    r323 = dyn warning[, , , domain]("file ", p98, " lacks a header: skipping", NA_LGL);
    check L438() else D196();
  L441():
    p99 = prom<V +>{
      hd2 = ld hd;
      hd3 = force? hd2;
      checkMissing(hd3);
      c68 = `is.object`(hd3);
      if c68 then L1() else L2(hd3);
    L0(dx31):
      return dx31;
    L1():
      dr18 = tryDispatchBuiltin.1("[", hd3);
      dc9 = getTryDispatchBuiltinDispatched(dr18);
      if dc9 then L3() else L2(dr18);
    L2(hd5):
      __8 = ldf `[` in base;
      r325 = dyn __8(hd5, 1);
      goto L0(r325);
    L3():
      dx30 = getTryDispatchBuiltinValue(dr18);
      goto L0(dx30);
    };
    r327 = dyn sub2[, , , perl]("\\\\HeaderA\\{\\s*([^}]*)\\}.*", "\\1", p99, TRUE);
    check L442() else D198();
  L472():
    goto L104(r344);
  L474():
    topics11 = ld topics;
    check L476() else D212();
  L475():
    r345 = dyn base30(<lang `[`(topics, summ)>, <lang re(`[`(topics, `-`(summ)))>);
    goto L106(r345);
  L485():
    p103 = prom<V +>{
      topics19 = ld topics;
      topics20 = force? topics19;
      checkMissing(topics20);
      return topics20;
    };
    r355 = dyn re1(p103);
    check L486() else D218();
  L487():
    topics21 = ld topics;
    check L489() else D219();
  L488():
    r356 = dyn base31(<sym topics>);
    goto L109(r356);
  D49():
    deopt 169 [i10];
  D117():
    deopt 396 [dx8, l4, dx6, pos2];
  D125():
    deopt 423 [r208];
  D141():
    deopt 475 [r226];
  D196():
    deopt 703 [i55, r323];
  D198():
    deopt 715 [i55, r327];
  D212():
    deopt 770 [topics11];
  D218():
    deopt 784 [r355];
  D219():
    deopt 788 [topics21];
  L110(i75):
    i76 = `+`.1(i75, 1);
    c85 = `<`.1(l14, i76);
    if c85 then L491() else L111();
  L197():
    p26 = prom<V +>{
      latexdir4 = ld latexdir;
      latexdir5 = force? latexdir4;
      checkMissing(latexdir5);
      return latexdir5;
    };
    p27 = prom<V +>{
      out = ld out;
      out1 = force? out;
      checkMissing(out1);
      return out1;
    };
    r87 = dyn file_path4(p26, p27);
    check L198() else D50();
  L307():
    dx10 = getTryDispatchBuiltinValue(dr6);
    goto L58(dx6, dx10);
  L308():
    pos3 = force? pos2;
    ___ = ldf `[<-` in base;
    r199 = dyn ___(l4, dx6, pos3);
    goto L58(dx8, r199);
  L318():
    c42 = `as.logical`(r208);
    if c42 then L319() else L61();
  L347():
    silent7 = ld silent;
    check L348() else D142();
  L438():
    goto L92(i55);
  L442():
    st this = r327;
    internals1 = ld internals;
    check L443() else D199();
  L476():
    topics12 = force? topics11;
    checkMissing(topics12);
    c82 = `is.object`(topics12);
    if c82 then L477() else L478(topics12);
  L486():
    goto L108(r355);
  L489():
    topics22 = force? topics21;
    checkMissing(topics22);
    names3 = ldf names in base;
    r358 = dyn names3(topics22);
    check L490() else D220();
  D50():
    deopt 172 [i10, r87];
  D142():
    deopt 476 [silent7];
  D199():
    deopt 717 [i55, internals1];
  D220():
    deopt 791 [r358];
  L61():
    goto L66(NULL);
  L66(dx22):
    goto L67();
  L107(dx37):
    re = ldf re;
    check L481() else D214();
  L111():
    x4 = `[[`(s4, i76, NULL, TRUE);
    st f = x4;
    writeLines2 = ldf writeLines;
    check L492() else D221();
  L198():
    st outfilename = r87;
    Rd2latex = ldf Rd2latex;
    check L199() else D51();
  L319():
    readRDS1 = ldf readRDS;
    check L320() else D126();
  L348():
    silent8 = force? silent7;
    checkMissing(silent8);
    r227 = `!`(silent8);
    c45 = `as.logical`(r227);
    if c45 then L349() else L68();
  L443():
    internals2 = force? internals1;
    checkMissing(internals2);
    r328 = `!`(internals2);
    c69 = `as.logical`(r328);
    if c69 then L444() else L96(i55, c69);
  L477():
    dr24 = tryDispatchBuiltin.1("[", topics12);
    dc12 = getTryDispatchBuiltinDispatched(dr24);
    if dc12 then L479() else L478(dr24);
  L478(topics14):
    summ2 = ld summ;
    check L480() else D213();
  L490():
    goto L109(r358);
  L491():
    asChapter3 = ld asChapter;
    check L494() else D223();
  D51():
    deopt 175 [i10];
  D126():
    deopt 425 [];
  D213():
    deopt 772 [topics14, summ2];
  D214():
    deopt 776 [];
  D221():
    deopt 793 [i76];
  D223():
    deopt 800 [asChapter3];
  L68():
    goto L69();
  L69():
    st cnt = 0;
    sym17 = ldf seq_along;
    base17 = ldf seq_along in base;
    guard17 = `==`.4(sym17, base17);
    if guard17 then L353() else L354();
  L96(i61, c71):
    c78 = `as.logical`(c71);
    if c78 then L451() else L98();
  L199():
    p28 = prom<V +>{
      Rd4 = ld Rd;
      Rd5 = force? Rd4;
      checkMissing(Rd5);
      c24 = `is.object`(Rd5);
      if c24 then L1() else L2(Rd5);
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("[[", Rd5);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(Rd7):
      f2 = ld f;
      f3 = force? f2;
      __1 = ldf `[[` in base;
      r88 = dyn __1(Rd7, f3);
      goto L0(r88);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    p29 = prom<V +>{
      outfilename = ld outfilename;
      outfilename1 = force? outfilename;
      checkMissing(outfilename1);
      return outfilename1;
    };
    p30 = prom<V +>{
      outputEncoding1 = ld outputEncoding;
      outputEncoding2 = force? outputEncoding1;
      checkMissing(outputEncoding2);
      return outputEncoding2;
    };
    r92 = dyn Rd2latex[, , outputEncoding, defines, writeEncoding](p28, p29, p30, NULL, FALSE);
    check L200() else D52();
  L320():
    p68 = prom<V +>{
      built_file6 = ld built_file;
      built_file7 = force? built_file6;
      checkMissing(built_file7);
      return built_file7;
    };
    r210 = dyn readRDS1(p68);
    check L321() else D127();
  L349():
    message3 = ldf message;
    check L350() else D143();
  L444():
    sym27 = ldf any;
    base27 = ldf any in base;
    guard27 = `==`.4(sym27, base27);
    if guard27 then L445() else L446();
  L479():
    dx36 = getTryDispatchBuiltinValue(dr24);
    goto L107(dx36);
  L480():
    summ3 = force? summ2;
    __10 = ldf `[` in base;
    r347 = dyn __10(topics14, summ3);
    goto L107(r347);
  L481():
    p102 = prom<V +>{
      topics15 = ld topics;
      topics16 = force? topics15;
      checkMissing(topics16);
      c83 = `is.object`(topics16);
      if c83 then L1() else L2(topics16);
    L0(dx39):
      return dx39;
    L1():
      dr26 = tryDispatchBuiltin.1("[", topics16);
      dc13 = getTryDispatchBuiltinDispatched(dr26);
      if dc13 then L3() else L2(dr26);
    L2(topics18):
      summ4 = ld summ;
      summ5 = force? summ4;
      checkMissing(summ5);
      r348 = `-`(<missing>, summ5);
      __11 = ldf `[` in base;
      r349 = dyn __11(topics18, r348);
      goto L0(r349);
    L3():
      dx38 = getTryDispatchBuiltinValue(dr26);
      goto L0(dx38);
    };
    r351 = dyn re(p102);
    check L482() else D215();
  L492():
    p105 = prom<V +>{
      readLines3 = ldf readLines;
      p104 = prom<V +>{
        f10 = ld f;
        f11 = force? f10;
        checkMissing(f11);
        return f11;
      };
      r360 = dyn readLines3(p104);
      return r360;
    };
    p106 = prom<V +>{
      outcon2 = ld outcon;
      outcon3 = force? outcon2;
      checkMissing(outcon3);
      return outcon3;
    };
    r363 = dyn writeLines2(p105, p106);
    check L493() else D222();
  L494():
    asChapter4 = force? asChapter3;
    checkMissing(asChapter4);
    c86 = `as.logical`(asChapter4);
    if c86 then L495() else L112();
  D52():
    deopt 184 [i10, r92];
  D127():
    deopt 427 [r210];
  D143():
    deopt 480 [];
  D215():
    deopt 778 [r351];
  D222():
    deopt 796 [i76, r363];
  L70(r231):
    s2 = toForSeq(r231);
    l8 = length(s2);
    i25 = 0;
    goto L71(i25);
  L97(i64, c74, r330):
    c75 = `as.logical`(r330);
    c76 = `&&`(c74, c75);
    goto L96(i64, c76);
  L98():
    this = ld this;
    check L454() else D203();
  L112():
    goto L113();
  L113():
    sym32 = ldf invisible;
    base32 = ldf invisible in base;
    guard32 = `==`.4(sym32, base32);
    if guard32 then L499() else L500();
  L200():
    st res = r92;
    sym5 = ldf attr;
    base5 = ldf attr in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L201() else L202();
  L321():
    st db = r210;
    sym15 = ldf match;
    base15 = ldf match in base;
    guard15 = `==`.4(sym15, base15);
    if guard15 then L322() else L323();
  L350():
    r228 = dyn message3[, appendLF, domain]("Converting Rd files to LaTeX ", FALSE, NA_LGL);
    check L351() else D144();
  L353():
    paths4 = ld paths;
    check L355() else D145();
  L354():
    r230 = dyn base17(<sym paths>);
    goto L70(r230);
  L445():
    startsWith = ldf startsWith;
    check L447() else D200();
  L446():
    r329 = dyn base27(<lang startsWith(lines, "\\keyword{internal}")>);
    goto L97(i55, c69, r329);
  L451():
    goto L92(i61);
  L482():
    c84 = ldf c in base;
    r352 = dyn c84(dx37, r351);
    check L483() else D216();
  L493():
    goto L110(i76);
  L495():
    cat1 = ldf cat;
    check L496() else D224();
  D144():
    deopt 486 [r228];
  D145():
    deopt 493 [paths4];
  D200():
    deopt 723 [i55, c69];
  D203():
    deopt 734 [i61, this];
  D216():
    deopt 780 [r352];
  D224():
    deopt 803 [];
  L31(i13, r94):
    c25 = `as.logical`(r94);
    if c25 then L205() else L32();
  L62(r212):
    st pos = r212;
    as_list1 = ldf `as.list`;
    check L331() else D133();
  L71(i26):
    i27 = `+`.1(i26, 1);
    c46 = `<`.1(l8, i27);
    if c46 then L356() else L78();
  L114(r368):
    popenv;
    return r368;
  L201():
    res = ld res;
    check L203() else D53();
  L202():
    r93 = dyn base5(<sym res>, "hasFigures");
    goto L31(i10, r93);
  L322():
    sym16 = ldf names;
    base16 = ldf names in base;
    guard16 = `==`.4(sym16, base16);
    if guard16 then L324() else L325();
  L323():
    r211 = dyn base15[, , nomatch](<lang names(db)>, <lang basename(paths)>, 0);
    goto L62(r211);
  L351():
    goto L69();
  L355():
    paths5 = force? paths4;
    checkMissing(paths5);
    r232 = seq_along(paths5);
    goto L70(r232);
  L447():
    p100 = prom<V +>{
      lines6 = ld lines;
      lines7 = force? lines6;
      checkMissing(lines7);
      return lines7;
    };
    r332 = dyn startsWith(p100, "\\keyword{internal}");
    check L448() else D201();
  L454():
    this1 = force? this;
    checkMissing(this1);
    l11 = ld topics;
    c79 = `is.object`(l11);
    if c79 then L455() else L456(i61, this1, l11);
  L483():
    goto L106(r352);
  L496():
    p107 = prom<V +>{
      outcon4 = ld outcon;
      outcon5 = force? outcon4;
      checkMissing(outcon5);
      return outcon5;
    };
    r365 = dyn cat1[, file]("\\clearpage\n", p107);
    check L497() else D225();
  L499():
    sym33 = ldf list;
    base33 = ldf list in base;
    guard33 = `==`.4(sym33, base33);
    if guard33 then L501() else L502();
  L500():
    r367 = dyn base32(<lang list(hasFigures=hasFigures)>);
    goto L114(r367);
  D53():
    deopt 188 [i10, res];
  D133():
    deopt 447 [];
  D201():
    deopt 726 [i55, c69, r332];
  D225():
    deopt 807 [r365];
  L32():
    goto L33(i13);
  L33(i16):
    goto L27(i16);
  L63(r214):
    basename5 = ldf basename;
    check L328() else D130();
  L78():
    x2 = `[[`(s2, i27, NULL, TRUE);
    st i = x2;
    cnt4 = ld cnt;
    check L357() else D146();
  L100(i73, dx33):
    st topics = dx33;
    goto L92(i73);
  L115(r370):
    invisible1 = ldf invisible in base;
    r372 = dyn invisible1(r370);
    check L505() else D228();
  L203():
    res1 = force? res;
    checkMissing(res1);
    attr = ldf attr in base;
    r95 = dyn attr(res1, "hasFigures");
    check L204() else D54();
  L205():
    readLines = ldf readLines;
    check L206() else D55();
  L324():
    db6 = ld db;
    check L326() else D128();
  L325():
    r213 = dyn base16(<sym db>);
    goto L63(r213);
  L331():
    p70 = prom<V +>{
      files10 = ld files;
      files11 = force? files10;
      checkMissing(files11);
      return files11;
    };
    r220 = dyn as_list1(p70);
    check L332() else D134();
  L356():
    silent11 = ld silent;
    check L385() else D166();
  L448():
    any = ldf any in base;
    r333 = dyn any(r332);
    check L449() else D202();
  L455():
    dr20 = tryDispatchBuiltin.0("[<-", l11, this1);
    dc10 = getTryDispatchBuiltinDispatched(dr20);
    if dc10 then L457() else L456(i61, this1, dr20);
  L456(i71, this3, l13):
    f8 = ld f;
    check L458() else D204();
  L497():
    goto L113();
  L501():
    hasFigures = ld hasFigures;
    check L503() else D226();
  L502():
    r369 = dyn base33[hasFigures](<sym hasFigures>);
    goto L115(r369);
  D54():
    deopt 192 [i10, r95];
  D55():
    deopt 194 [i13];
  D128():
    deopt 433 [db6];
  D130():
    deopt 438 [];
  D134():
    deopt 449 [r220];
  D146():
    deopt 496 [i27, cnt4];
  D166():
    deopt 583 [silent11];
  D202():
    deopt 728 [i55, c69, r333];
  D204():
    deopt 737 [i71, this3, l13, this1, f8];
  D226():
    deopt 814 [hasFigures];
  D228():
    deopt 820 [r372];
  L204():
    goto L31(i10, r95);
  L206():
    p31 = prom<V +>{
      outfilename2 = ld outfilename;
      outfilename3 = force? outfilename2;
      checkMissing(outfilename3);
      return outfilename3;
    };
    r97 = dyn readLines(p31);
    check L207() else D56();
  L326():
    db7 = force? db6;
    checkMissing(db7);
    names2 = ldf names in base;
    r215 = dyn names2(db7);
    check L327() else D129();
  L328():
    p69 = prom<V +>{
      paths2 = ld paths;
      paths3 = force? paths2;
      checkMissing(paths3);
      return paths3;
    };
    r217 = dyn basename5(p69);
    check L329() else D131();
  L332():
    st files = r220;
    db8 = ld db;
    check L333() else D135();
  L357():
    cnt5 = force? cnt4;
    checkMissing(cnt5);
    r233 = `+`(cnt5, 1);
    st cnt = r233;
    silent9 = ld silent;
    check L358() else D147();
  L385():
    silent12 = force? silent11;
    checkMissing(silent12);
    r277 = `!`(silent12);
    c60 = `as.logical`(r277);
    if c60 then L386() else L79();
  L449():
    goto L97(i55, c69, r333);
  L457():
    dx32 = getTryDispatchBuiltinValue(dr20);
    goto L100(i61, dx32);
  L458():
    f9 = force? f8;
    ___2 = ldf `[<-` in base;
    r335 = dyn ___2(l13, this1, f9);
    goto L100(i71, r335);
  L503():
    hasFigures1 = force? hasFigures;
    checkMissing(hasFigures1);
    list = ldf list in base;
    r371 = dyn list(hasFigures1);
    check L504() else D227();
  L505():
    goto L114(r372);
  D56():
    deopt 196 [i13, r97];
  D129():
    deopt 436 [r215];
  D131():
    deopt 440 [r217];
  D135():
    deopt 451 [db8];
  D147():
    deopt 501 [i27, silent9];
  D227():
    deopt 818 [r371];
  L79():
    goto L37(NULL);
  L207():
    st lines = r97;
    file_path5 = ldf `file.path`;
    check L208() else D57();
  L327():
    goto L63(r215);
  L329():
    match1 = ldf match in base;
    r218 = dyn match1(r214, r217, 0, NULL);
    check L330() else D132();
  L333():
    db9 = force? db8;
    checkMissing(db9);
    c43 = `is.object`(db9);
    if c43 then L334() else L335(db9);
  L358():
    silent10 = force? silent9;
    checkMissing(silent10);
    r234 = `!`(silent10);
    c47 = `as.logical`(r234);
    if c47 then L359() else L72(i27, c47);
  L386():
    message5 = ldf message;
    check L387() else D167();
  L504():
    goto L115(r371);
  D57():
    deopt 199 [i13];
  D132():
    deopt 444 [r218];
  D167():
    deopt 587 [];
  L64(dx15):
    l5 = ld files;
    c44 = `is.object`(l5);
    if c44 then L338() else L339(dx15, l5);
  L72(i31, c49):
    c53 = `as.logical`(c49);
    if c53 then L363() else L73();
  L208():
    p32 = prom<V +>{
      pkgdir13 = ld pkgdir;
      pkgdir14 = force? pkgdir13;
      checkMissing(pkgdir14);
      return pkgdir14;
    };
    r99 = dyn file_path5(p32, "help", "figures");
    check L209() else D58();
  L330():
    goto L62(r218);
  L334():
    dr8 = tryDispatchBuiltin.1("[", db9);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L336() else L335(dr8);
  L335(db11):
    pos4 = ld pos;
    check L337() else D136();
  L359():
    cnt6 = ld cnt;
    check L360() else D148();
  L387():
    r278 = dyn message5[domain](NA_LGL);
    check L388() else D168();
  D58():
    deopt 203 [i13, r99];
  D136():
    deopt 453 [db11, pos4];
  D148():
    deopt 505 [i27, c47, cnt6];
  D168():
    deopt 590 [r278];
  L65(dx20, dx21):
    st files = dx21;
    goto L66(dx20);
  L73():
    goto L74(i31);
  L74(i35):
    sub1 = ldf sub;
    check L367() else D152();
  L209():
    st graphicspath = r99;
    writeLines = ldf writeLines;
    check L210() else D59();
  L336():
    dx14 = getTryDispatchBuiltinValue(dr8);
    goto L64(dx14);
  L337():
    pos5 = force? pos4;
    checkMissing(pos5);
    r221 = `>`(pos5, 0);
    __3 = ldf `[` in base;
    r222 = dyn __3(db11, r221);
    goto L64(r222);
  L338():
    dr10 = tryDispatchBuiltin.0("[<-", l5, dx15);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L340() else L339(dx15, dr10);
  L339(dx17, l7):
    pos6 = ld pos;
    check L341() else D137();
  L360():
    cnt7 = force? cnt6;
    checkMissing(cnt7);
    __4 = ldf `%%` in base;
    r235 = dyn __4(cnt7, 10);
    check L361() else D149();
  L363():
    message4 = ldf message;
    check L364() else D150();
  L388():
    goto L37(r278);
  D59():
    deopt 206 [i13];
  D137():
    deopt 459 [dx17, l7, dx15, pos6];
  D149():
    deopt 509 [i27, c47, r235];
  D150():
    deopt 514 [i31];
  D152():
    deopt 524 [i35];
  L210():
    p34 = prom<V +>{
      sym6 = ldf c;
      base6 = ldf c in base;
      guard6 = `==`.4(sym6, base6);
      if guard6 then L1() else L2();
    L0(r101):
      return r101;
    L1():
      _file_path_to_LaTeX_graphicspath = ldf `.file_path_to_LaTeX_graphicspath`;
      p33 = prom<V +>{
        graphicspath = ld graphicspath;
        graphicspath1 = force? graphicspath;
        checkMissing(graphicspath1);
        return graphicspath1;
      };
      r103 = dyn _file_path_to_LaTeX_graphicspath(p33);
      lines = ld lines;
      lines1 = force? lines;
      checkMissing(lines1);
      c26 = ldf c in base;
      r104 = dyn c26(r103, lines1);
      goto L0(r104);
    L2():
      r100 = dyn base6(<lang .file_path_to_LaTeX_graphicspath(graphicspath)>, <sym lines>);
      goto L0(r100);
    };
    p35 = prom<V +>{
      outfilename4 = ld outfilename;
      outfilename5 = force? outfilename4;
      checkMissing(outfilename5);
      return outfilename5;
    };
    r107 = dyn writeLines(p34, p35);
    check L211() else D60();
  L340():
    dx19 = getTryDispatchBuiltinValue(dr10);
    goto L65(dx15, dx19);
  L341():
    pos7 = force? pos6;
    ___1 = ldf `[<-` in base;
    r223 = dyn ___1(l7, dx15, pos7);
    goto L65(dx17, r223);
  L361():
    r236 = `==`(r235, 0);
    c50 = `as.logical`(r236);
    c51 = `&&`(c47, c50);
    goto L72(i27, c51);
  L364():
    r237 = dyn message4[, appendLF, domain](".", FALSE, NA_LGL);
    check L365() else D151();
  L367():
    p73 = prom<V +>{
      basename6 = ldf basename;
      p72 = prom<V +>{
        paths6 = ld paths;
        paths7 = force? paths6;
        checkMissing(paths7);
        c54 = `is.object`(paths7);
        if c54 then L1() else L2(paths7);
      L0(dx25):
        return dx25;
      L1():
        dr12 = tryDispatchBuiltin.1("[", paths7);
        dc6 = getTryDispatchBuiltinDispatched(dr12);
        if dc6 then L3() else L2(dr12);
      L2(paths9):
        i36 = ld i;
        i37 = force? i36;
        __5 = ldf `[` in base;
        r239 = dyn __5(paths9, i37);
        goto L0(r239);
      L3():
        dx24 = getTryDispatchBuiltinValue(dr12);
        goto L0(dx24);
      };
      r241 = dyn basename6(p72);
      return r241;
    };
    r243 = dyn sub1("\\.[Rr]d$", ".tex", p73);
    check L368() else D153();
  D60():
    deopt 209 [i13, r107];
  D151():
    deopt 520 [i31, r237];
  D153():
    deopt 528 [i35, r243];
  L211():
    st hasFigures = TRUE;
    goto L33(i13);
  L365():
    goto L74(i31);
  L368():
    st out = r243;
    file_path15 = ldf `file.path`;
    check L369() else D154();
  D154():
    deopt 531 [i35];
  L369():
    p74 = prom<V +>{
      latexdir8 = ld latexdir;
      latexdir9 = force? latexdir8;
      checkMissing(latexdir9);
      return latexdir9;
    };
    p75 = prom<V +>{
      out2 = ld out;
      out3 = force? out2;
      checkMissing(out3);
      return out3;
    };
    r246 = dyn file_path15(p74, p75);
    check L370() else D155();
  D155():
    deopt 534 [i35, r246];
  L370():
    st outfilename = r246;
    Rd2latex1 = ldf Rd2latex;
    check L371() else D156();
  D156():
    deopt 537 [i35];
  L371():
    p76 = prom<V +>{
      files12 = ld files;
      files13 = force? files12;
      checkMissing(files13);
      c55 = `is.object`(files13);
      if c55 then L1() else L2(files13);
    L0(dx27):
      return dx27;
    L1():
      dr14 = tryDispatchBuiltin.1("[[", files13);
      dc7 = getTryDispatchBuiltinDispatched(dr14);
      if dc7 then L3() else L2(dr14);
    L2(files15):
      i38 = ld i;
      i39 = force? i38;
      __6 = ldf `[[` in base;
      r247 = dyn __6(files15, i39);
      goto L0(r247);
    L3():
      dx26 = getTryDispatchBuiltinValue(dr14);
      goto L0(dx26);
    };
    p77 = prom<V +>{
      outfilename6 = ld outfilename;
      outfilename7 = force? outfilename6;
      checkMissing(outfilename7);
      return outfilename7;
    };
    p78 = prom<V +>{
      sym18 = ldf c;
      base18 = ldf c in base;
      guard18 = `==`.4(sym18, base18);
      if guard18 then L1() else L2();
    L0(r251):
      return r251;
    L1():
      c56 = ldf c in base;
      r252 = dyn c56("build", "install", "render");
      goto L0(r252);
    L2():
      r250 = dyn base18("build", "install", "render");
      goto L0(r250);
    };
    p79 = prom<V +>{
      encoding1 = ld encoding;
      encoding2 = force? encoding1;
      checkMissing(encoding2);
      return encoding2;
    };
    p80 = prom<V +>{
      outputEncoding3 = ld outputEncoding;
      outputEncoding4 = force? outputEncoding3;
      checkMissing(outputEncoding4);
      return outputEncoding4;
    };
    p81 = prom<V +>{
      macros2 = ld macros;
      macros3 = force? macros2;
      checkMissing(macros3);
      return macros3;
    };
    r257 = dyn Rd2latex1[, , stages, encoding, outputEncoding, writeEncoding, macros](p76, p77, p78, p79, p80, FALSE, p81);
    check L372() else D157();
  D157():
    deopt 550 [i35, r257];
  L372():
    st res = r257;
    sym19 = ldf attr;
    base19 = ldf attr in base;
    guard19 = `==`.4(sym19, base19);
    if guard19 then L373() else L374();
  L75(i42, r259):
    c57 = `as.logical`(r259);
    if c57 then L377() else L76();
  L373():
    res2 = ld res;
    check L375() else D158();
  L374():
    r258 = dyn base19(<sym res>, "hasFigures");
    goto L75(i35, r258);
  D158():
    deopt 554 [i35, res2];
  L76():
    goto L77(i42);
  L77(i47):
    goto L71(i47);
  L375():
    res3 = force? res2;
    checkMissing(res3);
    attr1 = ldf attr in base;
    r260 = dyn attr1(res3, "hasFigures");
    check L376() else D159();
  L377():
    readLines1 = ldf readLines;
    check L378() else D160();
  D159():
    deopt 558 [i35, r260];
  D160():
    deopt 560 [i42];
  L376():
    goto L75(i35, r260);
  L378():
    p82 = prom<V +>{
      outfilename8 = ld outfilename;
      outfilename9 = force? outfilename8;
      checkMissing(outfilename9);
      return outfilename9;
    };
    r262 = dyn readLines1(p82);
    check L379() else D161();
  D161():
    deopt 562 [i42, r262];
  L379():
    st lines = r262;
    file_path16 = ldf `file.path`;
    check L380() else D162();
  D162():
    deopt 565 [i42];
  L380():
    p84 = prom<V +>{
      dirname3 = ldf dirname;
      p83 = prom<V +>{
        paths10 = ld paths;
        paths11 = force? paths10;
        checkMissing(paths11);
        c58 = `is.object`(paths11);
        if c58 then L1() else L2(paths11);
      L0(dx29):
        return dx29;
      L1():
        dr16 = tryDispatchBuiltin.1("[", paths11);
        dc8 = getTryDispatchBuiltinDispatched(dr16);
        if dc8 then L3() else L2(dr16);
      L2(paths13):
        i45 = ld i;
        i46 = force? i45;
        __7 = ldf `[` in base;
        r263 = dyn __7(paths13, i46);
        goto L0(r263);
      L3():
        dx28 = getTryDispatchBuiltinValue(dr16);
        goto L0(dx28);
      };
      r265 = dyn dirname3(p83);
      return r265;
    };
    r267 = dyn file_path16(p84, "figures");
    check L381() else D163();
  D163():
    deopt 568 [i42, r267];
  L381():
    st graphicspath = r267;
    writeLines1 = ldf writeLines;
    check L382() else D164();
  D164():
    deopt 571 [i42];
  L382():
    p86 = prom<V +>{
      sym20 = ldf c;
      base20 = ldf c in base;
      guard20 = `==`.4(sym20, base20);
      if guard20 then L1() else L2();
    L0(r269):
      return r269;
    L1():
      _file_path_to_LaTeX_graphicspath1 = ldf `.file_path_to_LaTeX_graphicspath`;
      p85 = prom<V +>{
        graphicspath2 = ld graphicspath;
        graphicspath3 = force? graphicspath2;
        checkMissing(graphicspath3);
        return graphicspath3;
      };
      r271 = dyn _file_path_to_LaTeX_graphicspath1(p85);
      lines2 = ld lines;
      lines3 = force? lines2;
      checkMissing(lines3);
      c59 = ldf c in base;
      r272 = dyn c59(r271, lines3);
      goto L0(r272);
    L2():
      r268 = dyn base20(<lang .file_path_to_LaTeX_graphicspath(graphicspath)>, <sym lines>);
      goto L0(r268);
    };
    p87 = prom<V +>{
      outfilename10 = ld outfilename;
      outfilename11 = force? outfilename10;
      checkMissing(outfilename11);
      return outfilename11;
    };
    r275 = dyn writeLines1(p86, p87);
    check L383() else D165();
  D165():
    deopt 574 [i42, r275];
  L383():
    st hasFigures = TRUE;
    goto L77(i42);
  }
}
fun inner2501545716(x) {
  (reg x:*) -+> V { var x:*, reg x1:*, reg x2:V, reg c:L, reg x4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg order:cls, reg toupper:cls, reg x5:*, reg x6:V, reg p:p(V +), reg r1:V, reg p1:p(V +), reg x7:*, reg x8:V, reg p2:p(V +), reg r4:V, reg __:cls, reg r5:V |
    mkenv;
    st x = x;
    x1 = ld x;
    check L1() else D0();
  D0():
    deopt 0 [x1];
  L1():
    x2 = force? x1;
    checkMissing(x2);
    c = `is.object`(x2);
    if c then L2() else L3(x2);
  L0(dx1):
    popenv;
    return dx1;
  L2():
    dr = tryDispatchBuiltin.1("[", x2);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L4() else L3(dr);
  L3(x4):
    order = ldf order;
    check L5() else D1();
  D1():
    deopt 3 [x4];
  L4():
    dx = getTryDispatchBuiltinValue(dr);
    goto L0(dx);
  L5():
    p1 = prom<V +>{
      toupper = ldf toupper;
      p = prom<V +>{
        x5 = ld x;
        x6 = force? x5;
        checkMissing(x6);
        return x6;
      };
      r1 = dyn toupper(p);
      return r1;
    };
    p2 = prom<V +>{
      x7 = ld x;
      x8 = force? x7;
      checkMissing(x8);
      return x8;
    };
    r4 = dyn order(p1, p2);
    check L6() else D2();
  D2():
    deopt 6 [x4, r4];
  L6():
    __ = ldf `[` in base;
    r5 = dyn __(x4, r4);
    goto L0(r5);
  }
}