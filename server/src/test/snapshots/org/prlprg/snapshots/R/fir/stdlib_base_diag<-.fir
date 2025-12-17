fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos `inner-1411039386`;
    st `diag<-` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun `inner-1411039386`(x, value) {
  (reg x:*, reg value:*) -+> V { var x:*, var value:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg x1:*, reg x2:V, reg dim:cls, reg r2:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg r4:V, reg dx:*, reg dx1:V, reg length:cls, reg r5:V, reg r6:V, reg c:L, reg stop:cls, reg r7:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r9:V, reg r10:V, reg dx2:*, reg dx3:V, reg min:cls, reg r11:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r12:V, reg r13:V, reg value1:*, reg value2:V, reg length1:cls, reg r14:V, reg len_v:*, reg len_v1:V, reg r15:V, reg c1:L, reg c3:V, reg len_v2:*, reg len_v3:V, reg len_i:*, reg len_i1:V, reg r16:V, reg c4:L, reg c5:V, reg c7:L, reg stop1:cls, reg r17:V, reg len_i2:*, reg len_i3:V, reg c8:L, reg sym4:cls, reg base4:cls, reg guard4:L, reg r19:V, reg r20:V, reg len_i4:*, reg len_i5:V, reg r21:I, reg value3:*, reg value4:V, reg l:*, reg c9:L, reg value6:V, reg l2:*, reg dr:V, reg dc:L, reg dx4:V, reg value8:V, reg dx5:V, reg cbind:cls, reg i:*, reg i1:V, reg p:p(V +), reg i2:*, reg i3:V, reg p1:p(V +), reg r24:V, reg ___:cls, reg r25:V, reg x3:*, reg x4:V |
    mkenv;
    st x = x;
    st value = value;
    sym = ldf dim;
    base = ldf dim in base;
    guard = `==`.4(sym, base);
    if guard then L13() else L14();
  L0(r1):
    st dx = r1;
    sym1 = ldf length;
    base1 = ldf length in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L17() else L18();
  L13():
    x1 = ld x;
    check L15() else D0();
  L14():
    r = dyn base(<sym x>);
    goto L0(r);
  D0():
    deopt 2 [x1];
  L1(r4):
    r6 = `!=`(r4, 2);
    c = `as.logical`(r6);
    if c then L21() else L2();
  L15():
    x2 = force? x1;
    checkMissing(x2);
    dim = ldf dim in base;
    r2 = dyn dim(x2);
    check L16() else D1();
  L17():
    dx = ld dx;
    check L19() else D2();
  L18():
    r3 = dyn base1(<sym dx>);
    goto L1(r3);
  D1():
    deopt 5 [r2];
  D2():
    deopt 9 [dx];
  L2():
    goto L3();
  L3():
    sym2 = ldf min;
    base2 = ldf min in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L25() else L26();
  L16():
    goto L0(r2);
  L19():
    dx1 = force? dx;
    checkMissing(dx1);
    length = ldf length in base;
    r5 = dyn length(dx1);
    check L20() else D3();
  L21():
    stop = ldf stop;
    check L22() else D4();
  D3():
    deopt 12 [r5];
  D4():
    deopt 16 [];
  L4(r10):
    st `len.i` = r10;
    sym3 = ldf length;
    base3 = ldf length in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L29() else L30();
  L20():
    goto L1(r5);
  L22():
    r7 = dyn stop("only matrix diagonals can be replaced");
    check L23() else D5();
  L25():
    dx2 = ld dx;
    check L27() else D6();
  L26():
    r9 = dyn base2(<sym dx>);
    goto L4(r9);
  D5():
    deopt 18 [r7];
  D6():
    deopt 23 [dx2];
  L5(r13):
    st `len.v` = r13;
    len_v = ld `len.v`;
    check L33() else D10();
  L23():
    goto L3();
  L27():
    dx3 = force? dx2;
    checkMissing(dx3);
    min = ldf min in base;
    r11 = dyn min(dx3);
    check L28() else D7();
  L29():
    value1 = ld value;
    check L31() else D8();
  L30():
    r12 = dyn base3(<sym value>);
    goto L5(r12);
  D7():
    deopt 26 [r11];
  D8():
    deopt 30 [value1];
  D10():
    deopt 35 [len_v];
  L28():
    goto L4(r11);
  L31():
    value2 = force? value1;
    checkMissing(value2);
    length1 = ldf length in base;
    r14 = dyn length1(value2);
    check L32() else D9();
  L33():
    len_v1 = force? len_v;
    checkMissing(len_v1);
    r15 = `!=`(len_v1, 1);
    c1 = `as.logical`(r15);
    if c1 then L34() else L6(c1);
  D9():
    deopt 33 [r14];
  L6(c3):
    c7 = `as.logical`(c3);
    if c7 then L38() else L7();
  L32():
    goto L5(r14);
  L34():
    len_v2 = ld `len.v`;
    check L35() else D11();
  D11():
    deopt 39 [c1, len_v2];
  L7():
    goto L8();
  L8():
    len_i2 = ld `len.i`;
    check L42() else D15();
  L35():
    len_v3 = force? len_v2;
    checkMissing(len_v3);
    len_i = ld `len.i`;
    check L36() else D12();
  L38():
    stop1 = ldf stop;
    check L39() else D13();
  D12():
    deopt 40 [c1, len_v3, len_i];
  D13():
    deopt 45 [];
  D15():
    deopt 50 [len_i2];
  L36():
    len_i1 = force? len_i;
    checkMissing(len_i1);
    r16 = `!=`(len_v3, len_i1);
    c4 = `as.logical`(r16);
    c5 = `&&`(c1, c4);
    goto L6(c5);
  L39():
    r17 = dyn stop1("replacement diagonal has wrong length");
    check L40() else D14();
  L42():
    len_i3 = force? len_i2;
    checkMissing(len_i3);
    c8 = `as.logical`(len_i3);
    if c8 then L43() else L9();
  D14():
    deopt 47 [r17];
  L9():
    goto L12();
  L12():
    x3 = ld x;
    check L54() else D20();
  L40():
    goto L8();
  L43():
    sym4 = ldf seq_len;
    base4 = ldf seq_len in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L44() else L45();
  D20():
    deopt 69 [x3];
  L10(r20):
    st i = r20;
    value3 = ld value;
    check L47() else D17();
  L44():
    len_i4 = ld `len.i`;
    check L46() else D16();
  L45():
    r19 = dyn base4(<sym len.i>);
    goto L10(r19);
  L54():
    x4 = force? x3;
    checkMissing(x4);
    popenv;
    return x4;
  D16():
    deopt 53 [len_i4];
  D17():
    deopt 57 [value3];
  L46():
    len_i5 = force? len_i4;
    checkMissing(len_i5);
    r21 = seq_len(len_i5);
    goto L10(r21);
  L47():
    value4 = force? value3;
    checkMissing(value4);
    l = ld x;
    c9 = `is.object`(l);
    if c9 then L48() else L49(value4, l);
  L11(value8, dx5):
    st x = dx5;
    goto L12();
  L48():
    dr = tryDispatchBuiltin.0("[<-", l, value4);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L50() else L49(value4, dr);
  L49(value6, l2):
    cbind = ldf cbind;
    check L51() else D18();
  D18():
    deopt 61 [value6, l2, value4];
  L50():
    dx4 = getTryDispatchBuiltinValue(dr);
    goto L11(value4, dx4);
  L51():
    p = prom<V +>{
      i = ld i;
      i1 = force? i;
      checkMissing(i1);
      return i1;
    };
    p1 = prom<V +>{
      i2 = ld i;
      i3 = force? i2;
      checkMissing(i3);
      return i3;
    };
    r24 = dyn cbind(p, p1);
    check L52() else D19();
  D19():
    deopt 64 [value6, l2, value4, r24];
  L52():
    ___ = ldf `[<-` in base;
    r25 = dyn ___(l2, value4, r24);
    goto L11(value6, r25);
  }
}