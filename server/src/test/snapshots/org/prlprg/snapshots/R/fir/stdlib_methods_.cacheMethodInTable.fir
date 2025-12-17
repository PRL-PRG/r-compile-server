fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner996918447;
    st `.cacheMethodInTable` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner996918447(fdef, sig, def, table) {
  (reg fdef:*, reg sig:*, reg def:*, reg table:*) -+> V { var fdef:*, var sig:*, var def:*, var table:*, reg table_isMissing:L, reg table_orDefault:*, reg get:cls, reg fenv:*, reg fenv1:V, reg p:p(V +), reg r1:V, reg p1:p(V +), reg environment:cls, reg fdef1:*, reg fdef2:V, reg p2:p(V +), reg r4:V, reg sym:cls, reg base:cls, reg guard:L, reg r5:V, reg r6:V, reg missing:cls, reg r7:V, reg c:L, reg c2:V, reg exists:cls, reg fenv2:*, reg fenv3:V, reg p3:p(V +), reg r9:V, reg r10:V, reg c3:L, reg c4:V, reg c6:L, reg _setupMethodsTables:cls, reg fdef3:*, reg fdef4:V, reg p4:p(V +), reg r12:V, reg _matchSigLength:cls, reg sig1:*, reg sig2:V, reg p5:p(V +), reg fdef5:*, reg fdef6:V, reg p6:p(V +), reg fenv4:*, reg fenv5:V, reg p7:p(V +), reg r17:V, reg _sigLabel:cls, reg sig3:*, reg sig4:V, reg p8:p(V +), reg r19:V, reg exists1:cls, reg label:*, reg label1:V, reg p9:p(V +), reg table1:*, reg table2:V, reg p10:p(V +), reg r22:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r23:V, reg r24:V, reg def1:*, reg def2:V, reg c7:V, reg c8:L, reg isCurrent:*, reg isCurrent1:V, reg c9:L, reg remove:cls, reg label2:*, reg label3:V, reg p11:p(V +), reg table3:*, reg table4:V, reg p12:p(V +), reg r27:V, reg _duplicateClassesExist:cls, reg r28:V, reg _methodPackageSlots:cls, reg def3:*, reg def4:V, reg p13:p(V +), reg label4:*, reg label5:V, reg p14:p(V +), reg table5:*, reg table6:V, reg p15:p(V +), reg dupl:*, reg dupl1:V, reg p16:p(V +), reg isCurrent2:*, reg isCurrent3:V, reg p17:p(V +), reg r34:V, reg assign:cls, reg label6:*, reg label7:V, reg p18:p(V +), reg def5:*, reg def6:V, reg p19:p(V +), reg table7:*, reg table8:V, reg p20:p(V +), reg r38:V |
    mkenv;
    st fdef = fdef;
    st sig = sig;
    st def = def;
    table_isMissing = missing.0(table);
    if table_isMissing then L0() else L1(table);
  L0():
    p1 = prom<V +>{
      get = ldf get;
      p = prom<V +>{
        fenv = ld fenv;
        fenv1 = force? fenv;
        checkMissing(fenv1);
        return fenv1;
      };
      r1 = dyn get[, envir](".AllMTable", p);
      return r1;
    };
    goto L1(p1);
  L1(table_orDefault):
    st table = table_orDefault;
    environment = ldf environment;
    check L9() else D0();
  D0():
    deopt 1 [];
  L9():
    p2 = prom<V +>{
      fdef1 = ld fdef;
      fdef2 = force? fdef1;
      checkMissing(fdef2);
      return fdef2;
    };
    r4 = dyn environment(p2);
    check L10() else D1();
  D1():
    deopt 3 [r4];
  L10():
    st fenv = r4;
    sym = ldf missing;
    base = ldf missing in base;
    guard = `==`.4(sym, base);
    if guard then L11() else L12();
  L2(r6):
    c = `as.logical`(r6);
    if c then L13() else L3(c);
  L11():
    missing = ldf missing in base;
    r7 = dyn missing(<sym table>);
    goto L2(r7);
  L12():
    r5 = dyn base(<sym table>);
    goto L2(r5);
  L3(c2):
    c6 = `as.logical`(c2);
    if c6 then L17() else L4();
  L13():
    exists = ldf exists;
    check L14() else D2();
  D2():
    deopt 9 [c];
  L4():
    goto L5();
  L5():
    _matchSigLength = ldf `.matchSigLength`;
    check L21() else D6();
  L14():
    p3 = prom<V +>{
      fenv2 = ld fenv;
      fenv3 = force? fenv2;
      checkMissing(fenv3);
      return fenv3;
    };
    r9 = dyn exists[, envir, inherits](".AllMTable", p3, FALSE);
    check L15() else D3();
  L17():
    _setupMethodsTables = ldf `.setupMethodsTables`;
    check L18() else D4();
  D3():
    deopt 15 [c, r9];
  D4():
    deopt 19 [];
  D6():
    deopt 25 [];
  L15():
    r10 = `!`(r9);
    c3 = `as.logical`(r10);
    c4 = `&&`(c, c3);
    goto L3(c4);
  L18():
    p4 = prom<V +>{
      fdef3 = ld fdef;
      fdef4 = force? fdef3;
      checkMissing(fdef4);
      return fdef4;
    };
    r12 = dyn _setupMethodsTables(p4);
    check L19() else D5();
  L21():
    p5 = prom<V +>{
      sig1 = ld sig;
      sig2 = force? sig1;
      checkMissing(sig2);
      return sig2;
    };
    p6 = prom<V +>{
      fdef5 = ld fdef;
      fdef6 = force? fdef5;
      checkMissing(fdef6);
      return fdef6;
    };
    p7 = prom<V +>{
      fenv4 = ld fenv;
      fenv5 = force? fenv4;
      checkMissing(fenv5);
      return fenv5;
    };
    r17 = dyn _matchSigLength(p5, p6, p7, TRUE);
    check L22() else D7();
  D5():
    deopt 21 [r12];
  D7():
    deopt 30 [r17];
  L19():
    goto L5();
  L22():
    st sig = r17;
    _sigLabel = ldf `.sigLabel`;
    check L23() else D8();
  D8():
    deopt 33 [];
  L23():
    p8 = prom<V +>{
      sig3 = ld sig;
      sig4 = force? sig3;
      checkMissing(sig4);
      return sig4;
    };
    r19 = dyn _sigLabel(p8);
    check L24() else D9();
  D9():
    deopt 35 [r19];
  L24():
    st label = r19;
    exists1 = ldf exists;
    check L25() else D10();
  D10():
    deopt 38 [];
  L25():
    p9 = prom<V +>{
      label = ld label;
      label1 = force? label;
      checkMissing(label1);
      return label1;
    };
    p10 = prom<V +>{
      table1 = ld table;
      table2 = force? table1;
      checkMissing(table2);
      return table2;
    };
    r22 = dyn exists1[, envir, inherits](p9, p10, FALSE);
    check L26() else D11();
  D11():
    deopt 44 [r22];
  L26():
    st isCurrent = r22;
    sym1 = ldf `is.null`;
    base1 = ldf `is.null` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L27() else L28();
  L6(r24):
    c8 = `as.logical`(r24);
    if c8 then L30() else L7();
  L27():
    def1 = ld def;
    check L29() else D12();
  L28():
    r23 = dyn base1(<sym def>);
    goto L6(r23);
  D12():
    deopt 47 [def1];
  L7():
    _duplicateClassesExist = ldf `.duplicateClassesExist`;
    check L37() else D16();
  L29():
    def2 = force? def1;
    checkMissing(def2);
    c7 = `==`(def2, NULL);
    goto L6(c7);
  L30():
    isCurrent = ld isCurrent;
    check L31() else D13();
  D13():
    deopt 50 [isCurrent];
  D16():
    deopt 63 [];
  L31():
    isCurrent1 = force? isCurrent;
    checkMissing(isCurrent1);
    c9 = `as.logical`(isCurrent1);
    if c9 then L32() else L8();
  L37():
    r28 = dyn _duplicateClassesExist();
    check L38() else D17();
  D17():
    deopt 64 [r28];
  L8():
    invisible.0();
    popenv;
    return NULL;
  L32():
    remove = ldf remove;
    check L33() else D14();
  L38():
    st dupl = r28;
    _methodPackageSlots = ldf `.methodPackageSlots`;
    check L39() else D18();
  D14():
    deopt 53 [];
  D18():
    deopt 67 [];
  L33():
    p11 = prom<V +>{
      label2 = ld label;
      label3 = force? label2;
      checkMissing(label3);
      return label3;
    };
    p12 = prom<V +>{
      table3 = ld table;
      table4 = force? table3;
      checkMissing(table4);
      return table4;
    };
    r27 = dyn remove[list, envir](p11, p12);
    check L34() else D15();
  L39():
    p13 = prom<V +>{
      def3 = ld def;
      def4 = force? def3;
      checkMissing(def4);
      return def4;
    };
    p14 = prom<V +>{
      label4 = ld label;
      label5 = force? label4;
      checkMissing(label5);
      return label5;
    };
    p15 = prom<V +>{
      table5 = ld table;
      table6 = force? table5;
      checkMissing(table6);
      return table6;
    };
    p16 = prom<V +>{
      dupl = ld dupl;
      dupl1 = force? dupl;
      checkMissing(dupl1);
      return dupl1;
    };
    p17 = prom<V +>{
      isCurrent2 = ld isCurrent;
      isCurrent3 = force? isCurrent2;
      checkMissing(isCurrent3);
      return isCurrent3;
    };
    r34 = dyn _methodPackageSlots(p13, p14, p15, p16, p17);
    check L40() else D19();
  D15():
    deopt 58 [r27];
  D19():
    deopt 73 [r34];
  L34():
    popenv;
    return r27;
  L40():
    st def = r34;
    assign = ldf assign;
    check L41() else D20();
  D20():
    deopt 76 [];
  L41():
    p18 = prom<V +>{
      label6 = ld label;
      label7 = force? label6;
      checkMissing(label7);
      return label7;
    };
    p19 = prom<V +>{
      def5 = ld def;
      def6 = force? def5;
      checkMissing(def6);
      return def6;
    };
    p20 = prom<V +>{
      table7 = ld table;
      table8 = force? table7;
      checkMissing(table8);
      return table8;
    };
    r38 = dyn assign[, , envir](p18, p19, p20);
    check L42() else D21();
  D21():
    deopt 81 [r38];
  L42():
    popenv;
    return r38;
  }
}