fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3562930822;
    st testInstalledBasic = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3562930822(scope, outDir, testSrcdir) {
  (reg scope:*, reg outDir:*, reg testSrcdir:*) -+> V { var scope:*, reg scope_isMissing:L, reg scope_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg c:cls, reg r2:V, reg p:p(V +), var outDir:*, reg outDir_isMissing:L, reg outDir_orDefault:*, reg file_path:cls, reg R_home:cls, reg r4:V, reg p1:p(V +), reg r6:V, reg p2:p(V +), var testSrcdir:*, reg testSrcdir_isMissing:L, reg testSrcdir_orDefault:*, reg getTestSrcdir:cls, reg outDir1:*, reg outDir2:V, reg p3:p(V +), reg r9:V, reg p4:p(V +), reg match_arg:cls, reg scope1:*, reg scope2:V, reg p5:p(V +), reg r12:V, reg Sys_getlocale:cls, reg r13:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r14:V, reg on_exit:cls, reg r16:V, reg Sys_setlocale:cls, reg r17:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r18:V, reg r19:V, reg c1:cls, reg r20:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r21:V, reg r22:V, reg c2:cls, reg r23:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r24:V, reg r25:V, reg c3:cls, reg r26:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r27:V, reg r28:V, reg Sys_which:cls, reg r29:V, reg nzchar:cls, reg r30:V, reg r31:cls, reg setwd:cls, reg outDir3:*, reg outDir4:V, reg p6:p(V +), reg r33:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r34:V, reg on_exit1:cls, reg r36:V, reg _is_writeable:cls, reg r37:V, reg r38:V, reg c4:L, reg stop:cls, reg gettextf:cls, reg sQuote:cls, reg outDir5:*, reg outDir6:V, reg p7:p(V +), reg r40:V, reg p8:p(V +), reg r42:V, reg p9:p(V +), reg r44:V, reg r46:cls, reg r47:cls, reg normalizePath:cls, reg testSrcdir1:*, reg testSrcdir2:V, reg p10:p(V +), reg r49:V, reg normalizePath1:cls, reg outDir7:*, reg outDir8:V, reg p11:p(V +), reg r51:V, reg r52:V, reg srcDiffers:*, reg srcDiffers1:V, reg c5:L, reg testSrcdir3:*, reg testSrcdir4:V, reg testSrcdir5:V, reg paste:cls, reg paste1:cls, reg SRCDIR:*, reg SRCDIR1:V, reg p12:p(V +), reg r54:V, reg p13:p(V +), reg r56:V, reg _in_:cls, reg scope3:*, reg scope4:V, reg p14:p(V +), reg sym7:cls, reg base7:cls, reg guard7:L, reg r58:V, reg r59:V, reg c6:cls, reg r60:V, reg p15:p(V +), reg r62:V, reg c7:L, reg message:cls, reg r63:V, reg tests1:*, reg tests2:V, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c8:L, reg x:V, reg runone:cls, reg f:*, reg f1:V, reg p16:p(V +), reg r65:V, reg c9:L, reg message1:cls, reg r68:V, reg tests3:*, reg tests4:V, reg s1:V, reg l1:I, reg i9:I, reg i10:I, reg i11:I, reg c10:L, reg x1:V, reg runone1:cls, reg f2:*, reg f3:V, reg p17:p(V +), reg r70:V, reg message2:cls, reg r71:V, reg tests5:*, reg tests6:V, reg s2:V, reg l2:I, reg i14:I, reg i15:I, reg i16:I, reg c11:L, reg x2:V, reg runone2:cls, reg f4:*, reg f5:V, reg p18:p(V +), reg r73:V, reg c12:L, reg sym8:cls, reg base8:cls, reg guard8:L, reg r74:V, reg r75:V, reg invisible:cls, reg r76:V, reg f6:*, reg f7:V, reg r79:V, reg c13:L, reg comparePdf:cls, reg f8:*, reg f9:V, reg p19:p(V +), reg r81:V, reg i28:I, reg runone3:cls, reg r83:V, reg runone4:cls, reg r84:V, reg runone5:cls, reg r85:V, reg runone6:cls, reg r86:V, reg message3:cls, reg r87:V, reg message4:cls, reg r88:V, reg runone7:cls, reg r89:V, reg r90:V, reg c14:L, reg comparePdf1:cls, reg r91:V, reg r92:V, reg _in_1:cls, reg scope5:*, reg scope6:V, reg p20:p(V +), reg sym9:cls, reg base9:cls, reg guard9:L, reg r95:V, reg r96:V, reg c15:cls, reg r97:V, reg p21:p(V +), reg r99:V, reg c16:L, reg message5:cls, reg r100:V, reg runone8:cls, reg r101:V, reg runone9:cls, reg r102:V, reg runone10:cls, reg r103:V, reg message6:cls, reg r104:V, reg runone11:cls, reg r105:V, reg message7:cls, reg r106:V, reg runone12:cls, reg r107:V, reg message8:cls, reg r108:V, reg runone13:cls, reg r109:V, reg c17:L, reg sym10:cls, reg base10:cls, reg guard10:L, reg r110:V, reg r111:V, reg invisible1:cls, reg r112:V, reg message9:cls, reg r115:V, reg runone14:cls, reg r116:V, reg c18:L, reg sym11:cls, reg base11:cls, reg guard11:L, reg r117:V, reg r118:V, reg invisible2:cls, reg r119:V, reg runone15:cls, reg r122:V, reg c19:L, reg sym12:cls, reg base12:cls, reg guard12:L, reg r123:V, reg r124:V, reg invisible3:cls, reg r125:V, reg message10:cls, reg r128:V, reg runone16:cls, reg r129:V, reg c20:L, reg sym13:cls, reg base13:cls, reg guard13:L, reg r130:V, reg r131:V, reg invisible4:cls, reg r132:V, reg message11:cls, reg r135:V, reg runone17:cls, reg r136:V, reg c21:L, reg sym14:cls, reg base14:cls, reg guard14:L, reg r137:V, reg r138:V, reg invisible5:cls, reg r139:V, reg runone18:cls, reg r142:V, reg c22:L, reg sym15:cls, reg base15:cls, reg guard15:L, reg r143:V, reg r144:V, reg invisible6:cls, reg r145:V, reg message12:cls, reg r148:V, reg runone19:cls, reg r149:V, reg c23:L, reg sym16:cls, reg base16:cls, reg guard16:L, reg r150:V, reg r151:V, reg invisible7:cls, reg r152:V, reg runone20:cls, reg r155:V, reg c24:L, reg sym17:cls, reg base17:cls, reg guard17:L, reg r156:V, reg r157:V, reg invisible8:cls, reg r158:V, reg message13:cls, reg r161:V, reg runone21:cls, reg r162:V, reg c25:L, reg sym18:cls, reg base18:cls, reg guard18:L, reg r163:V, reg r164:V, reg invisible9:cls, reg r165:V, reg message14:cls, reg r168:V, reg runone22:cls, reg r169:V, reg c26:L, reg sym19:cls, reg base19:cls, reg guard19:L, reg r170:V, reg r171:V, reg invisible10:cls, reg r172:V, reg _in_2:cls, reg scope7:*, reg scope8:V, reg p22:p(V +), reg sym20:cls, reg base20:cls, reg guard20:L, reg r177:V, reg r178:V, reg c27:cls, reg r179:V, reg p23:p(V +), reg r181:V, reg c28:L, reg message15:cls, reg r182:V, reg runone23:cls, reg r183:V, reg message16:cls, reg r184:V, reg runone24:cls, reg r185:V, reg runone25:cls, reg r186:V, reg sym21:cls, reg base21:cls, reg guard21:L, reg r188:V, reg r189:V, reg invisible11:cls, reg r190:V |
    mkenv;
    scope_isMissing = missing.0(scope);
    if scope_isMissing then L0() else L1(scope);
  L0():
    p = prom<V +>{
      sym = ldf c;
      base = ldf c in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r1):
      return r1;
    L1():
      c = ldf c in base;
      r2 = dyn c("basic", "devel", "both", "internet", "all");
      goto L0(r2);
    L2():
      r = dyn base("basic", "devel", "both", "internet", "all");
      goto L0(r);
    };
    goto L1(p);
  L1(scope_orDefault):
    st scope = scope_orDefault;
    outDir_isMissing = missing.0(outDir);
    if outDir_isMissing then L2() else L3(outDir);
  L2():
    p2 = prom<V +>{
      file_path = ldf `file.path`;
      p1 = prom<V +>{
        R_home = ldf `R.home`;
        r4 = dyn R_home();
        return r4;
      };
      r6 = dyn file_path(p1, "tests");
      return r6;
    };
    goto L3(p2);
  L3(outDir_orDefault):
    st outDir = outDir_orDefault;
    testSrcdir_isMissing = missing.0(testSrcdir);
    if testSrcdir_isMissing then L4() else L5(testSrcdir);
  L4():
    p4 = prom<V +>{
      getTestSrcdir = ldf getTestSrcdir;
      p3 = prom<V +>{
        outDir1 = ld outDir;
        outDir2 = force? outDir1;
        checkMissing(outDir2);
        return outDir2;
      };
      r9 = dyn getTestSrcdir(p3);
      return r9;
    };
    goto L5(p4);
  L5(testSrcdir_orDefault):
    st testSrcdir = testSrcdir_orDefault;
    match_arg = ldf `match.arg`;
    check L68() else D0();
  D0():
    deopt 1 [];
  L68():
    p5 = prom<V +>{
      scope1 = ld scope;
      scope2 = force? scope1;
      checkMissing(scope2);
      return scope2;
    };
    r12 = dyn match_arg(p5);
    check L69() else D1();
  D1():
    deopt 3 [r12];
  L69():
    st scope = r12;
    Sys_getlocale = ldf `Sys.getlocale`;
    check L70() else D2();
  D2():
    deopt 6 [];
  L70():
    r13 = dyn Sys_getlocale("LC_COLLATE");
    check L71() else D3();
  D3():
    deopt 8 [r13];
  L71():
    st oLCcoll = r13;
    sym1 = ldf `on.exit`;
    base1 = ldf `on.exit` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L72() else L73();
  L6():
    Sys_setlocale = ldf `Sys.setlocale`;
    check L74() else D4();
  L72():
    on_exit = ldf `on.exit` in base;
    r16 = dyn on_exit(<lang Sys.setlocale("LC_COLLATE", oLCcoll)>);
    goto L6();
  L73():
    r14 = dyn base1(<lang Sys.setlocale("LC_COLLATE", oLCcoll)>);
    goto L6();
  D4():
    deopt 14 [];
  L74():
    r17 = dyn Sys_setlocale("LC_COLLATE", "C");
    check L75() else D5();
  D5():
    deopt 17 [r17];
  L75():
    sym2 = ldf c;
    base2 = ldf c in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L76() else L77();
  L7(r19):
    st tests1 = r19;
    sym3 = ldf c;
    base3 = ldf c in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L79() else L80();
  L76():
    c1 = ldf c in base;
    r20 = dyn c1("eval-etc", "simple-true", "arith-true", "lm-tests", "ok-errors", "method-dispatch", "array-subset", "p-r-random-tests", "d-p-q-r-tst-2", "any-all", "structure", "d-p-q-r-tests");
    check L78() else D6();
  L77():
    r18 = dyn base2("eval-etc", "simple-true", "arith-true", "lm-tests", "ok-errors", "method-dispatch", "array-subset", "p-r-random-tests", "d-p-q-r-tst-2", "any-all", "structure", "d-p-q-r-tests");
    goto L7(r18);
  D6():
    deopt 33 [r20];
  L8(r22):
    st tests2 = r22;
    sym4 = ldf c;
    base4 = ldf c in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L82() else L83();
  L78():
    goto L7(r20);
  L79():
    c2 = ldf c in base;
    r23 = dyn c2("complex", "print-tests", "lapack", "datasets", "datetime", "iec60559");
    check L81() else D7();
  L80():
    r21 = dyn base3("complex", "print-tests", "lapack", "datasets", "datetime", "iec60559");
    goto L8(r21);
  D7():
    deopt 44 [r23];
  L9(r25):
    st tests3 = r25;
    sym5 = ldf nzchar;
    base5 = ldf nzchar in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L85() else L86();
  L81():
    goto L8(r23);
  L82():
    c3 = ldf c in base;
    r26 = dyn c3("reg-tests-1a", "reg-tests-1b", "reg-tests-1c", "reg-tests-1d", "reg-tests-1e", "reg-tests-2", "reg-examples1", "reg-examples2", "reg-packages", "reg-S4-examples", "classes-methods", "datetime3", "p-qbeta-strict-tst", "reg-IO", "reg-IO2", "reg-plot", "reg-S4", "reg-BLAS");
    check L84() else D8();
  L83():
    r24 = dyn base4("reg-tests-1a", "reg-tests-1b", "reg-tests-1c", "reg-tests-1d", "reg-tests-1e", "reg-tests-2", "reg-examples1", "reg-examples2", "reg-packages", "reg-S4-examples", "classes-methods", "datetime3", "p-qbeta-strict-tst", "reg-IO", "reg-IO2", "reg-plot", "reg-S4", "reg-BLAS");
    goto L9(r24);
  D8():
    deopt 67 [r26];
  L10(r28):
    st useDiff = r28;
    r31 = clos inner2144220574;
    st runone = r31;
    setwd = ldf setwd;
    check L90() else D12();
  L84():
    goto L9(r26);
  L85():
    Sys_which = ldf `Sys.which`;
    check L87() else D9();
  L86():
    r27 = dyn base5(<lang Sys.which("diff")>);
    goto L10(r27);
  D9():
    deopt 72 [];
  D12():
    deopt 82 [];
  L87():
    r29 = dyn Sys_which("diff");
    check L88() else D10();
  L90():
    p6 = prom<V +>{
      outDir3 = ld outDir;
      outDir4 = force? outDir3;
      checkMissing(outDir4);
      return outDir4;
    };
    r33 = dyn setwd(p6);
    check L91() else D13();
  D10():
    deopt 74 [r29];
  D13():
    deopt 84 [r33];
  L88():
    nzchar = ldf nzchar in base;
    r30 = dyn nzchar(r29);
    check L89() else D11();
  L91():
    st owd = r33;
    sym6 = ldf `on.exit`;
    base6 = ldf `on.exit` in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L92() else L93();
  D11():
    deopt 76 [r30];
  L11():
    _is_writeable = ldf `.is.writeable`;
    check L94() else D14();
  L89():
    goto L10(r30);
  L92():
    on_exit1 = ldf `on.exit` in base;
    r36 = dyn on_exit1(<lang setwd(owd)>, TRUE);
    goto L11();
  L93():
    r34 = dyn base6[, add](<lang setwd(owd)>, TRUE);
    goto L11();
  D14():
    deopt 90 [];
  L94():
    r37 = dyn _is_writeable(".");
    check L95() else D15();
  D15():
    deopt 92 [r37];
  L95():
    r38 = `!`(r37);
    c4 = `as.logical`(r38);
    if c4 then L96() else L12();
  L12():
    goto L13();
  L13():
    r46 = clos inner3678177630;
    st getTestSrcdir = r46;
    r47 = clos inner1039001620;
    st comparePdf = r47;
    normalizePath = ldf normalizePath;
    check L100() else D18();
  L96():
    stop = ldf stop;
    check L97() else D16();
  D16():
    deopt 95 [];
  D18():
    deopt 109 [];
  L97():
    p9 = prom<V +>{
      gettextf = ldf gettextf;
      p8 = prom<V +>{
        sQuote = ldf sQuote;
        p7 = prom<V +>{
          outDir5 = ld outDir;
          outDir6 = force? outDir5;
          checkMissing(outDir6);
          return outDir6;
        };
        r40 = dyn sQuote(p7);
        return r40;
      };
      r42 = dyn gettextf("directory %s is not writeable ", p8);
      return r42;
    };
    r44 = dyn stop[, domain](p9, NA_LGL);
    check L98() else D17();
  L100():
    p10 = prom<V +>{
      testSrcdir1 = ld testSrcdir;
      testSrcdir2 = force? testSrcdir1;
      checkMissing(testSrcdir2);
      return testSrcdir2;
    };
    r49 = dyn normalizePath(p10);
    check L101() else D19();
  D17():
    deopt 99 [r44];
  D19():
    deopt 111 [r49];
  L98():
    goto L13();
  L101():
    normalizePath1 = ldf normalizePath;
    check L102() else D20();
  D20():
    deopt 112 [r49];
  L102():
    p11 = prom<V +>{
      outDir7 = ld outDir;
      outDir8 = force? outDir7;
      checkMissing(outDir8);
      return outDir8;
    };
    r51 = dyn normalizePath1(p11);
    check L103() else D21();
  D21():
    deopt 114 [r49, r51];
  L103():
    r52 = `!=`(r49, r51);
    st srcDiffers = r52;
    srcDiffers = ld srcDiffers;
    check L104() else D22();
  D22():
    deopt 117 [srcDiffers];
  L104():
    srcDiffers1 = force? srcDiffers;
    checkMissing(srcDiffers1);
    c5 = `as.logical`(srcDiffers1);
    if c5 then L105() else L14();
  L14():
    goto L15(".");
  L15(testSrcdir5):
    st SRCDIR = testSrcdir5;
    paste = ldf paste;
    check L108() else D24();
  L105():
    testSrcdir3 = ld testSrcdir;
    check L106() else D23();
  D23():
    deopt 119 [testSrcdir3];
  D24():
    deopt 125 [];
  L106():
    testSrcdir4 = force? testSrcdir3;
    checkMissing(testSrcdir4);
    goto L15(testSrcdir4);
  L108():
    p13 = prom<V +>{
      paste1 = ldf paste0;
      p12 = prom<V +>{
        SRCDIR = ld SRCDIR;
        SRCDIR1 = force? SRCDIR;
        checkMissing(SRCDIR1);
        return SRCDIR1;
      };
      r54 = dyn paste1("SRCDIR=", p12);
      return r54;
    };
    r56 = dyn paste("LANGUAGE=en", "LC_COLLATE=C", "LC_TIME=C", "R_DEFAULT_PACKAGES=", p13);
    check L109() else D25();
  D25():
    deopt 131 [r56];
  L109():
    st extra0 = r56;
    _in_ = ldf `%in%`;
    check L110() else D26();
  D26():
    deopt 134 [];
  L110():
    p14 = prom<V +>{
      scope3 = ld scope;
      scope4 = force? scope3;
      checkMissing(scope4);
      return scope4;
    };
    p15 = prom<V +>{
      sym7 = ldf c;
      base7 = ldf c in base;
      guard7 = `==`.4(sym7, base7);
      if guard7 then L1() else L2();
    L0(r59):
      return r59;
    L1():
      c6 = ldf c in base;
      r60 = dyn c6("basic", "both", "all");
      goto L0(r60);
    L2():
      r58 = dyn base7("basic", "both", "all");
      goto L0(r58);
    };
    r62 = dyn _in_(p14, p15);
    check L111() else D27();
  D27():
    deopt 137 [r62];
  L111():
    c7 = `as.logical`(r62);
    if c7 then L112() else L16();
  L16():
    goto L32();
  L32():
    _in_1 = ldf `%in%`;
    check L164() else D63();
  L112():
    message = ldf message;
    check L113() else D28();
  D28():
    deopt 139 [];
  D63():
    deopt 259 [];
  L113():
    r63 = dyn message[, domain]("running strict specific tests", NA_LGL);
    check L114() else D29();
  L164():
    p20 = prom<V +>{
      scope5 = ld scope;
      scope6 = force? scope5;
      checkMissing(scope6);
      return scope6;
    };
    p21 = prom<V +>{
      sym9 = ldf c;
      base9 = ldf c in base;
      guard9 = `==`.4(sym9, base9);
      if guard9 then L1() else L2();
    L0(r96):
      return r96;
    L1():
      c15 = ldf c in base;
      r97 = dyn c15("devel", "both", "all");
      goto L0(r97);
    L2():
      r95 = dyn base9("devel", "both", "all");
      goto L0(r95);
    };
    r99 = dyn _in_1(p20, p21);
    check L165() else D64();
  D29():
    deopt 143 [r63];
  D64():
    deopt 262 [r99];
  L114():
    tests1 = ld tests1;
    check L115() else D30();
  L165():
    c16 = `as.logical`(r99);
    if c16 then L166() else L33();
  D30():
    deopt 144 [tests1];
  L33():
    goto L64();
  L64():
    _in_2 = ldf `%in%`;
    check L278() else D125();
  L115():
    tests2 = force? tests1;
    checkMissing(tests2);
    s = toForSeq(tests2);
    l = length(s);
    i = 0;
    goto L17(i);
  L166():
    message5 = ldf message;
    check L167() else D65();
  D65():
    deopt 264 [];
  D125():
    deopt 469 [];
  L17(i1):
    i2 = `+`.1(i1, 1);
    c8 = `<`.1(l, i2);
    if c8 then L116() else L20();
  L167():
    r100 = dyn message5[, domain]("running tests of date-time printing\n expect platform-specific differences", NA_LGL);
    check L168() else D66();
  L278():
    p22 = prom<V +>{
      scope7 = ld scope;
      scope8 = force? scope7;
      checkMissing(scope8);
      return scope8;
    };
    p23 = prom<V +>{
      sym20 = ldf c;
      base20 = ldf c in base;
      guard20 = `==`.4(sym20, base20);
      if guard20 then L1() else L2();
    L0(r178):
      return r178;
    L1():
      c27 = ldf c in base;
      r179 = dyn c27("internet", "all");
      goto L0(r179);
    L2():
      r177 = dyn base20("internet", "all");
      goto L0(r177);
    };
    r181 = dyn _in_2(p22, p23);
    check L279() else D126();
  D66():
    deopt 268 [r100];
  D126():
    deopt 472 [r181];
  L20():
    x = `[[`(s, i2, NULL, TRUE);
    st f = x;
    runone = ldf runone;
    check L117() else D31();
  L116():
    message1 = ldf message;
    check L122() else D33();
  L168():
    runone8 = ldf runone;
    check L169() else D67();
  L279():
    c28 = `as.logical`(r181);
    if c28 then L280() else L65();
  D31():
    deopt 147 [i2];
  D33():
    deopt 159 [];
  D67():
    deopt 270 [];
  L65():
    goto L66();
  L66():
    sym21 = ldf invisible;
    base21 = ldf invisible in base;
    guard21 = `==`.4(sym21, base21);
    if guard21 then L292() else L293();
  L117():
    p16 = prom<V +>{
      f = ld f;
      f1 = force? f;
      checkMissing(f1);
      return f1;
    };
    r65 = dyn runone(p16);
    check L118() else D32();
  L122():
    r68 = dyn message1[, domain]("running sloppy specific tests", NA_LGL);
    check L123() else D34();
  L169():
    r101 = dyn runone8("datetime2");
    check L170() else D68();
  L280():
    message15 = ldf message;
    check L281() else D127();
  D32():
    deopt 149 [i2, r65];
  D34():
    deopt 163 [r68];
  D68():
    deopt 272 [r101];
  D127():
    deopt 474 [];
  L67(r189):
    popenv;
    return r189;
  L118():
    c9 = `as.logical`(r65);
    if c9 then L119() else L18();
  L123():
    tests3 = ld tests2;
    check L124() else D35();
  L170():
    runone9 = ldf runone;
    check L171() else D69();
  L281():
    r182 = dyn message15[, domain]("running tests of Internet functions", NA_LGL);
    check L282() else D128();
  L292():
    invisible11 = ldf invisible in base;
    r190 = dyn invisible11(0);
    check L294() else D137();
  L293():
    r188 = dyn base21(0);
    goto L67(r188);
  D35():
    deopt 164 [tests3];
  D69():
    deopt 274 [];
  D128():
    deopt 478 [r182];
  D137():
    deopt 503 [r190];
  L18():
    goto L17(i2);
  L119():
    popenv;
    return 1;
  L124():
    tests4 = force? tests3;
    checkMissing(tests4);
    s1 = toForSeq(tests4);
    l1 = length(s1);
    i9 = 0;
    goto L21(i9);
  L171():
    r102 = dyn runone9("datetime4");
    check L172() else D70();
  L282():
    runone23 = ldf runone;
    check L283() else D129();
  L294():
    goto L67(r190);
  D70():
    deopt 276 [r102];
  D129():
    deopt 480 [];
  L21(i10):
    i11 = `+`.1(i10, 1);
    c10 = `<`.1(l1, i11);
    if c10 then L125() else L22();
  L172():
    runone10 = ldf runone;
    check L173() else D71();
  L283():
    r183 = dyn runone23("internet");
    check L284() else D130();
  D71():
    deopt 278 [];
  D130():
    deopt 482 [r183];
  L22():
    x1 = `[[`(s1, i11, NULL, TRUE);
    st f = x1;
    runone1 = ldf runone;
    check L126() else D36();
  L125():
    message2 = ldf message;
    check L128() else D38();
  L173():
    r103 = dyn runone10("datetime5");
    check L174() else D72();
  L284():
    message16 = ldf message;
    check L285() else D131();
  D36():
    deopt 167 [i11];
  D38():
    deopt 175 [];
  D72():
    deopt 280 [r103];
  D131():
    deopt 484 [];
  L126():
    p17 = prom<V +>{
      f2 = ld f;
      f3 = force? f2;
      checkMissing(f3);
      return f3;
    };
    r70 = dyn runone1(p17, TRUE);
    check L127() else D37();
  L128():
    r71 = dyn message2[, domain]("running regression tests", NA_LGL);
    check L129() else D39();
  L174():
    message6 = ldf message;
    check L175() else D73();
  L285():
    r184 = dyn message16[, domain]("running more Internet and socket tests", NA_LGL);
    check L286() else D132();
  D37():
    deopt 170 [i11, r70];
  D39():
    deopt 179 [r71];
  D73():
    deopt 282 [];
  D132():
    deopt 488 [r184];
  L127():
    goto L21(i11);
  L129():
    tests5 = ld tests3;
    check L130() else D40();
  L175():
    r104 = dyn message6[, domain]("running tests of consistency of as/is.*", NA_LGL);
    check L176() else D74();
  L286():
    runone24 = ldf runone;
    check L287() else D133();
  D40():
    deopt 180 [tests5];
  D74():
    deopt 286 [r104];
  D133():
    deopt 490 [];
  L130():
    tests6 = force? tests5;
    checkMissing(tests6);
    s2 = toForSeq(tests6);
    l2 = length(s2);
    i14 = 0;
    goto L23(i14);
  L176():
    runone11 = ldf runone;
    check L177() else D75();
  L287():
    r185 = dyn runone24("internet2");
    check L288() else D134();
  D75():
    deopt 288 [];
  D134():
    deopt 492 [r185];
  L23(i15):
    i16 = `+`.1(i15, 1);
    c11 = `<`.1(l2, i16);
    if c11 then L131() else L29();
  L177():
    r105 = dyn runone11("isas-tests");
    check L178() else D76();
  L288():
    runone25 = ldf runone;
    check L289() else D135();
  D76():
    deopt 290 [r105];
  D135():
    deopt 494 [];
  L29():
    x2 = `[[`(s2, i16, NULL, TRUE);
    st f = x2;
    runone2 = ldf runone;
    check L132() else D41();
  L131():
    runone3 = ldf runone;
    check L145() else D47();
  L178():
    message7 = ldf message;
    check L179() else D77();
  L289():
    r186 = dyn runone25("libcurl");
    check L290() else D136();
  D41():
    deopt 183 [i16];
  D47():
    deopt 208 [];
  D77():
    deopt 292 [];
  D136():
    deopt 496 [r186];
  L132():
    p18 = prom<V +>{
      f4 = ld f;
      f5 = force? f4;
      checkMissing(f5);
      return f5;
    };
    r73 = dyn runone2(p18);
    check L133() else D42();
  L145():
    r83 = dyn runone3[, inC]("reg-encodings", FALSE);
    check L146() else D48();
  L179():
    r106 = dyn message7("running tests of random deviate generation (should no longer ever fail)");
    check L180() else D78();
  L290():
    goto L66();
  D42():
    deopt 185 [i16, r73];
  D48():
    deopt 212 [r83];
  D78():
    deopt 294 [r106];
  L133():
    c12 = `as.logical`(r73);
    if c12 then L134() else L24();
  L146():
    runone4 = ldf runone;
    check L147() else D49();
  L180():
    runone12 = ldf runone;
    check L181() else D79();
  D49():
    deopt 214 [];
  D79():
    deopt 296 [];
  L24():
    f6 = ld f;
    check L140() else D44();
  L134():
    sym8 = ldf invisible;
    base8 = ldf invisible in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L135() else L136();
  L147():
    r84 = dyn runone4[, inC]("reg-translation", FALSE);
    check L148() else D50();
  L181():
    r107 = dyn runone12("p-r-random-tests", TRUE);
    check L182() else D80();
  D44():
    deopt 194 [i16, f6];
  D50():
    deopt 218 [r84];
  D80():
    deopt 299 [r107];
  L25(r75):
    popenv;
    return r75;
  L135():
    invisible = ldf invisible in base;
    r76 = dyn invisible(1);
    check L137() else D43();
  L136():
    r74 = dyn base8(1);
    goto L25(r74);
  L140():
    f7 = force? f6;
    checkMissing(f7);
    r79 = `==`(f7, "reg-plot");
    c13 = `as.logical`(r79);
    if c13 then L141() else L27();
  L148():
    runone5 = ldf runone;
    check L149() else D51();
  L182():
    message8 = ldf message;
    check L183() else D81();
  D43():
    deopt 190 [i16, r76];
  D51():
    deopt 220 [];
  D81():
    deopt 301 [];
  L27():
    goto L28(i16);
  L28(i28):
    goto L23(i28);
  L137():
    goto L25(r76);
  L141():
    comparePdf = ldf comparePdf;
    check L142() else D45();
  L149():
    r85 = dyn runone5("reg-tests-3", TRUE);
    check L150() else D52();
  L183():
    r108 = dyn message8[, domain]("running miscellanous strict devel checks", NA_LGL);
    check L184() else D82();
  D45():
    deopt 199 [i16];
  D52():
    deopt 223 [r85];
  D82():
    deopt 305 [r108];
  L142():
    p19 = prom<V +>{
      f8 = ld f;
      f9 = force? f8;
      checkMissing(f9);
      return f9;
    };
    r81 = dyn comparePdf(p19);
    check L143() else D46();
  L150():
    runone6 = ldf runone;
    check L151() else D53();
  L184():
    runone13 = ldf runone;
    check L185() else D83();
  D46():
    deopt 201 [i16, r81];
  D53():
    deopt 225 [];
  D83():
    deopt 307 [];
  L143():
    goto L28(i16);
  L151():
    r86 = dyn runone6("reg-examples3", TRUE);
    check L152() else D54();
  L185():
    r109 = dyn runone13("misc-devel");
    check L186() else D84();
  D54():
    deopt 228 [r86];
  D84():
    deopt 309 [r109];
  L152():
    message3 = ldf message;
    check L153() else D55();
  L186():
    c17 = `as.logical`(r109);
    if c17 then L187() else L34();
  D55():
    deopt 230 [];
  L34():
    message9 = ldf message;
    check L193() else D86();
  L153():
    r87 = dyn message3[, domain]("running tests of plotting Latin-1", NA_LGL);
    check L154() else D56();
  L187():
    sym10 = ldf invisible;
    base10 = ldf invisible in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L188() else L189();
  D56():
    deopt 234 [r87];
  D86():
    deopt 319 [];
  L35(r111):
    popenv;
    return r111;
  L154():
    message4 = ldf message;
    check L155() else D57();
  L188():
    invisible1 = ldf invisible in base;
    r112 = dyn invisible1(1);
    check L190() else D85();
  L189():
    r110 = dyn base10(1);
    goto L35(r110);
  L193():
    r115 = dyn message9[, domain]("running tests demos from base and stats", NA_LGL);
    check L194() else D87();
  D57():
    deopt 236 [];
  D85():
    deopt 314 [r112];
  D87():
    deopt 323 [r115];
  L155():
    r88 = dyn message4[, domain]("  expect failure or some differences if not in a Latin or UTF-8 locale", NA_LGL);
    check L156() else D58();
  L190():
    goto L35(r112);
  L194():
    runone14 = ldf runone;
    check L195() else D88();
  D58():
    deopt 240 [r88];
  D88():
    deopt 325 [];
  L156():
    runone7 = ldf runone;
    check L157() else D59();
  L195():
    r116 = dyn runone14("demos");
    check L196() else D89();
  D59():
    deopt 242 [];
  D89():
    deopt 327 [r116];
  L157():
    r89 = dyn runone7[, , inC]("reg-plot-latin1", TRUE, FALSE);
    check L158() else D60();
  L196():
    c18 = `as.logical`(r116);
    if c18 then L197() else L37();
  D60():
    deopt 247 [r89];
  L37():
    runone15 = ldf runone;
    check L203() else D91();
  L158():
    r90 = `==`(r89, 0);
    c14 = `as.logical`(r90);
    if c14 then L159() else L30();
  L197():
    sym11 = ldf invisible;
    base11 = ldf invisible in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L198() else L199();
  D91():
    deopt 337 [];
  L30():
    goto L31(NULL);
  L31(r92):
    goto L32();
  L38(r118):
    popenv;
    return r118;
  L159():
    comparePdf1 = ldf comparePdf;
    check L160() else D61();
  L198():
    invisible2 = ldf invisible in base;
    r119 = dyn invisible2(1);
    check L200() else D90();
  L199():
    r117 = dyn base11(1);
    goto L38(r117);
  L203():
    r122 = dyn runone15("demos2");
    check L204() else D92();
  D61():
    deopt 251 [];
  D90():
    deopt 332 [r119];
  D92():
    deopt 339 [r122];
  L160():
    r91 = dyn comparePdf1("reg-plot-latin1");
    check L161() else D62();
  L200():
    goto L38(r119);
  L204():
    c19 = `as.logical`(r122);
    if c19 then L205() else L40();
  D62():
    deopt 253 [r91];
  L40():
    message10 = ldf message;
    check L211() else D94();
  L161():
    goto L31(r91);
  L205():
    sym12 = ldf invisible;
    base12 = ldf invisible in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L206() else L207();
  D94():
    deopt 349 [];
  L41(r124):
    popenv;
    return r124;
  L206():
    invisible3 = ldf invisible in base;
    r125 = dyn invisible3(1);
    check L208() else D93();
  L207():
    r123 = dyn base12(1);
    goto L41(r123);
  L211():
    r128 = dyn message10[, domain]("running tests of primitives", NA_LGL);
    check L212() else D95();
  D93():
    deopt 344 [r125];
  D95():
    deopt 353 [r128];
  L208():
    goto L41(r125);
  L212():
    runone16 = ldf runone;
    check L213() else D96();
  D96():
    deopt 355 [];
  L213():
    r129 = dyn runone16("primitives");
    check L214() else D97();
  D97():
    deopt 357 [r129];
  L214():
    c20 = `as.logical`(r129);
    if c20 then L215() else L43();
  L43():
    message11 = ldf message;
    check L221() else D99();
  L215():
    sym13 = ldf invisible;
    base13 = ldf invisible in base;
    guard13 = `==`.4(sym13, base13);
    if guard13 then L216() else L217();
  D99():
    deopt 367 [];
  L44(r131):
    popenv;
    return r131;
  L216():
    invisible4 = ldf invisible in base;
    r132 = dyn invisible4(1);
    check L218() else D98();
  L217():
    r130 = dyn base13(1);
    goto L44(r130);
  L221():
    r135 = dyn message11[, domain]("running regexp regression tests", NA_LGL);
    check L222() else D100();
  D98():
    deopt 362 [r132];
  D100():
    deopt 371 [r135];
  L218():
    goto L44(r132);
  L222():
    runone17 = ldf runone;
    check L223() else D101();
  D101():
    deopt 373 [];
  L223():
    r136 = dyn runone17[, inC]("utf8-regex", FALSE);
    check L224() else D102();
  D102():
    deopt 377 [r136];
  L224():
    c21 = `as.logical`(r136);
    if c21 then L225() else L46();
  L46():
    runone18 = ldf runone;
    check L231() else D104();
  L225():
    sym14 = ldf invisible;
    base14 = ldf invisible in base;
    guard14 = `==`.4(sym14, base14);
    if guard14 then L226() else L227();
  D104():
    deopt 387 [];
  L47(r138):
    popenv;
    return r138;
  L226():
    invisible5 = ldf invisible in base;
    r139 = dyn invisible5(1);
    check L228() else D103();
  L227():
    r137 = dyn base14(1);
    goto L47(r137);
  L231():
    r142 = dyn runone18("PCRE");
    check L232() else D105();
  D103():
    deopt 382 [r139];
  D105():
    deopt 389 [r142];
  L228():
    goto L47(r139);
  L232():
    c22 = `as.logical`(r142);
    if c22 then L233() else L49();
  L49():
    message12 = ldf message;
    check L239() else D107();
  L233():
    sym15 = ldf invisible;
    base15 = ldf invisible in base;
    guard15 = `==`.4(sym15, base15);
    if guard15 then L234() else L235();
  D107():
    deopt 399 [];
  L50(r144):
    popenv;
    return r144;
  L234():
    invisible6 = ldf invisible in base;
    r145 = dyn invisible6(1);
    check L236() else D106();
  L235():
    r143 = dyn base15(1);
    goto L50(r143);
  L239():
    r148 = dyn message12[, domain]("running tests on encodings & iconv() - first with C, then current locale", NA_LGL);
    check L240() else D108();
  D106():
    deopt 394 [r145];
  D108():
    deopt 403 [r148];
  L236():
    goto L50(r145);
  L240():
    runone19 = ldf runone;
    check L241() else D109();
  D109():
    deopt 405 [];
  L241():
    r149 = dyn runone19("iconv");
    check L242() else D110();
  D110():
    deopt 407 [r149];
  L242():
    c23 = `as.logical`(r149);
    if c23 then L243() else L52();
  L52():
    runone20 = ldf runone;
    check L249() else D112();
  L243():
    sym16 = ldf invisible;
    base16 = ldf invisible in base;
    guard16 = `==`.4(sym16, base16);
    if guard16 then L244() else L245();
  D112():
    deopt 417 [];
  L53(r151):
    popenv;
    return r151;
  L244():
    invisible7 = ldf invisible in base;
    r152 = dyn invisible7(1);
    check L246() else D111();
  L245():
    r150 = dyn base16(1);
    goto L53(r150);
  L249():
    r155 = dyn runone20[, inC]("iconv", FALSE);
    check L250() else D113();
  D111():
    deopt 412 [r152];
  D113():
    deopt 421 [r155];
  L246():
    goto L53(r152);
  L250():
    c24 = `as.logical`(r155);
    if c24 then L251() else L55();
  L55():
    message13 = ldf message;
    check L257() else D115();
  L251():
    sym17 = ldf invisible;
    base17 = ldf invisible in base;
    guard17 = `==`.4(sym17, base17);
    if guard17 then L252() else L253();
  D115():
    deopt 431 [];
  L56(r157):
    popenv;
    return r157;
  L252():
    invisible8 = ldf invisible in base;
    r158 = dyn invisible8(1);
    check L254() else D114();
  L253():
    r156 = dyn base17(1);
    goto L56(r156);
  L257():
    r161 = dyn message13[, domain]("running tests of CRAN tools", NA_LGL);
    check L258() else D116();
  D114():
    deopt 426 [r158];
  D116():
    deopt 435 [r161];
  L254():
    goto L56(r158);
  L258():
    runone21 = ldf runone;
    check L259() else D117();
  D117():
    deopt 437 [];
  L259():
    r162 = dyn runone21("CRANtools");
    check L260() else D118();
  D118():
    deopt 439 [r162];
  L260():
    c25 = `as.logical`(r162);
    if c25 then L261() else L58();
  L58():
    message14 = ldf message;
    check L267() else D120();
  L261():
    sym18 = ldf invisible;
    base18 = ldf invisible in base;
    guard18 = `==`.4(sym18, base18);
    if guard18 then L262() else L263();
  D120():
    deopt 449 [];
  L59(r164):
    popenv;
    return r164;
  L262():
    invisible9 = ldf invisible in base;
    r165 = dyn invisible9(1);
    check L264() else D119();
  L263():
    r163 = dyn base18(1);
    goto L59(r163);
  L267():
    r168 = dyn message14[, domain]("running tests to possibly trigger segfaults", NA_LGL);
    check L268() else D121();
  D119():
    deopt 444 [r165];
  D121():
    deopt 453 [r168];
  L264():
    goto L59(r165);
  L268():
    runone22 = ldf runone;
    check L269() else D122();
  D122():
    deopt 455 [];
  L269():
    r169 = dyn runone22("no-segfault");
    check L270() else D123();
  D123():
    deopt 457 [r169];
  L270():
    c26 = `as.logical`(r169);
    if c26 then L271() else L61();
  L61():
    goto L64();
  L271():
    sym19 = ldf invisible;
    base19 = ldf invisible in base;
    guard19 = `==`.4(sym19, base19);
    if guard19 then L272() else L273();
  L62(r171):
    popenv;
    return r171;
  L272():
    invisible10 = ldf invisible in base;
    r172 = dyn invisible10(1);
    check L274() else D124();
  L273():
    r170 = dyn base19(1);
    goto L62(r170);
  D124():
    deopt 462 [r172];
  L274():
    goto L62(r172);
  }
}
fun inner2144220574(f, diffOK, inC) {
  (reg f:*, reg diffOK:*, reg inC:*) -+> V { var f:*, var diffOK:*, reg diffOK_isMissing:L, reg diffOK_orDefault:*, var inC:*, reg inC_isMissing:L, reg inC_orDefault:*, reg paste0:cls, reg f1:*, reg f2:V, reg p:p(V +), reg r1:V, reg srcDiffers:*, reg srcDiffers1:V, reg c:L, reg file_path:cls, reg testSrcdir:*, reg testSrcdir1:V, reg p1:p(V +), reg fR:*, reg fR1:V, reg p2:p(V +), reg r4:V, reg _Platform:*, reg _Platform1:V, reg c1:L, reg _Platform3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r6:V, reg r7:V, reg c2:L, reg r8:cls, reg Sys_set2:cls, reg r9:V, reg Sys_set3:cls, reg r10:V, reg Sys_set4:cls, reg r11:V, reg Sys_set5:cls, reg r12:V, reg Sys_set6:cls, reg SRCDIR:*, reg SRCDIR1:V, reg p3:p(V +), reg r14:V, reg sym:cls, reg base:cls, reg guard:L, reg r15:V, reg on_exit:cls, reg r17:V, reg inC1:*, reg inC2:V, reg c3:L, reg Sys_getenv:cls, reg r18:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r19:V, reg on_exit1:cls, reg r21:V, reg Sys_setenv:cls, reg r22:V, reg identity:*, reg identity1:V, reg inC3:*, reg inC4:V, reg c4:L, reg paste1:cls, reg extra0:*, reg extra1:V, reg p4:p(V +), reg r25:V, reg r26:V, reg extra2:*, reg extra3:V, reg r27:cls, reg file_exists:cls, reg f3:*, reg f4:V, reg p5:p(V +), reg r29:V, reg r30:V, reg c5:L, reg file_exists1:cls, reg paste2:cls, reg f5:*, reg f6:V, reg p6:p(V +), reg r32:V, reg p7:p(V +), reg r34:V, reg r35:V, reg c6:L, reg stop:cls, reg sQuote:cls, reg f7:*, reg f8:V, reg p8:p(V +), reg r37:V, reg p9:p(V +), reg r39:V, reg fR2:*, reg fR3:V, reg message:cls, reg sQuote1:cls, reg f9:*, reg f10:V, reg p10:p(V +), reg r42:V, reg p11:p(V +), reg r44:V, reg mkCmd:cls, reg paste3:cls, reg shQuote:cls, reg file_path1:cls, reg R_home:cls, reg r45:V, reg p12:p(V +), reg r47:V, reg p13:p(V +), reg r49:V, reg p14:p(V +), reg fin:*, reg fin1:V, reg p15:p(V +), reg r52:V, reg p16:p(V +), reg r54:V, reg system:cls, reg cmd:*, reg cmd1:V, reg p17:p(V +), reg r56:V, reg c7:L, reg stop1:cls, reg sQuote2:cls, reg f11:*, reg f12:V, reg p18:p(V +), reg r58:V, reg p19:p(V +), reg r60:V, reg cat:cls, reg f13:*, reg f14:V, reg p20:p(V +), reg r63:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r64:V, reg r65:V, reg on_exit2:cls, reg r66:V, reg message1:cls, reg sQuote3:cls, reg f15:*, reg f16:V, reg p21:p(V +), reg r69:V, reg p22:p(V +), reg r71:V, reg sub:cls, reg paste4:cls, reg fR4:*, reg fR5:V, reg p23:p(V +), reg r73:V, reg p24:p(V +), reg r75:V, reg paste5:cls, reg shQuote1:cls, reg file_path2:cls, reg R_home1:cls, reg r76:V, reg p25:p(V +), reg r78:V, reg p26:p(V +), reg r80:V, reg p27:p(V +), reg shQuote2:cls, reg f17:*, reg f18:V, reg p28:p(V +), reg r83:V, reg p29:p(V +), reg shQuote3:cls, reg outfile:*, reg outfile1:V, reg p30:p(V +), reg r86:V, reg p31:p(V +), reg r88:V, reg system1:cls, reg mkCmd1:cls, reg cmd2:*, reg cmd3:V, reg p32:p(V +), reg r90:V, reg p33:p(V +), reg r92:V, reg res:*, reg res1:V, reg c8:L, reg file_rename:cls, reg outfile2:*, reg outfile3:V, reg p34:p(V +), reg paste6:cls, reg outfile4:*, reg outfile5:V, reg p35:p(V +), reg r95:V, reg p36:p(V +), reg r97:V, reg message2:cls, reg r98:V, reg paste7:cls, reg outfile6:*, reg outfile7:V, reg p37:p(V +), reg r102:V, reg srcDiffers2:*, reg srcDiffers3:V, reg c9:L, reg file_path3:cls, reg testSrcdir2:*, reg testSrcdir3:V, reg p38:p(V +), reg savefile:*, reg savefile1:V, reg p39:p(V +), reg r105:V, reg file_exists2:cls, reg savefile2:*, reg savefile3:V, reg p40:p(V +), reg r108:V, reg c10:L, reg message3:cls, reg gettextf:cls, reg sQuote4:cls, reg outfile8:*, reg outfile9:V, reg p41:p(V +), reg r110:V, reg p42:p(V +), reg sQuote5:cls, reg savefile4:*, reg savefile5:V, reg p43:p(V +), reg r113:V, reg p44:p(V +), reg r115:V, reg p45:p(V +), reg r117:V, reg Rdiff:cls, reg outfile10:*, reg outfile11:V, reg p46:p(V +), reg savefile6:*, reg savefile7:V, reg p47:p(V +), reg useDiff:*, reg useDiff1:V, reg p48:p(V +), reg r121:V, reg res2:*, reg res3:V, reg r122:V, reg c11:L, reg message4:cls, reg r123:V, reg r124:V, reg diffOK1:*, reg diffOK2:V, reg r125:V, reg c12:L |
    mkenv;
    st f = f;
    diffOK_isMissing = missing.0(diffOK);
    if diffOK_isMissing then L0(FALSE) else L0(diffOK);
  L0(diffOK_orDefault):
    st diffOK = diffOK_orDefault;
    inC_isMissing = missing.0(inC);
    if inC_isMissing then L1(TRUE) else L1(inC);
  L1(inC_orDefault):
    st inC = inC_orDefault;
    paste0 = ldf paste0;
    check L28() else D0();
  D0():
    deopt 1 [];
  L28():
    p = prom<V +>{
      f1 = ld f;
      f2 = force? f1;
      checkMissing(f2);
      return f2;
    };
    r1 = dyn paste0(p, ".R");
    check L29() else D1();
  D1():
    deopt 4 [r1];
  L29():
    st fR = r1;
    st f = r1;
    srcDiffers = ld srcDiffers;
    check L30() else D2();
  D2():
    deopt 7 [srcDiffers];
  L30():
    srcDiffers1 = force? srcDiffers;
    checkMissing(srcDiffers1);
    c = `as.logical`(srcDiffers1);
    if c then L31() else L2();
  L2():
    goto L3();
  L3():
    _Platform = ld `.Platform`;
    check L35() else D5();
  L31():
    file_path = ldf `file.path`;
    check L32() else D3();
  D3():
    deopt 10 [];
  D5():
    deopt 17 [_Platform];
  L32():
    p1 = prom<V +>{
      testSrcdir = ld testSrcdir;
      testSrcdir1 = force? testSrcdir;
      checkMissing(testSrcdir1);
      return testSrcdir1;
    };
    p2 = prom<V +>{
      fR = ld fR;
      fR1 = force? fR;
      checkMissing(fR1);
      return fR1;
    };
    r4 = dyn file_path(p1, p2);
    check L33() else D4();
  L35():
    _Platform1 = force? _Platform;
    checkMissing(_Platform1);
    c1 = `is.object`(_Platform1);
    if c1 then L37() else L38(_Platform1);
  D4():
    deopt 13 [r4];
  L33():
    st f = r4;
    goto L3();
  L36(dx1):
    r7 = `==`(dx1, "windows");
    c2 = `as.logical`(r7);
    if c2 then L40() else L4();
  L37():
    dr = tryDispatchBuiltin.1("$", _Platform1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L39() else L38(dr);
  L38(_Platform3):
    r6 = `$`(_Platform3, <sym OS.type>);
    goto L36(r6);
  L4():
    inC3 = ld inC;
    check L64() else D22();
  L9():
    file_exists = ldf `file.exists`;
    check L70() else D26();
  L39():
    dx = getTryDispatchBuiltinValue(dr);
    goto L36(dx);
  L40():
    r8 = clos inner1246119658;
    st `Sys.set2` = r8;
    Sys_set2 = ldf `Sys.set2`;
    check L41() else D6();
  D6():
    deopt 26 [];
  D22():
    deopt 80 [inC3];
  D26():
    deopt 94 [];
  L41():
    r9 = dyn Sys_set2[R_DEFAULT_PACKAGES]("");
    check L42() else D7();
  L64():
    inC4 = force? inC3;
    checkMissing(inC4);
    c4 = `as.logical`(inC4);
    if c4 then L65() else L10();
  L70():
    p5 = prom<V +>{
      f3 = ld f;
      f4 = force? f3;
      checkMissing(f4);
      return f4;
    };
    r29 = dyn file_exists(p5);
    check L71() else D27();
  D7():
    deopt 29 [r9];
  D27():
    deopt 96 [r29];
  L10():
    extra2 = ld extra0;
    check L69() else D25();
  L11(r26):
    st extra = r26;
    r27 = clos inner845484214;
    st mkCmd = r27;
    goto L9();
  L42():
    st oRD = r9;
    Sys_set3 = ldf `Sys.set2`;
    check L43() else D8();
  L65():
    paste1 = ldf paste;
    check L66() else D23();
  L71():
    r30 = `!`(r29);
    c5 = `as.logical`(r30);
    if c5 then L72() else L12();
  D8():
    deopt 32 [];
  D23():
    deopt 83 [];
  D25():
    deopt 87 [extra2];
  L12():
    goto L18();
  L18():
    message1 = ldf message;
    check L95() else D43();
  L43():
    r10 = dyn Sys_set3[LANGUAGE]("C");
    check L44() else D9();
  L66():
    p4 = prom<V +>{
      extra0 = ld extra0;
      extra1 = force? extra0;
      checkMissing(extra1);
      return extra1;
    };
    r25 = dyn paste1(p4, "LC_ALL=C");
    check L67() else D24();
  L69():
    extra3 = force? extra2;
    checkMissing(extra3);
    goto L11(extra3);
  L72():
    file_exists1 = ldf `file.exists`;
    check L73() else D28();
  D9():
    deopt 35 [r10];
  D24():
    deopt 86 [r25];
  D28():
    deopt 99 [];
  D43():
    deopt 156 [];
  L44():
    st oLa = r10;
    Sys_set4 = ldf `Sys.set2`;
    check L45() else D10();
  L67():
    goto L11(r25);
  L73():
    p7 = prom<V +>{
      paste2 = ldf paste0;
      p6 = prom<V +>{
        f5 = ld f;
        f6 = force? f5;
        checkMissing(f6);
        return f6;
      };
      r32 = dyn paste2(p6, "in");
      st fin = r32;
      invisible.0();
      return r32;
    };
    r34 = dyn file_exists1(p7);
    check L74() else D29();
  L95():
    p22 = prom<V +>{
      sQuote3 = ldf sQuote;
      p21 = prom<V +>{
        f15 = ld f;
        f16 = force? f15;
        checkMissing(f16);
        return f16;
      };
      r69 = dyn sQuote3(p21);
      return r69;
    };
    r71 = dyn message1[, , domain]("  running code in ", p22, NA_LGL);
    check L96() else D44();
  D10():
    deopt 38 [];
  D29():
    deopt 101 [r34];
  D44():
    deopt 161 [r71];
  L45():
    r11 = dyn Sys_set4[LC_COLLATE]("C");
    check L46() else D11();
  L74():
    r35 = `!`(r34);
    c6 = `as.logical`(r35);
    if c6 then L75() else L13();
  L96():
    sub = ldf sub;
    check L97() else D45();
  D11():
    deopt 41 [r11];
  D45():
    deopt 163 [];
  L13():
    goto L14();
  L14():
    fR2 = ld fR;
    check L79() else D32();
  L46():
    st oLC = r11;
    Sys_set5 = ldf `Sys.set2`;
    check L47() else D12();
  L75():
    stop = ldf stop;
    check L76() else D30();
  L97():
    p24 = prom<V +>{
      paste4 = ldf paste0;
      p23 = prom<V +>{
        fR4 = ld fR;
        fR5 = force? fR4;
        checkMissing(fR5);
        return fR5;
      };
      r73 = dyn paste4(p23, "out");
      return r73;
    };
    r75 = dyn sub("rout$", "Rout", p24);
    check L98() else D46();
  D12():
    deopt 44 [];
  D30():
    deopt 104 [];
  D32():
    deopt 113 [fR2];
  D46():
    deopt 167 [r75];
  L47():
    r12 = dyn Sys_set5[LC_TIME]("C");
    check L48() else D13();
  L76():
    p9 = prom<V +>{
      sQuote = ldf sQuote;
      p8 = prom<V +>{
        f7 = ld f;
        f8 = force? f7;
        checkMissing(f8);
        return f8;
      };
      r37 = dyn sQuote(p8);
      return r37;
    };
    r39 = dyn stop[, , , domain]("file ", p9, " not found", NA_LGL);
    check L77() else D31();
  L79():
    fR3 = force? fR2;
    checkMissing(fR3);
    st f = fR3;
    message = ldf message;
    check L80() else D33();
  L98():
    st outfile = r75;
    paste5 = ldf paste;
    check L99() else D47();
  D13():
    deopt 47 [r12];
  D31():
    deopt 110 [r39];
  D33():
    deopt 117 [];
  D47():
    deopt 170 [];
  L48():
    st oLT = r12;
    Sys_set6 = ldf `Sys.set2`;
    check L49() else D14();
  L77():
    goto L14();
  L80():
    p11 = prom<V +>{
      sQuote1 = ldf sQuote;
      p10 = prom<V +>{
        f9 = ld f;
        f10 = force? f9;
        checkMissing(f10);
        return f10;
      };
      r42 = dyn sQuote1(p10);
      return r42;
    };
    r44 = dyn message[, , domain]("creating ", p11, NA_LGL);
    check L81() else D34();
  L99():
    p27 = prom<V +>{
      shQuote1 = ldf shQuote;
      p26 = prom<V +>{
        file_path2 = ldf `file.path`;
        p25 = prom<V +>{
          R_home1 = ldf `R.home`;
          r76 = dyn R_home1("bin");
          return r76;
        };
        r78 = dyn file_path2(p25, "R");
        return r78;
      };
      r80 = dyn shQuote1(p26);
      return r80;
    };
    p29 = prom<V +>{
      shQuote2 = ldf shQuote;
      p28 = prom<V +>{
        f17 = ld f;
        f18 = force? f17;
        checkMissing(f18);
        return f18;
      };
      r83 = dyn shQuote2(p28);
      return r83;
    };
    p31 = prom<V +>{
      shQuote3 = ldf shQuote;
      p30 = prom<V +>{
        outfile = ld outfile;
        outfile1 = force? outfile;
        checkMissing(outfile1);
        return outfile1;
      };
      r86 = dyn shQuote3(p30);
      return r86;
    };
    r88 = dyn paste5(p27, "CMD BATCH --vanilla --no-timing", p29, p31);
    check L100() else D48();
  D14():
    deopt 50 [];
  D34():
    deopt 122 [r44];
  D48():
    deopt 175 [r88];
  L49():
    p3 = prom<V +>{
      SRCDIR = ld SRCDIR;
      SRCDIR1 = force? SRCDIR;
      checkMissing(SRCDIR1);
      return SRCDIR1;
    };
    r14 = dyn Sys_set6[SRCDIR](p3);
    check L50() else D15();
  L81():
    mkCmd = ldf mkCmd;
    check L82() else D35();
  L100():
    st cmd = r88;
    system1 = ldf system;
    check L101() else D49();
  D15():
    deopt 53 [r14];
  D35():
    deopt 124 [];
  D49():
    deopt 178 [];
  L50():
    st oSR = r14;
    sym = ldf `on.exit`;
    base = ldf `on.exit` in base;
    guard = `==`.4(sym, base);
    if guard then L51() else L52();
  L82():
    p16 = prom<V +>{
      paste3 = ldf paste;
      p14 = prom<V +>{
        shQuote = ldf shQuote;
        p13 = prom<V +>{
          file_path1 = ldf `file.path`;
          p12 = prom<V +>{
            R_home = ldf `R.home`;
            r45 = dyn R_home("bin");
            return r45;
          };
          r47 = dyn file_path1(p12, "R");
          return r47;
        };
        r49 = dyn shQuote(p13);
        return r49;
      };
      p15 = prom<V +>{
        fin = ld fin;
        fin1 = force? fin;
        checkMissing(fin1);
        return fin1;
      };
      r52 = dyn paste3(p14, "--vanilla --no-echo -f", p15);
      return r52;
    };
    r54 = dyn mkCmd(p16);
    check L83() else D36();
  L101():
    p33 = prom<V +>{
      mkCmd1 = ldf mkCmd;
      p32 = prom<V +>{
        cmd2 = ld cmd;
        cmd3 = force? cmd2;
        checkMissing(cmd3);
        return cmd3;
      };
      r90 = dyn mkCmd1(p32);
      return r90;
    };
    r92 = dyn system1(p33);
    check L102() else D50();
  D36():
    deopt 126 [r54];
  D50():
    deopt 180 [r92];
  L5():
    inC1 = ld inC;
    check L53() else D16();
  L51():
    on_exit = ldf `on.exit` in base;
    r17 = dyn on_exit(<lang Sys.setenv(LANGUAGE=oLa, R_DEFAULT_PACKAGES=oRD, LC_COLLATE=oLC, LC_TIME=oLT, SRCDIR=oSR)>);
    goto L5();
  L52():
    r15 = dyn base(<lang Sys.setenv(LANGUAGE=oLa, R_DEFAULT_PACKAGES=oRD, LC_COLLATE=oLC, LC_TIME=oLT, SRCDIR=oSR)>);
    goto L5();
  L83():
    st cmd = r54;
    system = ldf system;
    check L84() else D37();
  L102():
    st res = r92;
    res = ld res;
    check L103() else D51();
  D16():
    deopt 58 [inC1];
  D37():
    deopt 129 [];
  D51():
    deopt 182 [res];
  L53():
    inC2 = force? inC1;
    checkMissing(inC2);
    c3 = `as.logical`(inC2);
    if c3 then L54() else L6();
  L84():
    p17 = prom<V +>{
      cmd = ld cmd;
      cmd1 = force? cmd;
      checkMissing(cmd1);
      return cmd1;
    };
    r56 = dyn system(p17);
    check L85() else D38();
  L103():
    res1 = force? res;
    checkMissing(res1);
    c8 = `as.logical`(res1);
    if c8 then L104() else L19();
  D38():
    deopt 131 [r56];
  L6():
    goto L8();
  L8():
    identity = ld identity;
    check L62() else D21();
  L19():
    paste7 = ldf paste0;
    check L111() else D56();
  L54():
    Sys_getenv = ldf `Sys.getenv`;
    check L55() else D17();
  L85():
    c7 = `as.logical`(r56);
    if c7 then L86() else L15();
  L104():
    file_rename = ldf `file.rename`;
    check L105() else D52();
  D17():
    deopt 61 [];
  D21():
    deopt 77 [identity];
  D52():
    deopt 185 [];
  D56():
    deopt 199 [];
  L15():
    goto L16();
  L16():
    cat = ldf cat;
    check L90() else D41();
  L55():
    r18 = dyn Sys_getenv[, unset]("LC_CTYPE", NA_LGL);
    check L56() else D18();
  L62():
    identity1 = force? identity;
    checkMissing(identity1);
    st mkCmd = identity1;
    goto L9();
  L86():
    stop1 = ldf stop;
    check L87() else D39();
  L105():
    p34 = prom<V +>{
      outfile2 = ld outfile;
      outfile3 = force? outfile2;
      checkMissing(outfile3);
      return outfile3;
    };
    p36 = prom<V +>{
      paste6 = ldf paste0;
      p35 = prom<V +>{
        outfile4 = ld outfile;
        outfile5 = force? outfile4;
        checkMissing(outfile5);
        return outfile5;
      };
      r95 = dyn paste6(p35, ".fail");
      return r95;
    };
    r97 = dyn file_rename(p34, p36);
    check L106() else D53();
  L111():
    p37 = prom<V +>{
      outfile6 = ld outfile;
      outfile7 = force? outfile6;
      checkMissing(outfile7);
      return outfile7;
    };
    r102 = dyn paste7(p37, ".save");
    check L112() else D57();
  D18():
    deopt 65 [r18];
  D39():
    deopt 133 [];
  D41():
    deopt 143 [];
  D53():
    deopt 188 [r97];
  D57():
    deopt 202 [r102];
  L56():
    st oenv = r18;
    sym1 = ldf `on.exit`;
    base1 = ldf `on.exit` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L57() else L58();
  L87():
    p19 = prom<V +>{
      sQuote2 = ldf sQuote;
      p18 = prom<V +>{
        f11 = ld f;
        f12 = force? f11;
        checkMissing(f12);
        return f12;
      };
      r58 = dyn sQuote2(p18);
      return r58;
    };
    r60 = dyn stop1[, , , domain]("creation of ", p19, " failed", NA_LGL);
    check L88() else D40();
  L90():
    p20 = prom<V +>{
      f13 = ld f;
      f14 = force? f13;
      checkMissing(f14);
      return f14;
    };
    r63 = dyn cat[, file, append]("\n", p20, TRUE);
    check L91() else D42();
  L106():
    message2 = ldf message;
    check L107() else D54();
  L112():
    st savefile = r102;
    srcDiffers2 = ld srcDiffers;
    check L113() else D58();
  D40():
    deopt 139 [r60];
  D42():
    deopt 149 [r63];
  D54():
    deopt 190 [];
  D58():
    deopt 204 [srcDiffers2];
  L7():
    Sys_setenv = ldf `Sys.setenv`;
    check L59() else D19();
  L57():
    on_exit1 = ldf `on.exit` in base;
    r21 = dyn on_exit1(<lang if(is.na(oenv), Sys.unsetenv("LC_CTYPE"), Sys.setenv(LC_CTYPE=oenv))>, TRUE);
    goto L7();
  L58():
    r19 = dyn base1[, add](<lang if(is.na(oenv), Sys.unsetenv("LC_CTYPE"), Sys.setenv(LC_CTYPE=oenv))>, TRUE);
    goto L7();
  L88():
    goto L16();
  L91():
    sym2 = ldf `on.exit`;
    base2 = ldf `on.exit` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L92() else L93();
  L107():
    r98 = dyn message2("FAILED");
    check L108() else D55();
  L113():
    srcDiffers3 = force? srcDiffers2;
    checkMissing(srcDiffers3);
    c9 = `as.logical`(srcDiffers3);
    if c9 then L114() else L21();
  D19():
    deopt 71 [];
  D55():
    deopt 192 [r98];
  L17(r65):
    goto L18();
  L21():
    goto L22();
  L22():
    file_exists2 = ldf `file.exists`;
    check L118() else D61();
  L59():
    r22 = dyn Sys_setenv[LC_CTYPE]("C");
    check L60() else D20();
  L92():
    on_exit2 = ldf `on.exit` in base;
    r66 = dyn on_exit2(<lang unlink(f)>, TRUE);
    goto L17(r66);
  L93():
    r64 = dyn base2[, add](<lang unlink(f)>, TRUE);
    goto L17(r64);
  L108():
    popenv;
    return 1;
  L114():
    file_path3 = ldf `file.path`;
    check L115() else D59();
  D20():
    deopt 74 [r22];
  D59():
    deopt 207 [];
  D61():
    deopt 215 [];
  L60():
    goto L8();
  L115():
    p38 = prom<V +>{
      testSrcdir2 = ld testSrcdir;
      testSrcdir3 = force? testSrcdir2;
      checkMissing(testSrcdir3);
      return testSrcdir3;
    };
    p39 = prom<V +>{
      savefile = ld savefile;
      savefile1 = force? savefile;
      checkMissing(savefile1);
      return savefile1;
    };
    r105 = dyn file_path3(p38, p39);
    check L116() else D60();
  L118():
    p40 = prom<V +>{
      savefile2 = ld savefile;
      savefile3 = force? savefile2;
      checkMissing(savefile3);
      return savefile3;
    };
    r108 = dyn file_exists2(p40);
    check L119() else D62();
  D60():
    deopt 210 [r105];
  D62():
    deopt 217 [r108];
  L116():
    st savefile = r105;
    goto L22();
  L119():
    c10 = `as.logical`(r108);
    if c10 then L120() else L23();
  L23():
    goto L27();
  L27():
    popenv;
    return 0;
  L120():
    message3 = ldf message;
    check L121() else D63();
  D63():
    deopt 219 [];
  L121():
    p45 = prom<V +>{
      gettextf = ldf gettextf;
      p42 = prom<V +>{
        sQuote4 = ldf sQuote;
        p41 = prom<V +>{
          outfile8 = ld outfile;
          outfile9 = force? outfile8;
          checkMissing(outfile9);
          return outfile9;
        };
        r110 = dyn sQuote4(p41);
        return r110;
      };
      p44 = prom<V +>{
        sQuote5 = ldf sQuote;
        p43 = prom<V +>{
          savefile4 = ld savefile;
          savefile5 = force? savefile4;
          checkMissing(savefile5);
          return savefile5;
        };
        r113 = dyn sQuote5(p43);
        return r113;
      };
      r115 = dyn gettextf("  comparing %s to %s ...", p42, p44);
      return r115;
    };
    r117 = dyn message3[, appendLF, domain](p45, FALSE, NA_LGL);
    check L122() else D64();
  D64():
    deopt 225 [r117];
  L122():
    Rdiff = ldf Rdiff;
    check L123() else D65();
  D65():
    deopt 227 [];
  L123():
    p46 = prom<V +>{
      outfile10 = ld outfile;
      outfile11 = force? outfile10;
      checkMissing(outfile11);
      return outfile11;
    };
    p47 = prom<V +>{
      savefile6 = ld savefile;
      savefile7 = force? savefile6;
      checkMissing(savefile7);
      return savefile7;
    };
    p48 = prom<V +>{
      useDiff = ld useDiff;
      useDiff1 = force? useDiff;
      checkMissing(useDiff1);
      return useDiff1;
    };
    r121 = dyn Rdiff(p46, p47, p48);
    check L124() else D66();
  D66():
    deopt 231 [r121];
  L124():
    st res = r121;
    res2 = ld res;
    check L125() else D67();
  D67():
    deopt 233 [res2];
  L125():
    res3 = force? res2;
    checkMissing(res3);
    r122 = `!`(res3);
    c11 = `as.logical`(r122);
    if c11 then L126() else L24();
  L24():
    diffOK1 = ld diffOK;
    check L130() else D70();
  L25(r124):
    goto L27();
  L126():
    message4 = ldf message;
    check L127() else D68();
  D68():
    deopt 237 [];
  D70():
    deopt 240 [diffOK1];
  L127():
    r123 = dyn message4(" OK");
    check L128() else D69();
  L130():
    diffOK2 = force? diffOK1;
    checkMissing(diffOK2);
    r125 = `!`(diffOK2);
    c12 = `as.logical`(r125);
    if c12 then L131() else L26();
  D69():
    deopt 239 [r123];
  L26():
    goto L25(NULL);
  L128():
    goto L25(r123);
  L131():
    popenv;
    return 1;
  }
}
fun inner1246119658(`...`) {
  (reg ddd:dots) -+> V { var `...`:dots?, reg stopifnot:cls, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg ___length:cls, reg r2:V, reg r3:V, reg p:p(V +), reg sym1:cls, reg base1:cls, reg guard1:L, reg r5:V, reg r6:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r7:V, reg r8:V, reg ___names:cls, reg r9:V, reg nzchar:cls, reg r10:V, reg p1:p(V +), reg r12:V, reg Sys_getenv:cls, reg nm:*, reg nm1:V, reg p2:p(V +), reg r14:V, reg Sys_setenv:cls, reg ddd1:dots?, reg r15:V, reg oVal:*, reg oVal1:V |
    mkenv;
    st `...` = ddd;
    stopifnot = ldf stopifnot;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p = prom<V +>{
      sym = ldf `...length`;
      base = ldf `...length` in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r1):
      r3 = `==`(r1, 1);
      return r3;
    L1():
      ___length = ldf `...length` in base;
      r2 = dyn ___length();
      goto L0(r2);
    L2():
      r = dyn base();
      goto L0(r);
    };
    p1 = prom<V +>{
      sym1 = ldf nzchar;
      base1 = ldf nzchar in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L2() else L3();
    L0(r6):
      return r6;
    L2():
      sym2 = ldf `...names`;
      base2 = ldf `...names` in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L4() else L5();
    L3():
      r5 = dyn base1(<lang `<-`(nm, ...names())>);
      goto L0(r5);
    L1(r8):
      st nm = r8;
      nzchar = ldf nzchar in base;
      r10 = dyn nzchar(r8);
      goto L0(r10);
    L4():
      ___names = ldf `...names` in base;
      r9 = dyn ___names();
      goto L1(r9);
    L5():
      r7 = dyn base2();
      goto L1(r7);
    };
    r12 = dyn stopifnot(p, p1);
    check L1() else D1();
  D1():
    deopt 4 [r12];
  L1():
    Sys_getenv = ldf `Sys.getenv`;
    check L2() else D2();
  D2():
    deopt 6 [];
  L2():
    p2 = prom<V +>{
      nm = ld nm;
      nm1 = force? nm;
      checkMissing(nm1);
      return nm1;
    };
    r14 = dyn Sys_getenv(p2);
    check L3() else D3();
  D3():
    deopt 8 [r14];
  L3():
    st oVal = r14;
    Sys_setenv = ldf `Sys.setenv`;
    check L4() else D4();
  D4():
    deopt 11 [];
  L4():
    ddd1 = ld `...`;
    r15 = dyn Sys_setenv[`...`](ddd1);
    check L5() else D5();
  D5():
    deopt 13 [r15];
  L5():
    oVal = ld oVal;
    check L6() else D6();
  D6():
    deopt 14 [oVal];
  L6():
    oVal1 = force? oVal;
    checkMissing(oVal1);
    popenv;
    return oVal1;
  }
}
fun inner845484214(cmd) {
  (reg cmd:*) -+> V { var cmd:*, reg paste:cls, reg extra:*, reg extra1:V, reg p:p(V +), reg cmd1:*, reg cmd2:V, reg p1:p(V +), reg r2:V |
    mkenv;
    st cmd = cmd;
    paste = ldf paste;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p = prom<V +>{
      extra = ld extra;
      extra1 = force? extra;
      checkMissing(extra1);
      return extra1;
    };
    p1 = prom<V +>{
      cmd1 = ld cmd;
      cmd2 = force? cmd1;
      checkMissing(cmd2);
      return cmd2;
    };
    r2 = dyn paste(p, p1);
    check L1() else D1();
  D1():
    deopt 4 [r2];
  L1():
    popenv;
    return r2;
  }
}
fun inner3678177630(odir) {
  (reg odir:*) -+> V { var odir:*, reg file_exists:cls, reg r:V, reg c:L, reg odir1:*, reg odir2:V, reg file_exists1:cls, reg r3:V, reg c1:L, reg readLines:cls, reg r4:V, reg sub:cls, reg sub1:cls, reg grep:cls, reg lns:*, reg lns1:V, reg p:p(V +), reg r6:V, reg p1:p(V +), reg r8:V, reg p2:p(V +), reg r10:V, reg dir_exists:cls, reg srcdir:*, reg srcdir1:V, reg p3:p(V +), reg r12:V, reg c2:L, reg srcdir2:*, reg srcdir3:V, reg odir3:*, reg odir4:V |
    mkenv;
    st odir = odir;
    file_exists = ldf `file.exists`;
    check L6() else D0();
  D0():
    deopt 1 [];
  L6():
    r = dyn file_exists("eval-etc.R");
    check L7() else D1();
  D1():
    deopt 3 [r];
  L7():
    c = `as.logical`(r);
    if c then L8() else L0();
  L0():
    file_exists1 = ldf `file.exists`;
    check L12() else D3();
  L8():
    odir1 = ld odir;
    check L9() else D2();
  D2():
    deopt 4 [odir1];
  D3():
    deopt 10 [];
  L9():
    odir2 = force? odir1;
    checkMissing(odir2);
    popenv;
    return odir2;
  L12():
    r3 = dyn file_exists1("Makefile");
    check L13() else D4();
  D4():
    deopt 12 [r3];
  L13():
    c1 = `as.logical`(r3);
    if c1 then L14() else L2();
  L2():
    goto L5();
  L5():
    odir3 = ld odir;
    check L26() else D12();
  L14():
    readLines = ldf readLines;
    check L15() else D5();
  D5():
    deopt 14 [];
  D12():
    deopt 37 [odir3];
  L15():
    r4 = dyn readLines("Makefile", 12);
    check L16() else D6();
  L26():
    odir4 = force? odir3;
    checkMissing(odir4);
    popenv;
    return odir4;
  D6():
    deopt 17 [r4];
  L16():
    st lns = r4;
    sub = ldf sub;
    check L17() else D7();
  D7():
    deopt 20 [];
  L17():
    p2 = prom<V +>{
      sub1 = ldf sub;
      p1 = prom<V +>{
        grep = ldf grep;
        p = prom<V +>{
          lns = ld lns;
          lns1 = force? lns;
          checkMissing(lns1);
          return lns1;
        };
        r6 = dyn grep[, , value]("^srcdir", p, TRUE);
        return r6;
      };
      r8 = dyn sub1("^srcdir *= *", "", p1);
      return r8;
    };
    r10 = dyn sub(" +$", "", p2);
    check L18() else D8();
  D8():
    deopt 24 [r10];
  L18():
    st srcdir = r10;
    dir_exists = ldf `dir.exists`;
    check L19() else D9();
  D9():
    deopt 27 [];
  L19():
    p3 = prom<V +>{
      srcdir = ld srcdir;
      srcdir1 = force? srcdir;
      checkMissing(srcdir1);
      return srcdir1;
    };
    r12 = dyn dir_exists(p3);
    check L20() else D10();
  D10():
    deopt 29 [r12];
  L20():
    c2 = `as.logical`(r12);
    if c2 then L21() else L3();
  L3():
    goto L5();
  L21():
    srcdir2 = ld srcdir;
    check L22() else D11();
  D11():
    deopt 30 [srcdir2];
  L22():
    srcdir3 = force? srcdir2;
    checkMissing(srcdir3);
    popenv;
    return srcdir3;
  }
}
fun inner1039001620(fnam) {
  (reg fnam:*) -+> V { var fnam:*, reg paste0:cls, reg fnam1:*, reg fnam2:V, reg p:p(V +), reg r1:V, reg paste1:cls, reg ff:*, reg ff1:V, reg p1:p(V +), reg r3:V, reg srcDiffers:*, reg srcDiffers1:V, reg c:L, reg file_path:cls, reg testSrcdir:*, reg testSrcdir1:V, reg p2:p(V +), reg fsv:*, reg fsv1:V, reg p3:p(V +), reg r6:V, reg message:cls, reg ff2:*, reg ff3:V, reg p4:p(V +), reg fsv2:*, reg fsv3:V, reg p5:p(V +), reg r10:V, reg Rdiff:cls, reg ff4:*, reg ff5:V, reg p6:p(V +), reg fsv4:*, reg fsv5:V, reg p7:p(V +), reg r13:V, reg message1:cls, reg res:*, reg res1:V, reg r14:V, reg c1:L, reg p8:p(V +), reg r16:V |
    mkenv;
    st fnam = fnam;
    paste0 = ldf paste0;
    check L2() else D0();
  D0():
    deopt 1 [];
  L2():
    p = prom<V +>{
      fnam1 = ld fnam;
      fnam2 = force? fnam1;
      checkMissing(fnam2);
      return fnam2;
    };
    r1 = dyn paste0(p, ".pdf");
    check L3() else D1();
  D1():
    deopt 4 [r1];
  L3():
    st ff = r1;
    paste1 = ldf paste0;
    check L4() else D2();
  D2():
    deopt 7 [];
  L4():
    p1 = prom<V +>{
      ff = ld ff;
      ff1 = force? ff;
      checkMissing(ff1);
      return ff1;
    };
    r3 = dyn paste1(p1, ".save");
    check L5() else D3();
  D3():
    deopt 10 [r3];
  L5():
    st fsv = r3;
    srcDiffers = ld srcDiffers;
    check L6() else D4();
  D4():
    deopt 12 [srcDiffers];
  L6():
    srcDiffers1 = force? srcDiffers;
    checkMissing(srcDiffers1);
    c = `as.logical`(srcDiffers1);
    if c then L7() else L0();
  L0():
    goto L1();
  L1():
    message = ldf message;
    check L11() else D7();
  L7():
    file_path = ldf `file.path`;
    check L8() else D5();
  D5():
    deopt 15 [];
  D7():
    deopt 23 [];
  L8():
    p2 = prom<V +>{
      testSrcdir = ld testSrcdir;
      testSrcdir1 = force? testSrcdir;
      checkMissing(testSrcdir1);
      return testSrcdir1;
    };
    p3 = prom<V +>{
      fsv = ld fsv;
      fsv1 = force? fsv;
      checkMissing(fsv1);
      return fsv1;
    };
    r6 = dyn file_path(p2, p3);
    check L9() else D6();
  L11():
    p4 = prom<V +>{
      ff2 = ld ff;
      ff3 = force? ff2;
      checkMissing(ff3);
      return ff3;
    };
    p5 = prom<V +>{
      fsv2 = ld fsv;
      fsv3 = force? fsv2;
      checkMissing(fsv3);
      return fsv3;
    };
    r10 = dyn message[, , , , , appendLF, domain]("  comparing '", p4, "' to '", p5, "' ...", FALSE, NA_LGL);
    check L12() else D8();
  D6():
    deopt 18 [r6];
  D8():
    deopt 33 [r10];
  L9():
    st fsv = r6;
    goto L1();
  L12():
    Rdiff = ldf Rdiff;
    check L13() else D9();
  D9():
    deopt 35 [];
  L13():
    p6 = prom<V +>{
      ff4 = ld ff;
      ff5 = force? ff4;
      checkMissing(ff5);
      return ff5;
    };
    p7 = prom<V +>{
      fsv4 = ld fsv;
      fsv5 = force? fsv4;
      checkMissing(fsv5);
      return fsv5;
    };
    r13 = dyn Rdiff(p6, p7, TRUE);
    check L14() else D10();
  D10():
    deopt 39 [r13];
  L14():
    st res = r13;
    message1 = ldf message;
    check L15() else D11();
  D11():
    deopt 42 [];
  L15():
    p8 = prom<V +>{
      res = ld res;
      res1 = force? res;
      checkMissing(res1);
      r14 = `!=`(res1, 0);
      c1 = `as.logical`(r14);
      if c1 then L1() else L0();
    L0():
      return "OK";
    L1():
      return "DIFFERED";
    };
    r16 = dyn message1(p8);
    check L16() else D12();
  D12():
    deopt 44 [r16];
  L16():
    popenv;
    return r16;
  }
}