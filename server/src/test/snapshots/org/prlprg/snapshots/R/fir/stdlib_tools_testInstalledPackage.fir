fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2055290280;
    st testInstalledPackage = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2055290280(pkg, `lib.loc`, outDir, types, srcdir, Ropts, `...`) {
  (reg pkg:*, reg lib_loc:*, reg outDir:*, reg types:*, reg srcdir:*, reg Ropts:*, reg ddd:dots) -+> V { var pkg:*, var `lib.loc`:*, reg lib_loc_isMissing:L, reg lib_loc_orDefault:*, var outDir:*, reg outDir_isMissing:L, reg outDir_orDefault:*, var types:*, reg types_isMissing:L, reg types_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg c:cls, reg r2:V, reg p:p(V +), var srcdir:*, reg srcdir_isMissing:L, reg srcdir_orDefault:*, var Ropts:*, reg Ropts_isMissing:L, reg Ropts_orDefault:*, var `...`:dots?, reg match_arg:cls, reg types1:*, reg types2:V, reg p1:p(V +), reg sym1:cls, reg base1:cls, reg guard1:L, reg r5:V, reg r6:V, reg c1:cls, reg r7:V, reg p2:p(V +), reg r9:V, reg find_package:cls, reg pkg1:*, reg pkg2:V, reg p3:p(V +), reg lib_loc1:*, reg lib_loc2:V, reg p4:p(V +), reg r12:V, reg setwd:cls, reg outDir1:*, reg outDir2:V, reg p5:p(V +), reg r14:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r15:V, reg on_exit:cls, reg r17:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r18:V, reg r19:V, reg Sys_getenv:cls, reg r20:V, reg as_logical:cls, reg r21:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r22:V, reg r23:V, reg Sys_which:cls, reg r24:V, reg nzchar:cls, reg r25:V, reg _in_:cls, reg types3:*, reg types4:V, reg p6:p(V +), reg r27:V, reg c2:L, reg message:cls, reg gettextf:cls, reg sQuote:cls, reg pkg3:*, reg pkg4:V, reg p7:p(V +), reg r29:V, reg p8:p(V +), reg r31:V, reg p9:p(V +), reg r33:V, reg _createExdotR:cls, reg pkg5:*, reg pkg6:V, reg p10:p(V +), reg pkgdir:*, reg pkgdir1:V, reg p11:p(V +), reg ddd1:dots?, reg r36:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r37:V, reg r38:V, reg Rfile:*, reg Rfile1:V, reg length:cls, reg r39:V, reg c3:L, reg paste0:cls, reg pkg7:*, reg pkg8:V, reg p12:p(V +), reg r41:V, reg paste1:cls, reg outfile:*, reg outfile1:V, reg p13:p(V +), reg r43:V, reg paste2:cls, reg outfile2:*, reg outfile3:V, reg p14:p(V +), reg r45:V, reg file_exists:cls, reg outfile4:*, reg outfile5:V, reg p15:p(V +), reg r47:V, reg c4:L, reg file_rename:cls, reg outfile6:*, reg outfile7:V, reg p16:p(V +), reg savefile:*, reg savefile1:V, reg p17:p(V +), reg r50:V, reg unlink:cls, reg failfile:*, reg failfile1:V, reg p18:p(V +), reg r53:V, reg paste3:cls, reg shQuote:cls, reg file_path:cls, reg R_home:cls, reg r54:V, reg p19:p(V +), reg r56:V, reg p20:p(V +), reg r58:V, reg p21:p(V +), reg Ropts1:*, reg Ropts2:V, reg p22:p(V +), reg shQuote1:cls, reg Rfile2:*, reg Rfile3:V, reg p23:p(V +), reg r62:V, reg p24:p(V +), reg shQuote2:cls, reg failfile2:*, reg failfile3:V, reg p25:p(V +), reg r65:V, reg p26:p(V +), reg r67:V, reg _Platform:*, reg _Platform1:V, reg c5:L, reg _Platform3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r68:V, reg r69:V, reg c6:L, reg Sys_setenv:cls, reg r70:V, reg paste4:cls, reg cmd:*, reg cmd1:V, reg p27:p(V +), reg r73:V, reg system:cls, reg cmd2:*, reg cmd3:V, reg p28:p(V +), reg r75:V, reg res:*, reg res1:V, reg c7:L, reg message1:cls, reg gettextf1:cls, reg sQuote1:cls, reg Rfile4:*, reg Rfile5:V, reg p29:p(V +), reg r77:V, reg p30:p(V +), reg r79:V, reg p31:p(V +), reg r81:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r82:V, reg r83:V, reg invisible:cls, reg r84:V, reg file_rename1:cls, reg failfile4:*, reg failfile5:V, reg p32:p(V +), reg outfile8:*, reg outfile9:V, reg p33:p(V +), reg r89:V, reg paste5:cls, reg outfile10:*, reg outfile11:V, reg p34:p(V +), reg r91:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r92:V, reg r93:V, reg srcdir1:*, reg srcdir2:V, reg c8:V, reg r94:V, reg c9:L, reg file_path1:cls, reg srcdir3:*, reg srcdir4:V, reg p35:p(V +), reg savefile2:*, reg savefile3:V, reg p36:p(V +), reg r97:V, reg file_path2:cls, reg pkgdir2:*, reg pkgdir3:V, reg p37:p(V +), reg savefile4:*, reg savefile5:V, reg p38:p(V +), reg r101:V, reg file_exists1:cls, reg savefile6:*, reg savefile7:V, reg p39:p(V +), reg r103:V, reg r104:V, reg c10:L, reg c12:V, reg file_exists2:cls, reg tfile:*, reg tfile1:V, reg p40:p(V +), reg r106:V, reg c13:L, reg c14:V, reg c16:L, reg tfile2:*, reg tfile3:V, reg file_exists3:cls, reg savefile8:*, reg savefile9:V, reg p41:p(V +), reg r108:V, reg c17:L, reg file_exists4:cls, reg savefile10:*, reg savefile11:V, reg p42:p(V +), reg r110:V, reg c18:L, reg message2:cls, reg gettextf2:cls, reg sQuote2:cls, reg outfile12:*, reg outfile13:V, reg p43:p(V +), reg r112:V, reg p44:p(V +), reg sQuote3:cls, reg basename:cls, reg savefile12:*, reg savefile13:V, reg p45:p(V +), reg r115:V, reg p46:p(V +), reg r117:V, reg p47:p(V +), reg r119:V, reg p48:p(V +), reg r121:V, reg sprintf:cls, reg outfile14:*, reg outfile15:V, reg p49:p(V +), reg savefile14:*, reg savefile15:V, reg p50:p(V +), reg sym8:cls, reg base8:cls, reg guard8:L, reg r124:V, reg r125:V, reg useDiff:*, reg useDiff1:V, reg as_character:cls, reg r126:V, reg p51:p(V +), reg r128:V, reg R_runR:cls, reg cmd4:*, reg cmd5:V, reg p52:p(V +), reg r130:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r131:V, reg r132:V, reg out:*, reg out1:V, reg length1:cls, reg r133:V, reg c19:L, reg strict:*, reg strict1:V, reg c20:L, reg message3:cls, reg r134:V, reg message4:cls, reg r136:V, reg writeLines:cls, reg paste6:cls, reg out2:*, reg out3:V, reg p53:p(V +), reg r138:V, reg p54:p(V +), reg r140:V, reg strict2:*, reg strict3:V, reg c21:L, reg stop:cls, reg r141:V, reg r142:V, reg r143:V, reg message5:cls, reg r144:V, reg r145:V, reg r146:V, reg paste7:cls, reg outfile16:*, reg outfile17:V, reg p55:p(V +), reg r148:V, reg file_exists5:cls, reg prevfile:*, reg prevfile1:V, reg p56:p(V +), reg r150:V, reg c22:L, reg message6:cls, reg gettextf3:cls, reg sQuote4:cls, reg outfile18:*, reg outfile19:V, reg p57:p(V +), reg r152:V, reg p58:p(V +), reg sQuote5:cls, reg basename1:cls, reg prevfile2:*, reg prevfile3:V, reg p59:p(V +), reg r155:V, reg p60:p(V +), reg r157:V, reg p61:p(V +), reg r159:V, reg p62:p(V +), reg r161:V, reg sprintf1:cls, reg outfile20:*, reg outfile21:V, reg p63:p(V +), reg prevfile4:*, reg prevfile5:V, reg p64:p(V +), reg sym10:cls, reg base10:cls, reg guard10:L, reg r164:V, reg r165:V, reg useDiff2:*, reg useDiff3:V, reg as_character1:cls, reg r166:V, reg p65:p(V +), reg r168:V, reg R_runR1:cls, reg cmd6:*, reg cmd7:V, reg p66:p(V +), reg r170:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r171:V, reg r172:V, reg out4:*, reg out5:V, reg length2:cls, reg r173:V, reg c23:L, reg message7:cls, reg r174:V, reg writeLines1:cls, reg paste8:cls, reg out6:*, reg out7:V, reg p67:p(V +), reg r176:V, reg p68:p(V +), reg r178:V, reg r179:V, reg message8:cls, reg r180:V, reg r181:V, reg warning:cls, reg gettextf4:cls, reg sQuote6:cls, reg pkg9:*, reg pkg10:V, reg p69:p(V +), reg r183:V, reg p70:p(V +), reg r185:V, reg p71:p(V +), reg r187:V, reg _in_1:cls, reg types5:*, reg types6:V, reg p72:p(V +), reg r190:V, reg c24:L, reg c26:V, reg dir_exists:cls, reg file_path3:cls, reg pkgdir4:*, reg pkgdir5:V, reg p73:p(V +), reg r192:V, reg p74:p(V +), reg r194:V, reg c27:L, reg c28:V, reg c30:L, reg paste9:cls, reg pkg11:*, reg pkg12:V, reg p75:p(V +), reg r196:V, reg unlink1:cls, reg this:*, reg this1:V, reg p76:p(V +), reg r198:V, reg dir_create:cls, reg this2:*, reg this3:V, reg p77:p(V +), reg r200:V, reg file_copy:cls, reg Sys_glob:cls, reg file_path4:cls, reg d:*, reg d1:V, reg p78:p(V +), reg r202:V, reg p79:p(V +), reg r204:V, reg p80:p(V +), reg this4:*, reg this5:V, reg p81:p(V +), reg r207:V, reg setwd1:cls, reg this6:*, reg this7:V, reg p82:p(V +), reg r209:V, reg message9:cls, reg gettextf5:cls, reg sQuote7:cls, reg pkg13:*, reg pkg14:V, reg p83:p(V +), reg r211:V, reg p84:p(V +), reg r213:V, reg p85:p(V +), reg r215:V, reg dir:cls, reg r216:V, reg Rfiles:*, reg Rfiles1:V, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c31:L, reg x:V, reg message10:cls, reg gettextf6:cls, reg sQuote8:cls, reg f:*, reg f1:V, reg p86:p(V +), reg r218:V, reg p87:p(V +), reg r220:V, reg p88:p(V +), reg r222:V, reg sub:cls, reg paste10:cls, reg f2:*, reg f3:V, reg p89:p(V +), reg r224:V, reg p90:p(V +), reg r226:V, reg paste11:cls, reg shQuote3:cls, reg file_path5:cls, reg R_home1:cls, reg r227:V, reg p91:p(V +), reg r229:V, reg p92:p(V +), reg r231:V, reg p93:p(V +), reg Ropts3:*, reg Ropts4:V, reg p94:p(V +), reg shQuote4:cls, reg f4:*, reg f5:V, reg p95:p(V +), reg r235:V, reg p96:p(V +), reg shQuote5:cls, reg outfile22:*, reg outfile23:V, reg p97:p(V +), reg r238:V, reg p98:p(V +), reg r240:V, reg _Platform4:*, reg _Platform5:V, reg c32:L, reg i6:I, reg _Platform7:V, reg dr2:V, reg dc1:L, reg dx2:V, reg i8:I, reg dx3:V, reg r241:V, reg r242:V, reg c33:L, reg paste12:cls, reg cmd8:*, reg cmd9:V, reg p99:p(V +), reg r244:V, reg i11:I, reg r245:V, reg paste13:cls, reg cmd10:*, reg cmd11:V, reg p100:p(V +), reg r247:V, reg system1:cls, reg cmd12:*, reg cmd13:V, reg p101:p(V +), reg r249:V, reg res2:*, reg res3:V, reg c34:L, reg file_rename2:cls, reg outfile24:*, reg outfile25:V, reg p102:p(V +), reg paste14:cls, reg outfile26:*, reg outfile27:V, reg p103:p(V +), reg r252:V, reg p104:p(V +), reg r254:V, reg message11:cls, reg gettextf7:cls, reg sQuote9:cls, reg f6:*, reg f7:V, reg p105:p(V +), reg r256:V, reg p106:p(V +), reg r258:V, reg p107:p(V +), reg r260:V, reg sym12:cls, reg base12:cls, reg guard12:L, reg r261:V, reg r262:V, reg invisible1:cls, reg r263:V, reg paste15:cls, reg outfile28:*, reg outfile29:V, reg p108:p(V +), reg r267:V, reg file_exists6:cls, reg savefile16:*, reg savefile17:V, reg p109:p(V +), reg r269:V, reg c35:L, reg message12:cls, reg gettextf8:cls, reg sQuote10:cls, reg outfile30:*, reg outfile31:V, reg p110:p(V +), reg r271:V, reg p111:p(V +), reg sQuote11:cls, reg savefile18:*, reg savefile19:V, reg p112:p(V +), reg r274:V, reg p113:p(V +), reg r276:V, reg p114:p(V +), reg r278:V, reg Rdiff:cls, reg outfile32:*, reg outfile33:V, reg p115:p(V +), reg savefile20:*, reg savefile21:V, reg p116:p(V +), reg useDiff4:*, reg useDiff5:V, reg p117:p(V +), reg r282:V, reg res4:*, reg res5:V, reg r283:V, reg c36:L, reg message13:cls, reg r284:V, reg i23:I, reg r285:V, reg i24:I, reg setwd2:cls, reg owd:*, reg owd1:V, reg p118:p(V +), reg r288:V, reg _in_2:cls, reg types7:*, reg types8:V, reg p119:p(V +), reg r291:V, reg c37:L, reg c39:V, reg dir_exists1:cls, reg file_path6:cls, reg pkgdir6:*, reg pkgdir7:V, reg p120:p(V +), reg r293:V, reg p121:p(V +), reg r295:V, reg c40:L, reg c41:V, reg c43:L, reg message14:cls, reg gettextf9:cls, reg sQuote12:cls, reg pkg15:*, reg pkg16:V, reg p122:p(V +), reg r297:V, reg p123:p(V +), reg r299:V, reg p124:p(V +), reg r301:V, reg format:cls, reg checkVignettes:cls, reg pkg17:*, reg pkg18:V, reg p125:p(V +), reg lib_loc3:*, reg lib_loc4:V, reg p126:p(V +), reg r304:V, reg p127:p(V +), reg r306:V, reg sym13:cls, reg base13:cls, reg guard13:L, reg r307:V, reg r308:V, reg out8:*, reg out9:V, reg length3:cls, reg r309:V, reg c44:L, reg writeLines2:cls, reg out10:*, reg out11:V, reg p128:p(V +), reg r311:V, reg sym14:cls, reg base14:cls, reg guard14:L, reg r312:V, reg r313:V, reg invisible2:cls, reg r314:V, reg sym15:cls, reg base15:cls, reg guard15:L, reg r318:V, reg r319:V, reg invisible3:cls, reg r320:V |
    mkenv;
    st pkg = pkg;
    lib_loc_isMissing = missing.0(lib_loc);
    if lib_loc_isMissing then L0(NULL) else L0(lib_loc);
  L0(lib_loc_orDefault):
    st `lib.loc` = lib_loc_orDefault;
    outDir_isMissing = missing.0(outDir);
    if outDir_isMissing then L1(".") else L1(outDir);
  L1(outDir_orDefault):
    st outDir = outDir_orDefault;
    types_isMissing = missing.0(types);
    if types_isMissing then L2() else L3(types);
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
      r2 = dyn c("examples", "tests", "vignettes");
      goto L0(r2);
    L2():
      r = dyn base("examples", "tests", "vignettes");
      goto L0(r);
    };
    goto L3(p);
  L3(types_orDefault):
    st types = types_orDefault;
    srcdir_isMissing = missing.0(srcdir);
    if srcdir_isMissing then L4(NULL) else L4(srcdir);
  L4(srcdir_orDefault):
    st srcdir = srcdir_orDefault;
    Ropts_isMissing = missing.0(Ropts);
    if Ropts_isMissing then L5("") else L5(Ropts);
  L5(Ropts_orDefault):
    st Ropts = Ropts_orDefault;
    st `...` = ddd;
    match_arg = ldf `match.arg`;
    check L63() else D0();
  D0():
    deopt 1 [];
  L63():
    p1 = prom<V +>{
      types1 = ld types;
      types2 = force? types1;
      checkMissing(types2);
      return types2;
    };
    p2 = prom<V +>{
      sym1 = ldf c;
      base1 = ldf c in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r6):
      return r6;
    L1():
      c1 = ldf c in base;
      r7 = dyn c1("examples", "tests", "vignettes");
      goto L0(r7);
    L2():
      r5 = dyn base1("examples", "tests", "vignettes");
      goto L0(r5);
    };
    r9 = dyn match_arg[, , `several.ok`](p1, p2, TRUE);
    check L64() else D1();
  D1():
    deopt 6 [r9];
  L64():
    st types = r9;
    find_package = ldf `find.package`;
    check L65() else D2();
  D2():
    deopt 9 [];
  L65():
    p3 = prom<V +>{
      pkg1 = ld pkg;
      pkg2 = force? pkg1;
      checkMissing(pkg2);
      return pkg2;
    };
    p4 = prom<V +>{
      lib_loc1 = ld `lib.loc`;
      lib_loc2 = force? lib_loc1;
      checkMissing(lib_loc2);
      return lib_loc2;
    };
    r12 = dyn find_package(p3, p4);
    check L66() else D3();
  D3():
    deopt 12 [r12];
  L66():
    st pkgdir = r12;
    setwd = ldf setwd;
    check L67() else D4();
  D4():
    deopt 15 [];
  L67():
    p5 = prom<V +>{
      outDir1 = ld outDir;
      outDir2 = force? outDir1;
      checkMissing(outDir2);
      return outDir2;
    };
    r14 = dyn setwd(p5);
    check L68() else D5();
  D5():
    deopt 17 [r14];
  L68():
    st owd = r14;
    sym2 = ldf `on.exit`;
    base2 = ldf `on.exit` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L69() else L70();
  L6():
    sym3 = ldf `as.logical`;
    base3 = ldf `as.logical` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L71() else L72();
  L69():
    on_exit = ldf `on.exit` in base;
    r17 = dyn on_exit(<lang setwd(owd)>);
    goto L6();
  L70():
    r15 = dyn base2(<lang setwd(owd)>);
    goto L6();
  L7(r19):
    st strict = r19;
    sym4 = ldf nzchar;
    base4 = ldf nzchar in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L76() else L77();
  L71():
    Sys_getenv = ldf `Sys.getenv`;
    check L73() else D6();
  L72():
    r18 = dyn base3(<lang Sys.getenv("R_STRICT_PACKAGE_CHECK", "FALSE")>);
    goto L7(r18);
  D6():
    deopt 25 [];
  L8(r23):
    st useDiff = r23;
    _in_ = ldf `%in%`;
    check L81() else D12();
  L73():
    r20 = dyn Sys_getenv("R_STRICT_PACKAGE_CHECK", "FALSE");
    check L74() else D7();
  L76():
    Sys_which = ldf `Sys.which`;
    check L78() else D9();
  L77():
    r22 = dyn base4(<lang Sys.which("diff")>);
    goto L8(r22);
  D7():
    deopt 28 [r20];
  D9():
    deopt 35 [];
  D12():
    deopt 42 [];
  L74():
    as_logical = ldf `as.logical` in base;
    r21 = dyn as_logical(r20);
    check L75() else D8();
  L78():
    r24 = dyn Sys_which("diff");
    check L79() else D10();
  L81():
    p6 = prom<V +>{
      types3 = ld types;
      types4 = force? types3;
      checkMissing(types4);
      return types4;
    };
    r27 = dyn _in_("examples", p6);
    check L82() else D13();
  D8():
    deopt 30 [r21];
  D10():
    deopt 37 [r24];
  D13():
    deopt 45 [r27];
  L75():
    goto L7(r21);
  L79():
    nzchar = ldf nzchar in base;
    r25 = dyn nzchar(r24);
    check L80() else D11();
  L82():
    c2 = `as.logical`(r27);
    if c2 then L83() else L9();
  D11():
    deopt 39 [r25];
  L9():
    goto L40();
  L40():
    _in_1 = ldf `%in%`;
    check L217() else D103();
  L80():
    goto L8(r25);
  L83():
    message = ldf message;
    check L84() else D14();
  D14():
    deopt 47 [];
  D103():
    deopt 317 [];
  L84():
    p9 = prom<V +>{
      gettextf = ldf gettextf;
      p8 = prom<V +>{
        sQuote = ldf sQuote;
        p7 = prom<V +>{
          pkg3 = ld pkg;
          pkg4 = force? pkg3;
          checkMissing(pkg4);
          return pkg4;
        };
        r29 = dyn sQuote(p7);
        return r29;
      };
      r31 = dyn gettextf("Testing examples for package %s", p8);
      return r31;
    };
    r33 = dyn message[, domain](p9, NA_LGL);
    check L85() else D15();
  L217():
    p72 = prom<V +>{
      types5 = ld types;
      types6 = force? types5;
      checkMissing(types6);
      return types6;
    };
    r190 = dyn _in_1("tests", p72);
    check L218() else D104();
  D15():
    deopt 51 [r33];
  D104():
    deopt 320 [r190];
  L85():
    _createExdotR = ldf `.createExdotR`;
    check L86() else D16();
  L218():
    c24 = `as.logical`(r190);
    if c24 then L219() else L41(c24);
  D16():
    deopt 53 [];
  L41(c26):
    c30 = `as.logical`(c26);
    if c30 then L223() else L42();
  L86():
    p10 = prom<V +>{
      pkg5 = ld pkg;
      pkg6 = force? pkg5;
      checkMissing(pkg6);
      return pkg6;
    };
    p11 = prom<V +>{
      pkgdir = ld pkgdir;
      pkgdir1 = force? pkgdir;
      checkMissing(pkgdir1);
      return pkgdir1;
    };
    ddd1 = ld `...`;
    r36 = dyn _createExdotR[, , silent, `...`](p10, p11, TRUE, ddd1);
    check L87() else D17();
  L219():
    dir_exists = ldf `dir.exists`;
    check L220() else D105();
  D17():
    deopt 59 [r36];
  D105():
    deopt 322 [c24];
  L42():
    goto L54();
  L54():
    _in_2 = ldf `%in%`;
    check L288() else D154();
  L87():
    st Rfile = r36;
    sym5 = ldf length;
    base5 = ldf length in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L88() else L89();
  L220():
    p74 = prom<V +>{
      file_path3 = ldf `file.path`;
      p73 = prom<V +>{
        pkgdir4 = ld pkgdir;
        pkgdir5 = force? pkgdir4;
        checkMissing(pkgdir5);
        return pkgdir5;
      };
      r192 = dyn file_path3(p73, "tests");
      st d = r192;
      invisible.0();
      return r192;
    };
    r194 = dyn dir_exists(p74);
    check L221() else D106();
  L223():
    paste9 = ldf paste0;
    check L224() else D107();
  D106():
    deopt 324 [c24, r194];
  D107():
    deopt 327 [];
  D154():
    deopt 478 [];
  L10(r38):
    c3 = `as.logical`(r38);
    if c3 then L92() else L11();
  L88():
    Rfile = ld Rfile;
    check L90() else D18();
  L89():
    r37 = dyn base5(<sym Rfile>);
    goto L10(r37);
  L221():
    c27 = `as.logical`(r194);
    c28 = `&&`(c24, c27);
    goto L41(c28);
  L224():
    p75 = prom<V +>{
      pkg11 = ld pkg;
      pkg12 = force? pkg11;
      checkMissing(pkg12);
      return pkg12;
    };
    r196 = dyn paste9(p75, "-tests");
    check L225() else D108();
  L288():
    p119 = prom<V +>{
      types7 = ld types;
      types8 = force? types7;
      checkMissing(types8);
      return types8;
    };
    r291 = dyn _in_2("vignettes", p119);
    check L289() else D155();
  D18():
    deopt 63 [Rfile];
  D108():
    deopt 330 [r196];
  D155():
    deopt 481 [r291];
  L11():
    warning = ldf warning;
    check L214() else D101();
  L39(r181):
    goto L40();
  L90():
    Rfile1 = force? Rfile;
    checkMissing(Rfile1);
    length = ldf length in base;
    r39 = dyn length(Rfile1);
    check L91() else D19();
  L92():
    paste0 = ldf paste0;
    check L93() else D20();
  L225():
    st this = r196;
    unlink1 = ldf unlink;
    check L226() else D109();
  L289():
    c37 = `as.logical`(r291);
    if c37 then L290() else L55(c37);
  D19():
    deopt 66 [r39];
  D20():
    deopt 68 [];
  D101():
    deopt 307 [];
  D109():
    deopt 333 [];
  L55(c39):
    c43 = `as.logical`(c39);
    if c43 then L294() else L56();
  L91():
    goto L10(r39);
  L93():
    p12 = prom<V +>{
      pkg7 = ld pkg;
      pkg8 = force? pkg7;
      checkMissing(pkg8);
      return pkg8;
    };
    r41 = dyn paste0(p12, "-Ex.Rout");
    check L94() else D21();
  L214():
    p71 = prom<V +>{
      gettextf4 = ldf gettextf;
      p70 = prom<V +>{
        sQuote6 = ldf sQuote;
        p69 = prom<V +>{
          pkg9 = ld pkg;
          pkg10 = force? pkg9;
          checkMissing(pkg10);
          return pkg10;
        };
        r183 = dyn sQuote6(p69);
        return r183;
      };
      r185 = dyn gettextf4("no examples found for package %s", p70);
      return r185;
    };
    r187 = dyn warning[, `call.`, domain](p71, FALSE, NA_LGL);
    check L215() else D102();
  L226():
    p76 = prom<V +>{
      this = ld this;
      this1 = force? this;
      checkMissing(this1);
      return this1;
    };
    r198 = dyn unlink1[, recursive](p76, TRUE);
    check L227() else D110();
  L290():
    dir_exists1 = ldf `dir.exists`;
    check L291() else D156();
  D21():
    deopt 71 [r41];
  D102():
    deopt 313 [r187];
  D110():
    deopt 337 [r198];
  D156():
    deopt 483 [c37];
  L56():
    goto L61();
  L61():
    sym15 = ldf invisible;
    base15 = ldf invisible in base;
    guard15 = `==`.4(sym15, base15);
    if guard15 then L312() else L313();
  L94():
    st outfile = r41;
    paste1 = ldf paste0;
    check L95() else D22();
  L215():
    goto L39(r187);
  L227():
    dir_create = ldf `dir.create`;
    check L228() else D111();
  L291():
    p121 = prom<V +>{
      file_path6 = ldf `file.path`;
      p120 = prom<V +>{
        pkgdir6 = ld pkgdir;
        pkgdir7 = force? pkgdir6;
        checkMissing(pkgdir7);
        return pkgdir7;
      };
      r293 = dyn file_path6(p120, "doc");
      return r293;
    };
    r295 = dyn dir_exists1(p121);
    check L292() else D157();
  L294():
    message14 = ldf message;
    check L295() else D158();
  D22():
    deopt 74 [];
  D111():
    deopt 339 [];
  D157():
    deopt 485 [c37, r295];
  D158():
    deopt 488 [];
  L62(r319):
    popenv;
    return r319;
  L95():
    p13 = prom<V +>{
      outfile = ld outfile;
      outfile1 = force? outfile;
      checkMissing(outfile1);
      return outfile1;
    };
    r43 = dyn paste1(p13, ".fail");
    check L96() else D23();
  L228():
    p77 = prom<V +>{
      this2 = ld this;
      this3 = force? this2;
      checkMissing(this3);
      return this3;
    };
    r200 = dyn dir_create(p77);
    check L229() else D112();
  L292():
    c40 = `as.logical`(r295);
    c41 = `&&`(c37, c40);
    goto L55(c41);
  L295():
    p124 = prom<V +>{
      gettextf9 = ldf gettextf;
      p123 = prom<V +>{
        sQuote12 = ldf sQuote;
        p122 = prom<V +>{
          pkg15 = ld pkg;
          pkg16 = force? pkg15;
          checkMissing(pkg16);
          return pkg16;
        };
        r297 = dyn sQuote12(p122);
        return r297;
      };
      r299 = dyn gettextf9("Running vignettes for package %s", p123);
      return r299;
    };
    r301 = dyn message14[, domain](p124, NA_LGL);
    check L296() else D159();
  L312():
    invisible3 = ldf invisible in base;
    r320 = dyn invisible3(0);
    check L314() else D167();
  L313():
    r318 = dyn base15(0);
    goto L62(r318);
  D23():
    deopt 77 [r43];
  D112():
    deopt 341 [r200];
  D159():
    deopt 492 [r301];
  D167():
    deopt 522 [r320];
  L96():
    st failfile = r43;
    paste2 = ldf paste0;
    check L97() else D24();
  L229():
    file_copy = ldf `file.copy`;
    check L230() else D113();
  L296():
    format = ldf format;
    check L297() else D160();
  L314():
    goto L62(r320);
  D24():
    deopt 80 [];
  D113():
    deopt 343 [];
  D160():
    deopt 494 [];
  L97():
    p14 = prom<V +>{
      outfile2 = ld outfile;
      outfile3 = force? outfile2;
      checkMissing(outfile3);
      return outfile3;
    };
    r45 = dyn paste2(p14, ".prev");
    check L98() else D25();
  L230():
    p80 = prom<V +>{
      Sys_glob = ldf `Sys.glob`;
      p79 = prom<V +>{
        file_path4 = ldf `file.path`;
        p78 = prom<V +>{
          d = ld d;
          d1 = force? d;
          checkMissing(d1);
          return d1;
        };
        r202 = dyn file_path4(p78, "*");
        return r202;
      };
      r204 = dyn Sys_glob(p79);
      return r204;
    };
    p81 = prom<V +>{
      this4 = ld this;
      this5 = force? this4;
      checkMissing(this5);
      return this5;
    };
    r207 = dyn file_copy[, , recursive](p80, p81, TRUE);
    check L231() else D114();
  L297():
    p127 = prom<V +>{
      checkVignettes = ldf checkVignettes;
      p125 = prom<V +>{
        pkg17 = ld pkg;
        pkg18 = force? pkg17;
        checkMissing(pkg18);
        return pkg18;
      };
      p126 = prom<V +>{
        lib_loc3 = ld `lib.loc`;
        lib_loc4 = force? lib_loc3;
        checkMissing(lib_loc4);
        return lib_loc4;
      };
      r304 = dyn checkVignettes[, `lib.loc`, latex, weave](p125, p126, FALSE, TRUE);
      return r304;
    };
    r306 = dyn format(p127);
    check L298() else D161();
  D25():
    deopt 83 [r45];
  D114():
    deopt 348 [r207];
  D161():
    deopt 496 [r306];
  L98():
    st savefile = r45;
    file_exists = ldf `file.exists`;
    check L99() else D26();
  L231():
    setwd1 = ldf setwd;
    check L232() else D115();
  L298():
    st out = r306;
    sym13 = ldf length;
    base13 = ldf length in base;
    guard13 = `==`.4(sym13, base13);
    if guard13 then L299() else L300();
  D26():
    deopt 86 [];
  D115():
    deopt 350 [];
  L57(r308):
    c44 = `as.logical`(r308);
    if c44 then L303() else L58();
  L99():
    p15 = prom<V +>{
      outfile4 = ld outfile;
      outfile5 = force? outfile4;
      checkMissing(outfile5);
      return outfile5;
    };
    r47 = dyn file_exists(p15);
    check L100() else D27();
  L232():
    p82 = prom<V +>{
      this6 = ld this;
      this7 = force? this6;
      checkMissing(this7);
      return this7;
    };
    r209 = dyn setwd1(p82);
    check L233() else D116();
  L299():
    out8 = ld out;
    check L301() else D162();
  L300():
    r307 = dyn base13(<sym out>);
    goto L57(r307);
  D27():
    deopt 88 [r47];
  D116():
    deopt 352 [r209];
  D162():
    deopt 500 [out8];
  L58():
    goto L61();
  L100():
    c4 = `as.logical`(r47);
    if c4 then L101() else L12();
  L233():
    message9 = ldf message;
    check L234() else D117();
  L301():
    out9 = force? out8;
    checkMissing(out9);
    length3 = ldf length in base;
    r309 = dyn length3(out9);
    check L302() else D163();
  L303():
    writeLines2 = ldf writeLines;
    check L304() else D164();
  D117():
    deopt 354 [];
  D163():
    deopt 503 [r309];
  D164():
    deopt 505 [];
  L12():
    goto L13();
  L13():
    unlink = ldf unlink;
    check L105() else D30();
  L101():
    file_rename = ldf `file.rename`;
    check L102() else D28();
  L234():
    p85 = prom<V +>{
      gettextf5 = ldf gettextf;
      p84 = prom<V +>{
        sQuote7 = ldf sQuote;
        p83 = prom<V +>{
          pkg13 = ld pkg;
          pkg14 = force? pkg13;
          checkMissing(pkg14);
          return pkg14;
        };
        r211 = dyn sQuote7(p83);
        return r211;
      };
      r213 = dyn gettextf5("Running specific tests for package %s", p84);
      return r213;
    };
    r215 = dyn message9[, domain](p85, NA_LGL);
    check L235() else D118();
  L302():
    goto L57(r309);
  L304():
    p128 = prom<V +>{
      out10 = ld out;
      out11 = force? out10;
      checkMissing(out11);
      return out11;
    };
    r311 = dyn writeLines2(p128);
    check L305() else D165();
  D28():
    deopt 90 [];
  D30():
    deopt 97 [];
  D118():
    deopt 358 [r215];
  D165():
    deopt 507 [r311];
  L102():
    p16 = prom<V +>{
      outfile6 = ld outfile;
      outfile7 = force? outfile6;
      checkMissing(outfile7);
      return outfile7;
    };
    p17 = prom<V +>{
      savefile = ld savefile;
      savefile1 = force? savefile;
      checkMissing(savefile1);
      return savefile1;
    };
    r50 = dyn file_rename(p16, p17);
    check L103() else D29();
  L105():
    p18 = prom<V +>{
      failfile = ld failfile;
      failfile1 = force? failfile;
      checkMissing(failfile1);
      return failfile1;
    };
    r53 = dyn unlink(p18);
    check L106() else D31();
  L235():
    dir = ldf dir;
    check L236() else D119();
  L305():
    sym14 = ldf invisible;
    base14 = ldf invisible in base;
    guard14 = `==`.4(sym14, base14);
    if guard14 then L306() else L307();
  D29():
    deopt 93 [r50];
  D31():
    deopt 99 [r53];
  D119():
    deopt 360 [];
  L59(r313):
    popenv;
    return r313;
  L103():
    goto L13();
  L106():
    paste3 = ldf paste;
    check L107() else D32();
  L236():
    r216 = dyn dir[, pattern](".", "\\.[rR]$");
    check L237() else D120();
  L306():
    invisible2 = ldf invisible in base;
    r314 = dyn invisible2(1);
    check L308() else D166();
  L307():
    r312 = dyn base14(1);
    goto L59(r312);
  D32():
    deopt 101 [];
  D120():
    deopt 364 [r216];
  D166():
    deopt 512 [r314];
  L107():
    p21 = prom<V +>{
      shQuote = ldf shQuote;
      p20 = prom<V +>{
        file_path = ldf `file.path`;
        p19 = prom<V +>{
          R_home = ldf `R.home`;
          r54 = dyn R_home("bin");
          return r54;
        };
        r56 = dyn file_path(p19, "R");
        return r56;
      };
      r58 = dyn shQuote(p20);
      return r58;
    };
    p22 = prom<V +>{
      Ropts1 = ld Ropts;
      Ropts2 = force? Ropts1;
      checkMissing(Ropts2);
      return Ropts2;
    };
    p24 = prom<V +>{
      shQuote1 = ldf shQuote;
      p23 = prom<V +>{
        Rfile2 = ld Rfile;
        Rfile3 = force? Rfile2;
        checkMissing(Rfile3);
        return Rfile3;
      };
      r62 = dyn shQuote1(p23);
      return r62;
    };
    p26 = prom<V +>{
      shQuote2 = ldf shQuote;
      p25 = prom<V +>{
        failfile2 = ld failfile;
        failfile3 = force? failfile2;
        checkMissing(failfile3);
        return failfile3;
      };
      r65 = dyn shQuote2(p25);
      return r65;
    };
    r67 = dyn paste3(p21, "CMD BATCH --vanilla --no-timing", p22, p24, p26);
    check L108() else D33();
  L237():
    st Rfiles = r216;
    Rfiles = ld Rfiles;
    check L238() else D121();
  L308():
    goto L59(r314);
  D33():
    deopt 107 [r67];
  D121():
    deopt 366 [Rfiles];
  L108():
    st cmd = r67;
    _Platform = ld `.Platform`;
    check L109() else D34();
  L238():
    Rfiles1 = force? Rfiles;
    checkMissing(Rfiles1);
    s = toForSeq(Rfiles1);
    l = length(s);
    i = 0;
    goto L43(i);
  D34():
    deopt 109 [_Platform];
  L43(i1):
    i2 = `+`.1(i1, 1);
    c31 = `<`.1(l, i2);
    if c31 then L239() else L53();
  L109():
    _Platform1 = force? _Platform;
    checkMissing(_Platform1);
    c5 = `is.object`(_Platform1);
    if c5 then L111() else L112(_Platform1);
  L53():
    x = `[[`(s, i2, NULL, TRUE);
    st f = x;
    message10 = ldf message;
    check L240() else D122();
  L110(dx1):
    r69 = `==`(dx1, "windows");
    c6 = `as.logical`(r69);
    if c6 then L114() else L14();
  L111():
    dr = tryDispatchBuiltin.1("$", _Platform1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L113() else L112(dr);
  L112(_Platform3):
    r68 = `$`(_Platform3, <sym OS.type>);
    goto L110(r68);
  L239():
    setwd2 = ldf setwd;
    check L285() else D152();
  D122():
    deopt 369 [i2];
  D152():
    deopt 472 [];
  L14():
    paste4 = ldf paste;
    check L118() else D37();
  L15():
    system = ldf system;
    check L120() else D39();
  L113():
    dx = getTryDispatchBuiltinValue(dr);
    goto L110(dx);
  L114():
    Sys_setenv = ldf `Sys.setenv`;
    check L115() else D35();
  L240():
    p88 = prom<V +>{
      gettextf6 = ldf gettextf;
      p87 = prom<V +>{
        sQuote8 = ldf sQuote;
        p86 = prom<V +>{
          f = ld f;
          f1 = force? f;
          checkMissing(f1);
          return f1;
        };
        r218 = dyn sQuote8(p86);
        return r218;
      };
      r220 = dyn gettextf6("  Running %s", p87);
      return r220;
    };
    r222 = dyn message10[, domain](p88, NA_LGL);
    check L241() else D123();
  L285():
    p118 = prom<V +>{
      owd = ld owd;
      owd1 = force? owd;
      checkMissing(owd1);
      return owd1;
    };
    r288 = dyn setwd2(p118);
    check L286() else D153();
  D35():
    deopt 115 [];
  D37():
    deopt 120 [];
  D39():
    deopt 126 [];
  D123():
    deopt 373 [i2, r222];
  D153():
    deopt 474 [r288];
  L115():
    r70 = dyn Sys_setenv[R_LIBS]("");
    check L116() else D36();
  L118():
    p27 = prom<V +>{
      cmd = ld cmd;
      cmd1 = force? cmd;
      checkMissing(cmd1);
      return cmd1;
    };
    r73 = dyn paste4("R_LIBS=", p27);
    check L119() else D38();
  L120():
    p28 = prom<V +>{
      cmd2 = ld cmd;
      cmd3 = force? cmd2;
      checkMissing(cmd3);
      return cmd3;
    };
    r75 = dyn system(p28);
    check L121() else D40();
  L241():
    sub = ldf sub;
    check L242() else D124();
  L286():
    goto L54();
  D36():
    deopt 118 [r70];
  D38():
    deopt 123 [r73];
  D40():
    deopt 128 [r75];
  D124():
    deopt 375 [i2];
  L116():
    goto L15();
  L119():
    st cmd = r73;
    goto L15();
  L121():
    st res = r75;
    res = ld res;
    check L122() else D41();
  L242():
    p90 = prom<V +>{
      paste10 = ldf paste0;
      p89 = prom<V +>{
        f2 = ld f;
        f3 = force? f2;
        checkMissing(f3);
        return f3;
      };
      r224 = dyn paste10(p89, "out");
      return r224;
    };
    r226 = dyn sub("rout$", "Rout", p90);
    check L243() else D125();
  D41():
    deopt 130 [res];
  D125():
    deopt 379 [i2, r226];
  L122():
    res1 = force? res;
    checkMissing(res1);
    c7 = `as.logical`(res1);
    if c7 then L123() else L16();
  L243():
    st outfile = r226;
    paste11 = ldf paste;
    check L244() else D126();
  D126():
    deopt 382 [i2];
  L16():
    file_rename1 = ldf `file.rename`;
    check L131() else D45();
  L123():
    message1 = ldf message;
    check L124() else D42();
  L244():
    p93 = prom<V +>{
      shQuote3 = ldf shQuote;
      p92 = prom<V +>{
        file_path5 = ldf `file.path`;
        p91 = prom<V +>{
          R_home1 = ldf `R.home`;
          r227 = dyn R_home1("bin");
          return r227;
        };
        r229 = dyn file_path5(p91, "R");
        return r229;
      };
      r231 = dyn shQuote3(p92);
      return r231;
    };
    p94 = prom<V +>{
      Ropts3 = ld Ropts;
      Ropts4 = force? Ropts3;
      checkMissing(Ropts4);
      return Ropts4;
    };
    p96 = prom<V +>{
      shQuote4 = ldf shQuote;
      p95 = prom<V +>{
        f4 = ld f;
        f5 = force? f4;
        checkMissing(f5);
        return f5;
      };
      r235 = dyn shQuote4(p95);
      return r235;
    };
    p98 = prom<V +>{
      shQuote5 = ldf shQuote;
      p97 = prom<V +>{
        outfile22 = ld outfile;
        outfile23 = force? outfile22;
        checkMissing(outfile23);
        return outfile23;
      };
      r238 = dyn shQuote5(p97);
      return r238;
    };
    r240 = dyn paste11(p93, "CMD BATCH --vanilla --no-timing", p94, p96, p98);
    check L245() else D127();
  D42():
    deopt 133 [];
  D45():
    deopt 145 [];
  D127():
    deopt 388 [i2, r240];
  L124():
    p31 = prom<V +>{
      gettextf1 = ldf gettextf;
      p30 = prom<V +>{
        sQuote1 = ldf sQuote;
        p29 = prom<V +>{
          Rfile4 = ld Rfile;
          Rfile5 = force? Rfile4;
          checkMissing(Rfile5);
          return Rfile5;
        };
        r77 = dyn sQuote1(p29);
        return r77;
      };
      r79 = dyn gettextf1("Error: running examples in %s failed", p30);
      return r79;
    };
    r81 = dyn message1[, domain](p31, NA_LGL);
    check L125() else D43();
  L131():
    p32 = prom<V +>{
      failfile4 = ld failfile;
      failfile5 = force? failfile4;
      checkMissing(failfile5);
      return failfile5;
    };
    p33 = prom<V +>{
      outfile8 = ld outfile;
      outfile9 = force? outfile8;
      checkMissing(outfile9);
      return outfile9;
    };
    r89 = dyn file_rename1(p32, p33);
    check L132() else D46();
  L245():
    st cmd = r240;
    _Platform4 = ld `.Platform`;
    check L246() else D128();
  D43():
    deopt 137 [r81];
  D46():
    deopt 148 [r89];
  D128():
    deopt 390 [i2, _Platform4];
  L125():
    sym6 = ldf invisible;
    base6 = ldf invisible in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L126() else L127();
  L132():
    paste5 = ldf paste0;
    check L133() else D47();
  L246():
    _Platform5 = force? _Platform4;
    checkMissing(_Platform5);
    c32 = `is.object`(_Platform5);
    if c32 then L248() else L249(i2, _Platform5);
  D47():
    deopt 150 [];
  L17(r83):
    popenv;
    return r83;
  L126():
    invisible = ldf invisible in base;
    r84 = dyn invisible(1);
    check L128() else D44();
  L127():
    r82 = dyn base6(1);
    goto L17(r82);
  L133():
    p34 = prom<V +>{
      outfile10 = ld outfile;
      outfile11 = force? outfile10;
      checkMissing(outfile11);
      return outfile11;
    };
    r91 = dyn paste5(p34, ".save");
    check L134() else D48();
  L247(i8, dx3):
    r242 = `==`(dx3, "windows");
    c33 = `as.logical`(r242);
    if c33 then L251() else L44();
  L248():
    dr2 = tryDispatchBuiltin.1("$", _Platform5);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L250() else L249(i2, dr2);
  L249(i6, _Platform7):
    r241 = `$`(_Platform7, <sym OS.type>);
    goto L247(i6, r241);
  D44():
    deopt 142 [r84];
  D48():
    deopt 153 [r91];
  L44():
    paste13 = ldf paste;
    check L255() else D131();
  L45(i11, r245):
    st cmd = r245;
    system1 = ldf system;
    check L257() else D133();
  L128():
    goto L17(r84);
  L134():
    st savefile = r91;
    sym7 = ldf `is.null`;
    base7 = ldf `is.null` in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L135() else L136();
  L250():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L247(i2, dx2);
  L251():
    paste12 = ldf paste;
    check L252() else D129();
  D129():
    deopt 396 [i8];
  D131():
    deopt 401 [i8];
  D133():
    deopt 407 [i11];
  L19(r93):
    r94 = `!`(r93);
    c9 = `as.logical`(r94);
    if c9 then L138() else L20();
  L135():
    srcdir1 = ld srcdir;
    check L137() else D49();
  L136():
    r92 = dyn base7(<sym srcdir>);
    goto L19(r92);
  L252():
    p99 = prom<V +>{
      cmd8 = ld cmd;
      cmd9 = force? cmd8;
      checkMissing(cmd9);
      return cmd9;
    };
    r244 = dyn paste12(p99, "LANGUAGE=C");
    check L253() else D130();
  L255():
    p100 = prom<V +>{
      cmd10 = ld cmd;
      cmd11 = force? cmd10;
      checkMissing(cmd11);
      return cmd11;
    };
    r247 = dyn paste13("LANGUAGE=C", p100);
    check L256() else D132();
  L257():
    p101 = prom<V +>{
      cmd12 = ld cmd;
      cmd13 = force? cmd12;
      checkMissing(cmd13);
      return cmd13;
    };
    r249 = dyn system1(p101);
    check L258() else D134();
  D49():
    deopt 156 [srcdir1];
  D130():
    deopt 399 [i8, r244];
  D132():
    deopt 404 [i8, r247];
  D134():
    deopt 409 [i11, r249];
  L20():
    file_path2 = ldf `file.path`;
    check L142() else D52();
  L21():
    file_exists3 = ldf `file.exists`;
    check L153() else D59();
  L137():
    srcdir2 = force? srcdir1;
    checkMissing(srcdir2);
    c8 = `==`(srcdir2, NULL);
    goto L19(c8);
  L138():
    file_path1 = ldf `file.path`;
    check L139() else D50();
  L253():
    goto L45(i8, r244);
  L256():
    goto L45(i8, r247);
  L258():
    st res = r249;
    res2 = ld res;
    check L259() else D135();
  D50():
    deopt 161 [];
  D52():
    deopt 167 [];
  D59():
    deopt 190 [];
  D135():
    deopt 411 [i11, res2];
  L139():
    p35 = prom<V +>{
      srcdir3 = ld srcdir;
      srcdir4 = force? srcdir3;
      checkMissing(srcdir4);
      return srcdir4;
    };
    p36 = prom<V +>{
      savefile2 = ld savefile;
      savefile3 = force? savefile2;
      checkMissing(savefile3);
      return savefile3;
    };
    r97 = dyn file_path1(p35, p36);
    check L140() else D51();
  L142():
    p37 = prom<V +>{
      pkgdir2 = ld pkgdir;
      pkgdir3 = force? pkgdir2;
      checkMissing(pkgdir3);
      return pkgdir3;
    };
    p38 = prom<V +>{
      savefile4 = ld savefile;
      savefile5 = force? savefile4;
      checkMissing(savefile5);
      return savefile5;
    };
    r101 = dyn file_path2(p37, "tests", "Examples", p38);
    check L143() else D53();
  L153():
    p41 = prom<V +>{
      savefile8 = ld savefile;
      savefile9 = force? savefile8;
      checkMissing(savefile9);
      return savefile9;
    };
    r108 = dyn file_exists3(p41);
    check L154() else D60();
  L259():
    res3 = force? res2;
    checkMissing(res3);
    c34 = `as.logical`(res3);
    if c34 then L260() else L46();
  D51():
    deopt 164 [r97];
  D53():
    deopt 172 [r101];
  D60():
    deopt 192 [r108];
  L46():
    paste15 = ldf paste0;
    check L270() else D141();
  L140():
    st savefile = r97;
    goto L21();
  L143():
    st tfile = r101;
    file_exists1 = ldf `file.exists`;
    check L144() else D54();
  L154():
    c17 = `as.logical`(r108);
    if c17 then L155() else L24();
  L260():
    file_rename2 = ldf `file.rename`;
    check L261() else D136();
  D54():
    deopt 175 [];
  D136():
    deopt 414 [i11];
  D141():
    deopt 433 [i11];
  L24():
    paste7 = ldf paste0;
    check L189() else D83();
  L34(r146):
    goto L39(r146);
  L144():
    p39 = prom<V +>{
      savefile6 = ld savefile;
      savefile7 = force? savefile6;
      checkMissing(savefile7);
      return savefile7;
    };
    r103 = dyn file_exists1(p39);
    check L145() else D55();
  L155():
    file_exists4 = ldf `file.exists`;
    check L156() else D61();
  L261():
    p102 = prom<V +>{
      outfile24 = ld outfile;
      outfile25 = force? outfile24;
      checkMissing(outfile25);
      return outfile25;
    };
    p104 = prom<V +>{
      paste14 = ldf paste0;
      p103 = prom<V +>{
        outfile26 = ld outfile;
        outfile27 = force? outfile26;
        checkMissing(outfile27);
        return outfile27;
      };
      r252 = dyn paste14(p103, ".fail");
      return r252;
    };
    r254 = dyn file_rename2(p102, p104);
    check L262() else D137();
  L270():
    p108 = prom<V +>{
      outfile28 = ld outfile;
      outfile29 = force? outfile28;
      checkMissing(outfile29);
      return outfile29;
    };
    r267 = dyn paste15(p108, ".save");
    check L271() else D142();
  D55():
    deopt 177 [r103];
  D61():
    deopt 194 [];
  D83():
    deopt 255 [];
  D137():
    deopt 417 [i11, r254];
  D142():
    deopt 436 [i11, r267];
  L145():
    r104 = `!`(r103);
    c10 = `as.logical`(r104);
    if c10 then L146() else L22(c10);
  L156():
    p42 = prom<V +>{
      savefile10 = ld savefile;
      savefile11 = force? savefile10;
      checkMissing(savefile11);
      return savefile11;
    };
    r110 = dyn file_exists4(p42);
    check L157() else D62();
  L189():
    p55 = prom<V +>{
      outfile16 = ld outfile;
      outfile17 = force? outfile16;
      checkMissing(outfile17);
      return outfile17;
    };
    r148 = dyn paste7(p55, ".prev");
    check L190() else D84();
  L262():
    message11 = ldf message;
    check L263() else D138();
  L271():
    st savefile = r267;
    file_exists6 = ldf `file.exists`;
    check L272() else D143();
  D62():
    deopt 196 [r110];
  D84():
    deopt 258 [r148];
  D138():
    deopt 419 [i11];
  D143():
    deopt 439 [i11];
  L22(c12):
    c16 = `as.logical`(c12);
    if c16 then L150() else L23();
  L146():
    file_exists2 = ldf `file.exists`;
    check L147() else D56();
  L157():
    c18 = `as.logical`(r110);
    if c18 then L158() else L25();
  L190():
    st prevfile = r148;
    file_exists5 = ldf `file.exists`;
    check L191() else D85();
  L263():
    p107 = prom<V +>{
      gettextf7 = ldf gettextf;
      p106 = prom<V +>{
        sQuote9 = ldf sQuote;
        p105 = prom<V +>{
          f6 = ld f;
          f7 = force? f6;
          checkMissing(f7);
          return f7;
        };
        r256 = dyn sQuote9(p105);
        return r256;
      };
      r258 = dyn gettextf7("Error: running the tests in %s failed", p106);
      return r258;
    };
    r260 = dyn message11[, domain](p107, NA_LGL);
    check L264() else D139();
  L272():
    p109 = prom<V +>{
      savefile16 = ld savefile;
      savefile17 = force? savefile16;
      checkMissing(savefile17);
      return savefile17;
    };
    r269 = dyn file_exists6(p109);
    check L273() else D144();
  D56():
    deopt 180 [c10];
  D85():
    deopt 261 [];
  D139():
    deopt 423 [i11, r260];
  D144():
    deopt 441 [i11, r269];
  L23():
    goto L21();
  L25():
    goto L33(NULL);
  L33(r145):
    goto L34(r145);
  L147():
    p40 = prom<V +>{
      tfile = ld tfile;
      tfile1 = force? tfile;
      checkMissing(tfile1);
      return tfile1;
    };
    r106 = dyn file_exists2(p40);
    check L148() else D57();
  L150():
    tfile2 = ld tfile;
    check L151() else D58();
  L158():
    message2 = ldf message;
    check L159() else D63();
  L191():
    p56 = prom<V +>{
      prevfile = ld prevfile;
      prevfile1 = force? prevfile;
      checkMissing(prevfile1);
      return prevfile1;
    };
    r150 = dyn file_exists5(p56);
    check L192() else D86();
  L264():
    sym12 = ldf invisible;
    base12 = ldf invisible in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L265() else L266();
  L273():
    c35 = `as.logical`(r269);
    if c35 then L274() else L49();
  D57():
    deopt 182 [c10, r106];
  D58():
    deopt 184 [tfile2];
  D63():
    deopt 198 [];
  D86():
    deopt 263 [r150];
  L47(r262):
    popenv;
    return r262;
  L49():
    goto L52(i11);
  L52(i24):
    goto L43(i24);
  L148():
    c13 = `as.logical`(r106);
    c14 = `&&`(c10, c13);
    goto L22(c14);
  L151():
    tfile3 = force? tfile2;
    checkMissing(tfile3);
    st savefile = tfile3;
    goto L21();
  L159():
    p48 = prom<V +>{
      gettextf2 = ldf gettextf;
      p44 = prom<V +>{
        sQuote2 = ldf sQuote;
        p43 = prom<V +>{
          outfile12 = ld outfile;
          outfile13 = force? outfile12;
          checkMissing(outfile13);
          return outfile13;
        };
        r112 = dyn sQuote2(p43);
        return r112;
      };
      p47 = prom<V +>{
        sQuote3 = ldf sQuote;
        p46 = prom<V +>{
          basename = ldf basename;
          p45 = prom<V +>{
            savefile12 = ld savefile;
            savefile13 = force? savefile12;
            checkMissing(savefile13);
            return savefile13;
          };
          r115 = dyn basename(p45);
          return r115;
        };
        r117 = dyn sQuote3(p46);
        return r117;
      };
      r119 = dyn gettextf2("  comparing %s to %s ...", p44, p47);
      return r119;
    };
    r121 = dyn message2[, appendLF, domain](p48, FALSE, NA_LGL);
    check L160() else D64();
  L192():
    c22 = `as.logical`(r150);
    if c22 then L193() else L35();
  L265():
    invisible1 = ldf invisible in base;
    r263 = dyn invisible1(1);
    check L267() else D140();
  L266():
    r261 = dyn base12(1);
    goto L47(r261);
  L274():
    message12 = ldf message;
    check L275() else D145();
  D64():
    deopt 204 [r121];
  D140():
    deopt 428 [i11, r263];
  D145():
    deopt 443 [i11];
  L35():
    goto L34(NULL);
  L160():
    sprintf = ldf sprintf;
    check L161() else D65();
  L193():
    message6 = ldf message;
    check L194() else D87();
  L267():
    goto L47(r263);
  L275():
    p114 = prom<V +>{
      gettextf8 = ldf gettextf;
      p111 = prom<V +>{
        sQuote10 = ldf sQuote;
        p110 = prom<V +>{
          outfile30 = ld outfile;
          outfile31 = force? outfile30;
          checkMissing(outfile31);
          return outfile31;
        };
        r271 = dyn sQuote10(p110);
        return r271;
      };
      p113 = prom<V +>{
        sQuote11 = ldf sQuote;
        p112 = prom<V +>{
          savefile18 = ld savefile;
          savefile19 = force? savefile18;
          checkMissing(savefile19);
          return savefile19;
        };
        r274 = dyn sQuote11(p112);
        return r274;
      };
      r276 = dyn gettextf8("  comparing %s to %s ...", p111, p113);
      return r276;
    };
    r278 = dyn message12[, appendLF, domain](p114, FALSE, NA_LGL);
    check L276() else D146();
  D65():
    deopt 206 [];
  D87():
    deopt 265 [];
  D146():
    deopt 449 [i11, r278];
  L161():
    p49 = prom<V +>{
      outfile14 = ld outfile;
      outfile15 = force? outfile14;
      checkMissing(outfile15);
      return outfile15;
    };
    p50 = prom<V +>{
      savefile14 = ld savefile;
      savefile15 = force? savefile14;
      checkMissing(savefile15);
      return savefile15;
    };
    p51 = prom<V +>{
      sym8 = ldf `as.character`;
      base8 = ldf `as.character` in base;
      guard8 = `==`.4(sym8, base8);
      if guard8 then L1() else L2();
    L0(r125):
      return r125;
    L1():
      useDiff = ld useDiff;
      useDiff1 = force? useDiff;
      checkMissing(useDiff1);
      as_character = ldf `as.character` in base;
      r126 = dyn as_character(useDiff1);
      goto L0(r126);
    L2():
      r124 = dyn base8(<sym useDiff>);
      goto L0(r124);
    };
    r128 = dyn sprintf("invisible(tools::Rdiff('%s','%s',%s,TRUE))", p49, p50, p51);
    check L162() else D66();
  L194():
    p62 = prom<V +>{
      gettextf3 = ldf gettextf;
      p58 = prom<V +>{
        sQuote4 = ldf sQuote;
        p57 = prom<V +>{
          outfile18 = ld outfile;
          outfile19 = force? outfile18;
          checkMissing(outfile19);
          return outfile19;
        };
        r152 = dyn sQuote4(p57);
        return r152;
      };
      p61 = prom<V +>{
        sQuote5 = ldf sQuote;
        p60 = prom<V +>{
          basename1 = ldf basename;
          p59 = prom<V +>{
            prevfile2 = ld prevfile;
            prevfile3 = force? prevfile2;
            checkMissing(prevfile3);
            return prevfile3;
          };
          r155 = dyn basename1(p59);
          return r155;
        };
        r157 = dyn sQuote5(p60);
        return r157;
      };
      r159 = dyn gettextf3("  comparing %s to %s ...", p58, p61);
      return r159;
    };
    r161 = dyn message6[, appendLF, domain](p62, FALSE, NA_LGL);
    check L195() else D88();
  L276():
    Rdiff = ldf Rdiff;
    check L277() else D147();
  D66():
    deopt 211 [r128];
  D88():
    deopt 271 [r161];
  D147():
    deopt 451 [i11];
  L162():
    st cmd = r128;
    R_runR = ldf R_runR;
    check L163() else D67();
  L195():
    sprintf1 = ldf sprintf;
    check L196() else D89();
  L277():
    p115 = prom<V +>{
      outfile32 = ld outfile;
      outfile33 = force? outfile32;
      checkMissing(outfile33);
      return outfile33;
    };
    p116 = prom<V +>{
      savefile20 = ld savefile;
      savefile21 = force? savefile20;
      checkMissing(savefile21);
      return savefile21;
    };
    p117 = prom<V +>{
      useDiff4 = ld useDiff;
      useDiff5 = force? useDiff4;
      checkMissing(useDiff5);
      return useDiff5;
    };
    r282 = dyn Rdiff(p115, p116, p117);
    check L278() else D148();
  D67():
    deopt 214 [];
  D89():
    deopt 273 [];
  D148():
    deopt 455 [i11, r282];
  L163():
    p52 = prom<V +>{
      cmd4 = ld cmd;
      cmd5 = force? cmd4;
      checkMissing(cmd5);
      return cmd5;
    };
    r130 = dyn R_runR(p52, "--vanilla --no-echo");
    check L164() else D68();
  L196():
    p63 = prom<V +>{
      outfile20 = ld outfile;
      outfile21 = force? outfile20;
      checkMissing(outfile21);
      return outfile21;
    };
    p64 = prom<V +>{
      prevfile4 = ld prevfile;
      prevfile5 = force? prevfile4;
      checkMissing(prevfile5);
      return prevfile5;
    };
    p65 = prom<V +>{
      sym10 = ldf `as.character`;
      base10 = ldf `as.character` in base;
      guard10 = `==`.4(sym10, base10);
      if guard10 then L1() else L2();
    L0(r165):
      return r165;
    L1():
      useDiff2 = ld useDiff;
      useDiff3 = force? useDiff2;
      checkMissing(useDiff3);
      as_character1 = ldf `as.character` in base;
      r166 = dyn as_character1(useDiff3);
      goto L0(r166);
    L2():
      r164 = dyn base10(<sym useDiff>);
      goto L0(r164);
    };
    r168 = dyn sprintf1("invisible(tools::Rdiff('%s','%s',%s,TRUE))", p63, p64, p65);
    check L197() else D90();
  L278():
    st res = r282;
    res4 = ld res;
    check L279() else D149();
  D68():
    deopt 217 [r130];
  D90():
    deopt 278 [r168];
  D149():
    deopt 457 [i11, res4];
  L164():
    st out = r130;
    sym9 = ldf length;
    base9 = ldf length in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L165() else L166();
  L197():
    st cmd = r168;
    R_runR1 = ldf R_runR;
    check L198() else D91();
  L279():
    res5 = force? res4;
    checkMissing(res5);
    r283 = `!`(res5);
    c36 = `as.logical`(r283);
    if c36 then L280() else L50();
  D91():
    deopt 281 [];
  L26(r132):
    c19 = `as.logical`(r132);
    if c19 then L169() else L27();
  L50():
    goto L51(i11, NULL);
  L51(i23, r285):
    goto L52(i23);
  L165():
    out = ld out;
    check L167() else D69();
  L166():
    r131 = dyn base9(<sym out>);
    goto L26(r131);
  L198():
    p66 = prom<V +>{
      cmd6 = ld cmd;
      cmd7 = force? cmd6;
      checkMissing(cmd7);
      return cmd7;
    };
    r170 = dyn R_runR1(p66, "--vanilla --no-echo");
    check L199() else D92();
  L280():
    message13 = ldf message;
    check L281() else D150();
  D69():
    deopt 221 [out];
  D92():
    deopt 284 [r170];
  D150():
    deopt 461 [i11];
  L27():
    message5 = ldf message;
    check L185() else D81();
  L32(r143):
    goto L33(r143);
  L167():
    out1 = force? out;
    checkMissing(out1);
    length1 = ldf length in base;
    r133 = dyn length1(out1);
    check L168() else D70();
  L169():
    strict = ld strict;
    check L170() else D71();
  L199():
    st out = r170;
    sym11 = ldf length;
    base11 = ldf length in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L200() else L201();
  L281():
    r284 = dyn message13(" OK");
    check L282() else D151();
  D70():
    deopt 224 [r133];
  D71():
    deopt 225 [strict];
  D81():
    deopt 249 [];
  D151():
    deopt 463 [i11, r284];
  L36(r172):
    c23 = `as.logical`(r172);
    if c23 then L204() else L37();
  L168():
    goto L26(r133);
  L170():
    strict1 = force? strict;
    checkMissing(strict1);
    c20 = `as.logical`(strict1);
    if c20 then L171() else L28();
  L185():
    r144 = dyn message5(" OK");
    check L186() else D82();
  L200():
    out4 = ld out;
    check L202() else D93();
  L201():
    r171 = dyn base11(<sym out>);
    goto L36(r171);
  L282():
    goto L51(i11, r284);
  D82():
    deopt 251 [r144];
  D93():
    deopt 288 [out4];
  L28():
    message4 = ldf message;
    check L175() else D74();
  L29():
    writeLines = ldf writeLines;
    check L177() else D76();
  L37():
    message8 = ldf message;
    check L210() else D99();
  L38(r179):
    goto L34(r179);
  L171():
    message3 = ldf message;
    check L172() else D72();
  L186():
    goto L32(r144);
  L202():
    out5 = force? out4;
    checkMissing(out5);
    length2 = ldf length in base;
    r173 = dyn length2(out5);
    check L203() else D94();
  L204():
    message7 = ldf message;
    check L205() else D95();
  D72():
    deopt 228 [];
  D74():
    deopt 232 [];
  D76():
    deopt 236 [];
  D94():
    deopt 291 [r173];
  D95():
    deopt 293 [];
  D99():
    deopt 301 [];
  L172():
    r134 = dyn message3(" ERROR");
    check L173() else D73();
  L175():
    r136 = dyn message4(" NOTE");
    check L176() else D75();
  L177():
    p54 = prom<V +>{
      paste6 = ldf paste0;
      p53 = prom<V +>{
        out2 = ld out;
        out3 = force? out2;
        checkMissing(out3);
        return out3;
      };
      r138 = dyn paste6("  ", p53);
      return r138;
    };
    r140 = dyn writeLines(p54);
    check L178() else D77();
  L203():
    goto L36(r173);
  L205():
    r174 = dyn message7(" NOTE");
    check L206() else D96();
  L210():
    r180 = dyn message8(" OK");
    check L211() else D100();
  D73():
    deopt 230 [r134];
  D75():
    deopt 234 [r136];
  D77():
    deopt 238 [r140];
  D96():
    deopt 295 [r174];
  D100():
    deopt 303 [r180];
  L173():
    goto L29();
  L176():
    goto L29();
  L178():
    strict2 = ld strict;
    check L179() else D78();
  L206():
    writeLines1 = ldf writeLines;
    check L207() else D97();
  L211():
    goto L38(r180);
  D78():
    deopt 239 [strict2];
  D97():
    deopt 297 [];
  L179():
    strict3 = force? strict2;
    checkMissing(strict3);
    c21 = `as.logical`(strict3);
    if c21 then L180() else L30();
  L207():
    p68 = prom<V +>{
      paste8 = ldf paste0;
      p67 = prom<V +>{
        out6 = ld out;
        out7 = force? out6;
        checkMissing(out7);
        return out7;
      };
      r176 = dyn paste8("  ", p67);
      return r176;
    };
    r178 = dyn writeLines1(p68);
    check L208() else D98();
  D98():
    deopt 299 [r178];
  L30():
    goto L31(NULL);
  L31(r142):
    goto L32(r142);
  L180():
    stop = ldf stop;
    check L181() else D79();
  L208():
    goto L38(r178);
  D79():
    deopt 242 [];
  L181():
    r141 = dyn stop("  ", "results differ from reference results");
    check L182() else D80();
  D80():
    deopt 245 [r141];
  L182():
    goto L31(r141);
  }
}