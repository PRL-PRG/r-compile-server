fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2495938000;
    st `all.equal.factor` = r;
    setInvisible.0();
    popenv;
    return r;
  }
}
fun inner2495938000(target, current, `...`, `check.attributes`) {
  (reg target:*, reg current:*, reg ddd:dots, reg check_attributes:*) -+> V { var target:*, var current:*, var `...`:dots?, var `check.attributes`:*, reg check_attributes_isMissing:L, reg check_attributes_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg current1:*, reg current2:V, reg inherits:cls, reg r2:V, reg r3:V, reg c:L, reg check_attributes1:*, reg check_attributes2:V, reg c1:L, reg attr_all_equal:cls, reg target1:*, reg target2:V, reg p:p(V +), reg current3:*, reg current4:V, reg p1:p(V +), reg ddd1:dots?, reg r8:V, reg r9:V, reg l:*, reg class__:cls, reg r10:V, reg l1:*, reg class__1:cls, reg r11:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r12:V, reg r13:V, reg target3:*, reg target4:V, reg is_na:cls, reg r14:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r15:V, reg r16:V, reg current5:*, reg current6:V, reg is_na1:cls, reg r17:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r18:V, reg r19:V, reg nax:*, reg nax1:V, reg nay:*, reg nay1:V, reg r20:V, reg sum:cls, reg r21:V, reg n:*, reg n1:V, reg r22:V, reg c2:L, reg sym4:cls, reg base4:cls, reg guard4:L, reg r23:V, reg r24:V, reg msg:*, reg msg1:V, reg paste:cls, reg n2:*, reg n3:V, reg p2:p(V +), reg r26:V, reg c3:cls, reg r27:V, reg n4:*, reg n5:V, reg r29:V, reg c4:L, reg sym5:cls, reg base5:cls, reg guard5:L, reg r30:V, reg r31:V, reg msg2:*, reg msg3:V, reg paste1:cls, reg r32:V, reg c5:cls, reg r33:V, reg levels:cls, reg target5:*, reg target6:V, reg p3:p(V +), reg r35:V, reg c6:L, reg r37:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg target7:*, reg target8:V, reg c7:L, reg r39:V, reg target10:V, reg dr2:V, reg dc1:L, reg dx2:V, reg r41:V, reg dx3:V, reg nax2:*, reg nax3:V, reg r42:V, reg __:cls, reg r43:V, reg __1:cls, reg r44:V, reg levels1:cls, reg current7:*, reg current8:V, reg p4:p(V +), reg r46:V, reg c8:L, reg r48:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg current9:*, reg current10:V, reg c9:L, reg r50:V, reg current12:V, reg dr6:V, reg dc3:L, reg dx6:V, reg r52:V, reg dx7:V, reg nay2:*, reg nay3:V, reg r53:V, reg __2:cls, reg r54:V, reg __3:cls, reg r55:V, reg all_equal:cls, reg target11:*, reg target12:V, reg p5:p(V +), reg current13:*, reg current14:V, reg p6:p(V +), reg check_attributes3:*, reg check_attributes4:V, reg p7:p(V +), reg ddd2:dots?, reg r59:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r60:V, reg r61:V, reg n6:*, reg n7:V, reg c10:L, reg c11:L, reg sym7:cls, reg base7:cls, reg guard7:L, reg r62:V, reg r63:V, reg msg4:*, reg msg5:V, reg n8:*, reg n9:V, reg c12:cls, reg r64:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r65:V, reg r66:V, reg msg6:*, reg msg7:V, reg c13:V, reg c14:L, reg msg8:*, reg msg9:V |
    mkenv;
    st target = target;
    st current = current;
    st `...` = ddd;
    check_attributes_isMissing = missing.0(check_attributes);
    if check_attributes_isMissing then L0(TRUE) else L0(check_attributes);
  L0(check_attributes_orDefault):
    st `check.attributes` = check_attributes_orDefault;
    sym = ldf inherits;
    base = ldf inherits in base;
    guard = `==`.4(sym, base);
    if guard then L23() else L24();
  L1(r1):
    r3 = `!`(r1);
    c = `as.logical`(r3);
    if c then L27() else L2();
  L23():
    current1 = ld current;
    check L25() else D0();
  L24():
    r = dyn base(<sym current>, "factor");
    goto L1(r);
  D0():
    deopt 2 [current1];
  L2():
    check_attributes1 = ld `check.attributes`;
    check L30() else D2();
  L25():
    current2 = force? current1;
    checkMissing(current2);
    inherits = ldf inherits in base;
    r2 = dyn inherits(current2, "factor", FALSE);
    check L26() else D1();
  L27():
    popenv;
    return "'current' is not a factor";
  D1():
    deopt 7 [r2];
  D2():
    deopt 14 [check_attributes1];
  L26():
    goto L1(r2);
  L30():
    check_attributes2 = force? check_attributes1;
    checkMissing(check_attributes2);
    c1 = `as.logical`(check_attributes2);
    if c1 then L31() else L4();
  L4():
    goto L5(NULL);
  L5(r9):
    st msg = r9;
    l = ld current;
    class__ = ldf `class<-`;
    check L35() else D5();
  L31():
    attr_all_equal = ldf `attr.all.equal`;
    check L32() else D3();
  D3():
    deopt 17 [];
  D5():
    deopt 28 [NULL, l, NULL];
  L32():
    p = prom<V +>{
      target1 = ld target;
      target2 = force? target1;
      checkMissing(target2);
      return target2;
    };
    p1 = prom<V +>{
      current3 = ld current;
      current4 = force? current3;
      checkMissing(current4);
      return current4;
    };
    ddd1 = ld `...`;
    r8 = dyn attr_all_equal[, , `...`](p, p1, ddd1);
    check L33() else D4();
  L35():
    r10 = dyn class__(l, NULL, NULL);
    check L36() else D6();
  D4():
    deopt 21 [r8];
  D6():
    deopt 30 [NULL, r10];
  L33():
    goto L5(r8);
  L36():
    st current = r10;
    l1 = ld target;
    class__1 = ldf `class<-`;
    check L37() else D7();
  D7():
    deopt 33 [NULL, l1, NULL];
  L37():
    r11 = dyn class__1(l1, NULL, NULL);
    check L38() else D8();
  D8():
    deopt 35 [NULL, r11];
  L38():
    st target = r11;
    sym1 = ldf `is.na`;
    base1 = ldf `is.na` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L39() else L40();
  L6(r13):
    st nax = r13;
    sym2 = ldf `is.na`;
    base2 = ldf `is.na` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L43() else L44();
  L39():
    target3 = ld target;
    check L41() else D9();
  L40():
    r12 = dyn base1(<sym target>);
    goto L6(r12);
  D9():
    deopt 39 [target3];
  L7(r16):
    st nay = r16;
    sym3 = ldf sum;
    base3 = ldf sum in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L47() else L48();
  L41():
    target4 = force? target3;
    checkMissing(target4);
    is_na = ldf `is.na` in base;
    r14 = dyn is_na(target4);
    check L42() else D10();
  L43():
    current5 = ld current;
    check L45() else D11();
  L44():
    r15 = dyn base2(<sym current>);
    goto L7(r15);
  D10():
    deopt 42 [r14];
  D11():
    deopt 46 [current5];
  L8(r19):
    st n = r19;
    n = ld n;
    check L52() else D16();
  L42():
    goto L6(r14);
  L45():
    current6 = force? current5;
    checkMissing(current6);
    is_na1 = ldf `is.na` in base;
    r17 = dyn is_na1(current6);
    check L46() else D12();
  L47():
    nax = ld nax;
    check L49() else D13();
  L48():
    r18 = dyn base3(<lang `!=`(nax, nay)>);
    goto L8(r18);
  D12():
    deopt 49 [r17];
  D13():
    deopt 53 [nax];
  D16():
    deopt 60 [n];
  L46():
    goto L7(r17);
  L49():
    nax1 = force? nax;
    checkMissing(nax1);
    nay = ld nay;
    check L50() else D14();
  L52():
    n1 = force? n;
    checkMissing(n1);
    r22 = `>`(n1, 1);
    c2 = `as.logical`(r22);
    if c2 then L53() else L9();
  D14():
    deopt 54 [nax1, nay];
  L9():
    n4 = ld n;
    check L61() else D21();
  L11():
    sym8 = ldf `is.null`;
    base8 = ldf `is.null` in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L102() else L103();
  L50():
    nay1 = force? nay;
    checkMissing(nay1);
    r20 = `!=`(nax1, nay1);
    sum = ldf sum in base;
    r21 = dyn sum(r20);
    check L51() else D15();
  L53():
    sym4 = ldf c;
    base4 = ldf c in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L54() else L55();
  D15():
    deopt 58 [r21];
  D21():
    deopt 76 [n4];
  L10(r24):
    st msg = r24;
    goto L11();
  L21(r66):
    c14 = `as.logical`(r66);
    if c14 then L105() else L22();
  L51():
    goto L8(r21);
  L54():
    msg = ld msg;
    check L56() else D17();
  L55():
    r23 = dyn base4(<sym msg>, <lang paste(n, "NA mismatches")>);
    goto L10(r23);
  L61():
    n5 = force? n4;
    checkMissing(n5);
    r29 = `==`(n5, 1);
    c4 = `as.logical`(r29);
    if c4 then L62() else L12();
  L102():
    msg6 = ld msg;
    check L104() else D40();
  L103():
    r65 = dyn base8(<sym msg>);
    goto L21(r65);
  D17():
    deopt 66 [msg];
  D40():
    deopt 140 [msg6];
  L12():
    levels = ldf levels;
    check L70() else D26();
  L22():
    msg8 = ld msg;
    check L107() else D41();
  L56():
    msg1 = force? msg;
    checkMissing(msg1);
    paste = ldf paste;
    check L57() else D18();
  L62():
    sym5 = ldf c;
    base5 = ldf c in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L63() else L64();
  L104():
    msg7 = force? msg6;
    checkMissing(msg7);
    c13 = `==`(msg7, NULL);
    goto L21(c13);
  L105():
    popenv;
    return TRUE;
  D18():
    deopt 69 [];
  D26():
    deopt 92 [];
  D41():
    deopt 145 [msg8];
  L13(r31):
    st msg = r31;
    goto L11();
  L57():
    p2 = prom<V +>{
      n2 = ld n;
      n3 = force? n2;
      checkMissing(n3);
      return n3;
    };
    r26 = dyn paste(p2, "NA mismatches");
    check L58() else D19();
  L63():
    msg2 = ld msg;
    check L65() else D22();
  L64():
    r30 = dyn base5(<sym msg>, <lang paste("1, NA mismatch")>);
    goto L13(r30);
  L70():
    p3 = prom<V +>{
      target5 = ld target;
      target6 = force? target5;
      checkMissing(target6);
      return target6;
    };
    r35 = dyn levels(p3);
    check L71() else D27();
  L107():
    msg9 = force? msg8;
    checkMissing(msg9);
    popenv;
    return msg9;
  D19():
    deopt 72 [r26];
  D22():
    deopt 82 [msg2];
  D27():
    deopt 94 [r35];
  L58():
    c3 = ldf c in base;
    r27 = dyn c3(msg1, r26);
    check L59() else D20();
  L65():
    msg3 = force? msg2;
    checkMissing(msg3);
    paste1 = ldf paste;
    check L66() else D23();
  L71():
    c6 = `is.object`(r35);
    if c6 then L72() else L73(r35);
  D20():
    deopt 74 [r27];
  D23():
    deopt 85 [];
  L14(dx1):
    st target = dx1;
    levels1 = ldf levels;
    check L80() else D30();
  L59():
    goto L10(r27);
  L66():
    r32 = dyn paste1("1, NA mismatch");
    check L67() else D24();
  L72():
    dr = tryDispatchBuiltin.1("[", r35);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L74() else L73(dr);
  L73(r37):
    target7 = ld target;
    check L75() else D28();
  D24():
    deopt 87 [r32];
  D28():
    deopt 95 [r37, target7];
  D30():
    deopt 104 [];
  L67():
    c5 = ldf c in base;
    r33 = dyn c5(msg3, r32);
    check L68() else D25();
  L74():
    dx = getTryDispatchBuiltinValue(dr);
    goto L14(dx);
  L75():
    target8 = force? target7;
    checkMissing(target8);
    c7 = `is.object`(target8);
    if c7 then L76() else L77(r37, target8);
  L80():
    p4 = prom<V +>{
      current7 = ld current;
      current8 = force? current7;
      checkMissing(current8);
      return current8;
    };
    r46 = dyn levels1(p4);
    check L81() else D31();
  D25():
    deopt 89 [r33];
  D31():
    deopt 106 [r46];
  L15(r41, dx3):
    __1 = ldf `[` in base;
    r44 = dyn __1(r41, dx3);
    goto L14(r44);
  L68():
    goto L13(r33);
  L76():
    dr2 = tryDispatchBuiltin.1("[", target8);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L78() else L77(r37, dr2);
  L77(r39, target10):
    nax2 = ld nax;
    check L79() else D29();
  L81():
    c8 = `is.object`(r46);
    if c8 then L82() else L83(r46);
  D29():
    deopt 97 [r39, target10, nax2];
  L16(dx5):
    st current = dx5;
    all_equal = ldf `all.equal`;
    check L90() else D34();
  L78():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L15(r37, dx2);
  L79():
    nax3 = force? nax2;
    checkMissing(nax3);
    r42 = `!`(nax3);
    __ = ldf `[` in base;
    r43 = dyn __(target10, r42);
    goto L15(r39, r43);
  L82():
    dr4 = tryDispatchBuiltin.1("[", r46);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L84() else L83(dr4);
  L83(r48):
    current9 = ld current;
    check L85() else D32();
  D32():
    deopt 107 [r48, current9];
  D34():
    deopt 116 [];
  L84():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L16(dx4);
  L85():
    current10 = force? current9;
    checkMissing(current10);
    c9 = `is.object`(current10);
    if c9 then L86() else L87(r48, current10);
  L90():
    p5 = prom<V +>{
      target11 = ld target;
      target12 = force? target11;
      checkMissing(target12);
      return target12;
    };
    p6 = prom<V +>{
      current13 = ld current;
      current14 = force? current13;
      checkMissing(current14);
      return current14;
    };
    p7 = prom<V +>{
      check_attributes3 = ld `check.attributes`;
      check_attributes4 = force? check_attributes3;
      checkMissing(check_attributes4);
      return check_attributes4;
    };
    ddd2 = ld `...`;
    r59 = dyn all_equal[, , `check.attributes`, `...`](p5, p6, p7, ddd2);
    check L91() else D35();
  D35():
    deopt 122 [r59];
  L17(r52, dx7):
    __3 = ldf `[` in base;
    r55 = dyn __3(r52, dx7);
    goto L16(r55);
  L86():
    dr6 = tryDispatchBuiltin.1("[", current10);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L88() else L87(r48, dr6);
  L87(r50, current12):
    nay2 = ld nay;
    check L89() else D33();
  L91():
    st n = r59;
    sym6 = ldf `is.character`;
    base6 = ldf `is.character` in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L92() else L93();
  D33():
    deopt 109 [r50, current12, nay2];
  L18(r61):
    c11 = `as.logical`(r61);
    if c11 then L95() else L19();
  L88():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L17(r48, dx6);
  L89():
    nay3 = force? nay2;
    checkMissing(nay3);
    r53 = `!`(nay3);
    __2 = ldf `[` in base;
    r54 = dyn __2(current12, r53);
    goto L17(r50, r54);
  L92():
    n6 = ld n;
    check L94() else D36();
  L93():
    r60 = dyn base6(<sym n>);
    goto L18(r60);
  D36():
    deopt 125 [n6];
  L19():
    goto L11();
  L94():
    n7 = force? n6;
    checkMissing(n7);
    c10 = `is.character`(n7);
    goto L18(c10);
  L95():
    sym7 = ldf c;
    base7 = ldf c in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L96() else L97();
  L20(r63):
    st msg = r63;
    goto L11();
  L96():
    msg4 = ld msg;
    check L98() else D37();
  L97():
    r62 = dyn base7(<sym msg>, <sym n>);
    goto L20(r62);
  D37():
    deopt 130 [msg4];
  L98():
    msg5 = force? msg4;
    checkMissing(msg5);
    n8 = ld n;
    check L99() else D38();
  D38():
    deopt 132 [n8];
  L99():
    n9 = force? n8;
    checkMissing(n9);
    c12 = ldf c in base;
    r64 = dyn c12(msg5, n9);
    check L100() else D39();
  D39():
    deopt 135 [r64];
  L100():
    goto L20(r64);
  }
}