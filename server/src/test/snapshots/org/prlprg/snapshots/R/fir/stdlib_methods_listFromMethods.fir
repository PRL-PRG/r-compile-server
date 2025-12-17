fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1452058138;
    st listFromMethods = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1452058138(generic, where, table) {
  (reg generic:*, reg where:*, reg table:*) -+> V { var generic:*, var where:*, var table:*, reg getGeneric:cls, reg generic1:*, reg generic2:V, reg p:p(V +), reg r1:V, reg sym:cls, reg base:cls, reg guard:L, reg r2:V, reg r3:V, reg missing:cls, reg r4:V, reg c:L, reg sym1:cls, reg base1:cls, reg guard1:L, reg r5:V, reg r6:V, reg missing1:cls, reg r7:V, reg c1:L, reg _getMethodsTable:cls, reg fdef:*, reg fdef1:V, reg p1:p(V +), reg r9:V, reg r10:V, reg get:cls, reg _TableMetaName:cls, reg __:cls, reg r11:V, reg p2:p(V +), reg __1:cls, reg r13:V, reg p3:p(V +), reg r15:V, reg p4:p(V +), reg sym2:cls, reg base2:cls, reg guard2:L, reg r17:V, reg r18:V, reg where1:*, reg where2:V, reg as_environment:cls, reg r19:V, reg p5:p(V +), reg r21:V, reg environment:cls, reg fdef2:*, reg fdef3:V, reg p6:p(V +), reg r24:V, reg _getGenericSigLength:cls, reg fdef4:*, reg fdef5:V, reg p7:p(V +), reg fev:*, reg fev1:V, reg p8:p(V +), reg r27:V, reg as_list:cls, reg table1:*, reg table2:V, reg p9:p(V +), reg r29:V, reg names:cls, reg methods:*, reg methods1:V, reg p10:p(V +), reg r31:V, reg nSigArgs:*, reg nSigArgs1:V, reg r32:V, reg c2:L, reg sym3:cls, reg base3:cls, reg guard3:L, reg r33:V, reg r34:V, reg names1:*, reg names2:V, reg length:cls, reg r35:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r36:V, reg r37:V, reg n:*, reg n1:V, reg vector:cls, reg r38:V, reg textConnection:cls, reg names3:*, reg names4:V, reg p11:p(V +), reg r40:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r41:V, reg r42:V, reg n2:*, reg n3:V, reg r43:I, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c3:L, reg x:V, reg scan:cls, reg namesCon:*, reg namesCon1:V, reg p12:p(V +), reg nSigArgs2:*, reg nSigArgs3:V, reg p13:p(V +), reg r46:V, reg l1:*, reg c4:L, reg i6:I, reg r48:V, reg l3:*, reg dr:V, reg dc:L, reg dx:V, reg i8:I, reg dx1:V, reg i9:*, reg i10:V, reg ____:cls, reg r51:V, reg as_list1:cls, reg names5:*, reg names6:V, reg p14:p(V +), reg r53:V, reg new:cls, reg sigs:*, reg sigs1:V, reg p15:p(V +), reg methods2:*, reg methods3:V, reg p16:p(V +), reg _getGenericSigArgs:cls, reg fdef6:*, reg fdef7:V, reg p17:p(V +), reg fev2:*, reg fev3:V, reg p18:p(V +), reg r58:V, reg p19:p(V +), reg fdef8:*, reg fdef9:V, reg p20:p(V +), reg r61:V |
    mkenv;
    st generic = generic;
    st where = where;
    st table = table;
    getGeneric = ldf getGeneric;
    check L14() else D0();
  D0():
    deopt 1 [];
  L14():
    p = prom<V +>{
      generic1 = ld generic;
      generic2 = force? generic1;
      checkMissing(generic2);
      return generic2;
    };
    r1 = dyn getGeneric(p);
    check L15() else D1();
  D1():
    deopt 3 [r1];
  L15():
    st fdef = r1;
    sym = ldf missing;
    base = ldf missing in base;
    guard = `==`.4(sym, base);
    if guard then L16() else L17();
  L0(r3):
    c = `as.logical`(r3);
    if c then L18() else L1();
  L16():
    missing = ldf missing in base;
    r4 = dyn missing(<sym table>);
    goto L0(r4);
  L17():
    r2 = dyn base(<sym table>);
    goto L0(r2);
  L1():
    goto L5();
  L5():
    environment = ldf environment;
    check L28() else D6();
  L18():
    sym1 = ldf missing;
    base1 = ldf missing in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L19() else L20();
  D6():
    deopt 27 [];
  L2(r6):
    c1 = `as.logical`(r6);
    if c1 then L21() else L3();
  L19():
    missing1 = ldf missing in base;
    r7 = dyn missing1(<sym where>);
    goto L2(r7);
  L20():
    r5 = dyn base1(<sym where>);
    goto L2(r5);
  L28():
    p6 = prom<V +>{
      fdef2 = ld fdef;
      fdef3 = force? fdef2;
      checkMissing(fdef3);
      return fdef3;
    };
    r24 = dyn environment(p6);
    check L29() else D7();
  D7():
    deopt 29 [r24];
  L3():
    get = ldf get;
    check L25() else D4();
  L4(r10):
    st table = r10;
    goto L5();
  L21():
    _getMethodsTable = ldf `.getMethodsTable`;
    check L22() else D2();
  L29():
    st fev = r24;
    _getGenericSigLength = ldf `.getGenericSigLength`;
    check L30() else D8();
  D2():
    deopt 12 [];
  D4():
    deopt 16 [];
  D8():
    deopt 32 [];
  L22():
    p1 = prom<V +>{
      fdef = ld fdef;
      fdef1 = force? fdef;
      checkMissing(fdef1);
      return fdef1;
    };
    r9 = dyn _getMethodsTable(p1);
    check L23() else D3();
  L25():
    p4 = prom<V +>{
      _TableMetaName = ldf `.TableMetaName`;
      p2 = prom<V +>{
        __ = ldf `@` in base;
        r11 = dyn __(<sym fdef>, <sym generic>);
        return r11;
      };
      p3 = prom<V +>{
        __1 = ldf `@` in base;
        r13 = dyn __1(<sym fdef>, <sym package>);
        return r13;
      };
      r15 = dyn _TableMetaName(p2, p3);
      return r15;
    };
    p5 = prom<V +>{
      sym2 = ldf `as.environment`;
      base2 = ldf `as.environment` in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L1() else L2();
    L0(r18):
      return r18;
    L1():
      where1 = ld where;
      where2 = force? where1;
      checkMissing(where2);
      as_environment = ldf `as.environment` in base;
      r19 = dyn as_environment(where2);
      goto L0(r19);
    L2():
      r17 = dyn base2(<sym where>);
      goto L0(r17);
    };
    r21 = dyn get[, envir, inherits](p4, p5, FALSE);
    check L26() else D5();
  L30():
    p7 = prom<V +>{
      fdef4 = ld fdef;
      fdef5 = force? fdef4;
      checkMissing(fdef5);
      return fdef5;
    };
    p8 = prom<V +>{
      fev = ld fev;
      fev1 = force? fev;
      checkMissing(fev1);
      return fev1;
    };
    r27 = dyn _getGenericSigLength(p7, p8);
    check L31() else D9();
  D3():
    deopt 14 [r9];
  D5():
    deopt 22 [r21];
  D9():
    deopt 35 [r27];
  L23():
    goto L4(r9);
  L26():
    goto L4(r21);
  L31():
    st nSigArgs = r27;
    as_list = ldf `as.list`;
    check L32() else D10();
  D10():
    deopt 38 [];
  L32():
    p9 = prom<V +>{
      table1 = ld table;
      table2 = force? table1;
      checkMissing(table2);
      return table2;
    };
    r29 = dyn as_list[, `all.names`](p9, TRUE);
    check L33() else D11();
  D11():
    deopt 42 [r29];
  L33():
    st methods = r29;
    names = ldf names;
    check L34() else D12();
  D12():
    deopt 45 [];
  L34():
    p10 = prom<V +>{
      methods = ld methods;
      methods1 = force? methods;
      checkMissing(methods1);
      return methods1;
    };
    r31 = dyn names(p10);
    check L35() else D13();
  D13():
    deopt 47 [r31];
  L35():
    st names = r31;
    nSigArgs = ld nSigArgs;
    check L36() else D14();
  D14():
    deopt 49 [nSigArgs];
  L36():
    nSigArgs1 = force? nSigArgs;
    checkMissing(nSigArgs1);
    r32 = `>`(nSigArgs1, 1.0);
    c2 = `as.logical`(r32);
    if c2 then L37() else L6();
  L6():
    as_list1 = ldf `as.list`;
    check L59() else D25();
  L13():
    new = ldf new;
    check L61() else D27();
  L37():
    sym3 = ldf length;
    base3 = ldf length in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L38() else L39();
  D25():
    deopt 97 [];
  D27():
    deopt 102 [];
  L7(r34):
    st n = r34;
    sym4 = ldf vector;
    base4 = ldf vector in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L42() else L43();
  L38():
    names1 = ld names;
    check L40() else D15();
  L39():
    r33 = dyn base3(<sym names>);
    goto L7(r33);
  L59():
    p14 = prom<V +>{
      names5 = ld names;
      names6 = force? names5;
      checkMissing(names6);
      return names6;
    };
    r53 = dyn as_list1(p14);
    check L60() else D26();
  L61():
    p15 = prom<V +>{
      sigs = ld sigs;
      sigs1 = force? sigs;
      checkMissing(sigs1);
      return sigs1;
    };
    p16 = prom<V +>{
      methods2 = ld methods;
      methods3 = force? methods2;
      checkMissing(methods3);
      return methods3;
    };
    p19 = prom<V +>{
      _getGenericSigArgs = ldf `.getGenericSigArgs`;
      p17 = prom<V +>{
        fdef6 = ld fdef;
        fdef7 = force? fdef6;
        checkMissing(fdef7);
        return fdef7;
      };
      p18 = prom<V +>{
        fev2 = ld fev;
        fev3 = force? fev2;
        checkMissing(fev3);
        return fev3;
      };
      r58 = dyn _getGenericSigArgs(p17, p18);
      return r58;
    };
    p20 = prom<V +>{
      fdef8 = ld fdef;
      fdef9 = force? fdef8;
      checkMissing(fdef9);
      return fdef9;
    };
    r61 = dyn new[, classes, methods, arguments, generic]("LinearMethodsList", p15, p16, p19, p20);
    check L62() else D28();
  D15():
    deopt 55 [names1];
  D26():
    deopt 99 [r53];
  D28():
    deopt 112 [r61];
  L8(r37):
    st sigs = r37;
    textConnection = ldf textConnection;
    check L46() else D19();
  L40():
    names2 = force? names1;
    checkMissing(names2);
    length = ldf length in base;
    r35 = dyn length(names2);
    check L41() else D16();
  L42():
    n = ld n;
    check L44() else D17();
  L43():
    r36 = dyn base4("list", <sym n>);
    goto L8(r36);
  L60():
    st sigs = r53;
    goto L13();
  L62():
    popenv;
    return r61;
  D16():
    deopt 58 [r35];
  D17():
    deopt 63 [n];
  D19():
    deopt 69 [];
  L41():
    goto L7(r35);
  L44():
    n1 = force? n;
    checkMissing(n1);
    vector = ldf vector in base;
    r38 = dyn vector("list", n1);
    check L45() else D18();
  L46():
    p11 = prom<V +>{
      names3 = ld names;
      names4 = force? names3;
      checkMissing(names4);
      return names4;
    };
    r40 = dyn textConnection(p11);
    check L47() else D20();
  D18():
    deopt 66 [r38];
  D20():
    deopt 71 [r40];
  L45():
    goto L8(r38);
  L47():
    st namesCon = r40;
    sym5 = ldf seq_len;
    base5 = ldf seq_len in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L48() else L49();
  L9(r42):
    s = toForSeq(r42);
    l = length(s);
    i = 0;
    goto L10(i);
  L48():
    n2 = ld n;
    check L50() else D21();
  L49():
    r41 = dyn base5(<sym n>);
    goto L9(r41);
  D21():
    deopt 74 [n2];
  L10(i1):
    i2 = `+`.1(i1, 1);
    c3 = `<`.1(l, i2);
    if c3 then L51() else L12();
  L50():
    n3 = force? n2;
    checkMissing(n3);
    r43 = seq_len(n3);
    goto L9(r43);
  L12():
    x = `[[`(s, i2, NULL, TRUE);
    st i = x;
    scan = ldf scan;
    check L52() else D22();
  L51():
    goto L13();
  D22():
    deopt 78 [i2];
  L52():
    p12 = prom<V +>{
      namesCon = ld namesCon;
      namesCon1 = force? namesCon;
      checkMissing(namesCon1);
      return namesCon1;
    };
    p13 = prom<V +>{
      nSigArgs2 = ld nSigArgs;
      nSigArgs3 = force? nSigArgs2;
      checkMissing(nSigArgs3);
      return nSigArgs3;
    };
    r46 = dyn scan[, , sep, nmax, quiet](p12, "", "#", p13, TRUE);
    check L53() else D23();
  D23():
    deopt 87 [i2, r46];
  L53():
    l1 = ld sigs;
    c4 = `is.object`(l1);
    if c4 then L54() else L55(i2, r46, l1);
  L11(i8, dx1):
    st sigs = dx1;
    goto L10(i8);
  L54():
    dr = tryDispatchBuiltin.0("[[<-", l1, r46);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L56() else L55(i2, r46, dr);
  L55(i6, r48, l3):
    i9 = ld i;
    check L57() else D24();
  D24():
    deopt 89 [i6, r48, l3, r46, i9];
  L56():
    dx = getTryDispatchBuiltinValue(dr);
    goto L11(i2, dx);
  L57():
    i10 = force? i9;
    ____ = ldf `[[<-` in base;
    r51 = dyn ____(l3, r46, i10);
    goto L11(i6, r51);
  }
}