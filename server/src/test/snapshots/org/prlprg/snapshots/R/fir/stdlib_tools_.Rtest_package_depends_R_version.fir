fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3077716681;
    st `.Rtest_package_depends_R_version` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3077716681(dir) {
  (reg dir:*) -+> V { var dir:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg missing:cls, reg r2:V, reg c:L, reg _read_description:cls, reg file_path:cls, reg dir1:*, reg dir2:V, reg p:p(V +), reg r5:V, reg p1:p(V +), reg r7:V, reg _split_description:cls, reg meta:*, reg meta1:V, reg p2:p(V +), reg r9:V, reg c1:L, reg r11:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r12:V, reg getRversion:cls, reg r13:V, reg deps:*, reg deps1:V, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c2:L, reg x:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r14:V, reg i7:I, reg r15:V, reg depends:*, reg depends1:V, reg length:cls, reg r16:V, reg r17:V, reg c3:L, reg _notin_:cls, reg depends2:*, reg depends3:V, reg c4:L, reg depends5:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r18:V, reg p3:p(V +), reg sym2:cls, reg base2:cls, reg guard2:L, reg r20:V, reg r21:V, reg c5:cls, reg r22:V, reg p4:p(V +), reg r24:V, reg c6:L, reg message:cls, reg r25:V, reg i12:I, reg sym3:cls, reg base3:cls, reg guard3:L, reg r27:V, reg i15:I, reg r28:V, reg depends6:*, reg depends7:V, reg c7:L, reg i17:I, reg depends9:V, reg dr4:V, reg dc2:L, reg dx4:V, reg i19:I, reg dx5:V, reg r29:V, reg inherits:cls, reg r30:V, reg c8:L, reg do_call:cls, reg depends10:*, reg depends11:V, reg c9:L, reg depends13:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg r31:V, reg p5:p(V +), reg sym4:cls, reg base4:cls, reg guard4:L, reg r33:V, reg r34:V, reg current:*, reg current1:V, reg depends14:*, reg depends15:V, reg c10:L, reg depends17:V, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg r35:V, reg list:cls, reg r36:V, reg p6:p(V +), reg r38:V, reg r39:V, reg i22:I, reg r40:V, reg R_version:*, reg R_version1:V, reg _in_:cls, reg ver:*, reg ver1:V, reg c11:L, reg ver3:V, reg dr10:V, reg dc5:L, reg dx10:V, reg dx11:V, reg r41:V, reg p7:p(V +), reg sym5:cls, reg base5:cls, reg guard5:L, reg r43:V, reg r44:V, reg c12:cls, reg r45:V, reg p8:p(V +), reg r47:V, reg c13:L, reg do_call1:cls, reg depends18:*, reg depends19:V, reg c14:L, reg depends21:V, reg dr12:V, reg dc6:L, reg dx12:V, reg dx13:V, reg r48:V, reg p9:p(V +), reg sym6:cls, reg base6:cls, reg guard6:L, reg r50:V, reg r51:V, reg ver4:*, reg ver5:V, reg c15:L, reg ver7:V, reg dr14:V, reg dc7:L, reg dx14:V, reg dx15:V, reg __:cls, reg r52:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r53:V, reg r54:V, reg sub:cls, reg depends22:*, reg depends23:V, reg c16:L, reg depends25:V, reg dr16:V, reg dc8:L, reg dx16:V, reg dx17:V, reg r55:V, reg p10:p(V +), reg r57:V, reg as_numeric:cls, reg r58:V, reg list1:cls, reg r59:V, reg p11:p(V +), reg r61:V, reg r62:V, reg status:*, reg status1:V, reg r63:V, reg c17:L, reg Sys_getenv:cls, reg r64:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r65:V, reg i29:I, reg r66:V, reg package:*, reg package1:V, reg nzchar:cls, reg r67:V, reg r68:V, reg c18:L, reg meta2:*, reg meta3:V, reg c19:L, reg i33:I, reg meta5:V, reg dr18:V, reg dc9:L, reg dx18:V, reg i35:I, reg dx19:V, reg __1:cls, reg r69:V, reg i36:I, reg sym9:cls, reg base9:cls, reg guard9:L, reg r70:V, reg i39:I, reg r71:V, reg package2:*, reg package3:V, reg nzchar1:cls, reg r72:V, reg c20:L, reg gettextf:cls, reg current2:*, reg current3:V, reg p12:p(V +), reg package4:*, reg package5:V, reg p13:p(V +), reg depends26:*, reg depends27:V, reg c21:L, reg depends29:V, reg dr20:V, reg dc10:L, reg dx21:V, reg dx22:V, reg r75:V, reg p14:p(V +), reg depends30:*, reg depends31:V, reg c22:L, reg depends33:V, reg dr22:V, reg dc11:L, reg dx23:V, reg dx24:V, reg r77:V, reg p15:p(V +), reg r79:V, reg i42:I, reg r80:V, reg gettextf1:cls, reg current4:*, reg current5:V, reg p16:p(V +), reg depends34:*, reg depends35:V, reg c23:L, reg depends37:V, reg dr24:V, reg dc12:L, reg dx25:V, reg dx26:V, reg r82:V, reg p17:p(V +), reg depends38:*, reg depends39:V, reg c24:L, reg depends41:V, reg dr26:V, reg dc13:L, reg dx27:V, reg dx28:V, reg r84:V, reg p18:p(V +), reg r86:V, reg message1:cls, reg strwrap:cls, reg msg:*, reg msg1:V, reg p19:p(V +), reg r88:V, reg p20:p(V +), reg r90:V, reg i46:I, reg status2:*, reg status3:V |
    mkenv;
    st dir = dir;
    sym = ldf missing;
    base = ldf missing in base;
    guard = `==`.4(sym, base);
    if guard then L24() else L25();
  L0(r1):
    c = `as.logical`(r1);
    if c then L26() else L1();
  L24():
    missing = ldf missing in base;
    r2 = dyn missing(<sym dir>);
    goto L0(r2);
  L25():
    r = dyn base(<sym dir>);
    goto L0(r);
  L1():
    goto L2();
  L2():
    _read_description = ldf `.read_description`;
    check L28() else D0();
  L26():
    st dir = ".";
    goto L2();
  D0():
    deopt 9 [];
  L28():
    p1 = prom<V +>{
      file_path = ldf `file.path`;
      p = prom<V +>{
        dir1 = ld dir;
        dir2 = force? dir1;
        checkMissing(dir2);
        return dir2;
      };
      r5 = dyn file_path(p, "DESCRIPTION");
      return r5;
    };
    r7 = dyn _read_description(p1);
    check L29() else D1();
  D1():
    deopt 11 [r7];
  L29():
    st meta = r7;
    _split_description = ldf `.split_description`;
    check L30() else D2();
  D2():
    deopt 14 [];
  L30():
    p2 = prom<V +>{
      meta = ld meta;
      meta1 = force? meta;
      checkMissing(meta1);
      return meta1;
    };
    r9 = dyn _split_description[, verbose](p2, TRUE);
    check L31() else D3();
  D3():
    deopt 18 [r9];
  L31():
    c1 = `is.object`(r9);
    if c1 then L33() else L34(r9);
  L32(dx1):
    st deps = dx1;
    st status = 0.0;
    getRversion = ldf getRversion;
    check L36() else D4();
  L33():
    dr = tryDispatchBuiltin.1("$", r9);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L35() else L34(dr);
  L34(r11):
    r12 = `$`(r11, <sym Rdepends2>);
    goto L32(r12);
  D4():
    deopt 25 [];
  L35():
    dx = getTryDispatchBuiltinValue(dr);
    goto L32(dx);
  L36():
    r13 = dyn getRversion();
    check L37() else D5();
  D5():
    deopt 26 [r13];
  L37():
    st current = r13;
    deps = ld deps;
    check L38() else D6();
  D6():
    deopt 28 [deps];
  L38():
    deps1 = force? deps;
    checkMissing(deps1);
    s = toForSeq(deps1);
    l = length(s);
    i = 0;
    goto L3(i);
  L3(i1):
    i2 = `+`.1(i1, 1);
    c2 = `<`.1(l, i2);
    if c2 then L39() else L23();
  L20():
    status2 = ld status;
    check L99() else D36();
  L23():
    x = `[[`(s, i2, NULL, TRUE);
    st depends = x;
    sym1 = ldf length;
    base1 = ldf length in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L40() else L41();
  L39():
    goto L20();
  D36():
    deopt 138 [status2];
  L4(i7, r15):
    r17 = `>`(r15, 1);
    c3 = `as.logical`(r17);
    if c3 then L44() else L5();
  L40():
    depends = ld depends;
    check L42() else D7();
  L41():
    r14 = dyn base1(<sym depends>);
    goto L4(i2, r14);
  L99():
    status3 = force? status2;
    checkMissing(status3);
    popenv;
    return status3;
  D7():
    deopt 32 [i2, depends];
  L5():
    goto L22(i7);
  L22(i46):
    goto L3(i46);
  L42():
    depends1 = force? depends;
    checkMissing(depends1);
    length = ldf length in base;
    r16 = dyn length(depends1);
    check L43() else D8();
  L44():
    _notin_ = ldf `%notin%`;
    check L45() else D9();
  D8():
    deopt 35 [i2, r16];
  D9():
    deopt 39 [i7];
  L43():
    goto L4(i2, r16);
  L45():
    p3 = prom<V +>{
      depends2 = ld depends;
      depends3 = force? depends2;
      checkMissing(depends3);
      c4 = `is.object`(depends3);
      if c4 then L1() else L2(depends3);
    L0(dx3):
      return dx3;
    L1():
      dr2 = tryDispatchBuiltin.1("$", depends3);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L3() else L2(dr2);
    L2(depends5):
      r18 = `$`(depends5, <sym op>);
      goto L0(r18);
    L3():
      dx2 = getTryDispatchBuiltinValue(dr2);
      goto L0(dx2);
    };
    p4 = prom<V +>{
      sym2 = ldf c;
      base2 = ldf c in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L1() else L2();
    L0(r21):
      return r21;
    L1():
      c5 = ldf c in base;
      r22 = dyn c5("<=", ">=", "<", ">", "==", "!=");
      goto L0(r22);
    L2():
      r20 = dyn base2("<=", ">=", "<", ">", "==", "!=");
      goto L0(r20);
    };
    r24 = dyn _notin_(p3, p4);
    check L46() else D10();
  D10():
    deopt 42 [i7, r24];
  L46():
    c6 = `as.logical`(r24);
    if c6 then L47() else L6();
  L6():
    sym3 = ldf inherits;
    base3 = ldf inherits in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L51() else L52();
  L7(i12):
    status = ld status;
    check L70() else D22();
  L47():
    message = ldf message;
    check L48() else D11();
  D11():
    deopt 44 [i7];
  D22():
    deopt 79 [i12, status];
  L8(i15, r28):
    c8 = `as.logical`(r28);
    if c8 then L59() else L9();
  L48():
    r25 = dyn message("WARNING: malformed 'Depends' field in 'DESCRIPTION'");
    check L49() else D12();
  L51():
    depends6 = ld depends;
    check L53() else D13();
  L52():
    r27 = dyn base3(<lang `$`(depends, version)>, "numeric_version");
    goto L8(i7, r27);
  L70():
    status1 = force? status;
    checkMissing(status1);
    r63 = `!=`(status1, 0.0);
    c17 = `as.logical`(r63);
    if c17 then L71() else L12();
  D12():
    deopt 46 [i7, r25];
  D13():
    deopt 49 [i7, depends6];
  L9():
    R_version = ld `R.version`;
    check L63() else D17();
  L10(i22, r40):
    st status = r40;
    goto L7(i22);
  L12():
    goto L22(i12);
  L49():
    goto L7(i7);
  L53():
    depends7 = force? depends6;
    checkMissing(depends7);
    c7 = `is.object`(depends7);
    if c7 then L55() else L56(i7, depends7);
  L59():
    do_call = ldf `do.call`;
    check L60() else D15();
  L71():
    Sys_getenv = ldf `Sys.getenv`;
    check L72() else D23();
  D15():
    deopt 57 [i15];
  D17():
    deopt 62 [i15, R_version];
  D23():
    deopt 84 [i12];
  L54(i19, dx5):
    inherits = ldf inherits in base;
    r30 = dyn inherits(dx5, "numeric_version", FALSE);
    check L58() else D14();
  L55():
    dr4 = tryDispatchBuiltin.1("$", depends7);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L57() else L56(i7, dr4);
  L56(i17, depends9):
    r29 = `$`(depends9, <sym version>);
    goto L54(i17, r29);
  L60():
    p5 = prom<V +>{
      depends10 = ld depends;
      depends11 = force? depends10;
      checkMissing(depends11);
      c9 = `is.object`(depends11);
      if c9 then L1() else L2(depends11);
    L0(dx7):
      return dx7;
    L1():
      dr6 = tryDispatchBuiltin.1("$", depends11);
      dc3 = getTryDispatchBuiltinDispatched(dr6);
      if dc3 then L3() else L2(dr6);
    L2(depends13):
      r31 = `$`(depends13, <sym op>);
      goto L0(r31);
    L3():
      dx6 = getTryDispatchBuiltinValue(dr6);
      goto L0(dx6);
    };
    p6 = prom<V +>{
      sym4 = ldf list;
      base4 = ldf list in base;
      guard4 = `==`.4(sym4, base4);
      if guard4 then L1() else L2();
    L0(r34):
      return r34;
    L1():
      current = ld current;
      current1 = force? current;
      checkMissing(current1);
      depends14 = ld depends;
      depends15 = force? depends14;
      checkMissing(depends15);
      c10 = `is.object`(depends15);
      if c10 then L4() else L5(depends15);
    L2():
      r33 = dyn base4(<sym current>, <lang `$`(depends, version)>);
      goto L0(r33);
    L3(dx9):
      list = ldf list in base;
      r36 = dyn list(current1, dx9);
      goto L0(r36);
    L4():
      dr8 = tryDispatchBuiltin.1("$", depends15);
      dc4 = getTryDispatchBuiltinDispatched(dr8);
      if dc4 then L6() else L5(dr8);
    L5(depends17):
      r35 = `$`(depends17, <sym version>);
      goto L3(r35);
    L6():
      dx8 = getTryDispatchBuiltinValue(dr8);
      goto L3(dx8);
    };
    r38 = dyn do_call(p5, p6);
    check L61() else D16();
  L63():
    R_version1 = force? R_version;
    checkMissing(R_version1);
    st ver = R_version1;
    _in_ = ldf `%in%`;
    check L64() else D18();
  L72():
    r64 = dyn Sys_getenv("R_PACKAGE_NAME");
    check L73() else D24();
  D14():
    deopt 55 [i19, r30];
  D16():
    deopt 60 [i15, r38];
  D18():
    deopt 66 [i15];
  D24():
    deopt 86 [i12, r64];
  L57():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L54(i7, dx4);
  L58():
    goto L8(i19, r30);
  L61():
    r39 = `!`(r38);
    goto L10(i15, r39);
  L64():
    p7 = prom<V +>{
      ver = ld ver;
      ver1 = force? ver;
      checkMissing(ver1);
      c11 = `is.object`(ver1);
      if c11 then L1() else L2(ver1);
    L0(dx11):
      return dx11;
    L1():
      dr10 = tryDispatchBuiltin.1("$", ver1);
      dc5 = getTryDispatchBuiltinDispatched(dr10);
      if dc5 then L3() else L2(dr10);
    L2(ver3):
      r41 = `$`(ver3, <sym status>);
      goto L0(r41);
    L3():
      dx10 = getTryDispatchBuiltinValue(dr10);
      goto L0(dx10);
    };
    p8 = prom<V +>{
      sym5 = ldf c;
      base5 = ldf c in base;
      guard5 = `==`.4(sym5, base5);
      if guard5 then L1() else L2();
    L0(r44):
      return r44;
    L1():
      c12 = ldf c in base;
      r45 = dyn c12("", "Patched");
      goto L0(r45);
    L2():
      r43 = dyn base5("", "Patched");
      goto L0(r43);
    };
    r47 = dyn _in_(p7, p8);
    check L65() else D19();
  L73():
    st package = r64;
    sym8 = ldf nzchar;
    base8 = ldf nzchar in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L74() else L75();
  D19():
    deopt 69 [i15, r47];
  L13(i29, r66):
    r68 = `!`(r66);
    c18 = `as.logical`(r68);
    if c18 then L78() else L14();
  L65():
    c13 = `as.logical`(r47);
    if c13 then L66() else L11();
  L74():
    package = ld package;
    check L76() else D25();
  L75():
    r65 = dyn base8(<sym package>);
    goto L13(i12, r65);
  D25():
    deopt 90 [i12, package];
  L11():
    do_call1 = ldf `do.call`;
    check L68() else D20();
  L14():
    goto L16(i29);
  L16(i36):
    sym9 = ldf nzchar;
    base9 = ldf nzchar in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L84() else L85();
  L66():
    goto L10(i15, FALSE);
  L76():
    package1 = force? package;
    checkMissing(package1);
    nzchar = ldf nzchar in base;
    r67 = dyn nzchar(package1);
    check L77() else D26();
  L78():
    meta2 = ld meta;
    check L79() else D27();
  D20():
    deopt 73 [i15];
  D26():
    deopt 93 [i12, r67];
  D27():
    deopt 95 [i29, meta2];
  L17(i39, r71):
    c20 = `as.logical`(r71);
    if c20 then L88() else L18();
  L68():
    p9 = prom<V +>{
      depends18 = ld depends;
      depends19 = force? depends18;
      checkMissing(depends19);
      c14 = `is.object`(depends19);
      if c14 then L1() else L2(depends19);
    L0(dx13):
      return dx13;
    L1():
      dr12 = tryDispatchBuiltin.1("$", depends19);
      dc6 = getTryDispatchBuiltinDispatched(dr12);
      if dc6 then L3() else L2(dr12);
    L2(depends21):
      r48 = `$`(depends21, <sym op>);
      goto L0(r48);
    L3():
      dx12 = getTryDispatchBuiltinValue(dr12);
      goto L0(dx12);
    };
    p11 = prom<V +>{
      sym6 = ldf list;
      base6 = ldf list in base;
      guard6 = `==`.4(sym6, base6);
      if guard6 then L3() else L4();
    L0(r51):
      return r51;
    L3():
      ver4 = ld ver;
      ver5 = force? ver4;
      checkMissing(ver5);
      c15 = `is.object`(ver5);
      if c15 then L5() else L6(ver5);
    L4():
      r50 = dyn base6(<lang `[[`(ver, "svn rev")>, <lang as.numeric(sub("^r", "", `$`(depends, version)))>);
      goto L0(r50);
    L1(dx15):
      sym7 = ldf `as.numeric`;
      base7 = ldf `as.numeric` in base;
      guard7 = `==`.4(sym7, base7);
      if guard7 then L8() else L9();
    L5():
      dr14 = tryDispatchBuiltin.1("[[", ver5);
      dc7 = getTryDispatchBuiltinDispatched(dr14);
      if dc7 then L7() else L6(dr14);
    L6(ver7):
      __ = ldf `[[` in base;
      r52 = dyn __(ver7, "svn rev");
      goto L1(r52);
    L2(r54):
      list1 = ldf list in base;
      r59 = dyn list1(dx15, r54);
      goto L0(r59);
    L7():
      dx14 = getTryDispatchBuiltinValue(dr14);
      goto L1(dx14);
    L8():
      sub = ldf sub;
      p10 = prom<V +>{
        depends22 = ld depends;
        depends23 = force? depends22;
        checkMissing(depends23);
        c16 = `is.object`(depends23);
        if c16 then L1() else L2(depends23);
      L0(dx17):
        return dx17;
      L1():
        dr16 = tryDispatchBuiltin.1("$", depends23);
        dc8 = getTryDispatchBuiltinDispatched(dr16);
        if dc8 then L3() else L2(dr16);
      L2(depends25):
        r55 = `$`(depends25, <sym version>);
        goto L0(r55);
      L3():
        dx16 = getTryDispatchBuiltinValue(dr16);
        goto L0(dx16);
      };
      r57 = dyn sub("^r", "", p10);
      as_numeric = ldf `as.numeric` in base;
      r58 = dyn as_numeric(r57);
      goto L2(r58);
    L9():
      r53 = dyn base7(<lang sub("^r", "", `$`(depends, version))>);
      goto L2(r53);
    };
    r61 = dyn do_call1(p9, p11);
    check L69() else D21();
  L77():
    goto L13(i12, r67);
  L79():
    meta3 = force? meta2;
    checkMissing(meta3);
    c19 = `is.object`(meta3);
    if c19 then L80() else L81(i29, meta3);
  L84():
    package2 = ld package;
    check L86() else D28();
  L85():
    r70 = dyn base9(<sym package>);
    goto L17(i36, r70);
  D21():
    deopt 76 [i15, r61];
  D28():
    deopt 105 [i36, package2];
  L15(i35, dx19):
    st package = dx19;
    goto L16(i35);
  L18():
    gettextf1 = ldf gettextf;
    check L92() else D32();
  L19(i42, r80):
    st msg = r80;
    message1 = ldf message;
    check L94() else D34();
  L69():
    r62 = `!`(r61);
    goto L10(i15, r62);
  L80():
    dr18 = tryDispatchBuiltin.1("[", meta3);
    dc9 = getTryDispatchBuiltinDispatched(dr18);
    if dc9 then L82() else L81(i29, dr18);
  L81(i33, meta5):
    __1 = ldf `[` in base;
    r69 = dyn __1(meta5, "Package");
    goto L15(i33, r69);
  L86():
    package3 = force? package2;
    checkMissing(package3);
    nzchar1 = ldf nzchar in base;
    r72 = dyn nzchar1(package3);
    check L87() else D29();
  L88():
    gettextf = ldf gettextf;
    check L89() else D30();
  D29():
    deopt 108 [i36, r72];
  D30():
    deopt 110 [i39];
  D32():
    deopt 118 [i39];
  D34():
    deopt 126 [i42];
  L82():
    dx18 = getTryDispatchBuiltinValue(dr18);
    goto L15(i29, dx18);
  L87():
    goto L17(i36, r72);
  L89():
    p12 = prom<V +>{
      current2 = ld current;
      current3 = force? current2;
      checkMissing(current3);
      return current3;
    };
    p13 = prom<V +>{
      package4 = ld package;
      package5 = force? package4;
      checkMissing(package5);
      return package5;
    };
    p14 = prom<V +>{
      depends26 = ld depends;
      depends27 = force? depends26;
      checkMissing(depends27);
      c21 = `is.object`(depends27);
      if c21 then L1() else L2(depends27);
    L0(dx22):
      return dx22;
    L1():
      dr20 = tryDispatchBuiltin.1("$", depends27);
      dc10 = getTryDispatchBuiltinDispatched(dr20);
      if dc10 then L3() else L2(dr20);
    L2(depends29):
      r75 = `$`(depends29, <sym op>);
      goto L0(r75);
    L3():
      dx21 = getTryDispatchBuiltinValue(dr20);
      goto L0(dx21);
    };
    p15 = prom<V +>{
      depends30 = ld depends;
      depends31 = force? depends30;
      checkMissing(depends31);
      c22 = `is.object`(depends31);
      if c22 then L1() else L2(depends31);
    L0(dx24):
      return dx24;
    L1():
      dr22 = tryDispatchBuiltin.1("$", depends31);
      dc11 = getTryDispatchBuiltinDispatched(dr22);
      if dc11 then L3() else L2(dr22);
    L2(depends33):
      r77 = `$`(depends33, <sym version>);
      goto L0(r77);
    L3():
      dx23 = getTryDispatchBuiltinValue(dr22);
      goto L0(dx23);
    };
    r79 = dyn gettextf("ERROR: this R is version %s, package '%s' requires R %s %s", p12, p13, p14, p15);
    check L90() else D31();
  L92():
    p16 = prom<V +>{
      current4 = ld current;
      current5 = force? current4;
      checkMissing(current5);
      return current5;
    };
    p17 = prom<V +>{
      depends34 = ld depends;
      depends35 = force? depends34;
      checkMissing(depends35);
      c23 = `is.object`(depends35);
      if c23 then L1() else L2(depends35);
    L0(dx26):
      return dx26;
    L1():
      dr24 = tryDispatchBuiltin.1("$", depends35);
      dc12 = getTryDispatchBuiltinDispatched(dr24);
      if dc12 then L3() else L2(dr24);
    L2(depends37):
      r82 = `$`(depends37, <sym op>);
      goto L0(r82);
    L3():
      dx25 = getTryDispatchBuiltinValue(dr24);
      goto L0(dx25);
    };
    p18 = prom<V +>{
      depends38 = ld depends;
      depends39 = force? depends38;
      checkMissing(depends39);
      c24 = `is.object`(depends39);
      if c24 then L1() else L2(depends39);
    L0(dx28):
      return dx28;
    L1():
      dr26 = tryDispatchBuiltin.1("$", depends39);
      dc13 = getTryDispatchBuiltinDispatched(dr26);
      if dc13 then L3() else L2(dr26);
    L2(depends41):
      r84 = `$`(depends41, <sym version>);
      goto L0(r84);
    L3():
      dx27 = getTryDispatchBuiltinValue(dr26);
      goto L0(dx27);
    };
    r86 = dyn gettextf1("ERROR: this R is version %s, required is R %s %s", p16, p17, p18);
    check L93() else D33();
  L94():
    p20 = prom<V +>{
      strwrap = ldf strwrap;
      p19 = prom<V +>{
        msg = ld msg;
        msg1 = force? msg;
        checkMissing(msg1);
        return msg1;
      };
      r88 = dyn strwrap[, exdent](p19, 2);
      return r88;
    };
    r90 = dyn message1(p20);
    check L95() else D35();
  D31():
    deopt 116 [i39, r79];
  D33():
    deopt 123 [i39, r86];
  D35():
    deopt 128 [i42, r90];
  L90():
    goto L19(i39, r79);
  L93():
    goto L19(i39, r86);
  L95():
    goto L20();
  }
}