fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner695409668;
    st `.copyMethods` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner695409668(f, tableName, env, envwhere) {
  (reg f:*, reg tableName:*, reg env:*, reg envwhere:*) -+> V { var f:*, var tableName:*, var env:*, var envwhere:*, reg r:cls, reg get:cls, reg tableName1:*, reg tableName2:V, reg p:p(V +), reg env1:*, reg env2:V, reg p1:p(V +), reg r3:V, reg getGeneric:cls, reg f1:*, reg f2:V, reg p2:p(V +), reg envwhere1:*, reg envwhere2:V, reg p3:p(V +), reg r6:V, reg is:cls, reg fdef:*, reg fdef1:V, reg p4:p(V +), reg r8:V, reg r9:V, reg c:L, reg message:cls, reg gettextf:cls, reg f3:*, reg f4:V, reg p5:p(V +), reg r11:V, reg p6:p(V +), reg r13:V, reg getMethodsForDispatch:cls, reg fdef2:*, reg fdef3:V, reg p7:p(V +), reg r17:V, reg sort:cls, reg sym:cls, reg base:cls, reg guard:L, reg r18:V, reg r19:V, reg table:*, reg table1:V, reg names:cls, reg r20:V, reg p8:p(V +), reg r22:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r23:V, reg r24:V, reg allObjects:*, reg allObjects1:V, reg length:cls, reg r25:V, reg r26:V, reg c1:L, reg sym2:cls, reg base2:cls, reg guard2:L, reg r27:V, reg r28:V, reg Filter:cls, reg r29:cls, reg p9:p(V +), reg allObjects2:*, reg allObjects3:V, reg p10:p(V +), reg r32:V, reg as_character:cls, reg r33:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r34:V, reg r35:V, reg methodsInserted:*, reg methodsInserted1:V, reg length1:cls, reg r36:V, reg r37:V, reg c2:L, reg message1:cls, reg gettextf1:cls, reg f5:*, reg f6:V, reg p11:p(V +), reg paste:cls, reg methodsInserted2:*, reg methodsInserted3:V, reg p12:p(V +), reg r40:V, reg p13:p(V +), reg r42:V, reg p14:p(V +), reg r44:V |
    mkenv;
    st f = f;
    st tableName = tableName;
    st env = env;
    st envwhere = envwhere;
    r = clos inner197045913;
    st differs = r;
    get = ldf get;
    check L7() else D0();
  D0():
    deopt 4 [];
  L7():
    p = prom<V +>{
      tableName1 = ld tableName;
      tableName2 = force? tableName1;
      checkMissing(tableName2);
      return tableName2;
    };
    p1 = prom<V +>{
      env1 = ld env;
      env2 = force? env1;
      checkMissing(env2);
      return env2;
    };
    r3 = dyn get[, envir](p, p1);
    check L8() else D1();
  D1():
    deopt 8 [r3];
  L8():
    st table = r3;
    getGeneric = ldf getGeneric;
    check L9() else D2();
  D2():
    deopt 11 [];
  L9():
    p2 = prom<V +>{
      f1 = ld f;
      f2 = force? f1;
      checkMissing(f2);
      return f2;
    };
    p3 = prom<V +>{
      envwhere1 = ld envwhere;
      envwhere2 = force? envwhere1;
      checkMissing(envwhere2);
      return envwhere2;
    };
    r6 = dyn getGeneric[, where](p2, p3);
    check L10() else D3();
  D3():
    deopt 15 [r6];
  L10():
    st fdef = r6;
    is = ldf is;
    check L11() else D4();
  D4():
    deopt 18 [];
  L11():
    p4 = prom<V +>{
      fdef = ld fdef;
      fdef1 = force? fdef;
      checkMissing(fdef1);
      return fdef1;
    };
    r8 = dyn is(p4, "genericFunction");
    check L12() else D5();
  D5():
    deopt 21 [r8];
  L12():
    r9 = `!`(r8);
    c = `as.logical`(r9);
    if c then L13() else L0();
  L0():
    getMethodsForDispatch = ldf getMethodsForDispatch;
    check L18() else D8();
  L13():
    message = ldf message;
    check L14() else D6();
  D6():
    deopt 24 [];
  D8():
    deopt 35 [];
  L14():
    p6 = prom<V +>{
      gettextf = ldf gettextf;
      p5 = prom<V +>{
        f3 = ld f;
        f4 = force? f3;
        checkMissing(f4);
        return f4;
      };
      r11 = dyn gettextf("%s() is not a generic function in the target environment -- methods will not be inserted", p5);
      return r11;
    };
    r13 = dyn message[, domain](p6, NA_LGL);
    check L15() else D7();
  L18():
    p7 = prom<V +>{
      fdef2 = ld fdef;
      fdef3 = force? fdef2;
      checkMissing(fdef3);
      return fdef3;
    };
    r17 = dyn getMethodsForDispatch(p7);
    check L19() else D9();
  D7():
    deopt 28 [r13];
  D9():
    deopt 37 [r17];
  L15():
    popenv;
    return NULL;
  L19():
    st curTable = r17;
    sort = ldf sort;
    check L20() else D10();
  D10():
    deopt 40 [];
  L20():
    p8 = prom<V +>{
      sym = ldf names;
      base = ldf names in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r19):
      return r19;
    L1():
      table = ld table;
      table1 = force? table;
      checkMissing(table1);
      names = ldf names in base;
      r20 = dyn names(table1);
      goto L0(r20);
    L2():
      r18 = dyn base(<sym table>);
      goto L0(r18);
    };
    r22 = dyn sort(p8);
    check L21() else D11();
  D11():
    deopt 42 [r22];
  L21():
    st allObjects = r22;
    sym1 = ldf length;
    base1 = ldf length in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L22() else L23();
  L2(r24):
    r26 = `>`(r24, 0.0);
    c1 = `as.logical`(r26);
    if c1 then L26() else L3();
  L22():
    allObjects = ld allObjects;
    check L24() else D12();
  L23():
    r23 = dyn base1(<sym allObjects>);
    goto L2(r23);
  D12():
    deopt 46 [allObjects];
  L3():
    invisible.0();
    popenv;
    return NULL;
  L24():
    allObjects1 = force? allObjects;
    checkMissing(allObjects1);
    length = ldf length in base;
    r25 = dyn length(allObjects1);
    check L25() else D13();
  L26():
    sym2 = ldf `as.character`;
    base2 = ldf `as.character` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L27() else L28();
  D13():
    deopt 49 [r25];
  L4(r28):
    st methodsInserted = r28;
    sym3 = ldf length;
    base3 = ldf length in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L32() else L33();
  L25():
    goto L2(r25);
  L27():
    Filter = ldf Filter;
    check L29() else D14();
  L28():
    r27 = dyn base2(<lang Filter(function((this=), {
          `<-`(def, get(this, envir=table));
          `<-`(curdef, `[[`(curTable, this));
          if(differs(def, curdef), {
              suppressMessages(.TraceWithMethods(f, signature=this, where=envwhere, edit=env));
              TRUE
            }, FALSE)
        }, NULL), allObjects)>);
    goto L4(r27);
  D14():
    deopt 55 [];
  L5(r35):
    r37 = `>`(r35, 0.0);
    c2 = `as.logical`(r37);
    if c2 then L36() else L6();
  L29():
    p9 = prom<V +>{
      r29 = clos inner120411710;
      return r29;
    };
    p10 = prom<V +>{
      allObjects2 = ld allObjects;
      allObjects3 = force? allObjects2;
      checkMissing(allObjects3);
      return allObjects3;
    };
    r32 = dyn Filter(p9, p10);
    check L30() else D15();
  L32():
    methodsInserted = ld methodsInserted;
    check L34() else D17();
  L33():
    r34 = dyn base3(<sym methodsInserted>);
    goto L5(r34);
  D15():
    deopt 58 [r32];
  D17():
    deopt 64 [methodsInserted];
  L6():
    invisible.0();
    popenv;
    return NULL;
  L30():
    as_character = ldf `as.character` in base;
    r33 = dyn as_character(r32);
    check L31() else D16();
  L34():
    methodsInserted1 = force? methodsInserted;
    checkMissing(methodsInserted1);
    length1 = ldf length in base;
    r36 = dyn length1(methodsInserted1);
    check L35() else D18();
  L36():
    message1 = ldf message;
    check L37() else D19();
  D16():
    deopt 60 [r33];
  D18():
    deopt 67 [r36];
  D19():
    deopt 71 [];
  L31():
    goto L4(r33);
  L35():
    goto L5(r36);
  L37():
    p14 = prom<V +>{
      gettextf1 = ldf gettextf;
      p11 = prom<V +>{
        f5 = ld f;
        f6 = force? f5;
        checkMissing(f6);
        return f6;
      };
      p13 = prom<V +>{
        paste = ldf paste;
        p12 = prom<V +>{
          methodsInserted2 = ld methodsInserted;
          methodsInserted3 = force? methodsInserted2;
          checkMissing(methodsInserted3);
          return methodsInserted3;
        };
        r40 = dyn paste[, collapse](p12, ", ");
        return r40;
      };
      r42 = dyn gettextf1("Methods inserted for function %s(): %s", p11, p13);
      return r42;
    };
    r44 = dyn message1[, domain](p14, NA_LGL);
    check L38() else D20();
  D20():
    deopt 75 [r44];
  L38():
    popenv;
    return r44;
  }
}
fun inner197045913(o1, o2) {
  (reg o1:*, reg o2:*) -+> V { var o1:*, var o2:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg o3:*, reg o4:V, reg is_function:cls, reg r2:V, reg c:L, reg c2:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg c5:L, reg r4:V, reg body:cls, reg o5:*, reg o6:V, reg p:p(V +), reg r6:V, reg body1:cls, reg o7:*, reg o8:V, reg p1:p(V +), reg r8:V, reg identical:cls, reg r9:V, reg c6:L, reg c7:V, reg c9:L, reg c11:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r10:V, reg c14:L, reg r11:V, reg args:cls, reg o9:*, reg o10:V, reg p2:p(V +), reg r13:V, reg args1:cls, reg o11:*, reg o12:V, reg p3:p(V +), reg r15:V, reg identical1:cls, reg r16:V, reg c15:L, reg c16:V, reg r17:V |
    mkenv;
    st o1 = o1;
    st o2 = o2;
    sym = ldf `is.function`;
    base = ldf `is.function` in base;
    guard = `==`.4(sym, base);
    if guard then L5() else L6();
  L0(r1):
    c = `as.logical`(r1);
    if c then L9() else L1(c);
  L5():
    o3 = ld o2;
    check L7() else D0();
  L6():
    r = dyn base(<sym o2>);
    goto L0(r);
  D0():
    deopt 2 [o3];
  L1(c2):
    c9 = `as.logical`(c2);
    if c9 then L18() else L3(c9);
  L7():
    o4 = force? o3;
    checkMissing(o4);
    is_function = ldf `is.function` in base;
    r2 = dyn is_function(o4);
    check L8() else D1();
  L9():
    sym1 = ldf identical;
    base1 = ldf identical in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L10() else L11();
  D1():
    deopt 5 [r2];
  L2(c5, r4):
    c6 = `as.logical`(r4);
    c7 = `&&`(c5, c6);
    goto L1(c7);
  L3(c11):
    r17 = `!`(c11);
    popenv;
    return r17;
  L8():
    goto L0(r2);
  L10():
    body = ldf body;
    check L12() else D2();
  L11():
    r3 = dyn base1(<lang body(o2)>, <lang body(o2)>);
    goto L2(c, r3);
  L18():
    sym2 = ldf identical;
    base2 = ldf identical in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L19() else L20();
  D2():
    deopt 9 [c];
  L4(c14, r11):
    c15 = `as.logical`(r11);
    c16 = `&&`(c14, c15);
    goto L3(c16);
  L12():
    p = prom<V +>{
      o5 = ld o2;
      o6 = force? o5;
      checkMissing(o6);
      return o6;
    };
    r6 = dyn body(p);
    check L13() else D3();
  L19():
    args = ldf args;
    check L21() else D7();
  L20():
    r10 = dyn base2(<lang args(o1)>, <lang args(o2)>);
    goto L4(c9, r10);
  D3():
    deopt 11 [c, r6];
  D7():
    deopt 29 [c9];
  L13():
    body1 = ldf body;
    check L14() else D4();
  L21():
    p2 = prom<V +>{
      o9 = ld o1;
      o10 = force? o9;
      checkMissing(o10);
      return o10;
    };
    r13 = dyn args(p2);
    check L22() else D8();
  D4():
    deopt 13 [c];
  D8():
    deopt 31 [c9, r13];
  L14():
    p1 = prom<V +>{
      o7 = ld o2;
      o8 = force? o7;
      checkMissing(o8);
      return o8;
    };
    r8 = dyn body1(p1);
    check L15() else D5();
  L22():
    args1 = ldf args;
    check L23() else D9();
  D5():
    deopt 15 [c, r8];
  D9():
    deopt 33 [c9];
  L15():
    identical = ldf identical in base;
    r9 = dyn identical(r6, r8, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
    check L16() else D6();
  L23():
    p3 = prom<V +>{
      o11 = ld o2;
      o12 = force? o11;
      checkMissing(o12);
      return o12;
    };
    r15 = dyn args1(p3);
    check L24() else D10();
  D6():
    deopt 24 [c, r9];
  D10():
    deopt 35 [c9, r15];
  L16():
    goto L2(c, r9);
  L24():
    identical1 = ldf identical in base;
    r16 = dyn identical1(r13, r15, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
    check L25() else D11();
  D11():
    deopt 44 [c9, r16];
  L25():
    goto L4(c9, r16);
  }
}
fun inner120411710(this) {
  (reg this:*) -+> V { var this:*, reg get:cls, reg this1:*, reg this2:V, reg p:p(V +), reg table:*, reg table1:V, reg p1:p(V +), reg r2:V, reg curTable:*, reg curTable1:V, reg c:L, reg curTable3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg this3:*, reg this4:V, reg __:cls, reg r3:V, reg differs:cls, reg def:*, reg def1:V, reg p2:p(V +), reg curdef:*, reg curdef1:V, reg p3:p(V +), reg r6:V, reg c1:L, reg suppressMessages:cls, reg _TraceWithMethods:cls, reg f:*, reg f1:V, reg p4:p(V +), reg this5:*, reg this6:V, reg p5:p(V +), reg envwhere:*, reg envwhere1:V, reg p6:p(V +), reg env:*, reg env1:V, reg p7:p(V +), reg r11:V, reg p8:p(V +), reg r13:V |
    mkenv;
    st this = this;
    get = ldf get;
    check L2() else D0();
  D0():
    deopt 1 [];
  L2():
    p = prom<V +>{
      this1 = ld this;
      this2 = force? this1;
      checkMissing(this2);
      return this2;
    };
    p1 = prom<V +>{
      table = ld table;
      table1 = force? table;
      checkMissing(table1);
      return table1;
    };
    r2 = dyn get[, envir](p, p1);
    check L3() else D1();
  D1():
    deopt 5 [r2];
  L3():
    st def = r2;
    curTable = ld curTable;
    check L4() else D2();
  D2():
    deopt 7 [curTable];
  L4():
    curTable1 = force? curTable;
    checkMissing(curTable1);
    c = `is.object`(curTable1);
    if c then L5() else L6(curTable1);
  L0(dx1):
    st curdef = dx1;
    differs = ldf differs;
    check L9() else D4();
  L5():
    dr = tryDispatchBuiltin.1("[[", curTable1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L7() else L6(dr);
  L6(curTable3):
    this3 = ld this;
    check L8() else D3();
  D3():
    deopt 9 [curTable3, this3];
  D4():
    deopt 14 [];
  L7():
    dx = getTryDispatchBuiltinValue(dr);
    goto L0(dx);
  L8():
    this4 = force? this3;
    __ = ldf `[[` in base;
    r3 = dyn __(curTable3, this4);
    goto L0(r3);
  L9():
    p2 = prom<V +>{
      def = ld def;
      def1 = force? def;
      checkMissing(def1);
      return def1;
    };
    p3 = prom<V +>{
      curdef = ld curdef;
      curdef1 = force? curdef;
      checkMissing(curdef1);
      return curdef1;
    };
    r6 = dyn differs(p2, p3);
    check L10() else D5();
  D5():
    deopt 17 [r6];
  L10():
    c1 = `as.logical`(r6);
    if c1 then L11() else L1();
  L1():
    popenv;
    return FALSE;
  L11():
    suppressMessages = ldf suppressMessages;
    check L12() else D6();
  D6():
    deopt 19 [];
  L12():
    p8 = prom<V +>{
      _TraceWithMethods = ldf `.TraceWithMethods`;
      p4 = prom<V +>{
        f = ld f;
        f1 = force? f;
        checkMissing(f1);
        return f1;
      };
      p5 = prom<V +>{
        this5 = ld this;
        this6 = force? this5;
        checkMissing(this6);
        return this6;
      };
      p6 = prom<V +>{
        envwhere = ld envwhere;
        envwhere1 = force? envwhere;
        checkMissing(envwhere1);
        return envwhere1;
      };
      p7 = prom<V +>{
        env = ld env;
        env1 = force? env;
        checkMissing(env1);
        return env1;
      };
      r11 = dyn _TraceWithMethods[, signature, where, edit](p4, p5, p6, p7);
      return r11;
    };
    r13 = dyn suppressMessages(p8);
    check L13() else D7();
  D7():
    deopt 21 [r13];
  L13():
    popenv;
    return TRUE;
  }
}