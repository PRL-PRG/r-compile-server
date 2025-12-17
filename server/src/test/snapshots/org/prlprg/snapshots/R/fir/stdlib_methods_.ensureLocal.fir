fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1415598160;
    st `.ensureLocal` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1415598160(object, where) {
  (reg object:*, reg where:*) -+> V { var object:*, var where:*, reg is:cls, reg object1:*, reg object2:V, reg p:p(V +), reg r1:V, reg r2:V, reg c:L, reg stop:cls, reg gettextf:cls, reg dQuote:cls, reg sym:cls, reg base:cls, reg guard:L, reg r3:V, reg r4:V, reg object3:*, reg object4:V, reg class:cls, reg r5:V, reg p1:p(V +), reg r7:V, reg p2:p(V +), reg dQuote1:cls, reg r9:V, reg p3:p(V +), reg r11:V, reg p4:p(V +), reg r13:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r15:V, reg r16:V, reg object5:*, reg object6:V, reg as_environment:cls, reg r17:V, reg exists:cls, reg where1:*, reg where2:V, reg p5:p(V +), reg r19:V, reg c1:L, reg get:cls, reg where3:*, reg where4:V, reg p6:p(V +), reg r21:V, reg rev:cls, reg sym2:cls, reg base2:cls, reg guard2:L, reg r22:V, reg r23:V, reg locals:*, reg locals1:V, reg r24:I, reg p7:p(V +), reg r26:V, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c2:L, reg x:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r27:V, reg i7:I, reg r28:V, reg selfEnv:*, reg selfEnv1:V, reg locals2:*, reg locals3:V, reg c3:L, reg i9:I, reg locals5:V, reg dr:V, reg dc:L, reg dx:V, reg i11:I, reg dx1:V, reg i12:*, reg i13:V, reg __:cls, reg r29:V, reg identical:cls, reg r30:V, reg c4:L, reg object7:*, reg object8:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r33:V, reg r34:V, reg list:cls, reg r35:V, reg as_list:cls, reg where5:*, reg where6:V, reg p8:p(V +), reg r37:V, reg s1:V, reg l1:I, reg i19:I, reg i20:I, reg i21:I, reg c5:L, reg x1:V, reg is1:cls, reg obj:*, reg obj1:V, reg p9:p(V +), reg r39:V, reg c6:L, reg i25:I, reg c8:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r40:V, reg i28:I, reg c11:L, reg r41:V, reg selfEnv2:*, reg selfEnv3:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r42:V, reg i31:I, reg c14:L, reg r43:V, reg obj2:*, reg obj3:V, reg as_environment1:cls, reg r44:V, reg identical1:cls, reg r45:V, reg c15:L, reg c16:V, reg c18:L, reg obj4:*, reg obj5:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r47:V, reg r48:V, reg what:*, reg what1:V, reg c19:V, reg c20:L, reg stop1:cls, reg r49:V, reg _shallowCopy:cls, reg object9:*, reg object10:V, reg p10:p(V +), reg selfEnv4:*, reg selfEnv5:V, reg p11:p(V +), reg r53:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r54:V, reg r55:V, reg value:*, reg value1:V, reg as_environment2:cls, reg r56:V, reg l2:*, reg c21:L, reg r58:V, reg l4:*, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r65:V, reg r66:V, reg l7:*, reg r67:V, reg r68:V, reg locals6:*, reg locals7:V, reg length:cls, reg r69:V, reg r70:V, reg ____:cls, reg r71:V, reg assign:cls, reg locals8:*, reg locals9:V, reg p12:p(V +), reg where7:*, reg where8:V, reg p13:p(V +), reg r74:V, reg value2:*, reg value3:V |
    mkenv;
    st object = object;
    st where = where;
    is = ldf is;
    check L26() else D0();
  D0():
    deopt 1 [];
  L26():
    p = prom<V +>{
      object1 = ld object;
      object2 = force? object1;
      checkMissing(object2);
      return object2;
    };
    r1 = dyn is(p, "envRefClass");
    check L27() else D1();
  D1():
    deopt 4 [r1];
  L27():
    r2 = `!`(r1);
    c = `as.logical`(r2);
    if c then L28() else L0();
  L0():
    goto L1();
  L1():
    sym1 = ldf `as.environment`;
    base1 = ldf `as.environment` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L32() else L33();
  L28():
    stop = ldf stop;
    check L29() else D2();
  D2():
    deopt 7 [];
  L2(r16):
    st selfEnv = r16;
    exists = ldf exists;
    check L36() else D6();
  L29():
    p4 = prom<V +>{
      gettextf = ldf gettextf;
      p2 = prom<V +>{
        dQuote = ldf dQuote;
        p1 = prom<V +>{
          sym = ldf class;
          base = ldf class in base;
          guard = `==`.4(sym, base);
          if guard then L1() else L2();
        L0(r4):
          return r4;
        L1():
          object3 = ld object;
          object4 = force? object3;
          checkMissing(object4);
          class = ldf class in base;
          r5 = dyn class(object4);
          goto L0(r5);
        L2():
          r3 = dyn base(<sym object>);
          goto L0(r3);
        };
        r7 = dyn dQuote(p1);
        return r7;
      };
      p3 = prom<V +>{
        dQuote1 = ldf dQuote;
        r9 = dyn dQuote1("envRefClass");
        return r9;
      };
      r11 = dyn gettextf("Class %s is not a subclass of %s; functional semantics not defined for this class", p2, p3);
      return r11;
    };
    r13 = dyn stop(p4);
    check L30() else D3();
  L32():
    object5 = ld object;
    check L34() else D4();
  L33():
    r15 = dyn base1(<sym object>);
    goto L2(r15);
  D3():
    deopt 9 [r13];
  D4():
    deopt 14 [object5];
  D6():
    deopt 20 [];
  L30():
    goto L1();
  L34():
    object6 = force? object5;
    checkMissing(object6);
    as_environment = ldf `as.environment` in base;
    r17 = dyn as_environment(object6);
    check L35() else D5();
  L36():
    p5 = prom<V +>{
      where1 = ld where;
      where2 = force? where1;
      checkMissing(where2);
      return where2;
    };
    r19 = dyn exists[, envir, inherits](".localRefObjects", p5, FALSE);
    check L37() else D7();
  D5():
    deopt 17 [r17];
  D7():
    deopt 26 [r19];
  L35():
    goto L2(r17);
  L37():
    c1 = `as.logical`(r19);
    if c1 then L38() else L3();
  L3():
    sym4 = ldf list;
    base4 = ldf list in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L58() else L59();
  L10():
    st what = NULL;
    as_list = ldf `as.list`;
    check L61() else D18();
  L38():
    get = ldf get;
    check L39() else D8();
  D8():
    deopt 28 [];
  D18():
    deopt 73 [];
  L11(r34):
    st locals = r34;
    goto L10();
  L39():
    p6 = prom<V +>{
      where3 = ld where;
      where4 = force? where3;
      checkMissing(where4);
      return where4;
    };
    r21 = dyn get[, envir](".localRefObjects", p6);
    check L40() else D9();
  L58():
    list = ldf list in base;
    r35 = dyn list();
    check L60() else D17();
  L59():
    r33 = dyn base4();
    goto L11(r33);
  L61():
    p8 = prom<V +>{
      where5 = ld where;
      where6 = force? where5;
      checkMissing(where6);
      return where6;
    };
    r37 = dyn as_list[, `all.names`](p8, TRUE);
    check L62() else D19();
  D9():
    deopt 32 [r21];
  D17():
    deopt 67 [r35];
  D19():
    deopt 77 [r37];
  L40():
    st locals = r21;
    rev = ldf rev;
    check L41() else D10();
  L60():
    goto L11(r35);
  L62():
    s1 = toForSeq(r37);
    l1 = length(s1);
    i19 = 0;
    goto L12(i19);
  D10():
    deopt 35 [];
  L12(i20):
    i21 = `+`.1(i20, 1);
    c5 = `<`.1(l1, i21);
    if c5 then L63() else L19();
  L41():
    p7 = prom<V +>{
      sym2 = ldf seq_along;
      base2 = ldf seq_along in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L1() else L2();
    L0(r23):
      return r23;
    L1():
      locals = ld locals;
      locals1 = force? locals;
      checkMissing(locals1);
      r24 = seq_along(locals1);
      goto L0(r24);
    L2():
      r22 = dyn base2(<sym locals>);
      goto L0(r22);
    };
    r26 = dyn rev(p7);
    check L42() else D11();
  D11():
    deopt 37 [r26];
  L17():
    sym7 = ldf `is.null`;
    base7 = ldf `is.null` in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L80() else L81();
  L19():
    x1 = `[[`(s1, i21, NULL, TRUE);
    st obj = x1;
    is1 = ldf is;
    check L64() else D20();
  L42():
    s = toForSeq(r26);
    l = length(s);
    i = 0;
    goto L4(i);
  L63():
    goto L17();
  D20():
    deopt 79 [i21];
  L4(i1):
    i2 = `+`.1(i1, 1);
    c2 = `<`.1(l, i2);
    if c2 then L43() else L9();
  L20(r48):
    c20 = `as.logical`(r48);
    if c20 then L83() else L21();
  L64():
    p9 = prom<V +>{
      obj = ld obj;
      obj1 = force? obj;
      checkMissing(obj1);
      return obj1;
    };
    r39 = dyn is1(p9, "envRefClass");
    check L65() else D21();
  L80():
    what = ld what;
    check L82() else D27();
  L81():
    r47 = dyn base7(<sym what>);
    goto L20(r47);
  D21():
    deopt 82 [i21, r39];
  D27():
    deopt 114 [what];
  L9():
    x = `[[`(s, i2, NULL, TRUE);
    st i = x;
    sym3 = ldf identical;
    base3 = ldf identical in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L44() else L45();
  L21():
    goto L22();
  L22():
    _shallowCopy = ldf `.shallowCopy`;
    check L87() else D30();
  L43():
    goto L10();
  L65():
    c6 = `as.logical`(r39);
    if c6 then L66() else L13(i21, c6);
  L82():
    what1 = force? what;
    checkMissing(what1);
    c19 = `==`(what1, NULL);
    goto L20(c19);
  L83():
    stop1 = ldf stop;
    check L84() else D28();
  D28():
    deopt 118 [];
  D30():
    deopt 124 [];
  L5(i7, r28):
    c4 = `as.logical`(r28);
    if c4 then L53() else L7();
  L13(i25, c8):
    c18 = `as.logical`(c8);
    if c18 then L76() else L16();
  L44():
    selfEnv = ld selfEnv;
    check L46() else D12();
  L45():
    r27 = dyn base3(<sym selfEnv>, <lang `[[`(locals, i)>);
    goto L5(i2, r27);
  L66():
    sym5 = ldf identical;
    base5 = ldf identical in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L67() else L68();
  L84():
    r49 = dyn stop1("Could not find local object in supplied environment");
    check L85() else D29();
  L87():
    p10 = prom<V +>{
      object9 = ld object;
      object10 = force? object9;
      checkMissing(object10);
      return object10;
    };
    p11 = prom<V +>{
      selfEnv4 = ld selfEnv;
      selfEnv5 = force? selfEnv4;
      checkMissing(selfEnv5);
      return selfEnv5;
    };
    r53 = dyn _shallowCopy(p10, p11);
    check L88() else D31();
  D12():
    deopt 40 [i2, selfEnv];
  D29():
    deopt 120 [r49];
  D31():
    deopt 127 [r53];
  L7():
    goto L4(i7);
  L14(i28, c11, r41):
    c15 = `as.logical`(r41);
    c16 = `&&`(c11, c15);
    goto L13(i28, c16);
  L16():
    goto L12(i25);
  L46():
    selfEnv1 = force? selfEnv;
    checkMissing(selfEnv1);
    locals2 = ld locals;
    check L47() else D13();
  L53():
    object7 = ld object;
    check L54() else D16();
  L67():
    selfEnv2 = ld selfEnv;
    check L69() else D22();
  L68():
    r40 = dyn base5(<sym selfEnv>, <lang as.environment(obj)>);
    goto L14(i21, c6, r40);
  L76():
    obj4 = ld obj;
    check L77() else D26();
  L85():
    goto L22();
  L88():
    st value = r53;
    sym8 = ldf `as.environment`;
    base8 = ldf `as.environment` in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L89() else L90();
  D13():
    deopt 42 [i2, locals2];
  D16():
    deopt 56 [i7, object7];
  D22():
    deopt 85 [i21, c6, selfEnv2];
  D26():
    deopt 103 [i25, obj4];
  L23(r55):
    l2 = ld locals;
    c21 = `is.object`(l2);
    if c21 then L93() else L94(r55, l2);
  L47():
    locals3 = force? locals2;
    checkMissing(locals3);
    c3 = `is.object`(locals3);
    if c3 then L48() else L49(i2, locals3);
  L54():
    object8 = force? object7;
    checkMissing(object8);
    popenv;
    return object8;
  L69():
    selfEnv3 = force? selfEnv2;
    checkMissing(selfEnv3);
    sym6 = ldf `as.environment`;
    base6 = ldf `as.environment` in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L70() else L71();
  L77():
    obj5 = force? obj4;
    checkMissing(obj5);
    st what = obj5;
    goto L17();
  L89():
    value = ld value;
    check L91() else D32();
  L90():
    r54 = dyn base8(<sym value>);
    goto L23(r54);
  D32():
    deopt 131 [value];
  L6(i11, dx1):
    identical = ldf identical in base;
    r30 = dyn identical(selfEnv1, dx1, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
    check L52() else D15();
  L15(i31, c14, r43):
    identical1 = ldf identical in base;
    r45 = dyn identical1(selfEnv3, r43, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
    check L74() else D25();
  L24(dx3):
    st locals = dx3;
    assign = ldf assign;
    check L100() else D36();
  L48():
    dr = tryDispatchBuiltin.1("[[", locals3);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L50() else L49(i2, dr);
  L49(i9, locals5):
    i12 = ld i;
    check L51() else D14();
  L70():
    obj2 = ld obj;
    check L72() else D23();
  L71():
    r42 = dyn base6(<sym obj>);
    goto L15(i21, c6, r42);
  L91():
    value1 = force? value;
    checkMissing(value1);
    as_environment2 = ldf `as.environment` in base;
    r56 = dyn as_environment2(value1);
    check L92() else D33();
  L93():
    dr2 = tryDispatchBuiltin.0("[[<-", l2, r55);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L95() else L94(r55, dr2);
  L94(r58, l4):
    sym9 = ldf length;
    base9 = ldf length in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L96() else L97();
  D14():
    deopt 44 [i9, locals5, i12];
  D15():
    deopt 55 [i11, r30];
  D23():
    deopt 89 [i21, c6, obj2];
  D25():
    deopt 101 [i31, c14, r45];
  D33():
    deopt 134 [r56];
  D36():
    deopt 147 [];
  L25(r66, l7, r67, r68):
    r70 = `+`(r68, 1.0);
    ____ = ldf `[[<-` in base;
    r71 = dyn ____(l7, r67, r70);
    goto L24(r71);
  L50():
    dx = getTryDispatchBuiltinValue(dr);
    goto L6(i2, dx);
  L51():
    i13 = force? i12;
    __ = ldf `[[` in base;
    r29 = dyn __(locals5, i13);
    goto L6(i9, r29);
  L52():
    goto L5(i11, r30);
  L72():
    obj3 = force? obj2;
    checkMissing(obj3);
    as_environment1 = ldf `as.environment` in base;
    r44 = dyn as_environment1(obj3);
    check L73() else D24();
  L74():
    goto L14(i31, c14, r45);
  L92():
    goto L23(r56);
  L95():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L24(dx2);
  L96():
    locals6 = ld locals;
    check L98() else D34();
  L97():
    r65 = dyn base9(<sym locals>);
    goto L25(r58, l4, r55, r65);
  L100():
    p12 = prom<V +>{
      locals8 = ld locals;
      locals9 = force? locals8;
      checkMissing(locals9);
      return locals9;
    };
    p13 = prom<V +>{
      where7 = ld where;
      where8 = force? where7;
      checkMissing(where8);
      return where8;
    };
    r74 = dyn assign[, , envir](".localRefObjects", p12, p13);
    check L101() else D37();
  D24():
    deopt 92 [i21, c6, r44];
  D34():
    deopt 138 [r58, l4, r55, locals6];
  D37():
    deopt 152 [r74];
  L73():
    goto L15(i21, c6, r44);
  L98():
    locals7 = force? locals6;
    checkMissing(locals7);
    length = ldf length in base;
    r69 = dyn length(locals7);
    check L99() else D35();
  L101():
    value2 = ld value;
    check L102() else D38();
  D35():
    deopt 141 [r58, l4, r55, r69];
  D38():
    deopt 153 [value2];
  L99():
    goto L25(r58, l4, r55, r69);
  L102():
    value3 = force? value2;
    checkMissing(value3);
    popenv;
    return value3;
  }
}