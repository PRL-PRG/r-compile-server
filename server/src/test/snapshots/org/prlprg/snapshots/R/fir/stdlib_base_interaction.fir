fun main() {
  () -+> V { reg r:cls, reg gl:cls, reg r1:V, reg gl1:cls, reg sym:cls, reg base:cls, reg guard:L, reg r2:V, reg r3:V, reg c:cls, reg r4:V, reg p:p(V +), reg r6:V, reg gl2:cls, reg sym1:cls, reg base1:cls, reg guard1:L, reg r7:V, reg r8:V, reg c1:cls, reg r9:V, reg p1:p(V +), reg r11:V, reg interaction:cls, reg a:*, reg a1:V, reg p2:p(V +), reg b:*, reg b1:V, reg p3:p(V +), reg r14:V, reg interaction1:cls, reg a2:*, reg a3:V, reg p4:p(V +), reg b2:*, reg b3:V, reg p5:p(V +), reg s:*, reg s1:V, reg p6:p(V +), reg r18:V, reg stopifnot:cls, reg sym2:cls, reg base2:cls, reg guard2:L, reg r19:V, reg r20:V, reg a4:*, reg a5:V, reg s2:*, reg s3:V, reg r21:V, reg interaction2:cls, reg a6:*, reg a7:V, reg p7:p(V +), reg s4:*, reg s5:V, reg p8:p(V +), reg r24:V, reg identical:cls, reg r25:V, reg p9:p(V +), reg sym3:cls, reg base3:cls, reg guard3:L, reg r27:V, reg r28:V, reg a8:*, reg a9:V, reg s6:*, reg s7:V, reg r29:V, reg b4:*, reg b5:V, reg r30:V, reg interaction3:cls, reg a10:*, reg a11:V, reg p10:p(V +), reg s8:*, reg s9:V, reg p11:p(V +), reg b6:*, reg b7:V, reg p12:p(V +), reg r34:V, reg identical1:cls, reg r35:V, reg p13:p(V +), reg r37:V |
    mkenv;
    r = clos `inner-1762415902`;
    st interaction = r;
    gl = ldf gl;
    check L0() else D0();
  D0():
    deopt 4 [];
  L0():
    r1 = dyn gl(2.0, 4.0, 8.0);
    check L1() else D1();
  D1():
    deopt 8 [r1];
  L1():
    st a = r1;
    gl1 = ldf gl;
    check L2() else D2();
  D2():
    deopt 11 [];
  L2():
    p = prom<V +>{
      sym = ldf c;
      base = ldf c in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r3):
      return r3;
    L1():
      c = ldf c in base;
      r4 = dyn c("ctrl", "treat");
      goto L0(r4);
    L2():
      r2 = dyn base("ctrl", "treat");
      goto L0(r2);
    };
    r6 = dyn gl1[, , , labels](2.0, 2.0, 8.0, p);
    check L3() else D3();
  D3():
    deopt 17 [r6];
  L3():
    st b = r6;
    gl2 = ldf gl;
    check L4() else D4();
  D4():
    deopt 20 [];
  L4():
    p1 = prom<V +>{
      sym1 = ldf c;
      base1 = ldf c in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r8):
      return r8;
    L1():
      c1 = ldf c in base;
      r9 = dyn c1("M", "F");
      goto L0(r9);
    L2():
      r7 = dyn base1("M", "F");
      goto L0(r7);
    };
    r11 = dyn gl2[, , , labels](2.0, 1.0, 8.0, p1);
    check L5() else D5();
  D5():
    deopt 26 [r11];
  L5():
    st s = r11;
    interaction = ldf interaction;
    check L6() else D6();
  D6():
    deopt 29 [];
  L6():
    p2 = prom<V +>{
      a = ld a;
      a1 = force? a;
      checkMissing(a1);
      return a1;
    };
    p3 = prom<V +>{
      b = ld b;
      b1 = force? b;
      checkMissing(b1);
      return b1;
    };
    r14 = dyn interaction(p2, p3);
    check L7() else D7();
  D7():
    deopt 32 [r14];
  L7():
    interaction1 = ldf interaction;
    check L8() else D8();
  D8():
    deopt 34 [];
  L8():
    p4 = prom<V +>{
      a2 = ld a;
      a3 = force? a2;
      checkMissing(a3);
      return a3;
    };
    p5 = prom<V +>{
      b2 = ld b;
      b3 = force? b2;
      checkMissing(b3);
      return b3;
    };
    p6 = prom<V +>{
      s = ld s;
      s1 = force? s;
      checkMissing(s1);
      return s1;
    };
    r18 = dyn interaction1[, , , sep](p4, p5, p6, ":");
    check L9() else D9();
  D9():
    deopt 40 [r18];
  L9():
    stopifnot = ldf stopifnot;
    check L10() else D10();
  D10():
    deopt 42 [];
  L10():
    p9 = prom<V +>{
      sym2 = ldf identical;
      base2 = ldf identical in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L1() else L2();
    L0(r20):
      return r20;
    L1():
      a4 = ld a;
      a5 = force? a4;
      checkMissing(a5);
      s2 = ld s;
      s3 = force? s2;
      checkMissing(s3);
      r21 = `:`(a5, s3);
      interaction2 = ldf interaction;
      p7 = prom<V +>{
        a6 = ld a;
        a7 = force? a6;
        checkMissing(a7);
        return a7;
      };
      p8 = prom<V +>{
        s4 = ld s;
        s5 = force? s4;
        checkMissing(s5);
        return s5;
      };
      r24 = dyn interaction2[, , sep, `lex.order`](p7, p8, ":", TRUE);
      identical = ldf identical in base;
      r25 = dyn identical(r21, r24, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
      goto L0(r25);
    L2():
      r19 = dyn base2(<lang `:`(a, s)>, <lang interaction(a, s, sep=":", lex.order=TRUE)>);
      goto L0(r19);
    };
    p13 = prom<V +>{
      sym3 = ldf identical;
      base3 = ldf identical in base;
      guard3 = `==`.4(sym3, base3);
      if guard3 then L1() else L2();
    L0(r28):
      return r28;
    L1():
      a8 = ld a;
      a9 = force? a8;
      checkMissing(a9);
      s6 = ld s;
      s7 = force? s6;
      checkMissing(s7);
      r29 = `:`(a9, s7);
      b4 = ld b;
      b5 = force? b4;
      checkMissing(b5);
      r30 = `:`(r29, b5);
      interaction3 = ldf interaction;
      p10 = prom<V +>{
        a10 = ld a;
        a11 = force? a10;
        checkMissing(a11);
        return a11;
      };
      p11 = prom<V +>{
        s8 = ld s;
        s9 = force? s8;
        checkMissing(s9);
        return s9;
      };
      p12 = prom<V +>{
        b6 = ld b;
        b7 = force? b6;
        checkMissing(b7);
        return b7;
      };
      r34 = dyn interaction3[, , , sep, `lex.order`](p10, p11, p12, ":", TRUE);
      identical1 = ldf identical in base;
      r35 = dyn identical1(r30, r34, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
      goto L0(r35);
    L2():
      r27 = dyn base3(<lang `:`(`:`(a, s), b)>, <lang interaction(a, s, b, sep=":", lex.order=TRUE)>);
      goto L0(r27);
    };
    r37 = dyn stopifnot(p9, p13);
    check L11() else D11();
  D11():
    deopt 45 [r37];
  L11():
    popenv;
    return r37;
  }
}
fun `inner-1762415902`(`...`, drop, sep, `lex.order`) {
  (reg ddd:dots, reg drop:*, reg sep:*, reg lex_order:*) -+> V { var `...`:dots?, var drop:*, reg drop_isMissing:L, reg drop_orDefault:*, var sep:*, reg sep_isMissing:L, reg sep_orDefault:*, var `lex.order`:*, reg lex_order_isMissing:L, reg lex_order_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg list:cls, reg ddd1:dots?, reg r2:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg r4:V, reg args:*, reg args1:V, reg length:cls, reg r5:V, reg narg:*, reg narg1:V, reg r6:V, reg c:L, reg stop:cls, reg r7:V, reg narg2:*, reg narg3:V, reg r9:V, reg c1:L, reg c3:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r10:V, reg c6:L, reg r11:V, reg args2:*, reg args3:V, reg c7:L, reg c9:L, reg args5:V, reg dr:V, reg dc:L, reg dx:V, reg c11:L, reg dx1:V, reg __:cls, reg r12:V, reg is_list:cls, reg r13:V, reg c12:L, reg c13:V, reg c15:L, reg args6:*, reg args7:V, reg c16:L, reg args9:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg __1:cls, reg r14:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r15:V, reg r16:V, reg args10:*, reg args11:V, reg length1:cls, reg r17:V, reg narg4:*, reg narg5:V, reg r19:V, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c17:L, reg x:V, reg as_factor:cls, reg args12:*, reg args13:V, reg c18:L, reg args15:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg i5:*, reg i6:V, reg __2:cls, reg r20:V, reg p:p(V +), reg r22:V, reg c19:L, reg i8:I, reg r24:V, reg dr6:V, reg dc3:L, reg dx6:V, reg i10:I, reg dx7:V, reg drop1:*, reg drop2:V, reg __3:cls, reg r25:V, reg levels:cls, reg f:*, reg f1:V, reg p1:p(V +), reg r27:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r28:V, reg i13:I, reg r29:V, reg f2:*, reg f3:V, reg as_integer:cls, reg r30:V, reg r31:V, reg i14:*, reg i15:V, reg narg6:*, reg narg7:V, reg r32:V, reg c20:L, reg if1:*, reg if2:V, reg l1:*, reg l2:V, reg i18:I, reg lex_order1:*, reg lex_order2:V, reg c21:L, reg sym5:cls, reg base5:cls, reg guard5:L, reg r33:V, reg i23:I, reg r34:V, reg lvs:*, reg lvs1:V, reg length2:cls, reg r35:V, reg ans:*, reg ans1:V, reg ll:*, reg ll1:V, reg if3:*, reg if4:V, reg r36:V, reg r37:V, reg paste:cls, reg sym6:cls, reg base6:cls, reg guard6:L, reg r38:V, reg r39:V, reg rep:cls, reg r40:V, reg p2:p(V +), reg sym7:cls, reg base7:cls, reg guard7:L, reg r42:V, reg r43:V, reg rep1:cls, reg r44:V, reg p3:p(V +), reg sep1:*, reg sep2:V, reg p4:p(V +), reg r47:V, reg i24:I, reg ans2:*, reg ans3:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r49:V, reg i27:I, reg ans6:V, reg r50:V, reg l4:*, reg l5:V, reg length3:cls, reg r51:V, reg r52:V, reg if5:*, reg if6:V, reg r53:V, reg paste1:cls, reg sym9:cls, reg base9:cls, reg guard9:L, reg r54:V, reg r55:V, reg rep2:cls, reg r56:V, reg p5:p(V +), reg sym10:cls, reg base10:cls, reg guard10:L, reg r58:V, reg r59:V, reg rep3:cls, reg r60:V, reg p6:p(V +), reg sep3:*, reg sep4:V, reg p7:p(V +), reg r63:V, reg anyDuplicated:cls, reg lvs2:*, reg lvs3:V, reg p8:p(V +), reg r65:V, reg c22:L, reg unique:cls, reg lvs4:*, reg lvs5:V, reg p9:p(V +), reg r67:V, reg i30:I, reg anyDuplicated1:cls, reg sym11:cls, reg base11:cls, reg guard11:L, reg r68:V, reg r69:V, reg lvs6:*, reg lvs7:V, reg ulvs:*, reg ulvs1:V, reg match:cls, reg r70:V, reg p10:p(V +), reg r72:V, reg c23:L, reg lvs8:*, reg lvs9:V, reg c24:L, reg i34:I, reg lvs11:V, reg dr8:V, reg dc4:L, reg dx8:V, reg i36:I, reg dx9:V, reg i37:*, reg i38:V, reg r73:V, reg __4:cls, reg r74:V, reg sym12:cls, reg base12:cls, reg guard12:L, reg r75:V, reg i41:I, reg r76:V, reg flv:*, reg flv1:V, reg c25:L, reg i43:I, reg flv3:V, reg dr10:V, reg dc5:L, reg dx10:V, reg i45:I, reg dx11:V, reg i46:*, reg i47:V, reg __5:cls, reg r77:V, reg flv4:*, reg flv5:V, reg c26:L, reg i49:I, reg flv7:V, reg dr12:V, reg dc6:L, reg dx12:V, reg i51:I, reg dx13:V, reg i52:*, reg i53:V, reg r78:V, reg r79:V, reg __6:cls, reg r80:V, reg match1:cls, reg r81:V, reg r82:V, reg l6:*, reg c27:L, reg i55:I, reg r84:V, reg l8:*, reg dr14:V, reg dc7:L, reg dx14:V, reg i57:I, reg dx15:V, reg ans7:*, reg ans8:V, reg r87:V, reg i58:*, reg i59:V, reg r88:V, reg ___:cls, reg r89:V, reg ans9:*, reg ans10:V, reg c28:L, reg i61:I, reg ans12:V, reg dr16:V, reg dc8:L, reg dx16:V, reg i63:I, reg dx17:V, reg ans13:*, reg ans14:V, reg r90:V, reg i64:*, reg i65:V, reg r91:V, reg __7:cls, reg r92:V, reg r93:V, reg l9:*, reg c29:L, reg i67:I, reg r95:V, reg l11:*, reg dr18:V, reg dc9:L, reg dx18:V, reg i69:I, reg dx19:V, reg ans15:*, reg ans16:V, reg r98:V, reg i70:*, reg i71:V, reg r99:V, reg ___1:cls, reg r100:V, reg ulvs2:*, reg ulvs3:V, reg i72:I, reg drop3:*, reg drop4:V, reg c30:L, reg lvs12:*, reg lvs13:V, reg lvs14:*, reg lvs15:V, reg c31:L, reg i76:I, reg lvs17:V, reg dr20:V, reg dc10:L, reg dx20:V, reg i78:I, reg dx21:V, reg sort:cls, reg unique1:cls, reg ans17:*, reg ans18:V, reg r101:V, reg p11:p(V +), reg r103:V, reg p12:p(V +), reg r105:V, reg __8:cls, reg r106:V, reg sym13:cls, reg base13:cls, reg guard13:L, reg r107:V, reg i81:I, reg r108:V, reg olvs:*, reg olvs1:V, reg c32:L, reg i83:I, reg olvs3:V, reg dr22:V, reg dc11:L, reg dx22:V, reg i85:I, reg dx23:V, reg ans19:*, reg ans20:V, reg r109:V, reg __9:cls, reg r110:V, reg lvs18:*, reg lvs19:V, reg match2:cls, reg r111:V, reg r112:V, reg structure:cls, reg sym14:cls, reg base14:cls, reg guard14:L, reg r113:V, reg r114:V, reg ans21:*, reg ans22:V, reg r115:V, reg as_integer1:cls, reg r116:V, reg p13:p(V +), reg lvs20:*, reg lvs21:V, reg p14:p(V +), reg r119:V |
    mkenv;
    st `...` = ddd;
    drop_isMissing = missing.0(drop);
    if drop_isMissing then L0(FALSE) else L0(drop);
  L0(drop_orDefault):
    st drop = drop_orDefault;
    sep_isMissing = missing.0(sep);
    if sep_isMissing then L1(".") else L1(sep);
  L1(sep_orDefault):
    st sep = sep_orDefault;
    lex_order_isMissing = missing.0(lex_order);
    if lex_order_isMissing then L2(FALSE) else L2(lex_order);
  L2(lex_order_orDefault):
    st `lex.order` = lex_order_orDefault;
    sym = ldf list;
    base = ldf list in base;
    guard = `==`.4(sym, base);
    if guard then L39() else L40();
  L3(r1):
    st args = r1;
    sym1 = ldf length;
    base1 = ldf length in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L43() else L44();
  L39():
    list = ldf list;
    check L41() else D0();
  L40():
    r = dyn base(<sym ...>);
    goto L3(r);
  D0():
    deopt 2 [];
  L4(r4):
    st narg = r4;
    narg = ld narg;
    check L47() else D4();
  L41():
    ddd1 = ld `...`;
    r2 = dyn list[`...`](ddd1);
    check L42() else D1();
  L43():
    args = ld args;
    check L45() else D2();
  L44():
    r3 = dyn base1(<sym args>);
    goto L4(r3);
  D1():
    deopt 4 [r2];
  D2():
    deopt 8 [args];
  D4():
    deopt 13 [narg];
  L42():
    goto L3(r2);
  L45():
    args1 = force? args;
    checkMissing(args1);
    length = ldf length in base;
    r5 = dyn length(args1);
    check L46() else D3();
  L47():
    narg1 = force? narg;
    checkMissing(narg1);
    r6 = `<`(narg1, 1);
    c = `as.logical`(r6);
    if c then L48() else L5();
  D3():
    deopt 11 [r5];
  L5():
    goto L6();
  L6():
    narg2 = ld narg;
    check L52() else D7();
  L46():
    goto L4(r5);
  L48():
    stop = ldf stop;
    check L49() else D5();
  D5():
    deopt 18 [];
  D7():
    deopt 23 [narg2];
  L49():
    r7 = dyn stop("No factors specified");
    check L50() else D6();
  L52():
    narg3 = force? narg2;
    checkMissing(narg3);
    r9 = `==`(narg3, 1);
    c1 = `as.logical`(r9);
    if c1 then L53() else L7(c1);
  D6():
    deopt 20 [r7];
  L7(c3):
    c15 = `as.logical`(c3);
    if c15 then L62() else L10();
  L50():
    goto L6();
  L53():
    sym2 = ldf `is.list`;
    base2 = ldf `is.list` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L54() else L55();
  L8(c6, r11):
    c12 = `as.logical`(r11);
    c13 = `&&`(c6, c12);
    goto L7(c13);
  L10():
    goto L13();
  L13():
    narg4 = ld narg;
    check L72() else D13();
  L54():
    args2 = ld args;
    check L56() else D8();
  L55():
    r10 = dyn base2(<lang `[[`(args, 1)>);
    goto L8(c1, r10);
  L62():
    args6 = ld args;
    check L63() else D10();
  D8():
    deopt 29 [c1, args2];
  D10():
    deopt 37 [args6];
  D13():
    deopt 52 [narg4];
  L56():
    args3 = force? args2;
    checkMissing(args3);
    c7 = `is.object`(args3);
    if c7 then L57() else L58(c1, args3);
  L63():
    args7 = force? args6;
    checkMissing(args7);
    c16 = `is.object`(args7);
    if c16 then L64() else L65(args7);
  L72():
    narg5 = force? narg4;
    checkMissing(narg5);
    r19 = `:`(narg5, 1);
    s = toForSeq(r19);
    l = length(s);
    i = 0;
    goto L14(i);
  L9(c11, dx1):
    is_list = ldf `is.list` in base;
    r13 = dyn is_list(dx1);
    check L60() else D9();
  L11(dx3):
    st args = dx3;
    sym3 = ldf length;
    base3 = ldf length in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L67() else L68();
  L14(i1):
    i2 = `+`.1(i1, 1);
    c17 = `<`.1(l, i2);
    if c17 then L73() else L38();
  L57():
    dr = tryDispatchBuiltin.1("[[", args3);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L59() else L58(c1, dr);
  L58(c9, args5):
    __ = ldf `[[` in base;
    r12 = dyn __(args5, 1);
    goto L9(c9, r12);
  L64():
    dr2 = tryDispatchBuiltin.1("[[", args7);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L66() else L65(dr2);
  L65(args9):
    __1 = ldf `[[` in base;
    r14 = dyn __1(args9, 1);
    goto L11(r14);
  D9():
    deopt 35 [c11, r13];
  L12(r16):
    st narg = r16;
    goto L13();
  L38():
    x = `[[`(s, i2, NULL, TRUE);
    st i = x;
    as_factor = ldf `as.factor`;
    check L74() else D14();
  L59():
    dx = getTryDispatchBuiltinValue(dr);
    goto L9(c1, dx);
  L60():
    goto L8(c11, r13);
  L66():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L11(dx2);
  L67():
    args10 = ld args;
    check L69() else D11();
  L68():
    r15 = dyn base3(<sym args>);
    goto L12(r15);
  L73():
    structure = ldf structure;
    check L176() else D69();
  D11():
    deopt 45 [args10];
  D14():
    deopt 57 [i2];
  D69():
    deopt 251 [];
  L69():
    args11 = force? args10;
    checkMissing(args11);
    length1 = ldf length in base;
    r17 = dyn length1(args11);
    check L70() else D12();
  L74():
    p = prom<V +>{
      args12 = ld args;
      args13 = force? args12;
      checkMissing(args13);
      c18 = `is.object`(args13);
      if c18 then L1() else L2(args13);
    L0(dx5):
      return dx5;
    L1():
      dr4 = tryDispatchBuiltin.1("[[", args13);
      dc2 = getTryDispatchBuiltinDispatched(dr4);
      if dc2 then L3() else L2(dr4);
    L2(args15):
      i5 = ld i;
      i6 = force? i5;
      __2 = ldf `[[` in base;
      r20 = dyn __2(args15, i6);
      goto L0(r20);
    L3():
      dx4 = getTryDispatchBuiltinValue(dr4);
      goto L0(dx4);
    };
    r22 = dyn as_factor(p);
    check L75() else D15();
  L176():
    p13 = prom<V +>{
      sym14 = ldf `as.integer`;
      base14 = ldf `as.integer` in base;
      guard14 = `==`.4(sym14, base14);
      if guard14 then L1() else L2();
    L0(r114):
      return r114;
    L1():
      ans21 = ld ans;
      ans22 = force? ans21;
      checkMissing(ans22);
      r115 = `+`(ans22, 1);
      as_integer1 = ldf `as.integer` in base;
      r116 = dyn as_integer1(r115);
      goto L0(r116);
    L2():
      r113 = dyn base14(<lang `+`(ans, 1)>);
      goto L0(r113);
    };
    p14 = prom<V +>{
      lvs20 = ld lvs;
      lvs21 = force? lvs20;
      checkMissing(lvs21);
      return lvs21;
    };
    r119 = dyn structure[, levels, class](p13, p14, "factor");
    check L177() else D70();
  D12():
    deopt 48 [r17];
  D15():
    deopt 59 [i2, r22];
  D70():
    deopt 257 [r119];
  L70():
    goto L12(r17);
  L75():
    c19 = `is.object`(r22);
    if c19 then L76() else L77(i2, r22);
  L177():
    popenv;
    return r119;
  L15(i10, dx7):
    st f = dx7;
    levels = ldf levels;
    check L80() else D17();
  L76():
    dr6 = tryDispatchBuiltin.1("[", r22);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L78() else L77(i2, dr6);
  L77(i8, r24):
    drop1 = ld drop;
    check L79() else D16();
  D16():
    deopt 61 [i8, r24, drop1];
  D17():
    deopt 68 [i10];
  L78():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L15(i2, dx6);
  L79():
    drop2 = force? drop1;
    __3 = ldf `[` in base;
    r25 = dyn __3(r22, <missing>, drop2);
    goto L15(i8, r25);
  L80():
    p1 = prom<V +>{
      f = ld f;
      f1 = force? f;
      checkMissing(f1);
      return f1;
    };
    r27 = dyn levels(p1);
    check L81() else D18();
  D18():
    deopt 70 [i10, r27];
  L81():
    st l = r27;
    sym4 = ldf `as.integer`;
    base4 = ldf `as.integer` in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L82() else L83();
  L16(i13, r29):
    r31 = `-`(r29, 1);
    st if1 = r31;
    i14 = ld i;
    check L86() else D21();
  L82():
    f2 = ld f;
    check L84() else D19();
  L83():
    r28 = dyn base4(<sym f>);
    goto L16(i10, r28);
  D19():
    deopt 74 [i10, f2];
  D21():
    deopt 81 [i13, i14];
  L84():
    f3 = force? f2;
    checkMissing(f3);
    as_integer = ldf `as.integer` in base;
    r30 = dyn as_integer(f3);
    check L85() else D20();
  L86():
    i15 = force? i14;
    checkMissing(i15);
    narg6 = ld narg;
    check L87() else D22();
  D20():
    deopt 77 [i10, r30];
  D22():
    deopt 82 [i13, i15, narg6];
  L85():
    goto L16(i10, r30);
  L87():
    narg7 = force? narg6;
    checkMissing(narg7);
    r32 = `==`(i15, narg7);
    c20 = `as.logical`(r32);
    if c20 then L88() else L17();
  L17():
    lex_order1 = ld `lex.order`;
    check L92() else D25();
  L18(i18):
    goto L14(i18);
  L88():
    if1 = ld if1;
    check L89() else D23();
  D23():
    deopt 85 [i13, if1];
  D25():
    deopt 91 [i13, lex_order1];
  L89():
    if2 = force? if1;
    checkMissing(if2);
    st ans = if2;
    l1 = ld l;
    check L90() else D24();
  L92():
    lex_order2 = force? lex_order1;
    checkMissing(lex_order2);
    c21 = `as.logical`(lex_order2);
    if c21 then L93() else L19();
  D24():
    deopt 88 [i13, l1];
  L19():
    ans2 = ld ans;
    check L104() else D33();
  L21(i24):
    anyDuplicated = ldf anyDuplicated;
    check L112() else D39();
  L90():
    l2 = force? l1;
    checkMissing(l2);
    st lvs = l2;
    goto L18(i13);
  L93():
    sym5 = ldf length;
    base5 = ldf length in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L94() else L95();
  D33():
    deopt 115 [i13, ans2];
  D39():
    deopt 135 [i24];
  L20(i23, r34):
    st ll = r34;
    ans = ld ans;
    check L98() else D28();
  L94():
    lvs = ld lvs;
    check L96() else D26();
  L95():
    r33 = dyn base5(<sym lvs>);
    goto L20(i13, r33);
  L104():
    ans3 = force? ans2;
    checkMissing(ans3);
    sym8 = ldf length;
    base8 = ldf length in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L105() else L106();
  L112():
    p8 = prom<V +>{
      lvs2 = ld lvs;
      lvs3 = force? lvs2;
      checkMissing(lvs3);
      return lvs3;
    };
    r65 = dyn anyDuplicated(p8);
    check L113() else D40();
  D26():
    deopt 95 [i13, lvs];
  D28():
    deopt 100 [i23, ans];
  D40():
    deopt 137 [i24, r65];
  L22(i27, ans6, r50):
    r52 = `*`(ans6, r50);
    if5 = ld if1;
    check L109() else D36();
  L96():
    lvs1 = force? lvs;
    checkMissing(lvs1);
    length2 = ldf length in base;
    r35 = dyn length2(lvs1);
    check L97() else D27();
  L98():
    ans1 = force? ans;
    checkMissing(ans1);
    ll = ld ll;
    check L99() else D29();
  L105():
    l4 = ld l;
    check L107() else D34();
  L106():
    r49 = dyn base8(<sym l>);
    goto L22(i13, ans3, r49);
  L113():
    c22 = `as.logical`(r65);
    if c22 then L114() else L23();
  D27():
    deopt 98 [i13, r35];
  D29():
    deopt 101 [i23, ans1, ll];
  D34():
    deopt 118 [i13, ans3, l4];
  D36():
    deopt 122 [i27, r52, if5];
  L23():
    goto L33(i24);
  L33(i72):
    drop3 = ld drop;
    check L157() else D60();
  L97():
    goto L20(i13, r35);
  L99():
    ll1 = force? ll;
    checkMissing(ll1);
    if3 = ld if1;
    check L100() else D30();
  L107():
    l5 = force? l4;
    checkMissing(l5);
    length3 = ldf length in base;
    r51 = dyn length3(l5);
    check L108() else D35();
  L109():
    if6 = force? if5;
    checkMissing(if6);
    r53 = `+`(r52, if6);
    st ans = r53;
    paste1 = ldf paste;
    check L110() else D37();
  L114():
    unique = ldf unique;
    check L115() else D41();
  D30():
    deopt 102 [i23, ans1, ll1, if3];
  D35():
    deopt 121 [i13, ans3, r51];
  D37():
    deopt 127 [i27];
  D41():
    deopt 139 [i24];
  D60():
    deopt 214 [i72, drop3];
  L100():
    if4 = force? if3;
    checkMissing(if4);
    r36 = `*`(ll1, if4);
    r37 = `+`(ans1, r36);
    st ans = r37;
    paste = ldf paste;
    check L101() else D31();
  L108():
    goto L22(i13, ans3, r51);
  L110():
    p5 = prom<V +>{
      sym9 = ldf rep;
      base9 = ldf rep in base;
      guard9 = `==`.4(sym9, base9);
      if guard9 then L1() else L2();
    L0(r55):
      return r55;
    L1():
      rep2 = ldf rep in base;
      r56 = dyn rep2(<sym l>, <lang length(lvs)>);
      goto L0(r56);
    L2():
      r54 = dyn base9(<sym l>, <lang length(lvs)>);
      goto L0(r54);
    };
    p6 = prom<V +>{
      sym10 = ldf rep;
      base10 = ldf rep in base;
      guard10 = `==`.4(sym10, base10);
      if guard10 then L1() else L2();
    L0(r59):
      return r59;
    L1():
      rep3 = ldf rep in base;
      r60 = dyn rep3(<sym lvs>, <lang length(l)>);
      goto L0(r60);
    L2():
      r58 = dyn base10[, each](<sym lvs>, <lang length(l)>);
      goto L0(r58);
    };
    p7 = prom<V +>{
      sep3 = ld sep;
      sep4 = force? sep3;
      checkMissing(sep4);
      return sep4;
    };
    r63 = dyn paste1[, , sep](p5, p6, p7);
    check L111() else D38();
  L115():
    p9 = prom<V +>{
      lvs4 = ld lvs;
      lvs5 = force? lvs4;
      checkMissing(lvs5);
      return lvs5;
    };
    r67 = dyn unique(p9);
    check L116() else D42();
  L157():
    drop4 = force? drop3;
    checkMissing(drop4);
    c30 = `as.logical`(drop4);
    if c30 then L158() else L34();
  D31():
    deopt 108 [i23];
  D38():
    deopt 132 [i27, r63];
  D42():
    deopt 141 [i24, r67];
  L34():
    goto L18(i72);
  L101():
    p2 = prom<V +>{
      sym6 = ldf rep;
      base6 = ldf rep in base;
      guard6 = `==`.4(sym6, base6);
      if guard6 then L1() else L2();
    L0(r39):
      return r39;
    L1():
      rep = ldf rep in base;
      r40 = dyn rep(<sym l>, <sym ll>);
      goto L0(r40);
    L2():
      r38 = dyn base6[, each](<sym l>, <sym ll>);
      goto L0(r38);
    };
    p3 = prom<V +>{
      sym7 = ldf rep;
      base7 = ldf rep in base;
      guard7 = `==`.4(sym7, base7);
      if guard7 then L1() else L2();
    L0(r43):
      return r43;
    L1():
      rep1 = ldf rep in base;
      r44 = dyn rep1(<sym lvs>, <lang length(l)>);
      goto L0(r44);
    L2():
      r42 = dyn base7(<sym lvs>, <lang length(l)>);
      goto L0(r42);
    };
    p4 = prom<V +>{
      sep1 = ld sep;
      sep2 = force? sep1;
      checkMissing(sep2);
      return sep2;
    };
    r47 = dyn paste[, , sep](p2, p3, p4);
    check L102() else D32();
  L111():
    st lvs = r63;
    goto L21(i27);
  L116():
    st ulvs = r67;
    goto L32(i24);
  L158():
    lvs12 = ld lvs;
    check L159() else D61();
  D32():
    deopt 113 [i23, r47];
  D61():
    deopt 216 [i72, lvs12];
  L32(i30):
    anyDuplicated1 = ldf anyDuplicated;
    check L117() else D43();
  L102():
    st lvs = r47;
    goto L21(i23);
  L159():
    lvs13 = force? lvs12;
    checkMissing(lvs13);
    st olvs = lvs13;
    lvs14 = ld lvs;
    check L160() else D62();
  D43():
    deopt 144 [i30];
  D62():
    deopt 219 [i72, lvs14];
  L117():
    p10 = prom<V +>{
      sym11 = ldf match;
      base11 = ldf match in base;
      guard11 = `==`.4(sym11, base11);
      if guard11 then L1() else L2();
    L0(r69):
      st flv = r69;
      invisible.0();
      return r69;
    L1():
      lvs6 = ld lvs;
      lvs7 = force? lvs6;
      checkMissing(lvs7);
      ulvs = ld ulvs;
      ulvs1 = force? ulvs;
      checkMissing(ulvs1);
      match = ldf match in base;
      r70 = dyn match(lvs7, ulvs1, NA_INT, NULL);
      goto L0(r70);
    L2():
      r68 = dyn base11(<sym lvs>, <sym ulvs>);
      goto L0(r68);
    };
    r72 = dyn anyDuplicated1(p10);
    check L118() else D44();
  L160():
    lvs15 = force? lvs14;
    checkMissing(lvs15);
    c31 = `is.object`(lvs15);
    if c31 then L161() else L162(i72, lvs15);
  D44():
    deopt 146 [i30, r72];
  L35(i78, dx21):
    st lvs = dx21;
    sym13 = ldf match;
    base13 = ldf match in base;
    guard13 = `==`.4(sym13, base13);
    if guard13 then L166() else L167();
  L118():
    st i = r72;
    c23 = `as.logical`(r72);
    if c23 then L119() else L24();
  L161():
    dr20 = tryDispatchBuiltin.1("[", lvs15);
    dc10 = getTryDispatchBuiltinDispatched(dr20);
    if dc10 then L163() else L162(i72, dr20);
  L162(i76, lvs17):
    sort = ldf sort;
    check L164() else D63();
  D63():
    deopt 222 [i76, lvs17];
  L24():
    ulvs2 = ld ulvs;
    check L155() else D59();
  L36(i81, r108):
    r112 = `-`(r108, 1);
    st ans = r112;
    goto L18(i81);
  L119():
    lvs8 = ld lvs;
    check L120() else D45();
  L163():
    dx20 = getTryDispatchBuiltinValue(dr20);
    goto L35(i72, dx20);
  L164():
    p12 = prom<V +>{
      unique1 = ldf unique;
      p11 = prom<V +>{
        ans17 = ld ans;
        ans18 = force? ans17;
        checkMissing(ans18);
        r101 = `+`(ans18, 1);
        return r101;
      };
      r103 = dyn unique1(p11);
      return r103;
    };
    r105 = dyn sort(p12);
    check L165() else D64();
  L166():
    olvs = ld olvs;
    check L168() else D65();
  L167():
    r107 = dyn base13(<lang `[`(olvs, `+`(ans, 1))>, <sym lvs>);
    goto L36(i78, r107);
  D45():
    deopt 148 [i30, lvs8];
  D59():
    deopt 209 [i30, ulvs2];
  D64():
    deopt 224 [i76, lvs17, r105];
  D65():
    deopt 229 [i78, olvs];
  L120():
    lvs9 = force? lvs8;
    checkMissing(lvs9);
    c24 = `is.object`(lvs9);
    if c24 then L121() else L122(i30, lvs9);
  L155():
    ulvs3 = force? ulvs2;
    checkMissing(ulvs3);
    st lvs = ulvs3;
    goto L33(i30);
  L165():
    __8 = ldf `[` in base;
    r106 = dyn __8(lvs17, r105);
    goto L35(i76, r106);
  L168():
    olvs1 = force? olvs;
    checkMissing(olvs1);
    c32 = `is.object`(olvs1);
    if c32 then L169() else L170(i78, olvs1);
  L25(i36, dx9):
    st lvs = dx9;
    sym12 = ldf match;
    base12 = ldf match in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L125() else L126();
  L37(i85, dx23):
    lvs18 = ld lvs;
    check L173() else D67();
  L121():
    dr8 = tryDispatchBuiltin.1("[", lvs9);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L123() else L122(i30, dr8);
  L122(i34, lvs11):
    i37 = ld i;
    check L124() else D46();
  L169():
    dr22 = tryDispatchBuiltin.1("[", olvs1);
    dc11 = getTryDispatchBuiltinDispatched(dr22);
    if dc11 then L171() else L170(i78, dr22);
  L170(i83, olvs3):
    ans19 = ld ans;
    check L172() else D66();
  D46():
    deopt 150 [i34, lvs11, i37];
  D66():
    deopt 231 [i83, olvs3, ans19];
  D67():
    deopt 236 [i85, lvs18];
  L26(i41, r76):
    r82 = `-`(r76, 1);
    l6 = ld ans;
    c27 = `is.object`(l6);
    if c27 then L138() else L139(i41, r82, l6);
  L123():
    dx8 = getTryDispatchBuiltinValue(dr8);
    goto L25(i30, dx8);
  L124():
    i38 = force? i37;
    checkMissing(i38);
    r73 = `-`(<missing>, i38);
    __4 = ldf `[` in base;
    r74 = dyn __4(lvs11, r73);
    goto L25(i34, r74);
  L125():
    flv = ld flv;
    check L127() else D47();
  L126():
    r75 = dyn base12(<lang `[`(flv, i)>, <lang `[`(flv, `:`(1.0, `(`(`-`(i, 1.0))))>);
    goto L26(i36, r75);
  L171():
    dx22 = getTryDispatchBuiltinValue(dr22);
    goto L37(i78, dx22);
  L172():
    ans20 = force? ans19;
    checkMissing(ans20);
    r109 = `+`(ans20, 1);
    __9 = ldf `[` in base;
    r110 = dyn __9(olvs3, r109);
    goto L37(i83, r110);
  L173():
    lvs19 = force? lvs18;
    checkMissing(lvs19);
    match2 = ldf match in base;
    r111 = dyn match2(dx23, lvs19, NA_INT, NULL);
    check L174() else D68();
  D47():
    deopt 157 [i36, flv];
  D68():
    deopt 241 [i85, r111];
  L29(i57, dx15):
    st ans = dx15;
    ans9 = ld ans;
    check L143() else D54();
  L127():
    flv1 = force? flv;
    checkMissing(flv1);
    c25 = `is.object`(flv1);
    if c25 then L128() else L129(i36, flv1);
  L138():
    dr14 = tryDispatchBuiltin.0("[<-", l6, r82);
    dc7 = getTryDispatchBuiltinDispatched(dr14);
    if dc7 then L140() else L139(i41, r82, dr14);
  L139(i55, r84, l8):
    ans7 = ld ans;
    check L141() else D52();
  L174():
    goto L36(i85, r111);
  D52():
    deopt 178 [i55, r84, l8, r82, ans7];
  D54():
    deopt 186 [i57, ans9];
  L27(i45, dx11):
    flv4 = ld flv;
    check L132() else D49();
  L128():
    dr10 = tryDispatchBuiltin.1("[", flv1);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L130() else L129(i36, dr10);
  L129(i43, flv3):
    i46 = ld i;
    check L131() else D48();
  L140():
    dx14 = getTryDispatchBuiltinValue(dr14);
    goto L29(i41, dx14);
  L141():
    ans8 = force? ans7;
    checkMissing(ans8);
    r87 = `+`(ans8, 1);
    i58 = ld i;
    check L142() else D53();
  L143():
    ans10 = force? ans9;
    checkMissing(ans10);
    c28 = `is.object`(ans10);
    if c28 then L144() else L145(i57, ans10);
  D48():
    deopt 159 [i43, flv3, i46];
  D49():
    deopt 162 [i45, flv4];
  D53():
    deopt 181 [i55, r84, l8, r82, r87, i58];
  L30(i63, dx17):
    r93 = `-`(dx17, 1);
    l9 = ld ans;
    c29 = `is.object`(l9);
    if c29 then L149() else L150(i63, r93, l9);
  L130():
    dx10 = getTryDispatchBuiltinValue(dr10);
    goto L27(i36, dx10);
  L131():
    i47 = force? i46;
    __5 = ldf `[` in base;
    r77 = dyn __5(flv3, i47);
    goto L27(i43, r77);
  L132():
    flv5 = force? flv4;
    checkMissing(flv5);
    c26 = `is.object`(flv5);
    if c26 then L133() else L134(i45, flv5);
  L142():
    i59 = force? i58;
    checkMissing(i59);
    r88 = `==`(r87, i59);
    ___ = ldf `[<-` in base;
    r89 = dyn ___(l8, r82, r88);
    goto L29(i55, r89);
  L144():
    dr16 = tryDispatchBuiltin.1("[", ans10);
    dc8 = getTryDispatchBuiltinDispatched(dr16);
    if dc8 then L146() else L145(i57, dr16);
  L145(i61, ans12):
    ans13 = ld ans;
    check L147() else D55();
  D55():
    deopt 188 [i61, ans12, ans13];
  L28(i51, dx13):
    match1 = ldf match in base;
    r81 = dyn match1(dx11, dx13, NA_INT, NULL);
    check L137() else D51();
  L31(i69, dx19):
    st ans = dx19;
    goto L32(i69);
  L133():
    dr12 = tryDispatchBuiltin.1("[", flv5);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L135() else L134(i45, dr12);
  L134(i49, flv7):
    i52 = ld i;
    check L136() else D50();
  L146():
    dx16 = getTryDispatchBuiltinValue(dr16);
    goto L30(i57, dx16);
  L147():
    ans14 = force? ans13;
    checkMissing(ans14);
    r90 = `+`(ans14, 1);
    i64 = ld i;
    check L148() else D56();
  L149():
    dr18 = tryDispatchBuiltin.0("[<-", l9, r93);
    dc9 = getTryDispatchBuiltinDispatched(dr18);
    if dc9 then L151() else L150(i63, r93, dr18);
  L150(i67, r95, l11):
    ans15 = ld ans;
    check L152() else D57();
  D50():
    deopt 165 [i49, flv7, 1.0, i52];
  D51():
    deopt 174 [i51, r81];
  D56():
    deopt 191 [i61, ans12, r90, i64];
  D57():
    deopt 198 [i67, r95, l11, r93, ans15];
  L135():
    dx12 = getTryDispatchBuiltinValue(dr12);
    goto L28(i45, dx12);
  L136():
    i53 = force? i52;
    checkMissing(i53);
    r78 = `-`(i53, 1.0);
    r79 = `:`(1.0, r78);
    __6 = ldf `[` in base;
    r80 = dyn __6(flv7, r79);
    goto L28(i49, r80);
  L137():
    goto L26(i51, r81);
  L148():
    i65 = force? i64;
    checkMissing(i65);
    r91 = `>`(r90, i65);
    __7 = ldf `[` in base;
    r92 = dyn __7(ans12, r91);
    goto L30(i61, r92);
  L151():
    dx18 = getTryDispatchBuiltinValue(dr18);
    goto L31(i63, dx18);
  L152():
    ans16 = force? ans15;
    checkMissing(ans16);
    r98 = `+`(ans16, 1);
    i70 = ld i;
    check L153() else D58();
  D58():
    deopt 201 [i67, r95, l11, r93, r98, i70];
  L153():
    i71 = force? i70;
    checkMissing(i71);
    r99 = `>`(r98, i71);
    ___1 = ldf `[<-` in base;
    r100 = dyn ___1(l11, r93, r99);
    goto L31(i67, r100);
  }
}