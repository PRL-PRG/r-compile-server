fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1205104446;
    st massageExamples = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1205104446(pkg, files, outFile, use_gct, addTiming, `...`, commentDonttest) {
  (reg pkg:*, reg files:*, reg outFile:*, reg use_gct:*, reg addTiming:*, reg ddd:dots, reg commentDonttest:*) -+> V { var pkg:*, var files:*, var outFile:*, reg outFile_isMissing:L, reg outFile_orDefault:*, reg stdout:cls, reg r:V, reg p:p(V +), var use_gct:*, reg use_gct_isMissing:L, reg use_gct_orDefault:*, var addTiming:*, reg addTiming_isMissing:L, reg addTiming_orDefault:*, var `...`:dots?, var commentDonttest:*, reg commentDonttest_isMissing:L, reg commentDonttest_orDefault:*, reg dir_exists:cls, reg files1:*, reg files2:V, reg c:L, reg files4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r2:V, reg p1:p(V +), reg r4:V, reg c1:L, reg Sys_getlocale:cls, reg r5:V, reg Sys_setlocale:cls, reg r6:V, reg sort:cls, reg Sys_glob:cls, reg file_path:cls, reg files5:*, reg files6:V, reg p2:p(V +), reg r8:V, reg p3:p(V +), reg r10:V, reg p4:p(V +), reg r12:V, reg Sys_setlocale1:cls, reg old:*, reg old1:V, reg p5:p(V +), reg r14:V, reg sym:cls, reg base:cls, reg guard:L, reg r16:V, reg r17:V, reg outFile1:*, reg outFile2:V, reg c2:L, reg c3:L, reg file:cls, reg outFile3:*, reg outFile4:V, reg p6:p(V +), reg r19:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r20:V, reg on_exit:cls, reg r22:V, reg paste0:cls, reg outFile5:*, reg outFile6:V, reg p7:p(V +), reg r24:V, reg outFile7:*, reg outFile8:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r26:V, reg r27:V, reg paste1:cls, reg pkg1:*, reg pkg2:V, reg p8:p(V +), reg r29:V, reg use_gct1:*, reg use_gct2:V, reg c4:L, reg sym3:cls, reg base3:cls, reg guard3:L, reg r30:V, reg r31:V, reg Sys_getenv:cls, reg r32:V, reg as_integer:cls, reg r33:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r34:V, reg r35:V, reg gct_n:*, reg gct_n1:V, reg is_na:cls, reg r36:V, reg r37:V, reg c5:L, reg c7:V, reg gct_n2:*, reg gct_n3:V, reg r38:V, reg c8:L, reg c9:V, reg c11:L, reg sprintf:cls, reg gct_n4:*, reg gct_n5:V, reg p9:p(V +), reg r40:V, reg r41:V, reg r42:V, reg c12:cls, reg r43:V, reg cat:cls, reg lines:*, reg lines1:V, reg p10:p(V +), reg out:*, reg out1:V, reg p11:p(V +), reg r46:V, reg _Platform:*, reg _Platform1:V, reg c13:L, reg _Platform3:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r47:V, reg r48:V, reg c14:L, reg cat1:cls, reg out2:*, reg out3:V, reg p12:p(V +), reg r50:V, reg addTiming1:*, reg addTiming2:V, reg c15:L, reg cat2:cls, reg pkg3:*, reg pkg4:V, reg p13:p(V +), reg out4:*, reg out5:V, reg p14:p(V +), reg r54:V, reg cat3:cls, reg out6:*, reg out7:V, reg p15:p(V +), reg r56:V, reg cat4:cls, reg out8:*, reg out9:V, reg p16:p(V +), reg r58:V, reg cat5:cls, reg out10:*, reg out11:V, reg p17:p(V +), reg r60:V, reg pkg5:*, reg pkg6:V, reg r62:V, reg c16:L, reg capabilities:cls, reg r63:V, reg c17:L, reg cat6:cls, reg out12:*, reg out13:V, reg p18:p(V +), reg r65:V, reg r66:V, reg cat7:cls, reg out14:*, reg out15:V, reg p19:p(V +), reg r68:V, reg pkg7:*, reg pkg8:V, reg r70:V, reg c18:L, reg cat8:cls, reg pkg9:*, reg pkg10:V, reg p20:p(V +), reg out16:*, reg out17:V, reg p21:p(V +), reg r73:V, reg cat9:cls, reg out18:*, reg out19:V, reg p22:p(V +), reg r75:V, reg cat10:cls, reg out20:*, reg out21:V, reg p23:p(V +), reg r77:V, reg files7:*, reg files8:V, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c19:L, reg x:V, reg sub:cls, reg basename:cls, reg file1:*, reg file2:V, reg p24:p(V +), reg r79:V, reg p25:p(V +), reg r81:V, reg gsub:cls, reg nm:*, reg nm1:V, reg p26:p(V +), reg r83:V, reg pkg11:*, reg pkg12:V, reg r84:V, reg c20:L, reg i6:I, reg c22:V, reg nm2:*, reg nm3:V, reg r85:V, reg c23:L, reg c24:V, reg c26:L, reg pkg13:*, reg pkg14:V, reg r87:V, reg c27:L, reg i13:I, reg c29:V, reg nm4:*, reg nm5:V, reg r88:V, reg c30:L, reg c31:V, reg c33:L, reg file_exists:cls, reg file3:*, reg file4:V, reg p27:p(V +), reg r91:V, reg r92:V, reg c34:L, reg stop:cls, reg file5:*, reg file6:V, reg p28:p(V +), reg r94:V, reg i21:I, reg readLines:cls, reg file7:*, reg file8:V, reg p29:p(V +), reg r97:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r98:V, reg i24:I, reg r99:V, reg grepl:cls, reg lines2:*, reg lines3:V, reg p30:p(V +), reg r101:V, reg any:cls, reg r102:V, reg grep:cls, reg lines4:*, reg lines5:V, reg p31:p(V +), reg r104:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r105:V, reg i27:I, reg r106:V, reg com:*, reg com1:V, reg length:cls, reg r107:V, reg c35:L, reg lines6:*, reg lines7:V, reg c36:L, reg i31:I, reg lines9:V, reg dr4:V, reg dc2:L, reg dx4:V, reg i33:I, reg dx5:V, reg com2:*, reg com3:V, reg r108:V, reg __1:cls, reg r109:V, reg i34:I, reg dx6:V, reg lines10:*, reg lines11:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r110:V, reg i37:I, reg r111:V, reg grepl1:cls, reg lines12:*, reg lines13:V, reg p32:p(V +), reg r113:V, reg any1:cls, reg r114:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r115:V, reg i40:I, reg r116:V, reg grepl2:cls, reg lines14:*, reg lines15:V, reg p33:p(V +), reg r118:V, reg any2:cls, reg r119:V, reg have_examples:*, reg have_examples1:V, reg c37:L, reg cat11:cls, reg nm6:*, reg nm7:V, reg p34:p(V +), reg out22:*, reg out23:V, reg p35:p(V +), reg r122:V, reg i43:I, reg cat12:cls, reg nm8:*, reg nm9:V, reg p36:p(V +), reg out24:*, reg out25:V, reg p37:p(V +), reg r126:V, reg cat13:cls, reg out26:*, reg out27:V, reg p38:p(V +), reg r128:V, reg addTiming3:*, reg addTiming4:V, reg c38:L, reg cat14:cls, reg out28:*, reg out29:V, reg p39:p(V +), reg r130:V, reg i46:I, reg commentDonttest1:*, reg commentDonttest2:V, reg c39:L, reg lines16:*, reg lines17:V, reg s1:V, reg l1:I, reg i49:I, reg i50:I, reg i51:I, reg i52:I, reg c40:L, reg x1:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r132:V, reg i61:I, reg i62:I, reg r133:V, reg grepl3:cls, reg line:*, reg line1:V, reg p40:p(V +), reg r135:V, reg any3:cls, reg r136:V, reg c41:L, reg count:*, reg count1:V, reg r137:V, reg i67:I, reg i68:I, reg dont_test:*, reg dont_test1:V, reg r139:V, reg c42:L, reg cat15:cls, reg line2:*, reg line3:V, reg p41:p(V +), reg out30:*, reg out31:V, reg p42:p(V +), reg r142:V, reg i73:I, reg i74:I, reg sym10:cls, reg base10:cls, reg guard10:L, reg r144:V, reg i79:I, reg i80:I, reg r145:V, reg grepl4:cls, reg line4:*, reg line5:V, reg p43:p(V +), reg r147:V, reg any4:cls, reg r148:V, reg c43:L, reg i85:I, reg i86:I, reg i87:I, reg lines18:*, reg lines19:V, reg s2:V, reg l2:I, reg i89:I, reg i90:I, reg i91:I, reg i92:I, reg c44:L, reg x2:V, reg cat16:cls, reg line6:*, reg line7:V, reg p44:p(V +), reg out32:*, reg out33:V, reg p45:p(V +), reg r152:V, reg addTiming5:*, reg addTiming6:V, reg c45:L, reg cat17:cls, reg out34:*, reg out35:V, reg p46:p(V +), reg r154:V, reg cat18:cls, reg nm10:*, reg nm11:V, reg p47:p(V +), reg out36:*, reg out37:V, reg p48:p(V +), reg r157:V, reg i99:I, reg have_par:*, reg have_par1:V, reg c46:L, reg cat19:cls, reg out38:*, reg out39:V, reg p49:p(V +), reg r160:V, reg i102:I, reg have_contrasts:*, reg have_contrasts1:V, reg c47:L, reg cat20:cls, reg out40:*, reg out41:V, reg p50:p(V +), reg r163:V, reg i105:I, reg cat21:cls, reg readLines1:cls, reg file_path1:cls, reg R_home:cls, reg r165:V, reg p51:p(V +), reg r167:V, reg p52:p(V +), reg r169:V, reg p53:p(V +), reg out42:*, reg out43:V, reg p54:p(V +), reg r172:V, reg count2:*, reg count3:V, reg c48:L, reg c50:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r173:V, reg c53:L, reg r174:V, reg cntFile:*, reg cntFile1:V, reg c54:V, reg r175:V, reg c55:L, reg c56:V, reg c58:L, reg writeLines:cls, reg sym12:cls, reg base12:cls, reg guard12:L, reg r176:V, reg r177:V, reg count4:*, reg count5:V, reg as_character:cls, reg r178:V, reg p55:p(V +), reg cntFile2:*, reg cntFile3:V, reg p56:p(V +), reg r181:V |
    mkenv;
    st pkg = pkg;
    st files = files;
    outFile_isMissing = missing.0(outFile);
    if outFile_isMissing then L0() else L1(outFile);
  L0():
    p = prom<V +>{
      stdout = ldf stdout;
      r = dyn stdout();
      return r;
    };
    goto L1(p);
  L1(outFile_orDefault):
    st outFile = outFile_orDefault;
    use_gct_isMissing = missing.0(use_gct);
    if use_gct_isMissing then L2(FALSE) else L2(use_gct);
  L2(use_gct_orDefault):
    st use_gct = use_gct_orDefault;
    addTiming_isMissing = missing.0(addTiming);
    if addTiming_isMissing then L3(FALSE) else L3(addTiming);
  L3(addTiming_orDefault):
    st addTiming = addTiming_orDefault;
    st `...` = ddd;
    commentDonttest_isMissing = missing.0(commentDonttest);
    if commentDonttest_isMissing then L4(TRUE) else L4(commentDonttest);
  L4(commentDonttest_orDefault):
    st commentDonttest = commentDonttest_orDefault;
    dir_exists = ldf `dir.exists`;
    check L72() else D0();
  D0():
    deopt 1 [];
  L72():
    p1 = prom<V +>{
      files1 = ld files;
      files2 = force? files1;
      checkMissing(files2);
      c = `is.object`(files2);
      if c then L1() else L2(files2);
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("[", files2);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(files4):
      __ = ldf `[` in base;
      r2 = dyn __(files4, 1);
      goto L0(r2);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    r4 = dyn dir_exists(p1);
    check L73() else D1();
  D1():
    deopt 3 [r4];
  L73():
    c1 = `as.logical`(r4);
    if c1 then L74() else L5();
  L5():
    goto L6();
  L6():
    sym = ldf `is.character`;
    base = ldf `is.character` in base;
    guard = `==`.4(sym, base);
    if guard then L84() else L85();
  L74():
    Sys_getlocale = ldf `Sys.getlocale`;
    check L75() else D2();
  D2():
    deopt 5 [];
  L7(r17):
    c3 = `as.logical`(r17);
    if c3 then L87() else L8();
  L75():
    r5 = dyn Sys_getlocale("LC_COLLATE");
    check L76() else D3();
  L84():
    outFile1 = ld outFile;
    check L86() else D10();
  L85():
    r16 = dyn base(<sym outFile>);
    goto L7(r16);
  D3():
    deopt 7 [r5];
  D10():
    deopt 27 [outFile1];
  L8():
    outFile7 = ld outFile;
    check L95() else D15();
  L10():
    st count = 0;
    sym2 = ldf c;
    base2 = ldf c in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L96() else L97();
  L76():
    st old = r5;
    Sys_setlocale = ldf `Sys.setlocale`;
    check L77() else D4();
  L86():
    outFile2 = force? outFile1;
    checkMissing(outFile2);
    c2 = `is.character`(outFile2);
    goto L7(c2);
  L87():
    file = ldf file;
    check L88() else D11();
  D4():
    deopt 10 [];
  D11():
    deopt 31 [];
  D15():
    deopt 45 [outFile7];
  L11(r27):
    st lines = r27;
    cat = ldf cat;
    check L120() else D28();
  L77():
    r6 = dyn Sys_setlocale("LC_COLLATE", "C");
    check L78() else D5();
  L88():
    p6 = prom<V +>{
      outFile3 = ld outFile;
      outFile4 = force? outFile3;
      checkMissing(outFile4);
      return outFile4;
    };
    r19 = dyn file(p6, "wt");
    check L89() else D12();
  L95():
    outFile8 = force? outFile7;
    checkMissing(outFile8);
    st out = outFile8;
    st cntFile = NULL;
    goto L10();
  L96():
    paste1 = ldf paste0;
    check L98() else D16();
  L97():
    r26 = dyn base2(<lang paste0("pkgname <- \"", pkg, "\"")>, "source(file.path(R.home(\"share\"), \"R\", \"examples-header.R\"))", <lang if(use_gct, {
        `<-`(gct_n, as.integer(Sys.getenv("_R_CHECK_GCT_N_", "0")));
        if(`&&`(`!`(is.na(gct_n)), `>`(gct_n, 0)), sprintf("gctorture2(%s)", gct_n), "gctorture(TRUE)")
      })>, "options(warn = 1)");
    goto L11(r26);
  D5():
    deopt 13 [r6];
  D12():
    deopt 34 [r19];
  D16():
    deopt 57 [];
  D28():
    deopt 101 [];
  L78():
    sort = ldf sort;
    check L79() else D6();
  L89():
    st out = r19;
    sym1 = ldf `on.exit`;
    base1 = ldf `on.exit` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L90() else L91();
  L98():
    p8 = prom<V +>{
      pkg1 = ld pkg;
      pkg2 = force? pkg1;
      checkMissing(pkg2);
      return pkg2;
    };
    r29 = dyn paste1("pkgname <- \"", p8, "\"");
    check L99() else D17();
  L120():
    p10 = prom<V +>{
      lines = ld lines;
      lines1 = force? lines;
      checkMissing(lines1);
      return lines1;
    };
    p11 = prom<V +>{
      out = ld out;
      out1 = force? out;
      checkMissing(out1);
      return out1;
    };
    r46 = dyn cat[, sep, file](p10, "\n", p11);
    check L121() else D29();
  D6():
    deopt 15 [];
  D17():
    deopt 61 [r29];
  D29():
    deopt 107 [r46];
  L9():
    paste0 = ldf paste0;
    check L92() else D13();
  L79():
    p4 = prom<V +>{
      Sys_glob = ldf `Sys.glob`;
      p3 = prom<V +>{
        file_path = ldf `file.path`;
        p2 = prom<V +>{
          files5 = ld files;
          files6 = force? files5;
          checkMissing(files6);
          return files6;
        };
        r8 = dyn file_path(p2, "*.R");
        return r8;
      };
      r10 = dyn Sys_glob(p3);
      return r10;
    };
    r12 = dyn sort(p4);
    check L80() else D7();
  L90():
    on_exit = ldf `on.exit` in base;
    r22 = dyn on_exit(<lang close(out)>);
    goto L9();
  L91():
    r20 = dyn base1(<lang close(out)>);
    goto L9();
  L99():
    use_gct1 = ld use_gct;
    check L100() else D18();
  L121():
    _Platform = ld `.Platform`;
    check L122() else D30();
  D7():
    deopt 17 [r12];
  D13():
    deopt 40 [];
  D18():
    deopt 63 [use_gct1];
  D30():
    deopt 108 [_Platform];
  L80():
    st files = r12;
    Sys_setlocale1 = ldf `Sys.setlocale`;
    check L81() else D8();
  L92():
    p7 = prom<V +>{
      outFile5 = ld outFile;
      outFile6 = force? outFile5;
      checkMissing(outFile6);
      return outFile6;
    };
    r24 = dyn paste0(p7, "-cnt");
    check L93() else D14();
  L100():
    use_gct2 = force? use_gct1;
    checkMissing(use_gct2);
    c4 = `as.logical`(use_gct2);
    if c4 then L101() else L12();
  L122():
    _Platform1 = force? _Platform;
    checkMissing(_Platform1);
    c13 = `is.object`(_Platform1);
    if c13 then L124() else L125(_Platform1);
  D8():
    deopt 20 [];
  D14():
    deopt 43 [r24];
  L12():
    goto L18(NULL);
  L18(r42):
    c12 = ldf c in base;
    r43 = dyn c12(r29, "source(file.path(R.home(\"share\"), \"R\", \"examples-header.R\"))", r42, "options(warn = 1)");
    check L119() else D27();
  L81():
    p5 = prom<V +>{
      old = ld old;
      old1 = force? old;
      checkMissing(old1);
      return old1;
    };
    r14 = dyn Sys_setlocale1("LC_COLLATE", p5);
    check L82() else D9();
  L93():
    st cntFile = r24;
    goto L10();
  L101():
    sym3 = ldf `as.integer`;
    base3 = ldf `as.integer` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L102() else L103();
  L123(dx3):
    r48 = `==`(dx3, "windows");
    c14 = `as.logical`(r48);
    if c14 then L127() else L19();
  L124():
    dr2 = tryDispatchBuiltin.1("$", _Platform1);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L126() else L125(dr2);
  L125(_Platform3):
    r47 = `$`(_Platform3, <sym OS.type>);
    goto L123(r47);
  D9():
    deopt 23 [r14];
  D27():
    deopt 98 [r43];
  L13(r31):
    st gct_n = r31;
    sym4 = ldf `is.na`;
    base4 = ldf `is.na` in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L107() else L108();
  L19():
    goto L20();
  L20():
    addTiming1 = ld addTiming;
    check L131() else D33();
  L82():
    goto L6();
  L102():
    Sys_getenv = ldf `Sys.getenv`;
    check L104() else D19();
  L103():
    r30 = dyn base3(<lang Sys.getenv("_R_CHECK_GCT_N_", "0")>);
    goto L13(r30);
  L119():
    goto L11(r43);
  L126():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L123(dx2);
  L127():
    cat1 = ldf cat;
    check L128() else D31();
  D19():
    deopt 68 [];
  D31():
    deopt 114 [];
  D33():
    deopt 121 [addTiming1];
  L14(r35):
    r37 = `!`(r35);
    c5 = `as.logical`(r37);
    if c5 then L111() else L15(c5);
  L104():
    r32 = dyn Sys_getenv("_R_CHECK_GCT_N_", "0");
    check L105() else D20();
  L107():
    gct_n = ld gct_n;
    check L109() else D22();
  L108():
    r34 = dyn base4(<sym gct_n>);
    goto L14(r34);
  L128():
    p12 = prom<V +>{
      out2 = ld out;
      out3 = force? out2;
      checkMissing(out3);
      return out3;
    };
    r50 = dyn cat1[, file]("options(pager = \"console\")\n", p12);
    check L129() else D32();
  L131():
    addTiming2 = force? addTiming1;
    checkMissing(addTiming2);
    c15 = `as.logical`(addTiming2);
    if c15 then L132() else L21();
  D20():
    deopt 71 [r32];
  D22():
    deopt 77 [gct_n];
  D32():
    deopt 118 [r50];
  L15(c7):
    c11 = `as.logical`(c7);
    if c11 then L114() else L16();
  L21():
    goto L22();
  L22():
    pkg5 = ld pkg;
    check L142() else D42();
  L105():
    as_integer = ldf `as.integer` in base;
    r33 = dyn as_integer(r32);
    check L106() else D21();
  L109():
    gct_n1 = force? gct_n;
    checkMissing(gct_n1);
    is_na = ldf `is.na` in base;
    r36 = dyn is_na(gct_n1);
    check L110() else D23();
  L111():
    gct_n2 = ld gct_n;
    check L112() else D24();
  L129():
    goto L20();
  L132():
    cat2 = ldf cat;
    check L133() else D34();
  D21():
    deopt 73 [r33];
  D23():
    deopt 80 [r36];
  D24():
    deopt 82 [c5, gct_n2];
  D34():
    deopt 124 [];
  D42():
    deopt 162 [pkg5];
  L16():
    goto L17("gctorture(TRUE)");
  L17(r41):
    goto L18(r41);
  L106():
    goto L13(r33);
  L110():
    goto L14(r36);
  L112():
    gct_n3 = force? gct_n2;
    checkMissing(gct_n3);
    r38 = `>`(gct_n3, 0);
    c8 = `as.logical`(r38);
    c9 = `&&`(c5, c8);
    goto L15(c9);
  L114():
    sprintf = ldf sprintf;
    check L115() else D25();
  L133():
    p13 = prom<V +>{
      pkg3 = ld pkg;
      pkg4 = force? pkg3;
      checkMissing(pkg4);
      return pkg4;
    };
    p14 = prom<V +>{
      out4 = ld out;
      out5 = force? out4;
      checkMissing(out5);
      return out5;
    };
    r54 = dyn cat2[, , , sep, file]("base::assign(\".ExTimings\", \"", p13, "-Ex.timings\", pos = 'CheckExEnv')\n", "", p14);
    check L134() else D35();
  L142():
    pkg6 = force? pkg5;
    checkMissing(pkg6);
    r62 = `==`(pkg6, "tcltk");
    c16 = `as.logical`(r62);
    if c16 then L143() else L23();
  D25():
    deopt 88 [];
  D35():
    deopt 132 [r54];
  L23():
    pkg7 = ld pkg;
    check L153() else D49();
  L26():
    cat9 = ldf cat;
    check L158() else D52();
  L115():
    p9 = prom<V +>{
      gct_n4 = ld gct_n;
      gct_n5 = force? gct_n4;
      checkMissing(gct_n5);
      return gct_n5;
    };
    r40 = dyn sprintf("gctorture2(%s)", p9);
    check L116() else D26();
  L134():
    cat3 = ldf cat;
    check L135() else D36();
  L143():
    capabilities = ldf capabilities;
    check L144() else D43();
  D26():
    deopt 91 [r40];
  D36():
    deopt 134 [];
  D43():
    deopt 167 [];
  D49():
    deopt 182 [pkg7];
  D52():
    deopt 199 [];
  L116():
    goto L17(r40);
  L135():
    p15 = prom<V +>{
      out6 = ld out;
      out7 = force? out6;
      checkMissing(out7);
      return out7;
    };
    r56 = dyn cat3[, file]("base::cat(\"name\\tuser\\tsystem\\telapsed\\n\", file=base::get(\".ExTimings\", pos = 'CheckExEnv'))\n", p15);
    check L136() else D37();
  L144():
    r63 = dyn capabilities("tcltk");
    check L145() else D44();
  L153():
    pkg8 = force? pkg7;
    checkMissing(pkg8);
    r70 = `!=`(pkg8, "base");
    c18 = `as.logical`(r70);
    if c18 then L154() else L27();
  L158():
    p22 = prom<V +>{
      out18 = ld out;
      out19 = force? out18;
      checkMissing(out19);
      return out19;
    };
    r75 = dyn cat9[, file]("base::assign(\".oldSearch\", base::search(), pos = 'CheckExEnv')\n", p22);
    check L159() else D53();
  D37():
    deopt 138 [r56];
  D44():
    deopt 169 [r63];
  D53():
    deopt 203 [r75];
  L27():
    goto L26();
  L136():
    cat4 = ldf cat;
    check L137() else D38();
  L145():
    c17 = `as.logical`(r63);
    if c17 then L146() else L24();
  L154():
    cat8 = ldf cat;
    check L155() else D50();
  L159():
    cat10 = ldf cat;
    check L160() else D54();
  D38():
    deopt 140 [];
  D50():
    deopt 187 [];
  D54():
    deopt 205 [];
  L24():
    cat7 = ldf cat;
    check L150() else D47();
  L25(r66):
    goto L26();
  L137():
    p16 = prom<V +>{
      out8 = ld out;
      out9 = force? out8;
      checkMissing(out9);
      return out9;
    };
    r58 = dyn cat4[, , , , , , , , sep, file]("base::assign(\".format_ptime\",", "function(x) {", "  if(!is.na(x[4L])) x[1L] <- x[1L] + x[4L]", "  if(!is.na(x[5L])) x[2L] <- x[2L] + x[5L]", "  options(OutDec = '.')", "  format(x[1L:3L], digits = 7L)", "},", "pos = 'CheckExEnv')\n", "\n", p16);
    check L138() else D39();
  L146():
    cat6 = ldf cat;
    check L147() else D45();
  L155():
    p20 = prom<V +>{
      pkg9 = ld pkg;
      pkg10 = force? pkg9;
      checkMissing(pkg10);
      return pkg10;
    };
    p21 = prom<V +>{
      out16 = ld out;
      out17 = force? out16;
      checkMissing(out17);
      return out17;
    };
    r73 = dyn cat8[, , , sep, file]("library('", p20, "')\n\n", "", p21);
    check L156() else D51();
  L160():
    p23 = prom<V +>{
      out20 = ld out;
      out21 = force? out20;
      checkMissing(out21);
      return out21;
    };
    r77 = dyn cat10[, file]("base::assign(\".old_wd\", base::getwd(), pos = 'CheckExEnv')\n", p23);
    check L161() else D55();
  D39():
    deopt 153 [r58];
  D45():
    deopt 171 [];
  D47():
    deopt 177 [];
  D51():
    deopt 195 [r73];
  D55():
    deopt 209 [r77];
  L138():
    cat5 = ldf cat;
    check L139() else D40();
  L147():
    p18 = prom<V +>{
      out12 = ld out;
      out13 = force? out12;
      checkMissing(out13);
      return out13;
    };
    r65 = dyn cat6[, file]("require('tcltk')\n\n", p18);
    check L148() else D46();
  L150():
    p19 = prom<V +>{
      out14 = ld out;
      out15 = force? out14;
      checkMissing(out15);
      return out15;
    };
    r68 = dyn cat7[, file]("q()\n\n", p19);
    check L151() else D48();
  L156():
    goto L26();
  L161():
    files7 = ld files;
    check L162() else D56();
  D40():
    deopt 155 [];
  D46():
    deopt 175 [r65];
  D48():
    deopt 181 [r68];
  D56():
    deopt 210 [files7];
  L139():
    p17 = prom<V +>{
      out10 = ld out;
      out11 = force? out10;
      checkMissing(out11);
      return out11;
    };
    r60 = dyn cat5[, file]("### * </HEADER>\n", p17);
    check L140() else D41();
  L148():
    goto L25(r65);
  L151():
    goto L25(r68);
  L162():
    files8 = force? files7;
    checkMissing(files8);
    s = toForSeq(files8);
    l = length(s);
    i = 0;
    goto L28(i);
  D41():
    deopt 159 [r60];
  L28(i1):
    i2 = `+`.1(i1, 1);
    c19 = `<`.1(l, i2);
    if c19 then L163() else L68();
  L140():
    goto L22();
  L68():
    x = `[[`(s, i2, NULL, TRUE);
    st file = x;
    sub = ldf sub;
    check L164() else D57();
  L163():
    cat21 = ldf cat;
    check L279() else D123();
  D57():
    deopt 213 [i2];
  D123():
    deopt 509 [];
  L164():
    p25 = prom<V +>{
      basename = ldf basename;
      p24 = prom<V +>{
        file1 = ld file;
        file2 = force? file1;
        checkMissing(file2);
        return file2;
      };
      r79 = dyn basename(p24);
      return r79;
    };
    r81 = dyn sub("\\.R$", "", p25);
    check L165() else D58();
  L279():
    p53 = prom<V +>{
      readLines1 = ldf readLines;
      p52 = prom<V +>{
        file_path1 = ldf `file.path`;
        p51 = prom<V +>{
          R_home = ldf `R.home`;
          r165 = dyn R_home("share");
          return r165;
        };
        r167 = dyn file_path1(p51, "R", "examples-footer.R");
        return r167;
      };
      r169 = dyn readLines1(p52);
      return r169;
    };
    p54 = prom<V +>{
      out42 = ld out;
      out43 = force? out42;
      checkMissing(out43);
      return out43;
    };
    r172 = dyn cat21[, sep, file](p53, "\n", p54);
    check L280() else D124();
  D58():
    deopt 217 [i2, r81];
  D124():
    deopt 515 [r172];
  L165():
    st nm = r81;
    gsub = ldf gsub;
    check L166() else D59();
  L280():
    count2 = ld count;
    check L281() else D125();
  D59():
    deopt 220 [i2];
  D125():
    deopt 516 [count2];
  L166():
    p26 = prom<V +>{
      nm = ld nm;
      nm1 = force? nm;
      checkMissing(nm1);
      return nm1;
    };
    r83 = dyn gsub[, , , perl, useBytes]("[^- .a-zA-Z0-9_]", ".", p26, TRUE, TRUE);
    check L167() else D60();
  L281():
    count3 = force? count2;
    checkMissing(count3);
    c48 = `as.logical`(count3);
    if c48 then L282() else L69(c48);
  D60():
    deopt 228 [i2, r83];
  L69(c50):
    c58 = `as.logical`(c50);
    if c58 then L287() else L71();
  L167():
    st nm = r83;
    pkg11 = ld pkg;
    check L168() else D61();
  L282():
    sym11 = ldf `is.null`;
    base11 = ldf `is.null` in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L283() else L284();
  D61():
    deopt 230 [i2, pkg11];
  L70(c53, r174):
    r175 = `!`(r174);
    c55 = `as.logical`(r175);
    c56 = `&&`(c53, c55);
    goto L69(c56);
  L71():
    invisible.0();
    popenv;
    return NULL;
  L168():
    pkg12 = force? pkg11;
    checkMissing(pkg12);
    r84 = `==`(pkg12, "grDevices");
    c20 = `as.logical`(r84);
    if c20 then L169() else L29(i2, c20);
  L283():
    cntFile = ld cntFile;
    check L285() else D126();
  L284():
    r173 = dyn base11(<sym cntFile>);
    goto L70(c48, r173);
  L287():
    writeLines = ldf writeLines;
    check L288() else D127();
  D126():
    deopt 519 [c48, cntFile];
  D127():
    deopt 525 [];
  L29(i6, c22):
    c26 = `as.logical`(c22);
    if c26 then L172() else L30();
  L169():
    nm2 = ld nm;
    check L170() else D62();
  L285():
    cntFile1 = force? cntFile;
    checkMissing(cntFile1);
    c54 = `==`(cntFile1, NULL);
    goto L70(c48, c54);
  L288():
    p55 = prom<V +>{
      sym12 = ldf `as.character`;
      base12 = ldf `as.character` in base;
      guard12 = `==`.4(sym12, base12);
      if guard12 then L1() else L2();
    L0(r177):
      return r177;
    L1():
      count4 = ld count;
      count5 = force? count4;
      checkMissing(count5);
      as_character = ldf `as.character` in base;
      r178 = dyn as_character(count5);
      goto L0(r178);
    L2():
      r176 = dyn base12(<sym count>);
      goto L0(r176);
    };
    p56 = prom<V +>{
      cntFile2 = ld cntFile;
      cntFile3 = force? cntFile2;
      checkMissing(cntFile3);
      return cntFile3;
    };
    r181 = dyn writeLines(p55, p56);
    check L289() else D128();
  D62():
    deopt 234 [i2, c20, nm2];
  D128():
    deopt 528 [r181];
  L30():
    pkg13 = ld pkg;
    check L175() else D63();
  L170():
    nm3 = force? nm2;
    checkMissing(nm3);
    r85 = `==`(nm3, "postscript");
    c23 = `as.logical`(r85);
    c24 = `&&`(c20, c23);
    goto L29(i2, c24);
  L172():
    goto L28(i6);
  L289():
    popenv;
    return r181;
  D63():
    deopt 243 [i6, pkg13];
  L175():
    pkg14 = force? pkg13;
    checkMissing(pkg14);
    r87 = `==`(pkg14, "graphics");
    c27 = `as.logical`(r87);
    if c27 then L176() else L32(i6, c27);
  L32(i13, c29):
    c33 = `as.logical`(c29);
    if c33 then L179() else L33();
  L176():
    nm4 = ld nm;
    check L177() else D64();
  D64():
    deopt 247 [i6, c27, nm4];
  L33():
    file_exists = ldf `file.exists`;
    check L182() else D65();
  L177():
    nm5 = force? nm4;
    checkMissing(nm5);
    r88 = `==`(nm5, "text");
    c30 = `as.logical`(r88);
    c31 = `&&`(c27, c30);
    goto L32(i6, c31);
  L179():
    goto L28(i13);
  D65():
    deopt 257 [i13];
  L182():
    p27 = prom<V +>{
      file3 = ld file;
      file4 = force? file3;
      checkMissing(file4);
      return file4;
    };
    r91 = dyn file_exists(p27);
    check L183() else D66();
  D66():
    deopt 259 [i13, r91];
  L183():
    r92 = `!`(r91);
    c34 = `as.logical`(r92);
    if c34 then L184() else L35();
  L35():
    goto L36(i13);
  L36(i21):
    readLines = ldf readLines;
    check L188() else D69();
  L184():
    stop = ldf stop;
    check L185() else D67();
  D67():
    deopt 262 [i13];
  D69():
    deopt 272 [i21];
  L185():
    p28 = prom<V +>{
      file5 = ld file;
      file6 = force? file5;
      checkMissing(file6);
      return file6;
    };
    r94 = dyn stop[, , , domain]("file ", p28, " cannot be opened", NA_LGL);
    check L186() else D68();
  L188():
    p29 = prom<V +>{
      file7 = ld file;
      file8 = force? file7;
      checkMissing(file8);
      return file8;
    };
    r97 = dyn readLines(p29);
    check L189() else D70();
  D68():
    deopt 268 [i13, r94];
  D70():
    deopt 274 [i21, r97];
  L186():
    goto L36(i13);
  L189():
    st lines = r97;
    sym5 = ldf any;
    base5 = ldf any in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L190() else L191();
  L37(i24, r99):
    st have_examples = r99;
    grep = ldf grep;
    check L195() else D74();
  L190():
    grepl = ldf grepl;
    check L192() else D71();
  L191():
    r98 = dyn base5(<lang grepl("_ Examples _|### \\*+ Examples", lines, perl=TRUE, useBytes=TRUE)>);
    goto L37(i21, r98);
  D71():
    deopt 279 [i21];
  D74():
    deopt 291 [i24];
  L192():
    p30 = prom<V +>{
      lines2 = ld lines;
      lines3 = force? lines2;
      checkMissing(lines3);
      return lines3;
    };
    r101 = dyn grepl[, , perl, useBytes]("_ Examples _|### \\*+ Examples", p30, TRUE, TRUE);
    check L193() else D72();
  L195():
    p31 = prom<V +>{
      lines4 = ld lines;
      lines5 = force? lines4;
      checkMissing(lines5);
      return lines5;
    };
    r104 = dyn grep[, , perl, useBytes]("^#", p31, TRUE, TRUE);
    check L196() else D75();
  D72():
    deopt 286 [i21, r101];
  D75():
    deopt 298 [i24, r104];
  L193():
    any = ldf any in base;
    r102 = dyn any(r101);
    check L194() else D73();
  L196():
    st com = r104;
    sym6 = ldf length;
    base6 = ldf length in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L197() else L198();
  D73():
    deopt 288 [i21, r102];
  L38(i27, r106):
    c35 = `as.logical`(r106);
    if c35 then L201() else L39();
  L194():
    goto L37(i21, r102);
  L197():
    com = ld com;
    check L199() else D76();
  L198():
    r105 = dyn base6(<sym com>);
    goto L38(i24, r105);
  D76():
    deopt 302 [i24, com];
  L39():
    lines10 = ld lines;
    check L208() else D80();
  L41(i34, dx6):
    st lines1 = dx6;
    sym7 = ldf any;
    base7 = ldf any in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L209() else L210();
  L199():
    com1 = force? com;
    checkMissing(com1);
    length = ldf length in base;
    r107 = dyn length(com1);
    check L200() else D77();
  L201():
    lines6 = ld lines;
    check L202() else D78();
  D77():
    deopt 305 [i24, r107];
  D78():
    deopt 306 [i27, lines6];
  D80():
    deopt 312 [i27, lines10];
  L42(i37, r111):
    st have_par = r111;
    sym8 = ldf any;
    base8 = ldf any in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L214() else L215();
  L200():
    goto L38(i24, r107);
  L202():
    lines7 = force? lines6;
    checkMissing(lines7);
    c36 = `is.object`(lines7);
    if c36 then L203() else L204(i27, lines7);
  L208():
    lines11 = force? lines10;
    checkMissing(lines11);
    goto L41(i27, lines11);
  L209():
    grepl1 = ldf grepl;
    check L211() else D81();
  L210():
    r110 = dyn base7(<lang grepl("[^a-zA-Z0-9.]par\\(|^par\\(", lines1, perl=TRUE, useBytes=TRUE)>);
    goto L42(i34, r110);
  D81():
    deopt 318 [i34];
  L40(i33, dx5):
    goto L41(i33, dx5);
  L43(i40, r116):
    st have_contrasts = r116;
    have_examples = ld have_examples;
    check L219() else D87();
  L203():
    dr4 = tryDispatchBuiltin.1("[", lines7);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L205() else L204(i27, dr4);
  L204(i31, lines9):
    com2 = ld com;
    check L206() else D79();
  L211():
    p32 = prom<V +>{
      lines12 = ld lines1;
      lines13 = force? lines12;
      checkMissing(lines13);
      return lines13;
    };
    r113 = dyn grepl1[, , perl, useBytes]("[^a-zA-Z0-9.]par\\(|^par\\(", p32, TRUE, TRUE);
    check L212() else D82();
  L214():
    grepl2 = ldf grepl;
    check L216() else D84();
  L215():
    r115 = dyn base8(<lang grepl("options\\(contrasts", lines1, perl=TRUE, useBytes=TRUE)>);
    goto L43(i37, r115);
  D79():
    deopt 308 [i31, lines9, com2];
  D82():
    deopt 325 [i34, r113];
  D84():
    deopt 332 [i37];
  D87():
    deopt 343 [i40, have_examples];
  L205():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L40(i27, dx4);
  L206():
    com3 = force? com2;
    checkMissing(com3);
    r108 = `-`(<missing>, com3);
    __1 = ldf `[` in base;
    r109 = dyn __1(lines9, r108);
    goto L40(i31, r109);
  L212():
    any1 = ldf any in base;
    r114 = dyn any1(r113);
    check L213() else D83();
  L216():
    p33 = prom<V +>{
      lines14 = ld lines1;
      lines15 = force? lines14;
      checkMissing(lines15);
      return lines15;
    };
    r118 = dyn grepl2[, , perl, useBytes]("options\\(contrasts", p33, TRUE, TRUE);
    check L217() else D85();
  L219():
    have_examples1 = force? have_examples;
    checkMissing(have_examples1);
    c37 = `as.logical`(have_examples1);
    if c37 then L220() else L44();
  D83():
    deopt 327 [i34, r114];
  D85():
    deopt 339 [i37, r118];
  L44():
    goto L45(i40);
  L45(i43):
    cat12 = ldf cat;
    check L224() else D90();
  L213():
    goto L42(i34, r114);
  L217():
    any2 = ldf any in base;
    r119 = dyn any2(r118);
    check L218() else D86();
  L220():
    cat11 = ldf cat;
    check L221() else D88();
  D86():
    deopt 341 [i37, r119];
  D88():
    deopt 346 [i40];
  D90():
    deopt 358 [i43];
  L218():
    goto L43(i37, r119);
  L221():
    p34 = prom<V +>{
      nm6 = ld nm;
      nm7 = force? nm6;
      checkMissing(nm7);
      return nm7;
    };
    p35 = prom<V +>{
      out22 = ld out;
      out23 = force? out22;
      checkMissing(out23);
      return out23;
    };
    r122 = dyn cat11[, , , sep, file]("cleanEx()\nnameEx(\"", p34, "\")\n", "", p35);
    check L222() else D89();
  L224():
    p36 = prom<V +>{
      nm8 = ld nm;
      nm9 = force? nm8;
      checkMissing(nm9);
      return nm9;
    };
    p37 = prom<V +>{
      out24 = ld out;
      out25 = force? out24;
      checkMissing(out25);
      return out25;
    };
    r126 = dyn cat12[, , , sep, file]("### * ", p36, "\n\n", "", p37);
    check L225() else D91();
  D89():
    deopt 354 [i40, r122];
  D91():
    deopt 366 [i43, r126];
  L222():
    goto L45(i40);
  L225():
    cat13 = ldf cat;
    check L226() else D92();
  D92():
    deopt 368 [i43];
  L226():
    p38 = prom<V +>{
      out26 = ld out;
      out27 = force? out26;
      checkMissing(out27);
      return out27;
    };
    r128 = dyn cat13[, file]("flush(stderr()); flush(stdout())\n\n", p38);
    check L227() else D93();
  D93():
    deopt 372 [i43, r128];
  L227():
    addTiming3 = ld addTiming;
    check L228() else D94();
  D94():
    deopt 373 [i43, addTiming3];
  L228():
    addTiming4 = force? addTiming3;
    checkMissing(addTiming4);
    c38 = `as.logical`(addTiming4);
    if c38 then L229() else L46();
  L46():
    goto L47(i43);
  L47(i46):
    commentDonttest1 = ld commentDonttest;
    check L233() else D97();
  L229():
    cat14 = ldf cat;
    check L230() else D95();
  D95():
    deopt 376 [i43];
  D97():
    deopt 383 [i46, commentDonttest1];
  L230():
    p39 = prom<V +>{
      out28 = ld out;
      out29 = force? out28;
      checkMissing(out29);
      return out29;
    };
    r130 = dyn cat14[, file]("base::assign(\".ptime\", proc.time(), pos = \"CheckExEnv\")\n", p39);
    check L231() else D96();
  L233():
    commentDonttest2 = force? commentDonttest1;
    checkMissing(commentDonttest2);
    c39 = `as.logical`(commentDonttest2);
    if c39 then L234() else L48();
  D96():
    deopt 380 [i43, r130];
  L48():
    lines18 = ld lines;
    check L258() else D109();
  L59(i87):
    addTiming5 = ld addTiming;
    check L262() else D112();
  L231():
    goto L47(i43);
  L234():
    st dont_test = FALSE;
    lines16 = ld lines;
    check L235() else D98();
  D98():
    deopt 388 [i46, lines16];
  D109():
    deopt 448 [i46, lines18];
  D112():
    deopt 462 [i87, addTiming5];
  L235():
    lines17 = force? lines16;
    checkMissing(lines17);
    s1 = toForSeq(lines17);
    l1 = length(s1);
    i49 = 0;
    goto L49(i46, i49);
  L258():
    lines19 = force? lines18;
    checkMissing(lines19);
    s2 = toForSeq(lines19);
    l2 = length(s2);
    i89 = 0;
    goto L60(i46, i89);
  L262():
    addTiming6 = force? addTiming5;
    checkMissing(addTiming6);
    c45 = `as.logical`(addTiming6);
    if c45 then L263() else L62();
  L49(i50, i51):
    i52 = `+`.1(i51, 1);
    c40 = `<`.1(l1, i52);
    if c40 then L236() else L58();
  L60(i90, i91):
    i92 = `+`.1(i91, 1);
    c44 = `<`.1(l2, i92);
    if c44 then L259() else L61();
  L62():
    goto L63(i87);
  L63(i99):
    have_par = ld have_par;
    check L269() else D117();
  L263():
    cat17 = ldf cat;
    check L264() else D113();
  D113():
    deopt 465 [i87];
  D117():
    deopt 482 [i99, have_par];
  L58():
    x1 = `[[`(s1, i52, NULL, TRUE);
    st line = x1;
    sym9 = ldf any;
    base9 = ldf any in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L237() else L238();
  L61():
    x2 = `[[`(s2, i92, NULL, TRUE);
    st line = x2;
    cat16 = ldf cat;
    check L260() else D110();
  L236():
    goto L59(i50);
  L259():
    goto L59(i90);
  L264():
    p46 = prom<V +>{
      out34 = ld out;
      out35 = force? out34;
      checkMissing(out35);
      return out35;
    };
    r154 = dyn cat17[, file]("base::assign(\".dptime\", (proc.time() - get(\".ptime\", pos = \"CheckExEnv\")), pos = \"CheckExEnv\")\n", p46);
    check L265() else D114();
  L269():
    have_par1 = force? have_par;
    checkMissing(have_par1);
    c46 = `as.logical`(have_par1);
    if c46 then L270() else L64();
  D110():
    deopt 451 [i90, i92];
  D114():
    deopt 469 [i87, r154];
  L50(i61, i62, r133):
    c41 = `as.logical`(r133);
    if c41 then L242() else L51();
  L64():
    goto L65(i99);
  L65(i102):
    have_contrasts = ld have_contrasts;
    check L274() else D120();
  L237():
    grepl3 = ldf grepl;
    check L239() else D99();
  L238():
    r132 = dyn base9(<lang grepl("^[[:space:]]*## No test:", line, perl=TRUE, useBytes=TRUE)>);
    goto L50(i50, i52, r132);
  L260():
    p44 = prom<V +>{
      line6 = ld line;
      line7 = force? line6;
      checkMissing(line7);
      return line7;
    };
    p45 = prom<V +>{
      out32 = ld out;
      out33 = force? out32;
      checkMissing(out33);
      return out33;
    };
    r152 = dyn cat16[, , sep, file](p44, "\n", "", p45);
    check L261() else D111();
  L265():
    cat18 = ldf cat;
    check L266() else D115();
  L270():
    cat19 = ldf cat;
    check L271() else D118();
  D99():
    deopt 393 [i50, i52];
  D111():
    deopt 458 [i90, i92, r152];
  D115():
    deopt 471 [i87];
  D118():
    deopt 485 [i99];
  D120():
    deopt 492 [i102, have_contrasts];
  L51():
    goto L52(i61, i62);
  L52(i67, i68):
    dont_test = ld dont_test;
    check L245() else D103();
  L239():
    p40 = prom<V +>{
      line = ld line;
      line1 = force? line;
      checkMissing(line1);
      return line1;
    };
    r135 = dyn grepl3[, , perl, useBytes]("^[[:space:]]*## No test:", p40, TRUE, TRUE);
    check L240() else D100();
  L242():
    st dont_test = TRUE;
    count = ld count;
    check L243() else D102();
  L261():
    goto L60(i90, i92);
  L266():
    p47 = prom<V +>{
      nm10 = ld nm;
      nm11 = force? nm10;
      checkMissing(nm11);
      return nm11;
    };
    p48 = prom<V +>{
      out36 = ld out;
      out37 = force? out36;
      checkMissing(out37);
      return out37;
    };
    r157 = dyn cat18[, , , sep, file]("base::cat(\"", p47, "\", base::get(\".format_ptime\", pos = 'CheckExEnv')(get(\".dptime\", pos = \"CheckExEnv\")), \"\\n\", file=base::get(\".ExTimings\", pos = 'CheckExEnv'), append=TRUE, sep=\"\\t\")\n", "", p48);
    check L267() else D116();
  L271():
    p49 = prom<V +>{
      out38 = ld out;
      out39 = force? out38;
      checkMissing(out39);
      return out39;
    };
    r160 = dyn cat19[, file]("graphics::par(get(\"par.postscript\", pos = 'CheckExEnv'))\n", p49);
    check L272() else D119();
  L274():
    have_contrasts1 = force? have_contrasts;
    checkMissing(have_contrasts1);
    c47 = `as.logical`(have_contrasts1);
    if c47 then L275() else L66();
  D100():
    deopt 400 [i50, i52, r135];
  D102():
    deopt 406 [i61, i62, count];
  D103():
    deopt 413 [i67, i68, dont_test];
  D116():
    deopt 479 [i87, r157];
  D119():
    deopt 489 [i99, r160];
  L66():
    goto L67(i102);
  L67(i105):
    goto L28(i105);
  L240():
    any3 = ldf any in base;
    r136 = dyn any3(r135);
    check L241() else D101();
  L243():
    count1 = force? count;
    checkMissing(count1);
    r137 = `+`(count1, 1);
    st count = r137;
    goto L52(i61, i62);
  L245():
    dont_test1 = force? dont_test;
    checkMissing(dont_test1);
    r139 = `!`(dont_test1);
    c42 = `as.logical`(r139);
    if c42 then L246() else L53();
  L267():
    goto L63(i87);
  L272():
    goto L65(i99);
  L275():
    cat20 = ldf cat;
    check L276() else D121();
  D101():
    deopt 402 [i50, i52, r136];
  D121():
    deopt 495 [i102];
  L53():
    goto L54(i67, i68);
  L54(i73, i74):
    sym10 = ldf any;
    base10 = ldf any in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L250() else L251();
  L241():
    goto L50(i50, i52, r136);
  L246():
    cat15 = ldf cat;
    check L247() else D104();
  L276():
    p50 = prom<V +>{
      out40 = ld out;
      out41 = force? out40;
      checkMissing(out41);
      return out41;
    };
    r163 = dyn cat20[, , sep, file]("base::options(contrasts = c(unordered = \"contr.treatment\",", "ordered = \"contr.poly\"))\n", "", p50);
    check L277() else D122();
  D104():
    deopt 417 [i67, i68];
  D122():
    deopt 502 [i102, r163];
  L55(i79, i80, r145):
    c43 = `as.logical`(r145);
    if c43 then L255() else L56();
  L247():
    p41 = prom<V +>{
      line2 = ld line;
      line3 = force? line2;
      checkMissing(line3);
      return line3;
    };
    p42 = prom<V +>{
      out30 = ld out;
      out31 = force? out30;
      checkMissing(out31);
      return out31;
    };
    r142 = dyn cat15[, , sep, file](p41, "\n", "", p42);
    check L248() else D105();
  L250():
    grepl4 = ldf grepl;
    check L252() else D106();
  L251():
    r144 = dyn base10(<lang grepl("^[[:space:]]*## End\\(No test\\)", line, perl=TRUE, useBytes=TRUE)>);
    goto L55(i73, i74, r144);
  L277():
    goto L67(i102);
  D105():
    deopt 424 [i67, i68, r142];
  D106():
    deopt 430 [i73, i74];
  L56():
    goto L57(i79, i80);
  L57(i85, i86):
    goto L49(i85, i86);
  L248():
    goto L54(i67, i68);
  L252():
    p43 = prom<V +>{
      line4 = ld line;
      line5 = force? line4;
      checkMissing(line5);
      return line5;
    };
    r147 = dyn grepl4[, , perl, useBytes]("^[[:space:]]*## End\\(No test\\)", p43, TRUE, TRUE);
    check L253() else D107();
  L255():
    st dont_test = FALSE;
    goto L57(i79, i80);
  D107():
    deopt 437 [i73, i74, r147];
  L253():
    any4 = ldf any in base;
    r148 = dyn any4(r147);
    check L254() else D108();
  D108():
    deopt 439 [i73, i74, r148];
  L254():
    goto L55(i73, i74, r148);
  }
}