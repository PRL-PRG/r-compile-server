fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1246119658;
    st `write.csv` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1246119658(`...`) {
  (reg ddd:dots) -+> V { var `...`:dots?, reg match_call:cls, reg r:V, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg r2:V, reg c:cls, reg r3:V, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c1:L, reg x:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r4:V, reg i7:I, reg r5:V, reg Call:*, reg Call1:V, reg c2:L, reg i9:I, reg Call3:V, reg dr:V, reg dc:L, reg dx:V, reg i11:I, reg dx1:V, reg argname:*, reg argname1:V, reg __:cls, reg r6:V, reg c3:V, reg r7:V, reg c4:L, reg warning:cls, reg gettextf:cls, reg argname2:*, reg argname3:V, reg p:p(V +), reg r9:V, reg p1:p(V +), reg r11:V, reg i14:I, reg eval_parent:cls, reg Call4:*, reg Call5:V, reg c5:L, reg Call7:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r13:V, reg p2:p(V +), reg r15:V, reg l1:*, reg c6:L, reg r17:dots, reg l3:*, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg r20:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r21:V, reg r22:V, reg rn:*, reg rn1:V, reg c7:L, reg c8:L, reg c10:V, reg rn2:*, reg rn3:V, reg r23:V, reg c11:L, reg c12:V, reg c14:L, reg r24:L, reg l4:*, reg c15:L, reg r26:L, reg l6:*, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg r29:V, reg l7:*, reg c16:L, reg r31:S, reg l9:*, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg r34:V, reg l10:*, reg c17:L, reg r36:S, reg l12:*, reg dr10:V, reg dc5:L, reg dx10:V, reg dx11:V, reg r39:V, reg l13:*, reg c18:L, reg r41:S, reg l15:*, reg dr12:V, reg dc6:L, reg dx12:V, reg dx13:V, reg r44:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r45:V, reg r46:V, reg quote:cls, reg r47:V, reg l16:*, reg c19:L, reg r49:V, reg l18:*, reg dr14:V, reg dc7:L, reg dx14:V, reg dx15:V, reg ____:cls, reg r52:V, reg eval_parent1:cls, reg Call8:*, reg Call9:V, reg p3:p(V +), reg r54:V |
    mkenv;
    st `...` = ddd;
    match_call = ldf `match.call`;
    check L13() else D0();
  D0():
    deopt 1 [];
  L13():
    r = dyn match_call[`expand.dots`](TRUE);
    check L14() else D1();
  D1():
    deopt 4 [r];
  L14():
    st Call = r;
    sym = ldf c;
    base = ldf c in base;
    guard = `==`.4(sym, base);
    if guard then L15() else L16();
  L0(r2):
    s = toForSeq(r2);
    l = length(s);
    i = 0;
    goto L1(i);
  L15():
    c = ldf c in base;
    r3 = dyn c("append", "col.names", "sep", "dec", "qmethod");
    check L17() else D2();
  L16():
    r1 = dyn base("append", "col.names", "sep", "dec", "qmethod");
    goto L0(r1);
  D2():
    deopt 14 [r3];
  L1(i1):
    i2 = `+`.1(i1, 1);
    c1 = `<`.1(l, i2);
    if c1 then L18() else L6();
  L17():
    goto L0(r3);
  L6():
    x = `[[`(s, i2, NULL, TRUE);
    st argname = x;
    sym1 = ldf `is.null`;
    base1 = ldf `is.null` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L19() else L20();
  L18():
    eval_parent = ldf `eval.parent`;
    check L30() else D7();
  D7():
    deopt 35 [];
  L2(i7, r5):
    r7 = `!`(r5);
    c4 = `as.logical`(r7);
    if c4 then L26() else L4();
  L19():
    Call = ld Call;
    check L21() else D3();
  L20():
    r4 = dyn base1(<lang `[[`(Call, argname)>);
    goto L2(i2, r4);
  L30():
    p2 = prom<V +>{
      Call4 = ld Call;
      Call5 = force? Call4;
      checkMissing(Call5);
      c5 = `is.object`(Call5);
      if c5 then L1() else L2(Call5);
    L0(dx3):
      return dx3;
    L1():
      dr2 = tryDispatchBuiltin.1("$", Call5);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L3() else L2(dr2);
    L2(Call7):
      r13 = `$`(Call7, <sym row.names>);
      goto L0(r13);
    L3():
      dx2 = getTryDispatchBuiltinValue(dr2);
      goto L0(dx2);
    };
    r15 = dyn eval_parent(p2);
    check L31() else D8();
  D3():
    deopt 16 [i2, Call];
  D8():
    deopt 37 [r15];
  L4():
    goto L5(i7);
  L5(i14):
    goto L1(i14);
  L21():
    Call1 = force? Call;
    checkMissing(Call1);
    c2 = `is.object`(Call1);
    if c2 then L22() else L23(i2, Call1);
  L26():
    warning = ldf warning;
    check L27() else D5();
  L31():
    st rn = r15;
    l1 = ld Call;
    c6 = `is.object`(l1);
    if c6 then L33() else L34(NULL, l1);
  D5():
    deopt 24 [i7];
  L3(i11, dx1):
    c3 = `==`(dx1, NULL);
    goto L2(i11, c3);
  L22():
    dr = tryDispatchBuiltin.1("[[", Call1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L24() else L23(i2, dr);
  L23(i9, Call3):
    argname = ld argname;
    check L25() else D4();
  L27():
    p1 = prom<V +>{
      gettextf = ldf gettextf;
      p = prom<V +>{
        argname2 = ld argname;
        argname3 = force? argname2;
        checkMissing(argname3);
        return argname3;
      };
      r9 = dyn gettextf("attempt to set '%s' ignored", p);
      return r9;
    };
    r11 = dyn warning[, domain](p1, NA_LGL);
    check L28() else D6();
  L32(dx5):
    st Call = dx5;
    sym2 = ldf `is.logical`;
    base2 = ldf `is.logical` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L36() else L37();
  L33():
    dr4 = tryDispatchBuiltin.0("$<-", l1, NULL);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L35() else L34(NULL, dr4);
  L34(r17, l3):
    r20 = `$<-`(l3, <sym append>, NULL);
    goto L32(r20);
  D4():
    deopt 18 [i9, Call3, argname];
  D6():
    deopt 28 [i7, r11];
  L7(r22):
    c8 = `as.logical`(r22);
    if c8 then L39() else L8(c8);
  L24():
    dx = getTryDispatchBuiltinValue(dr);
    goto L3(i2, dx);
  L25():
    argname1 = force? argname;
    __ = ldf `[[` in base;
    r6 = dyn __(Call3, argname1);
    goto L3(i9, r6);
  L28():
    goto L5(i7);
  L35():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L32(dx4);
  L36():
    rn = ld rn;
    check L38() else D9();
  L37():
    r21 = dyn base2(<sym rn>);
    goto L7(r21);
  D9():
    deopt 45 [rn];
  L8(c10):
    c14 = `as.logical`(c10);
    if c14 then L42() else L9();
  L38():
    rn1 = force? rn;
    checkMissing(rn1);
    c7 = `is.logical`(rn1);
    goto L7(c7);
  L39():
    rn2 = ld rn;
    check L40() else D10();
  D10():
    deopt 48 [c8, rn2];
  L9():
    goto L10(NA_LGL);
  L10(r24):
    l4 = ld Call;
    c15 = `is.object`(l4);
    if c15 then L45() else L46(r24, l4);
  L40():
    rn3 = force? rn2;
    checkMissing(rn3);
    r23 = `!`(rn3);
    c11 = `as.logical`(r23);
    c12 = `&&`(c8, c11);
    goto L8(c12);
  L42():
    goto L10(TRUE);
  L44(dx7):
    st Call = dx7;
    l7 = ld Call;
    c16 = `is.object`(l7);
    if c16 then L49() else L50(",", l7);
  L45():
    dr6 = tryDispatchBuiltin.0("$<-", l4, r24);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L47() else L46(r24, dr6);
  L46(r26, l6):
    r29 = `$<-`(l6, <sym col.names>, r24);
    goto L44(r29);
  L47():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L44(dx6);
  L48(dx9):
    st Call = dx9;
    l10 = ld Call;
    c17 = `is.object`(l10);
    if c17 then L53() else L54(".", l10);
  L49():
    dr8 = tryDispatchBuiltin.0("$<-", l7, ",");
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L51() else L50(",", dr8);
  L50(r31, l9):
    r34 = `$<-`(l9, <sym sep>, ",");
    goto L48(r34);
  L51():
    dx8 = getTryDispatchBuiltinValue(dr8);
    goto L48(dx8);
  L52(dx11):
    st Call = dx11;
    l13 = ld Call;
    c18 = `is.object`(l13);
    if c18 then L57() else L58("double", l13);
  L53():
    dr10 = tryDispatchBuiltin.0("$<-", l10, ".");
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L55() else L54(".", dr10);
  L54(r36, l12):
    r39 = `$<-`(l12, <sym dec>, ".");
    goto L52(r39);
  L55():
    dx10 = getTryDispatchBuiltinValue(dr10);
    goto L52(dx10);
  L56(dx13):
    st Call = dx13;
    sym3 = ldf quote;
    base3 = ldf quote in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L60() else L61();
  L57():
    dr12 = tryDispatchBuiltin.0("$<-", l13, "double");
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L59() else L58("double", dr12);
  L58(r41, l15):
    r44 = `$<-`(l15, <sym qmethod>, "double");
    goto L56(r44);
  L11(r46):
    l16 = ld Call;
    c19 = `is.object`(l16);
    if c19 then L62() else L63(r46, l16);
  L59():
    dx12 = getTryDispatchBuiltinValue(dr12);
    goto L56(dx12);
  L60():
    quote = ldf quote in base;
    r47 = dyn quote(<lang `::`(utils, write.table)>);
    goto L11(r47);
  L61():
    r45 = dyn base3(<lang `::`(utils, write.table)>);
    goto L11(r45);
  L12(dx15):
    st Call = dx15;
    eval_parent1 = ldf `eval.parent`;
    check L65() else D11();
  L62():
    dr14 = tryDispatchBuiltin.0("[[<-", l16, r46);
    dc7 = getTryDispatchBuiltinDispatched(dr14);
    if dc7 then L64() else L63(r46, dr14);
  L63(r49, l18):
    ____ = ldf `[[<-` in base;
    r52 = dyn ____(l18, r46, 1);
    goto L12(r52);
  D11():
    deopt 83 [];
  L64():
    dx14 = getTryDispatchBuiltinValue(dr14);
    goto L12(dx14);
  L65():
    p3 = prom<V +>{
      Call8 = ld Call;
      Call9 = force? Call8;
      checkMissing(Call9);
      return Call9;
    };
    r54 = dyn eval_parent1(p3);
    check L66() else D12();
  D12():
    deopt 85 [r54];
  L66():
    popenv;
    return r54;
  }
}