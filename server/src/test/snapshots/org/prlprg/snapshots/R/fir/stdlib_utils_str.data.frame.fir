fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner64320599;
    st `str.data.frame` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner64320599(object, `...`) {
  (reg object:*, reg ddd:dots) -+> V { var object:*, var `...`:dots?, reg is_data_frame:cls, reg object1:*, reg object2:V, reg p:p(V +), reg r1:V, reg r2:V, reg c:L, reg warning:cls, reg r3:V, reg data_frame:cls, reg object3:*, reg object4:V, reg p1:p(V +), reg r5:V, reg sym:cls, reg base:cls, reg guard:L, reg r7:V, reg r8:V, reg object5:*, reg object6:V, reg oldClass:cls, reg r9:V, reg cl:*, reg cl1:V, reg c1:L, reg cl3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg cl4:*, reg cl5:V, reg r10:V, reg __:cls, reg r11:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r14:V, reg r15:R, reg r16:V, reg cl6:*, reg cl7:V, reg length:cls, reg r17:V, reg r18:V, reg c2:L, reg cat:cls, reg paste:cls, reg sQuote:cls, reg cl8:*, reg cl9:V, reg p2:p(V +), reg r20:V, reg p3:p(V +), reg r22:V, reg p4:p(V +), reg r24:V, reg cat1:cls, reg nrow:cls, reg object7:*, reg object8:V, reg p5:p(V +), reg r27:V, reg p6:p(V +), reg sym2:cls, reg base2:cls, reg guard2:L, reg r29:V, reg r30:V, reg object9:*, reg object10:V, reg length1:cls, reg r31:V, reg p7:p(V +), reg p8:*, reg p9:V, reg r33:V, reg c3:L, reg p10:p(V +), reg p11:*, reg p12:V, reg r35:V, reg c4:L, reg p13:p(V +), reg r37:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r38:V, reg r39:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r40:V, reg r41:V, reg list:cls, reg ddd1:dots?, reg r42:V, reg length2:cls, reg r43:V, reg c5:L, reg c7:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r44:V, reg c10:L, reg r45:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r48:V, reg c13:L, reg r49:S, reg r50:V, reg l:*, reg l1:V, reg names:cls, reg r51:V, reg r52:V, reg any:cls, reg r53:V, reg c14:L, reg c15:V, reg c17:L, reg sym7:cls, reg base7:cls, reg guard7:L, reg r54:V, reg r55:V, reg NextMethod:cls, reg ddd2:dots?, reg r56:V, reg invisible:cls, reg r57:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r58:V, reg r59:V, reg NextMethod1:cls, reg structure:cls, reg r60:V, reg p14:p(V +), reg ddd3:dots?, reg r62:V, reg invisible1:cls, reg r63:V |
    mkenv;
    st object = object;
    st `...` = ddd;
    is_data_frame = ldf `is.data.frame`;
    check L15() else D0();
  D0():
    deopt 1 [];
  L15():
    p = prom<V +>{
      object1 = ld object;
      object2 = force? object1;
      checkMissing(object2);
      return object2;
    };
    r1 = dyn is_data_frame(p);
    check L16() else D1();
  D1():
    deopt 3 [r1];
  L16():
    r2 = `!`(r1);
    c = `as.logical`(r2);
    if c then L17() else L0();
  L0():
    goto L1();
  L1():
    sym = ldf oldClass;
    base = ldf oldClass in base;
    guard = `==`.4(sym, base);
    if guard then L23() else L24();
  L17():
    warning = ldf warning;
    check L18() else D2();
  D2():
    deopt 6 [];
  L2(r8):
    st cl = r8;
    cl = ld cl;
    check L27() else D8();
  L18():
    r3 = dyn warning("str.data.frame() called with non-data.frame -- coercing to one.");
    check L19() else D3();
  L23():
    object5 = ld object;
    check L25() else D6();
  L24():
    r7 = dyn base(<sym object>);
    goto L2(r7);
  D3():
    deopt 8 [r3];
  D6():
    deopt 18 [object5];
  D8():
    deopt 23 [cl];
  L19():
    data_frame = ldf `data.frame`;
    check L20() else D4();
  L25():
    object6 = force? object5;
    checkMissing(object6);
    oldClass = ldf oldClass in base;
    r9 = dyn oldClass(object6);
    check L26() else D7();
  L27():
    cl1 = force? cl;
    checkMissing(cl1);
    c1 = `is.object`(cl1);
    if c1 then L28() else L29(cl1);
  D4():
    deopt 10 [];
  D7():
    deopt 21 [r9];
  L3(dx1):
    st cl = dx1;
    sym1 = ldf length;
    base1 = ldf length in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L32() else L33();
  L20():
    p1 = prom<V +>{
      object3 = ld object;
      object4 = force? object3;
      checkMissing(object4);
      return object4;
    };
    r5 = dyn data_frame(p1);
    check L21() else D5();
  L26():
    goto L2(r9);
  L28():
    dr = tryDispatchBuiltin.1("[", cl1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L30() else L29(dr);
  L29(cl3):
    cl4 = ld cl;
    check L31() else D9();
  D5():
    deopt 12 [r5];
  D9():
    deopt 25 [cl3, cl4];
  L4(r15, r16):
    r18 = `<`(r15, r16);
    c2 = `as.logical`(r18);
    if c2 then L36() else L5();
  L21():
    st object = r5;
    goto L1();
  L30():
    dx = getTryDispatchBuiltinValue(dr);
    goto L3(dx);
  L31():
    cl5 = force? cl4;
    checkMissing(cl5);
    r10 = `!=`(cl5, "data.frame");
    __ = ldf `[` in base;
    r11 = dyn __(cl3, r10);
    goto L3(r11);
  L32():
    cl6 = ld cl;
    check L34() else D10();
  L33():
    r14 = dyn base1(<sym cl>);
    goto L4(0.0, r14);
  D10():
    deopt 34 [0.0, cl6];
  L5():
    goto L6();
  L6():
    cat1 = ldf cat;
    check L40() else D14();
  L34():
    cl7 = force? cl6;
    checkMissing(cl7);
    length = ldf length in base;
    r17 = dyn length(cl7);
    check L35() else D11();
  L36():
    cat = ldf cat;
    check L37() else D12();
  D11():
    deopt 37 [0.0, r17];
  D12():
    deopt 40 [];
  D14():
    deopt 48 [];
  L35():
    goto L4(0.0, r17);
  L37():
    p4 = prom<V +>{
      paste = ldf paste;
      p3 = prom<V +>{
        sQuote = ldf sQuote;
        p2 = prom<V +>{
          cl8 = ld cl;
          cl9 = force? cl8;
          checkMissing(cl9);
          return cl9;
        };
        r20 = dyn sQuote(p2);
        return r20;
      };
      r22 = dyn paste[, collapse](p3, ", ");
      return r22;
    };
    r24 = dyn cat("Classes", p4, "and ");
    check L38() else D13();
  L40():
    p6 = prom<V +>{
      nrow = ldf nrow;
      p5 = prom<V +>{
        object7 = ld object;
        object8 = force? object7;
        checkMissing(object8);
        return object8;
      };
      r27 = dyn nrow(p5);
      return r27;
    };
    p7 = prom<V +>{
      sym2 = ldf length;
      base2 = ldf length in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L1() else L2();
    L0(r30):
      st p = r30;
      visible.0();
      return r30;
    L1():
      object9 = ld object;
      object10 = force? object9;
      checkMissing(object10);
      length1 = ldf length in base;
      r31 = dyn length1(object10);
      goto L0(r31);
    L2():
      r29 = dyn base2(<sym object>);
      goto L0(r29);
    };
    p10 = prom<V +>{
      p8 = ld p;
      p9 = force? p8;
      checkMissing(p9);
      r33 = `!=`(p9, 1.0);
      c3 = `as.logical`(r33);
      if c3 then L1() else L0();
    L0():
      invisible.0();
      return NULL;
    L1():
      return "s";
    };
    p13 = prom<V +>{
      p11 = ld p;
      p12 = force? p11;
      checkMissing(p12);
      r35 = `>`(p12, 0.0);
      c4 = `as.logical`(r35);
      if c4 then L1() else L0();
    L0():
      invisible.0();
      return NULL;
    L1():
      return ":";
    };
    r37 = dyn cat1[, , , , , , , , sep]("'data.frame':\t", p6, " obs. of  ", p7, " variable", p10, p13, "\n", "");
    check L41() else D15();
  D13():
    deopt 44 [r24];
  D15():
    deopt 59 [r37];
  L38():
    goto L6();
  L41():
    sym3 = ldf length;
    base3 = ldf length in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L42() else L43();
  L7(r39):
    c5 = `as.logical`(r39);
    if c5 then L49() else L9(c5);
  L42():
    sym4 = ldf list;
    base4 = ldf list in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L44() else L45();
  L43():
    r38 = dyn base3(<lang `<-`(l, list(...))>);
    goto L7(r38);
  L8(r41):
    st l = r41;
    length2 = ldf length in base;
    r43 = dyn length2(r41);
    check L48() else D18();
  L9(c7):
    c17 = `as.logical`(c7);
    if c17 then L58() else L12();
  L44():
    list = ldf list;
    check L46() else D16();
  L45():
    r40 = dyn base4(<sym ...>);
    goto L8(r40);
  L49():
    sym5 = ldf any;
    base5 = ldf any in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L50() else L51();
  D16():
    deopt 64 [];
  D18():
    deopt 69 [r43];
  L10(c10, r45):
    c14 = `as.logical`(r45);
    c15 = `&&`(c10, c14);
    goto L9(c15);
  L12():
    sym8 = ldf invisible;
    base8 = ldf invisible in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L65() else L66();
  L46():
    ddd1 = ld `...`;
    r42 = dyn list[`...`](ddd1);
    check L47() else D17();
  L48():
    goto L7(r43);
  L50():
    sym6 = ldf names;
    base6 = ldf names in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L52() else L53();
  L51():
    r44 = dyn base5(<lang `==`("give.length", names(l))>);
    goto L10(c5, r44);
  L58():
    sym7 = ldf invisible;
    base7 = ldf invisible in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L59() else L60();
  D17():
    deopt 66 [r42];
  L11(c13, r49, r50):
    r52 = `==`(r49, r50);
    any = ldf any in base;
    r53 = dyn any(r52);
    check L56() else D21();
  L13(r55):
    popenv;
    return r55;
  L14(r59):
    popenv;
    return r59;
  L47():
    goto L8(r42);
  L52():
    l = ld l;
    check L54() else D19();
  L53():
    r48 = dyn base6(<sym l>);
    goto L11(c5, "give.length", r48);
  L59():
    NextMethod = ldf NextMethod;
    check L61() else D22();
  L60():
    r54 = dyn base7(<lang NextMethod("str", ...)>);
    goto L13(r54);
  L65():
    NextMethod1 = ldf NextMethod;
    check L67() else D25();
  L66():
    r58 = dyn base8(<lang NextMethod("str", give.length=structure(FALSE, from="data.frame"), ...)>);
    goto L14(r58);
  D19():
    deopt 75 [c5, "give.length", l];
  D21():
    deopt 81 [c13, r53];
  D22():
    deopt 86 [];
  D25():
    deopt 95 [];
  L54():
    l1 = force? l;
    checkMissing(l1);
    names = ldf names in base;
    r51 = dyn names(l1);
    check L55() else D20();
  L56():
    goto L10(c13, r53);
  L61():
    ddd2 = ld `...`;
    r56 = dyn NextMethod[, `...`]("str", ddd2);
    check L62() else D23();
  L67():
    p14 = prom<V +>{
      structure = ldf structure;
      r60 = dyn structure[, from](FALSE, "data.frame");
      return r60;
    };
    ddd3 = ld `...`;
    r62 = dyn NextMethod1[, `give.length`, `...`]("str", p14, ddd3);
    check L68() else D26();
  D20():
    deopt 78 [c5, "give.length", r51];
  D23():
    deopt 89 [r56];
  D26():
    deopt 100 [r62];
  L55():
    goto L11(c5, "give.length", r51);
  L62():
    invisible = ldf invisible in base;
    r57 = dyn invisible(r56);
    check L63() else D24();
  L68():
    invisible1 = ldf invisible in base;
    r63 = dyn invisible1(r62);
    check L69() else D27();
  D24():
    deopt 91 [r57];
  D27():
    deopt 102 [r63];
  L63():
    goto L13(r57);
  L69():
    goto L14(r63);
  }
}