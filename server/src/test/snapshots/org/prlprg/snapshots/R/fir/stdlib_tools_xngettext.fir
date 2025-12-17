fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3222564391;
    st xngettext = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3222564391(dir, verbose) {
  (reg dir:*, reg verbose:*) -+> V { var dir:*, var verbose:*, reg verbose_isMissing:L, reg verbose_orDefault:*, reg file_path_as_absolute:cls, reg dir1:*, reg dir2:V, reg p:p(V +), reg r1:V, reg file_path:cls, reg dir3:*, reg dir4:V, reg p1:p(V +), reg r3:V, reg _make_file_exts:cls, reg r4:V, reg list_files_with_exts:cls, reg dir5:*, reg dir6:V, reg p2:p(V +), reg exts:*, reg exts1:V, reg p3:p(V +), reg r7:V, reg sym:cls, reg base:cls, reg guard:L, reg r8:V, reg r9:V, reg c:cls, reg r10:V, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c1:L, reg x:V, reg file_path1:cls, reg dir7:*, reg dir8:V, reg p4:p(V +), reg d:*, reg d1:V, reg p5:p(V +), reg r13:V, reg dir_exists:cls, reg OSdir:*, reg OSdir1:V, reg p6:p(V +), reg r15:V, reg c2:L, reg sym1:cls, reg base1:cls, reg guard1:L, reg r16:V, reg i9:I, reg r17:V, reg R_files:*, reg R_files1:V, reg list_files_with_exts1:cls, reg OSdir2:*, reg OSdir3:V, reg p7:p(V +), reg exts2:*, reg exts3:V, reg p8:p(V +), reg r20:V, reg c3:cls, reg r21:V, reg i10:I, reg sym2:cls, reg base2:cls, reg guard2:L, reg r23:V, reg r24:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r25:V, reg r26:V, reg R_files2:*, reg R_files3:V, reg length:cls, reg r27:V, reg vector:cls, reg r28:V, reg R_files4:*, reg R_files5:V, reg l1:*, reg names__:cls, reg r29:V, reg r30:cls, reg R_files6:*, reg R_files7:V, reg s1:V, reg l2:I, reg i11:I, reg i12:I, reg i13:I, reg c4:L, reg x1:V, reg verbose1:*, reg verbose2:V, reg c5:L, reg message:cls, reg gettextf:cls, reg f:*, reg f1:V, reg p9:p(V +), reg r32:V, reg p10:p(V +), reg r34:V, reg i18:I, reg sym4:cls, reg base4:cls, reg guard4:L, reg r36:V, reg i21:I, reg r37:V, reg list:cls, reg r38:V, reg parse:cls, reg f2:*, reg f3:V, reg p11:p(V +), reg r40:V, reg s2:V, reg l3:I, reg i22:I, reg i23:I, reg i24:I, reg i25:I, reg c6:L, reg x2:V, reg find_strings:cls, reg e:*, reg e1:V, reg p12:p(V +), reg r42:V, reg structure:cls, reg strings:*, reg strings1:V, reg p13:p(V +), reg r44:V, reg l4:*, reg c7:L, reg i31:I, reg r46:V, reg l6:*, reg dr:V, reg dc:L, reg dx:V, reg i33:I, reg dx1:V, reg f4:*, reg f5:V, reg ____:cls, reg r49:V, reg out:*, reg out1:V, reg c8:L, reg out3:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg lengths:cls, reg out4:*, reg out5:V, reg p14:p(V +), reg r51:V, reg r52:V, reg __:cls, reg r53:V |
    mkenv;
    st dir = dir;
    verbose_isMissing = missing.0(verbose);
    if verbose_isMissing then L0(FALSE) else L0(verbose);
  L0(verbose_orDefault):
    st verbose = verbose_orDefault;
    file_path_as_absolute = ldf file_path_as_absolute;
    check L18() else D0();
  D0():
    deopt 1 [];
  L18():
    p = prom<V +>{
      dir1 = ld dir;
      dir2 = force? dir1;
      checkMissing(dir2);
      return dir2;
    };
    r1 = dyn file_path_as_absolute(p);
    check L19() else D1();
  D1():
    deopt 3 [r1];
  L19():
    st dir = r1;
    file_path = ldf `file.path`;
    check L20() else D2();
  D2():
    deopt 6 [];
  L20():
    p1 = prom<V +>{
      dir3 = ld dir;
      dir4 = force? dir3;
      checkMissing(dir4);
      return dir4;
    };
    r3 = dyn file_path(p1, "R");
    check L21() else D3();
  D3():
    deopt 9 [r3];
  L21():
    st dir = r3;
    _make_file_exts = ldf `.make_file_exts`;
    check L22() else D4();
  D4():
    deopt 12 [];
  L22():
    r4 = dyn _make_file_exts("code");
    check L23() else D5();
  D5():
    deopt 14 [r4];
  L23():
    st exts = r4;
    list_files_with_exts = ldf list_files_with_exts;
    check L24() else D6();
  D6():
    deopt 17 [];
  L24():
    p2 = prom<V +>{
      dir5 = ld dir;
      dir6 = force? dir5;
      checkMissing(dir6);
      return dir6;
    };
    p3 = prom<V +>{
      exts = ld exts;
      exts1 = force? exts;
      checkMissing(exts1);
      return exts1;
    };
    r7 = dyn list_files_with_exts(p2, p3);
    check L25() else D7();
  D7():
    deopt 20 [r7];
  L25():
    st R_files = r7;
    sym = ldf c;
    base = ldf c in base;
    guard = `==`.4(sym, base);
    if guard then L26() else L27();
  L1(r9):
    s = toForSeq(r9);
    l = length(s);
    i = 0;
    goto L2(i);
  L26():
    c = ldf c in base;
    r10 = dyn c("unix", "windows", "aqua");
    check L28() else D8();
  L27():
    r8 = dyn base("unix", "windows", "aqua");
    goto L1(r8);
  D8():
    deopt 28 [r10];
  L2(i1):
    i2 = `+`.1(i1, 1);
    c1 = `<`.1(l, i2);
    if c1 then L29() else L6();
  L28():
    goto L1(r10);
  L6():
    x = `[[`(s, i2, NULL, TRUE);
    st d = x;
    file_path1 = ldf `file.path`;
    check L30() else D9();
  L29():
    sym2 = ldf vector;
    base2 = ldf vector in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L42() else L43();
  D9():
    deopt 30 [i2];
  L7(r24):
    st out = r24;
    R_files4 = ld R_files;
    check L49() else D20();
  L30():
    p4 = prom<V +>{
      dir7 = ld dir;
      dir8 = force? dir7;
      checkMissing(dir8);
      return dir8;
    };
    p5 = prom<V +>{
      d = ld d;
      d1 = force? d;
      checkMissing(d1);
      return d1;
    };
    r13 = dyn file_path1(p4, p5);
    check L31() else D10();
  L42():
    sym3 = ldf length;
    base3 = ldf length in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L44() else L45();
  L43():
    r23 = dyn base2[, length]("list", <lang length(R_files)>);
    goto L7(r23);
  D10():
    deopt 33 [i2, r13];
  D20():
    deopt 68 [R_files4];
  L8(r26):
    vector = ldf vector in base;
    r28 = dyn vector("list", r26);
    check L48() else D19();
  L31():
    st OSdir = r13;
    dir_exists = ldf `dir.exists`;
    check L32() else D11();
  L44():
    R_files2 = ld R_files;
    check L46() else D17();
  L45():
    r25 = dyn base3(<sym R_files>);
    goto L8(r25);
  L49():
    R_files5 = force? R_files4;
    checkMissing(R_files5);
    l1 = ld out;
    names__ = ldf `names<-`;
    check L50() else D21();
  D11():
    deopt 36 [i2];
  D17():
    deopt 61 [R_files2];
  D19():
    deopt 66 [r28];
  D21():
    deopt 71 [R_files5, l1, R_files5];
  L32():
    p6 = prom<V +>{
      OSdir = ld OSdir;
      OSdir1 = force? OSdir;
      checkMissing(OSdir1);
      return OSdir1;
    };
    r15 = dyn dir_exists(p6);
    check L33() else D12();
  L46():
    R_files3 = force? R_files2;
    checkMissing(R_files3);
    length = ldf length in base;
    r27 = dyn length(R_files3);
    check L47() else D18();
  L48():
    goto L7(r28);
  L50():
    r29 = dyn names__(l1, NULL, R_files5);
    check L51() else D22();
  D12():
    deopt 38 [i2, r15];
  D18():
    deopt 64 [r27];
  D22():
    deopt 73 [R_files5, r29];
  L33():
    c2 = `as.logical`(r15);
    if c2 then L34() else L3();
  L47():
    goto L8(r27);
  L51():
    st out = r29;
    r30 = clos inner3708401697;
    st find_strings = r30;
    R_files6 = ld R_files;
    check L52() else D23();
  D23():
    deopt 78 [R_files6];
  L3():
    goto L5(i2);
  L5(i10):
    goto L2(i10);
  L34():
    sym1 = ldf c;
    base1 = ldf c in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L35() else L36();
  L52():
    R_files7 = force? R_files6;
    checkMissing(R_files7);
    s1 = toForSeq(R_files7);
    l2 = length(s1);
    i11 = 0;
    goto L9(i11);
  L4(i9, r17):
    st R_files = r17;
    goto L5(i9);
  L9(i12):
    i13 = `+`.1(i12, 1);
    c4 = `<`.1(l2, i13);
    if c4 then L53() else L16();
  L35():
    R_files = ld R_files;
    check L37() else D13();
  L36():
    r16 = dyn base1(<sym R_files>, <lang list_files_with_exts(OSdir, exts)>);
    goto L4(i2, r16);
  D13():
    deopt 41 [i2, R_files];
  L16():
    x1 = `[[`(s1, i13, NULL, TRUE);
    st f = x1;
    verbose1 = ld verbose;
    check L54() else D24();
  L37():
    R_files1 = force? R_files;
    checkMissing(R_files1);
    list_files_with_exts1 = ldf list_files_with_exts;
    check L38() else D14();
  L53():
    out = ld out;
    check L73() else D35();
  D14():
    deopt 44 [i2];
  D24():
    deopt 80 [i13, verbose1];
  D35():
    deopt 121 [out];
  L38():
    p7 = prom<V +>{
      OSdir2 = ld OSdir;
      OSdir3 = force? OSdir2;
      checkMissing(OSdir3);
      return OSdir3;
    };
    p8 = prom<V +>{
      exts2 = ld exts;
      exts3 = force? exts2;
      checkMissing(exts3);
      return exts3;
    };
    r20 = dyn list_files_with_exts1(p7, p8);
    check L39() else D15();
  L54():
    verbose2 = force? verbose1;
    checkMissing(verbose2);
    c5 = `as.logical`(verbose2);
    if c5 then L55() else L10();
  L73():
    out1 = force? out;
    checkMissing(out1);
    c8 = `is.object`(out1);
    if c8 then L74() else L75(out1);
  D15():
    deopt 47 [i2, r20];
  L10():
    goto L11(i13);
  L11(i18):
    sym4 = ldf list;
    base4 = ldf list in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L59() else L60();
  L17(dx3):
    popenv;
    return dx3;
  L39():
    c3 = ldf c in base;
    r21 = dyn c3(R_files1, r20);
    check L40() else D16();
  L55():
    message = ldf message;
    check L56() else D25();
  L74():
    dr2 = tryDispatchBuiltin.1("[", out1);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L76() else L75(dr2);
  L75(out3):
    lengths = ldf lengths;
    check L77() else D36();
  D16():
    deopt 49 [i2, r21];
  D25():
    deopt 83 [i13];
  D36():
    deopt 124 [out3];
  L12(i21, r37):
    st strings = r37;
    parse = ldf parse;
    check L62() else D28();
  L40():
    goto L4(i2, r21);
  L56():
    p10 = prom<V +>{
      gettextf = ldf gettextf;
      p9 = prom<V +>{
        f = ld f;
        f1 = force? f;
        checkMissing(f1);
        return f1;
      };
      r32 = dyn gettextf("parsing '%s'", p9);
      return r32;
    };
    r34 = dyn message[, domain](p10, NA_LGL);
    check L57() else D26();
  L59():
    list = ldf list in base;
    r38 = dyn list();
    check L61() else D27();
  L60():
    r36 = dyn base4();
    goto L12(i18, r36);
  L76():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L17(dx2);
  L77():
    p14 = prom<V +>{
      out4 = ld out;
      out5 = force? out4;
      checkMissing(out5);
      return out5;
    };
    r51 = dyn lengths(p14);
    check L78() else D37();
  D26():
    deopt 87 [i13, r34];
  D27():
    deopt 93 [i18, r38];
  D28():
    deopt 96 [i21];
  D37():
    deopt 126 [out3, r51];
  L57():
    goto L11(i13);
  L61():
    goto L12(i18, r38);
  L62():
    p11 = prom<V +>{
      f2 = ld f;
      f3 = force? f2;
      checkMissing(f3);
      return f3;
    };
    r40 = dyn parse[file](p11);
    check L63() else D29();
  L78():
    r52 = `>`(r51, 0);
    __ = ldf `[` in base;
    r53 = dyn __(out3, r52);
    goto L17(r53);
  D29():
    deopt 99 [i21, r40];
  L63():
    s2 = toForSeq(r40);
    l3 = length(s2);
    i22 = 0;
    goto L13(i21, i22);
  L13(i23, i24):
    i25 = `+`.1(i24, 1);
    c6 = `<`.1(l3, i25);
    if c6 then L64() else L14();
  L14():
    x2 = `[[`(s2, i25, NULL, TRUE);
    st e = x2;
    find_strings = ldf find_strings;
    check L65() else D30();
  L64():
    structure = ldf structure;
    check L67() else D32();
  D30():
    deopt 101 [i23, i25];
  D32():
    deopt 108 [i23];
  L65():
    p12 = prom<V +>{
      e = ld e;
      e1 = force? e;
      checkMissing(e1);
      return e1;
    };
    r42 = dyn find_strings(p12);
    check L66() else D31();
  L67():
    p13 = prom<V +>{
      strings = ld strings;
      strings1 = force? strings;
      checkMissing(strings1);
      return strings1;
    };
    r44 = dyn structure[, class](p13, "xngettext");
    check L68() else D33();
  D31():
    deopt 103 [i23, i25, r42];
  D33():
    deopt 112 [i23, r44];
  L66():
    goto L13(i23, i25);
  L68():
    l4 = ld out;
    c7 = `is.object`(l4);
    if c7 then L69() else L70(i23, r44, l4);
  L15(i33, dx1):
    st out = dx1;
    goto L9(i33);
  L69():
    dr = tryDispatchBuiltin.0("[[<-", l4, r44);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L71() else L70(i23, r44, dr);
  L70(i31, r46, l6):
    f4 = ld f;
    check L72() else D34();
  D34():
    deopt 114 [i31, r46, l6, r44, f4];
  L71():
    dx = getTryDispatchBuiltinValue(dr);
    goto L15(i23, dx);
  L72():
    f5 = force? f4;
    ____ = ldf `[[<-` in base;
    r49 = dyn ____(l6, r44, f5);
    goto L15(i31, r49);
  }
}
fun inner3708401697(e) {
  (reg e:*) -+> V { var e:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg e1:*, reg e2:V, reg is_call:cls, reg r2:V, reg c:L, reg c2:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg c5:L, reg r4:V, reg e3:*, reg e4:V, reg c6:L, reg c8:L, reg e6:V, reg dr:V, reg dc:L, reg dx:V, reg c10:L, reg dx1:V, reg __:cls, reg r5:V, reg c11:L, reg c12:L, reg c13:V, reg c15:L, reg c17:V, reg _in_:cls, reg sym2:cls, reg base2:cls, reg guard2:L, reg r6:V, reg r7:V, reg e7:*, reg e8:V, reg c18:L, reg e10:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg __1:cls, reg r8:V, reg as_character:cls, reg r9:V, reg p:p(V +), reg r11:V, reg c19:L, reg c20:V, reg c22:L, reg match_call:cls, reg ngettext:*, reg ngettext1:V, reg p1:p(V +), reg e11:*, reg e12:V, reg p2:p(V +), reg r14:V, reg e13:*, reg e14:V, reg c23:L, reg e16:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg __2:cls, reg r15:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r16:V, reg r17:V, reg domain:*, reg domain1:V, reg c24:V, reg r18:V, reg c25:L, reg c27:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r19:V, reg c30:L, reg r20:V, reg domain2:*, reg domain3:V, reg c31:L, reg r21:V, reg c32:L, reg c33:V, reg c35:L, reg c37:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r22:V, reg c40:L, reg r23:V, reg domain4:*, reg domain5:V, reg is_na:cls, reg r24:V, reg c41:L, reg c42:V, reg suppress:*, reg suppress1:V, reg r25:V, reg c44:L, reg c46:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r26:V, reg c49:L, reg r27:V, reg e17:*, reg e18:V, reg c50:L, reg c52:L, reg e20:V, reg dr6:V, reg dc3:L, reg dx6:V, reg c54:L, reg dx7:V, reg __3:cls, reg r28:V, reg c55:L, reg c56:L, reg c57:V, reg c59:L, reg c61:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r29:V, reg c64:L, reg r30:V, reg e21:*, reg e22:V, reg c65:L, reg c67:L, reg e24:V, reg dr8:V, reg dc4:L, reg dx8:V, reg c69:L, reg dx9:V, reg __4:cls, reg r31:V, reg c70:L, reg c71:L, reg c72:V, reg c74:L, reg sym8:cls, reg base8:cls, reg guard8:L, reg r32:V, reg r33:V, reg strings:*, reg strings1:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r34:V, reg r35:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r36:V, reg r37:V, reg e25:*, reg e26:V, reg c75:L, reg e28:V, reg dr10:V, reg dc5:L, reg dx10:V, reg dx11:V, reg __5:cls, reg r38:V, reg e29:*, reg e30:V, reg c76:L, reg e32:V, reg dr12:V, reg dc6:L, reg dx12:V, reg dx13:V, reg __6:cls, reg r39:V, reg c77:cls, reg r40:V, reg list:cls, reg r41:V, reg c78:cls, reg r42:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r43:V, reg r44:V, reg e33:*, reg e34:V, reg is_recursive:cls, reg r45:V, reg c79:L, reg sym12:cls, reg base12:cls, reg guard12:L, reg r46:V, reg r47:V, reg e35:*, reg e36:V, reg r48:I, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c80:L, reg x:V, reg Recall:cls, reg e37:*, reg e38:V, reg c81:L, reg e40:V, reg dr14:V, reg dc7:L, reg dx14:V, reg dx15:V, reg i5:*, reg i6:V, reg __7:cls, reg r49:V, reg p3:p(V +), reg r51:V |
    mkenv;
    st e = e;
    sym = ldf `is.call`;
    base = ldf `is.call` in base;
    guard = `==`.4(sym, base);
    if guard then L29() else L30();
  L0(r1):
    c = `as.logical`(r1);
    if c then L33() else L1(c);
  L29():
    e1 = ld e;
    check L31() else D0();
  L30():
    r = dyn base(<sym e>);
    goto L0(r);
  D0():
    deopt 2 [e1];
  L1(c2):
    c15 = `as.logical`(c2);
    if c15 then L41() else L4(c15);
  L31():
    e2 = force? e1;
    checkMissing(e2);
    is_call = ldf `is.call` in base;
    r2 = dyn is_call(e2);
    check L32() else D1();
  L33():
    sym1 = ldf `is.name`;
    base1 = ldf `is.name` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L34() else L35();
  D1():
    deopt 5 [r2];
  L2(c5, r4):
    c12 = `as.logical`(r4);
    c13 = `&&`(c5, c12);
    goto L1(c13);
  L4(c17):
    c22 = `as.logical`(c17);
    if c22 then L45() else L5();
  L32():
    goto L0(r2);
  L34():
    e3 = ld e;
    check L36() else D2();
  L35():
    r3 = dyn base1(<lang `[[`(e, 1)>);
    goto L2(c, r3);
  L41():
    _in_ = ldf `%in%`;
    check L42() else D3();
  D2():
    deopt 7 [c, e3];
  D3():
    deopt 15 [c15];
  L5():
    sym11 = ldf `is.recursive`;
    base11 = ldf `is.recursive` in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L104() else L105();
  L36():
    e4 = force? e3;
    checkMissing(e4);
    c6 = `is.object`(e4);
    if c6 then L37() else L38(c, e4);
  L42():
    p = prom<V +>{
      sym2 = ldf `as.character`;
      base2 = ldf `as.character` in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L2() else L3();
    L0(r7):
      return r7;
    L2():
      e7 = ld e;
      e8 = force? e7;
      checkMissing(e8);
      c18 = `is.object`(e8);
      if c18 then L4() else L5(e8);
    L3():
      r6 = dyn base2(<lang `[[`(e, 1)>);
      goto L0(r6);
    L1(dx3):
      as_character = ldf `as.character` in base;
      r9 = dyn as_character(dx3);
      goto L0(r9);
    L4():
      dr2 = tryDispatchBuiltin.1("[[", e8);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L6() else L5(dr2);
    L5(e10):
      __1 = ldf `[[` in base;
      r8 = dyn __1(e10, 1);
      goto L1(r8);
    L6():
      dx2 = getTryDispatchBuiltinValue(dr2);
      goto L1(dx2);
    };
    r11 = dyn _in_(p, "ngettext");
    check L43() else D4();
  L45():
    match_call = ldf `match.call`;
    check L46() else D5();
  D4():
    deopt 18 [c15, r11];
  D5():
    deopt 21 [];
  L3(c10, dx1):
    c11 = `is.symbol`(dx1);
    goto L2(c10, c11);
  L24(r44):
    c79 = `as.logical`(r44);
    if c79 then L108() else L25();
  L37():
    dr = tryDispatchBuiltin.1("[[", e4);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L39() else L38(c, dr);
  L38(c8, e6):
    __ = ldf `[[` in base;
    r5 = dyn __(e6, 1);
    goto L3(c8, r5);
  L43():
    c19 = `as.logical`(r11);
    c20 = `&&`(c15, c19);
    goto L4(c20);
  L46():
    p1 = prom<V +>{
      ngettext = ld ngettext;
      ngettext1 = force? ngettext;
      checkMissing(ngettext1);
      return ngettext1;
    };
    p2 = prom<V +>{
      e11 = ld e;
      e12 = force? e11;
      checkMissing(e12);
      return e12;
    };
    r14 = dyn match_call(p1, p2);
    check L47() else D6();
  L104():
    e33 = ld e;
    check L106() else D21();
  L105():
    r43 = dyn base11(<sym e>);
    goto L24(r43);
  D6():
    deopt 24 [r14];
  D21():
    deopt 103 [e33];
  L25():
    invisible.0();
    popenv;
    return NULL;
  L39():
    dx = getTryDispatchBuiltinValue(dr);
    goto L3(c, dx);
  L47():
    st e = r14;
    e13 = ld e;
    check L48() else D7();
  L106():
    e34 = force? e33;
    checkMissing(e34);
    is_recursive = ldf `is.recursive` in base;
    r45 = dyn is_recursive(e34);
    check L107() else D22();
  L108():
    sym12 = ldf seq_along;
    base12 = ldf seq_along in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L109() else L110();
  D7():
    deopt 26 [e13];
  D22():
    deopt 106 [r45];
  L26(r47):
    s = toForSeq(r47);
    l = length(s);
    i = 0;
    goto L27(i);
  L48():
    e14 = force? e13;
    checkMissing(e14);
    c23 = `is.object`(e14);
    if c23 then L49() else L50(e14);
  L107():
    goto L24(r45);
  L109():
    e35 = ld e;
    check L111() else D23();
  L110():
    r46 = dyn base12(<sym e>);
    goto L26(r46);
  D23():
    deopt 108 [e35];
  L6(dx5):
    st domain = dx5;
    sym3 = ldf `is.null`;
    base3 = ldf `is.null` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L52() else L53();
  L27(i1):
    i2 = `+`.1(i1, 1);
    c80 = `<`.1(l, i2);
    if c80 then L112() else L28();
  L49():
    dr4 = tryDispatchBuiltin.1("[[", e14);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L51() else L50(dr4);
  L50(e16):
    __2 = ldf `[[` in base;
    r15 = dyn __2(e16, "domain");
    goto L6(r15);
  L111():
    e36 = force? e35;
    checkMissing(e36);
    r48 = seq_along(e36);
    goto L26(r48);
  L7(r17):
    r18 = `!`(r17);
    c25 = `as.logical`(r18);
    if c25 then L55() else L8(c25);
  L28():
    x = `[[`(s, i2, NULL, TRUE);
    st i = x;
    Recall = ldf Recall;
    check L113() else D24();
  L51():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L6(dx4);
  L52():
    domain = ld domain;
    check L54() else D8();
  L53():
    r16 = dyn base3(<sym domain>);
    goto L7(r16);
  L112():
    invisible.0();
    popenv;
    return i2;
  D8():
    deopt 33 [domain];
  D24():
    deopt 112 [i2];
  L8(c27):
    c35 = `as.logical`(c27);
    if c35 then L60() else L10(c35);
  L54():
    domain1 = force? domain;
    checkMissing(domain1);
    c24 = `==`(domain1, NULL);
    goto L7(c24);
  L55():
    sym4 = ldf `is.name`;
    base4 = ldf `is.name` in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L56() else L57();
  L113():
    p3 = prom<V +>{
      e37 = ld e;
      e38 = force? e37;
      checkMissing(e38);
      c81 = `is.object`(e38);
      if c81 then L1() else L2(e38);
    L0(dx15):
      return dx15;
    L1():
      dr14 = tryDispatchBuiltin.1("[[", e38);
      dc7 = getTryDispatchBuiltinDispatched(dr14);
      if dc7 then L3() else L2(dr14);
    L2(e40):
      i5 = ld i;
      i6 = force? i5;
      __7 = ldf `[[` in base;
      r49 = dyn __7(e40, i6);
      goto L0(r49);
    L3():
      dx14 = getTryDispatchBuiltinValue(dr14);
      goto L0(dx14);
    };
    r51 = dyn Recall(p3);
    check L114() else D25();
  D25():
    deopt 114 [i2, r51];
  L9(c30, r20):
    r21 = `!`(r20);
    c32 = `as.logical`(r21);
    c33 = `&&`(c30, c32);
    goto L8(c33);
  L10(c37):
    st suppress = c37;
    suppress = ld suppress;
    check L66() else D12();
  L56():
    domain2 = ld domain;
    check L58() else D9();
  L57():
    r19 = dyn base4(<sym domain>);
    goto L9(c25, r19);
  L60():
    sym5 = ldf `is.na`;
    base5 = ldf `is.na` in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L61() else L62();
  L114():
    goto L27(i2);
  D9():
    deopt 38 [c25, domain2];
  D12():
    deopt 51 [suppress];
  L11(c40, r23):
    c41 = `as.logical`(r23);
    c42 = `&&`(c40, c41);
    goto L10(c42);
  L58():
    domain3 = force? domain2;
    checkMissing(domain3);
    c31 = `is.symbol`(domain3);
    goto L9(c25, c31);
  L61():
    domain4 = ld domain;
    check L63() else D10();
  L62():
    r22 = dyn base5(<sym domain>);
    goto L11(c35, r22);
  L66():
    suppress1 = force? suppress;
    checkMissing(suppress1);
    r25 = `!`(suppress1);
    c44 = `as.logical`(r25);
    if c44 then L67() else L12(c44);
  D10():
    deopt 45 [c35, domain4];
  L12(c46):
    c59 = `as.logical`(c46);
    if c59 then L75() else L15(c59);
  L63():
    domain5 = force? domain4;
    checkMissing(domain5);
    is_na = ldf `is.na` in base;
    r24 = dyn is_na(domain5);
    check L64() else D11();
  L67():
    sym6 = ldf `is.character`;
    base6 = ldf `is.character` in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L68() else L69();
  D11():
    deopt 48 [c35, r24];
  L13(c49, r27):
    c56 = `as.logical`(r27);
    c57 = `&&`(c49, c56);
    goto L12(c57);
  L15(c61):
    c74 = `as.logical`(c61);
    if c74 then L83() else L18();
  L64():
    goto L11(c35, r24);
  L68():
    e17 = ld e;
    check L70() else D13();
  L69():
    r26 = dyn base6(<lang `[[`(e, "msg1")>);
    goto L13(c44, r26);
  L75():
    sym7 = ldf `is.character`;
    base7 = ldf `is.character` in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L76() else L77();
  D13():
    deopt 55 [c44, e17];
  L16(c64, r30):
    c71 = `as.logical`(r30);
    c72 = `&&`(c64, c71);
    goto L15(c72);
  L18():
    invisible.0();
    popenv;
    return NULL;
  L70():
    e18 = force? e17;
    checkMissing(e18);
    c50 = `is.object`(e18);
    if c50 then L71() else L72(c44, e18);
  L76():
    e21 = ld e;
    check L78() else D14();
  L77():
    r29 = dyn base7(<lang `[[`(e, "msg2")>);
    goto L16(c59, r29);
  L83():
    sym8 = ldf c;
    base8 = ldf c in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L84() else L85();
  D14():
    deopt 63 [c59, e21];
  L14(c54, dx7):
    c55 = `is.character`(dx7);
    goto L13(c54, c55);
  L19(r33):
    sst strings = r33;
    invisible.0();
    popenv;
    return r33;
  L71():
    dr6 = tryDispatchBuiltin.1("[[", e18);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L73() else L72(c44, dr6);
  L72(c52, e20):
    __3 = ldf `[[` in base;
    r28 = dyn __3(e20, "msg1");
    goto L14(c52, r28);
  L78():
    e22 = force? e21;
    checkMissing(e22);
    c65 = `is.object`(e22);
    if c65 then L79() else L80(c59, e22);
  L84():
    strings = ld strings;
    check L86() else D15();
  L85():
    r32 = dyn base8(<sym strings>, <lang list(c(msg1=`[[`(e, "msg1"), msg2=`[[`(e, "msg2")))>);
    goto L19(r32);
  D15():
    deopt 72 [strings];
  L17(c69, dx9):
    c70 = `is.character`(dx9);
    goto L16(c69, c70);
  L73():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L14(c44, dx6);
  L79():
    dr8 = tryDispatchBuiltin.1("[[", e22);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L81() else L80(c59, dr8);
  L80(c67, e24):
    __4 = ldf `[[` in base;
    r31 = dyn __4(e24, "msg2");
    goto L17(c67, r31);
  L86():
    strings1 = force? strings;
    checkMissing(strings1);
    sym9 = ldf list;
    base9 = ldf list in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L87() else L88();
  L20(r35):
    c78 = ldf c in base;
    r42 = dyn c78(strings1, r35);
    check L101() else D20();
  L81():
    dx8 = getTryDispatchBuiltinValue(dr8);
    goto L17(c59, dx8);
  L87():
    sym10 = ldf c;
    base10 = ldf c in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L89() else L90();
  L88():
    r34 = dyn base9(<lang c(msg1=`[[`(e, "msg1"), msg2=`[[`(e, "msg2"))>);
    goto L20(r34);
  D20():
    deopt 95 [r42];
  L21(r37):
    list = ldf list in base;
    r41 = dyn list(r37);
    check L100() else D19();
  L89():
    e25 = ld e;
    check L91() else D16();
  L90():
    r36 = dyn base10[msg1, msg2](<lang `[[`(e, "msg1")>, <lang `[[`(e, "msg2")>);
    goto L21(r36);
  L101():
    goto L19(r42);
  D16():
    deopt 78 [e25];
  D19():
    deopt 93 [r41];
  L91():
    e26 = force? e25;
    checkMissing(e26);
    c75 = `is.object`(e26);
    if c75 then L92() else L93(e26);
  L100():
    goto L20(r41);
  L22(dx11):
    e29 = ld e;
    check L95() else D17();
  L92():
    dr10 = tryDispatchBuiltin.1("[[", e26);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L94() else L93(dr10);
  L93(e28):
    __5 = ldf `[[` in base;
    r38 = dyn __5(e28, "msg1");
    goto L22(r38);
  D17():
    deopt 84 [e29];
  L94():
    dx10 = getTryDispatchBuiltinValue(dr10);
    goto L22(dx10);
  L95():
    e30 = force? e29;
    checkMissing(e30);
    c76 = `is.object`(e30);
    if c76 then L96() else L97(e30);
  L23(dx13):
    c77 = ldf c in base;
    r40 = dyn c77(dx11, dx13);
    check L99() else D18();
  L96():
    dr12 = tryDispatchBuiltin.1("[[", e30);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L98() else L97(dr12);
  L97(e32):
    __6 = ldf `[[` in base;
    r39 = dyn __6(e32, "msg2");
    goto L23(r39);
  D18():
    deopt 91 [r40];
  L98():
    dx12 = getTryDispatchBuiltinValue(dr12);
    goto L23(dx12);
  L99():
    goto L21(r40);
  }
}