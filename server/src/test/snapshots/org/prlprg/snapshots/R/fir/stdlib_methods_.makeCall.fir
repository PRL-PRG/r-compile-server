fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3624724821;
    st `.makeCall` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3624724821(name, x) {
  (reg name:*, reg x:*) -+> V { var name:*, var x:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg formals:cls, reg x1:*, reg x2:V, reg p:p(V +), reg r3:V, reg length:cls, reg r4:V, reg n:*, reg n1:V, reg r5:V, reg c:L, reg vapply:cls, reg argls:*, reg argls1:V, reg p1:p(V +), reg r7:cls, reg p2:p(V +), reg r9:V, reg r10:V, reg n2:*, reg n3:V, reg c1:L, reg sym1:cls, reg base1:cls, reg guard1:L, reg r11:V, reg r12:V, reg argls2:*, reg argls3:V, reg names:cls, reg r13:V, reg paste0:cls, reg name1:*, reg name2:V, reg p3:p(V +), reg r16:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r17:V, reg r18:V, reg n4:*, reg n5:V, reg r19:I, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c2:L, reg x3:V, reg paste1:cls, reg Call:*, reg Call1:V, reg p4:p(V +), reg arg_names:*, reg arg_names1:V, reg c3:L, reg arg_names3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg i5:*, reg i6:V, reg __:cls, reg r21:V, reg p5:p(V +), reg noDeflt:*, reg noDeflt1:V, reg c4:L, reg noDeflt3:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg i7:*, reg i8:V, reg __1:cls, reg r23:V, reg c5:L, reg p6:p(V +), reg r25:V, reg i9:*, reg i10:V, reg n6:*, reg n7:V, reg r26:V, reg c6:L, reg paste2:cls, reg Call2:*, reg Call3:V, reg p7:p(V +), reg r28:V, reg i13:I, reg paste3:cls, reg Call4:*, reg Call5:V, reg p8:p(V +), reg r31:V |
    mkenv;
    st name = name;
    st x = x;
    sym = ldf length;
    base = ldf length in base;
    guard = `==`.4(sym, base);
    if guard then L11() else L12();
  L0(r1):
    st n = r1;
    n = ld n;
    check L16() else D3();
  L11():
    formals = ldf formals;
    check L13() else D0();
  L12():
    r = dyn base(<lang `<-`(argls, formals(x))>);
    goto L0(r);
  D0():
    deopt 3 [];
  D3():
    deopt 10 [n];
  L13():
    p = prom<V +>{
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      return x2;
    };
    r3 = dyn formals(p);
    check L14() else D1();
  L16():
    n1 = force? n;
    checkMissing(n1);
    r5 = `>`(n1, 0.0);
    c = `as.logical`(r5);
    if c then L17() else L1();
  D1():
    deopt 5 [r3];
  L1():
    goto L2(NULL);
  L2(r10):
    st noDeflt = r10;
    n2 = ld n;
    check L21() else D6();
  L14():
    st argls = r3;
    length = ldf length in base;
    r4 = dyn length(r3);
    check L15() else D2();
  L17():
    vapply = ldf vapply;
    check L18() else D4();
  D2():
    deopt 8 [r4];
  D4():
    deopt 15 [];
  D6():
    deopt 23 [n2];
  L15():
    goto L0(r4);
  L18():
    p1 = prom<V +>{
      argls = ld argls;
      argls1 = force? argls;
      checkMissing(argls1);
      return argls1;
    };
    p2 = prom<V +>{
      r7 = clos inner2501545716;
      return r7;
    };
    r9 = dyn vapply(p1, p2, NA_LGL);
    check L19() else D5();
  L21():
    n3 = force? n2;
    checkMissing(n3);
    c1 = `as.logical`(n3);
    if c1 then L22() else L3();
  D5():
    deopt 19 [r9];
  L3():
    goto L5();
  L5():
    paste0 = ldf paste0;
    check L28() else D9();
  L19():
    goto L2(r9);
  L22():
    sym1 = ldf names;
    base1 = ldf names in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L23() else L24();
  D9():
    deopt 35 [];
  L4(r12):
    st `arg.names` = r12;
    goto L5();
  L23():
    argls2 = ld argls;
    check L25() else D7();
  L24():
    r11 = dyn base1(<sym argls>);
    goto L4(r11);
  L28():
    p3 = prom<V +>{
      name1 = ld name;
      name2 = force? name1;
      checkMissing(name2);
      return name2;
    };
    r16 = dyn paste0("$", p3, "(");
    check L29() else D10();
  D7():
    deopt 27 [argls2];
  D10():
    deopt 39 [r16];
  L25():
    argls3 = force? argls2;
    checkMissing(argls3);
    names = ldf names in base;
    r13 = dyn names(argls3);
    check L26() else D8();
  L29():
    st Call = r16;
    sym2 = ldf seq_len;
    base2 = ldf seq_len in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L30() else L31();
  D8():
    deopt 30 [r13];
  L6(r18):
    s = toForSeq(r18);
    l = length(s);
    i = 0;
    goto L7(i);
  L26():
    goto L4(r13);
  L30():
    n4 = ld n;
    check L32() else D11();
  L31():
    r17 = dyn base2(<sym n>);
    goto L6(r17);
  D11():
    deopt 42 [n4];
  L7(i1):
    i2 = `+`.1(i1, 1);
    c2 = `<`.1(l, i2);
    if c2 then L33() else L10();
  L32():
    n5 = force? n4;
    checkMissing(n5);
    r19 = seq_len(n5);
    goto L6(r19);
  L10():
    x3 = `[[`(s, i2, NULL, TRUE);
    st i = x3;
    paste1 = ldf paste0;
    check L34() else D12();
  L33():
    paste3 = ldf paste0;
    check L42() else D18();
  D12():
    deopt 46 [i2];
  D18():
    deopt 68 [];
  L34():
    p4 = prom<V +>{
      Call = ld Call;
      Call1 = force? Call;
      checkMissing(Call1);
      return Call1;
    };
    p5 = prom<V +>{
      arg_names = ld `arg.names`;
      arg_names1 = force? arg_names;
      checkMissing(arg_names1);
      c3 = `is.object`(arg_names1);
      if c3 then L1() else L2(arg_names1);
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("[", arg_names1);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(arg_names3):
      i5 = ld i;
      i6 = force? i5;
      __ = ldf `[` in base;
      r21 = dyn __(arg_names3, i6);
      goto L0(r21);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    p6 = prom<V +>{
      noDeflt = ld noDeflt;
      noDeflt1 = force? noDeflt;
      checkMissing(noDeflt1);
      c4 = `is.object`(noDeflt1);
      if c4 then L2() else L3(noDeflt1);
    L0(dx3):
      c5 = `as.logical`(dx3);
      if c5 then L5() else L1();
    L2():
      dr2 = tryDispatchBuiltin.1("[[", noDeflt1);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L4() else L3(dr2);
    L3(noDeflt3):
      i7 = ld i;
      i8 = force? i7;
      __1 = ldf `[[` in base;
      r23 = dyn __1(noDeflt3, i8);
      goto L0(r23);
    L1():
      invisible.0();
      return NULL;
    L4():
      dx2 = getTryDispatchBuiltinValue(dr2);
      goto L0(dx2);
    L5():
      return " = ";
    };
    r25 = dyn paste1(p4, p5, p6);
    check L35() else D13();
  L42():
    p8 = prom<V +>{
      Call4 = ld Call;
      Call5 = force? Call4;
      checkMissing(Call5);
      return Call5;
    };
    r31 = dyn paste3(p8, ")\n");
    check L43() else D19();
  D13():
    deopt 50 [i2, r25];
  D19():
    deopt 71 [r31];
  L35():
    st Call = r25;
    i9 = ld i;
    check L36() else D14();
  L43():
    popenv;
    return r31;
  D14():
    deopt 52 [i2, i9];
  L36():
    i10 = force? i9;
    checkMissing(i10);
    n6 = ld n;
    check L37() else D15();
  D15():
    deopt 53 [i2, i10, n6];
  L37():
    n7 = force? n6;
    checkMissing(n7);
    r26 = `!=`(i10, n7);
    c6 = `as.logical`(r26);
    if c6 then L38() else L8();
  L8():
    goto L9(i2);
  L9(i13):
    goto L7(i13);
  L38():
    paste2 = ldf paste0;
    check L39() else D16();
  D16():
    deopt 57 [i2];
  L39():
    p7 = prom<V +>{
      Call2 = ld Call;
      Call3 = force? Call2;
      checkMissing(Call3);
      return Call3;
    };
    r28 = dyn paste2(p7, ", ");
    check L40() else D17();
  D17():
    deopt 60 [i2, r28];
  L40():
    st Call = r28;
    goto L9(i2);
  }
}
fun inner2501545716(x) {
  (reg x:*) -+> V { var x:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg x1:*, reg x2:V, reg c:L, reg r2:V, reg c1:L, reg c2:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg c6:L, reg r4:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r5:V, reg c9:L, reg r6:V, reg x3:*, reg x4:V, reg as_character:cls, reg r7:V, reg nzchar:cls, reg r8:V, reg c10:L, reg c11:V |
    mkenv;
    st x = x;
    sym = ldf `is.name`;
    base = ldf `is.name` in base;
    guard = `==`.4(sym, base);
    if guard then L4() else L5();
  L0(r1):
    r2 = `!`(r1);
    c1 = `as.logical`(r2);
    if c1 then L1(c1) else L7();
  L4():
    x1 = ld x;
    check L6() else D0();
  L5():
    r = dyn base(<sym x>);
    goto L0(r);
  D0():
    deopt 1 [x1];
  L1(c2):
    popenv;
    return c2;
  L6():
    x2 = force? x1;
    checkMissing(x2);
    c = `is.symbol`(x2);
    goto L0(c);
  L7():
    sym1 = ldf nzchar;
    base1 = ldf nzchar in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L8() else L9();
  L2(c6, r4):
    c10 = `as.logical`(r4);
    c11 = `||`(c6, c10);
    goto L1(c11);
  L8():
    sym2 = ldf `as.character`;
    base2 = ldf `as.character` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L10() else L11();
  L9():
    r3 = dyn base1(<lang as.character(x)>);
    goto L2(c1, r3);
  L3(c9, r6):
    nzchar = ldf nzchar in base;
    r8 = dyn nzchar(r6);
    check L14() else D3();
  L10():
    x3 = ld x;
    check L12() else D1();
  L11():
    r5 = dyn base2(<sym x>);
    goto L3(c1, r5);
  D1():
    deopt 9 [c1, x3];
  D3():
    deopt 14 [c9, r8];
  L12():
    x4 = force? x3;
    checkMissing(x4);
    as_character = ldf `as.character` in base;
    r7 = dyn as_character(x4);
    check L13() else D2();
  L14():
    goto L2(c9, r8);
  D2():
    deopt 12 [c1, r7];
  L13():
    goto L3(c1, r7);
  }
}