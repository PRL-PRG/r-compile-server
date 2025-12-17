fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2501545716;
    st `.Rd_get_Sexpr_build_time_info` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2501545716(x) {
  (reg x:*) -+> V { var x:*, reg getDynamicFlags:cls, reg x1:*, reg x2:V, reg p:p(V +), reg r1:V, reg y:*, reg y1:V, reg c:L, reg y3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r2:V, reg r3:V, reg c1:L, reg sym:cls, reg base:cls, reg guard:L, reg r4:V, reg r5:V, reg c2:cls, reg r6:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r7:V, reg r8:V, reg y4:*, reg y5:V, reg c3:L, reg y7:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r9:V, reg y10:V, reg r10:V, reg c4:cls, reg r11:V, reg __1:cls, reg r12:V, reg any:cls, reg r13:V, reg r14:V, reg c5:L, reg sym3:cls, reg base3:cls, reg guard3:L, reg r15:V, reg r16:V, reg c6:cls, reg r17:V, reg _Rd_find_nodes_with_tags:cls, reg x3:*, reg x4:V, reg p1:p(V +), reg r19:V, reg vapply:cls, reg nodes:*, reg nodes1:V, reg p2:p(V +), reg r21:cls, reg p3:p(V +), reg r23:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r24:V, reg r25:V, reg y11:*, reg y12:V, reg c7:L, reg y14:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg __2:cls, reg r26:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r27:V, reg r28:V, reg btinfo:*, reg btinfo1:V, reg r29:V, reg any1:cls, reg r30:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r31:V, reg r32:V, reg btinfo2:*, reg btinfo3:V, reg r33:V, reg any2:cls, reg r34:V, reg c8:cls, reg r35:V |
    mkenv;
    st x = x;
    getDynamicFlags = ldf getDynamicFlags;
    check L12() else D0();
  D0():
    deopt 1 [];
  L12():
    p = prom<V +>{
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      return x2;
    };
    r1 = dyn getDynamicFlags(p);
    check L13() else D1();
  D1():
    deopt 3 [r1];
  L13():
    st y = r1;
    y = ld y;
    check L14() else D2();
  D2():
    deopt 5 [y];
  L14():
    y1 = force? y;
    checkMissing(y1);
    c = `is.object`(y1);
    if c then L15() else L16(y1);
  L0(dx1):
    r3 = `!`(dx1);
    c1 = `as.logical`(r3);
    if c1 then L18() else L1();
  L15():
    dr = tryDispatchBuiltin.1("[", y1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L17() else L16(dr);
  L16(y3):
    __ = ldf `[` in base;
    r2 = dyn __(y3, "\\Sexpr");
    goto L0(r2);
  L1():
    sym1 = ldf any;
    base1 = ldf any in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L23() else L24();
  L17():
    dx = getTryDispatchBuiltinValue(dr);
    goto L0(dx);
  L18():
    sym = ldf c;
    base = ldf c in base;
    guard = `==`.4(sym, base);
    if guard then L19() else L20();
  L2(r5):
    popenv;
    return r5;
  L3(r8):
    r14 = `!`(r8);
    c5 = `as.logical`(r14);
    if c5 then L33() else L6();
  L19():
    c2 = ldf c in base;
    r6 = dyn c2(FALSE, FALSE, FALSE, FALSE);
    check L21() else D3();
  L20():
    r4 = dyn base[`\\Sexpr`, build, later, never](FALSE, FALSE, FALSE, FALSE);
    goto L2(r4);
  L23():
    y4 = ld y;
    check L25() else D4();
  L24():
    r7 = dyn base1(<lang `[`(y, c("install", "render"))>);
    goto L3(r7);
  D3():
    deopt 22 [r6];
  D4():
    deopt 25 [y4];
  L6():
    _Rd_find_nodes_with_tags = ldf `.Rd_find_nodes_with_tags`;
    check L38() else D8();
  L21():
    goto L2(r6);
  L25():
    y5 = force? y4;
    checkMissing(y5);
    c3 = `is.object`(y5);
    if c3 then L26() else L27(y5);
  L33():
    sym3 = ldf c;
    base3 = ldf c in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L34() else L35();
  D8():
    deopt 50 [];
  L4(dx3):
    any = ldf any in base;
    r13 = dyn any(dx3);
    check L32() else D6();
  L7(r16):
    popenv;
    return r16;
  L26():
    dr2 = tryDispatchBuiltin.1("[", y5);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L28() else L27(dr2);
  L27(y7):
    sym2 = ldf c;
    base2 = ldf c in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L29() else L30();
  L34():
    c6 = ldf c in base;
    r17 = dyn c6(TRUE, TRUE, FALSE, FALSE);
    check L36() else D7();
  L35():
    r15 = dyn base3[`\\Sexpr`, build, later, never](TRUE, TRUE, FALSE, FALSE);
    goto L7(r15);
  L38():
    p1 = prom<V +>{
      x3 = ld x;
      x4 = force? x3;
      checkMissing(x4);
      return x4;
    };
    r19 = dyn _Rd_find_nodes_with_tags(p1, "\\Sexpr");
    check L39() else D9();
  D6():
    deopt 35 [r13];
  D7():
    deopt 48 [r17];
  D9():
    deopt 53 [r19];
  L5(y10, r10):
    __1 = ldf `[` in base;
    r12 = dyn __1(y10, r10);
    goto L4(r12);
  L28():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L4(dx2);
  L29():
    c4 = ldf c in base;
    r11 = dyn c4("install", "render");
    check L31() else D5();
  L30():
    r9 = dyn base2("install", "render");
    goto L5(y7, r9);
  L32():
    goto L3(r13);
  L36():
    goto L7(r17);
  L39():
    st nodes = r19;
    vapply = ldf vapply;
    check L40() else D10();
  D5():
    deopt 32 [y7, r11];
  D10():
    deopt 56 [];
  L31():
    goto L5(y7, r11);
  L40():
    p2 = prom<V +>{
      nodes = ld nodes;
      nodes1 = force? nodes;
      checkMissing(nodes1);
      return nodes1;
    };
    p3 = prom<V +>{
      r21 = clos inner3708401697;
      return r21;
    };
    r23 = dyn vapply(p2, p3, "");
    check L41() else D11();
  D11():
    deopt 60 [r23];
  L41():
    st btinfo = r23;
    sym4 = ldf c;
    base4 = ldf c in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L42() else L43();
  L8(r25):
    popenv;
    return r25;
  L42():
    y11 = ld y;
    check L44() else D12();
  L43():
    r24 = dyn base4[`\\Sexpr`, , later, never](TRUE, <lang `[`(y, "build")>, <lang any(`==`(btinfo, "later"))>, <lang any(`==`(btinfo, "never"))>);
    goto L8(r24);
  D12():
    deopt 66 [y11];
  L44():
    y12 = force? y11;
    checkMissing(y12);
    c7 = `is.object`(y12);
    if c7 then L45() else L46(y12);
  L9(dx5):
    sym5 = ldf any;
    base5 = ldf any in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L48() else L49();
  L45():
    dr4 = tryDispatchBuiltin.1("[", y12);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L47() else L46(dr4);
  L46(y14):
    __2 = ldf `[` in base;
    r26 = dyn __2(y14, "build");
    goto L9(r26);
  L10(r28):
    sym6 = ldf any;
    base6 = ldf any in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L52() else L53();
  L47():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L9(dx4);
  L48():
    btinfo = ld btinfo;
    check L50() else D13();
  L49():
    r27 = dyn base5(<lang `==`(btinfo, "later")>);
    goto L10(r27);
  D13():
    deopt 73 [btinfo];
  L11(r32):
    c8 = ldf c in base;
    r35 = dyn c8(TRUE, dx5, r28, r32);
    check L56() else D17();
  L50():
    btinfo1 = force? btinfo;
    checkMissing(btinfo1);
    r29 = `==`(btinfo1, "later");
    any1 = ldf any in base;
    r30 = dyn any1(r29);
    check L51() else D14();
  L52():
    btinfo2 = ld btinfo;
    check L54() else D15();
  L53():
    r31 = dyn base6(<lang `==`(btinfo, "never")>);
    goto L11(r31);
  D14():
    deopt 78 [r30];
  D15():
    deopt 82 [btinfo2];
  D17():
    deopt 90 [r35];
  L51():
    goto L10(r30);
  L54():
    btinfo3 = force? btinfo2;
    checkMissing(btinfo3);
    r33 = `==`(btinfo3, "never");
    any2 = ldf any in base;
    r34 = dyn any2(r33);
    check L55() else D16();
  L56():
    goto L8(r35);
  D16():
    deopt 87 [r34];
  L55():
    goto L11(r34);
  }
}
fun inner3708401697(e) {
  (reg e:*) -+> V { var e:*, reg getDynamicFlags:cls, reg e1:*, reg e2:V, reg p:p(V +), reg r1:V, reg flags:*, reg flags1:V, reg c:L, reg flags3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r2:V, reg c1:L, reg flags4:*, reg flags5:V, reg c2:L, reg flags7:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg __1:cls, reg r5:V, reg c3:L, reg trimws:cls, reg paste:cls, reg sym:cls, reg base:cls, reg guard:L, reg r6:V, reg r7:V, reg e3:*, reg e4:V, reg as_character:cls, reg r8:V, reg p1:p(V +), reg r10:V, reg p2:p(V +), reg r12:V, reg startsWith:cls, reg s:*, reg s1:V, reg p3:p(V +), reg r14:V, reg c4:L, reg c5:V, reg startsWith1:cls, reg s2:*, reg s3:V, reg p4:p(V +), reg r16:V, reg c7:L, reg c8:V, reg c10:L |
    mkenv;
    st e = e;
    getDynamicFlags = ldf getDynamicFlags;
    check L8() else D0();
  D0():
    deopt 1 [];
  L8():
    p = prom<V +>{
      e1 = ld e;
      e2 = force? e1;
      checkMissing(e2);
      return e2;
    };
    r1 = dyn getDynamicFlags(p);
    check L9() else D1();
  D1():
    deopt 3 [r1];
  L9():
    st flags = r1;
    flags = ld flags;
    check L10() else D2();
  D2():
    deopt 5 [flags];
  L10():
    flags1 = force? flags;
    checkMissing(flags1);
    c = `is.object`(flags1);
    if c then L11() else L12(flags1);
  L0(dx1):
    c1 = `as.logical`(dx1);
    if c1 then L14() else L1();
  L11():
    dr = tryDispatchBuiltin.1("[", flags1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L13() else L12(dr);
  L12(flags3):
    __ = ldf `[` in base;
    r2 = dyn __(flags3, "build");
    goto L0(r2);
  L1():
    flags4 = ld flags;
    check L17() else D3();
  L13():
    dx = getTryDispatchBuiltinValue(dr);
    goto L0(dx);
  L14():
    popenv;
    return "build";
  D3():
    deopt 13 [flags4];
  L17():
    flags5 = force? flags4;
    checkMissing(flags5);
    c2 = `is.object`(flags5);
    if c2 then L18() else L19(flags5);
  L3(dx3):
    c3 = `as.logical`(dx3);
    if c3 then L21() else L4();
  L18():
    dr2 = tryDispatchBuiltin.1("[", flags5);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L20() else L19(dr2);
  L19(flags7):
    __1 = ldf `[` in base;
    r5 = dyn __1(flags7, "install");
    goto L3(r5);
  L2():
    popenv;
    return "later";
  L4():
    goto L2();
  L20():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L3(dx2);
  L21():
    trimws = ldf trimws;
    check L22() else D4();
  D4():
    deopt 19 [];
  L22():
    p2 = prom<V +>{
      paste = ldf paste;
      p1 = prom<V +>{
        sym = ldf `as.character`;
        base = ldf `as.character` in base;
        guard = `==`.4(sym, base);
        if guard then L1() else L2();
      L0(r7):
        return r7;
      L1():
        e3 = ld e;
        e4 = force? e3;
        checkMissing(e4);
        as_character = ldf `as.character` in base;
        r8 = dyn as_character(e4);
        goto L0(r8);
      L2():
        r6 = dyn base(<sym e>);
        goto L0(r6);
      };
      r10 = dyn paste[, collapse](p1, "");
      return r10;
    };
    r12 = dyn trimws(p2);
    check L23() else D5();
  D5():
    deopt 21 [r12];
  L23():
    st s = r12;
    startsWith = ldf startsWith;
    check L24() else D6();
  D6():
    deopt 24 [];
  L24():
    p3 = prom<V +>{
      s = ld s;
      s1 = force? s;
      checkMissing(s1);
      return s1;
    };
    r14 = dyn startsWith(p3, "tools:::Rd_expr_PR(");
    check L25() else D7();
  D7():
    deopt 27 [r14];
  L25():
    c4 = `as.logical`(r14);
    if c4 then L5(c4) else L26();
  L5(c5):
    c10 = `as.logical`(c5);
    if c10 then L30() else L6();
  L26():
    startsWith1 = ldf startsWith;
    check L27() else D8();
  D8():
    deopt 29 [c4];
  L6():
    goto L2();
  L27():
    p4 = prom<V +>{
      s2 = ld s;
      s3 = force? s2;
      checkMissing(s3);
      return s3;
    };
    r16 = dyn startsWith1(p4, "tools:::Rd_expr_doi(");
    check L28() else D9();
  L30():
    popenv;
    return "never";
  D9():
    deopt 32 [c4, r16];
  L28():
    c7 = `as.logical`(r16);
    c8 = `||`(c4, c7);
    goto L5(c8);
  }
}