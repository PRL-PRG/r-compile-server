fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3630665947;
    st `.methodPackageSlots` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3630665947(def, label, table, duplicatesExist, isCurrent) {
  (reg def:*, reg label:*, reg table:*, reg duplicatesExist:*, reg isCurrent:*) -+> V { var def:*, var label:*, var table:*, var duplicatesExist:*, var isCurrent:*, reg __:cls, reg r:V, reg duplicatesExist1:*, reg duplicatesExist2:V, reg c:L, reg _fixPackageSlot:cls, reg def1:*, reg def2:V, reg p:p(V +), reg sig:*, reg sig1:V, reg p1:p(V +), reg r3:V, reg sig2:*, reg sig3:V, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c1:L, reg x:V, reg exists:cls, reg cl:*, reg cl1:V, reg p2:p(V +), reg _classTable:*, reg _classTable1:V, reg p3:p(V +), reg r6:V, reg c2:L, reg i6:I, reg c4:V, reg sym:cls, reg base:cls, reg guard:L, reg r7:V, reg i9:I, reg c7:L, reg r8:V, reg get:cls, reg cl2:*, reg cl3:V, reg p4:p(V +), reg _classTable2:*, reg _classTable3:V, reg p5:p(V +), reg r11:V, reg is_list:cls, reg r12:V, reg c8:L, reg c9:V, reg c11:L, reg isCurrent1:*, reg isCurrent2:V, reg c12:L, reg get1:cls, reg label1:*, reg label2:V, reg p6:p(V +), reg table1:*, reg table2:V, reg p7:p(V +), reg r16:V, reg dups:*, reg dups1:V, reg c13:L, reg c14:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r17:V, reg c18:L, reg r18:V, reg __1:cls, reg r19:V, reg sig4:*, reg sig5:V, reg identical:cls, reg r20:V, reg r21:V, reg c19:L, reg c20:V, reg dups2:*, reg dups3:V, reg c23:L, reg isCurrent3:*, reg isCurrent4:V, reg c24:L, reg is:cls, reg current:*, reg current1:V, reg p8:p(V +), reg r23:V, reg c25:L, reg sym2:cls, reg base2:cls, reg guard2:L, reg r24:V, reg r25:V, reg __2:cls, reg r26:V, reg attr:cls, reg r27:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r28:V, reg r29:V, reg pkg:*, reg pkg1:V, reg length:cls, reg r30:V, reg r31:V, reg c26:L, reg _fixPackageSlot1:cls, reg current2:*, reg current3:V, reg p9:p(V +), reg __3:cls, reg r33:V, reg p10:p(V +), reg r35:V, reg new_env:cls, reg r37:V, reg _pkgMethodLabel:cls, reg current4:*, reg current5:V, reg p11:p(V +), reg r39:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r40:V, reg r41:V, reg var:*, reg var1:V, reg nzchar:cls, reg r42:V, reg c27:L, reg assign:cls, reg var2:*, reg var3:V, reg p12:p(V +), reg current6:*, reg current7:V, reg p13:p(V +), reg env:*, reg env1:V, reg p14:p(V +), reg r46:V, reg r47:V, reg r48:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r49:V, reg r50:V, reg current8:*, reg current9:V, reg is_environment:cls, reg r51:V, reg c28:L, reg current10:*, reg current11:V, reg stop:cls, reg gettextf:cls, reg dQuote:cls, reg sym6:cls, reg base6:cls, reg guard6:L, reg r52:V, reg r53:V, reg current12:*, reg current13:V, reg class:cls, reg r54:V, reg p15:p(V +), reg r56:V, reg p16:p(V +), reg r58:V, reg p17:p(V +), reg r60:V, reg new_env1:cls, reg r62:V, reg assign1:cls, reg _pkgMethodLabel1:cls, reg def3:*, reg def4:V, reg p18:p(V +), reg r64:V, reg p19:p(V +), reg def5:*, reg def6:V, reg p20:p(V +), reg env2:*, reg env3:V, reg p21:p(V +), reg r68:V, reg env4:*, reg env5:V, reg def7:*, reg def8:V, reg def9:*, reg def10:V |
    mkenv;
    st def = def;
    st label = label;
    st table = table;
    st duplicatesExist = duplicatesExist;
    st isCurrent = isCurrent;
    __ = ldf `@` in base;
    r = dyn __(<sym def>, <sym target>);
    st sig = r;
    st dups = FALSE;
    duplicatesExist1 = ld duplicatesExist;
    check L26() else D0();
  D0():
    deopt 6 [duplicatesExist1];
  L26():
    duplicatesExist2 = force? duplicatesExist1;
    checkMissing(duplicatesExist2);
    c = `as.logical`(duplicatesExist2);
    if c then L27() else L0();
  L0():
    def9 = ld def;
    check L105() else D43();
  L27():
    _fixPackageSlot = ldf `.fixPackageSlot`;
    check L28() else D1();
  D1():
    deopt 9 [];
  D43():
    deopt 163 [def9];
  L28():
    p = prom<V +>{
      def1 = ld def;
      def2 = force? def1;
      checkMissing(def2);
      return def2;
    };
    p1 = prom<V +>{
      sig = ld sig;
      sig1 = force? sig;
      checkMissing(sig1);
      return sig1;
    };
    r3 = dyn _fixPackageSlot(p, p1);
    check L29() else D2();
  L105():
    def10 = force? def9;
    checkMissing(def10);
    popenv;
    return def10;
  D2():
    deopt 12 [r3];
  L29():
    st def = r3;
    sig2 = ld sig;
    check L30() else D3();
  D3():
    deopt 14 [sig2];
  L30():
    sig3 = force? sig2;
    checkMissing(sig3);
    s = toForSeq(sig3);
    l = length(s);
    i = 0;
    goto L1(i);
  L1(i1):
    i2 = `+`.1(i1, 1);
    c1 = `<`.1(l, i2);
    if c1 then L31() else L7();
  L5():
    isCurrent1 = ld isCurrent;
    check L44() else D9();
  L7():
    x = `[[`(s, i2, NULL, TRUE);
    st cl = x;
    exists = ldf exists;
    check L32() else D4();
  L31():
    goto L5();
  D4():
    deopt 17 [i2];
  D9():
    deopt 45 [isCurrent1];
  L32():
    p2 = prom<V +>{
      cl = ld cl;
      cl1 = force? cl;
      checkMissing(cl1);
      return cl1;
    };
    p3 = prom<V +>{
      _classTable = ld `.classTable`;
      _classTable1 = force? _classTable;
      checkMissing(_classTable1);
      return _classTable1;
    };
    r6 = dyn exists[, envir, inherits](p2, p3, FALSE);
    check L33() else D5();
  L44():
    isCurrent2 = force? isCurrent1;
    checkMissing(isCurrent2);
    c12 = `as.logical`(isCurrent2);
    if c12 then L45() else L8();
  D5():
    deopt 23 [i2, r6];
  L8():
    goto L11();
  L11():
    dups2 = ld dups;
    check L56() else D15();
  L33():
    c2 = `as.logical`(r6);
    if c2 then L34() else L2(i2, c2);
  L45():
    get1 = ldf get;
    check L46() else D10();
  D10():
    deopt 48 [];
  D15():
    deopt 76 [dups2];
  L2(i6, c4):
    c11 = `as.logical`(c4);
    if c11 then L41() else L4();
  L34():
    sym = ldf `is.list`;
    base = ldf `is.list` in base;
    guard = `==`.4(sym, base);
    if guard then L35() else L36();
  L46():
    p6 = prom<V +>{
      label1 = ld label;
      label2 = force? label1;
      checkMissing(label2);
      return label2;
    };
    p7 = prom<V +>{
      table1 = ld table;
      table2 = force? table1;
      checkMissing(table2);
      return table2;
    };
    r16 = dyn get1[, envir](p6, p7);
    check L47() else D11();
  L56():
    dups3 = force? dups2;
    checkMissing(dups3);
    c23 = `as.logical`(dups3);
    if c23 then L57() else L12();
  D11():
    deopt 52 [r16];
  L3(i9, c7, r8):
    c8 = `as.logical`(r8);
    c9 = `&&`(c7, c8);
    goto L2(i9, c9);
  L4():
    goto L1(i6);
  L12():
    def7 = ld def;
    check L103() else D42();
  L35():
    get = ldf get;
    check L37() else D6();
  L36():
    r7 = dyn base(<lang get(cl, envir=.classTable)>);
    goto L3(i2, c2, r7);
  L41():
    st dups = TRUE;
    goto L5();
  L47():
    st current = r16;
    dups = ld dups;
    check L48() else D12();
  L57():
    isCurrent3 = ld isCurrent;
    check L58() else D16();
  D6():
    deopt 27 [i2, c2];
  D12():
    deopt 54 [dups];
  D16():
    deopt 78 [isCurrent3];
  D42():
    deopt 161 [def7];
  L37():
    p4 = prom<V +>{
      cl2 = ld cl;
      cl3 = force? cl2;
      checkMissing(cl3);
      return cl3;
    };
    p5 = prom<V +>{
      _classTable2 = ld `.classTable`;
      _classTable3 = force? _classTable2;
      checkMissing(_classTable3);
      return _classTable3;
    };
    r11 = dyn get[, envir](p4, p5);
    check L38() else D7();
  L48():
    dups1 = force? dups;
    checkMissing(dups1);
    c13 = `as.logical`(dups1);
    if c13 then L9(c13) else L49();
  L58():
    isCurrent4 = force? isCurrent3;
    checkMissing(isCurrent4);
    c24 = `as.logical`(isCurrent4);
    if c24 then L59() else L13();
  L103():
    def8 = force? def7;
    checkMissing(def8);
    popenv;
    return def8;
  D7():
    deopt 31 [i2, c2, r11];
  L9(c14):
    st dups = c14;
    goto L11();
  L13():
    new_env1 = ldf `new.env`;
    check L97() else D37();
  L25():
    assign1 = ldf assign;
    check L99() else D39();
  L38():
    is_list = ldf `is.list` in base;
    r12 = dyn is_list(r11);
    check L39() else D8();
  L49():
    sym1 = ldf identical;
    base1 = ldf identical in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L50() else L51();
  L59():
    is = ldf is;
    check L60() else D17();
  D8():
    deopt 33 [i2, c2, r12];
  D17():
    deopt 81 [];
  D37():
    deopt 149 [];
  D39():
    deopt 153 [];
  L10(c18, r18):
    r21 = `!`(r18);
    c19 = `as.logical`(r21);
    c20 = `||`(c18, c19);
    goto L9(c20);
  L39():
    goto L3(i2, c2, r12);
  L50():
    __1 = ldf `@` in base;
    r19 = dyn __1(<sym current>, <sym target>);
    sig4 = ld sig;
    check L52() else D13();
  L51():
    r17 = dyn base1(<lang `@`(current, target)>, <sym sig>);
    goto L10(c13, r17);
  L60():
    p8 = prom<V +>{
      current = ld current;
      current1 = force? current;
      checkMissing(current1);
      return current1;
    };
    r23 = dyn is(p8, "MethodDefinition");
    check L61() else D18();
  L97():
    r62 = dyn new_env1();
    check L98() else D38();
  L99():
    p19 = prom<V +>{
      _pkgMethodLabel1 = ldf `.pkgMethodLabel`;
      p18 = prom<V +>{
        def3 = ld def;
        def4 = force? def3;
        checkMissing(def4);
        return def4;
      };
      r64 = dyn _pkgMethodLabel1(p18);
      return r64;
    };
    p20 = prom<V +>{
      def5 = ld def;
      def6 = force? def5;
      checkMissing(def6);
      return def6;
    };
    p21 = prom<V +>{
      env2 = ld env;
      env3 = force? env2;
      checkMissing(env3);
      return env3;
    };
    r68 = dyn assign1[, , envir](p19, p20, p21);
    check L100() else D40();
  D13():
    deopt 60 [c13, sig4];
  D18():
    deopt 84 [r23];
  D38():
    deopt 150 [r62];
  D40():
    deopt 158 [r68];
  L52():
    sig5 = force? sig4;
    checkMissing(sig5);
    identical = ldf identical in base;
    r20 = dyn identical(r19, sig5, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
    check L53() else D14();
  L61():
    c25 = `as.logical`(r23);
    if c25 then L62() else L14();
  L98():
    st env = r62;
    goto L25();
  L100():
    env4 = ld env;
    check L101() else D41();
  D14():
    deopt 70 [c13, r20];
  D41():
    deopt 159 [env4];
  L14():
    sym5 = ldf `is.environment`;
    base5 = ldf `is.environment` in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L87() else L88();
  L22(r48):
    goto L25();
  L53():
    goto L10(c13, r20);
  L62():
    sym2 = ldf attr;
    base2 = ldf attr in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L63() else L64();
  L101():
    env5 = force? env4;
    checkMissing(env5);
    popenv;
    return env5;
  L15(r25):
    st pkg = r25;
    sym3 = ldf length;
    base3 = ldf length in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L66() else L67();
  L23(r50):
    c28 = `as.logical`(r50);
    if c28 then L91() else L24();
  L63():
    __2 = ldf `@` in base;
    r26 = dyn __2(<sym current>, <sym target>);
    attr = ldf attr in base;
    r27 = dyn attr(r26, "package");
    check L65() else D19();
  L64():
    r24 = dyn base2(<lang `@`(current, target)>, "package");
    goto L15(r24);
  L87():
    current8 = ld current;
    check L89() else D32();
  L88():
    r49 = dyn base5(<sym current>);
    goto L23(r49);
  D19():
    deopt 91 [r27];
  D32():
    deopt 135 [current8];
  L16(r29):
    r31 = `==`(r29, 0.0);
    c26 = `as.logical`(r31);
    if c26 then L70() else L17();
  L24():
    stop = ldf stop;
    check L94() else D35();
  L65():
    goto L15(r27);
  L66():
    pkg = ld pkg;
    check L68() else D20();
  L67():
    r28 = dyn base3(<sym pkg>);
    goto L16(r28);
  L89():
    current9 = force? current8;
    checkMissing(current9);
    is_environment = ldf `is.environment` in base;
    r51 = dyn is_environment(current9);
    check L90() else D33();
  L91():
    current10 = ld current;
    check L92() else D34();
  D20():
    deopt 95 [pkg];
  D33():
    deopt 138 [r51];
  D34():
    deopt 139 [current10];
  D35():
    deopt 143 [];
  L17():
    goto L18();
  L18():
    new_env = ldf `new.env`;
    check L74() else D24();
  L68():
    pkg1 = force? pkg;
    checkMissing(pkg1);
    length = ldf length in base;
    r30 = dyn length(pkg1);
    check L69() else D21();
  L70():
    _fixPackageSlot1 = ldf `.fixPackageSlot`;
    check L71() else D22();
  L90():
    goto L23(r51);
  L92():
    current11 = force? current10;
    checkMissing(current11);
    st env = current11;
    goto L22(current11);
  L94():
    p17 = prom<V +>{
      gettextf = ldf gettextf;
      p16 = prom<V +>{
        dQuote = ldf dQuote;
        p15 = prom<V +>{
          sym6 = ldf class;
          base6 = ldf class in base;
          guard6 = `==`.4(sym6, base6);
          if guard6 then L1() else L2();
        L0(r53):
          return r53;
        L1():
          current12 = ld current;
          current13 = force? current12;
          checkMissing(current13);
          class = ldf class in base;
          r54 = dyn class(current13);
          goto L0(r54);
        L2():
          r52 = dyn base6(<sym current>);
          goto L0(r52);
        };
        r56 = dyn dQuote(p15);
        return r56;
      };
      r58 = dyn gettextf("bad method object stored in method table, class %s", p16);
      return r58;
    };
    r60 = dyn stop[, domain](p17, NA_LGL);
    check L95() else D36();
  D21():
    deopt 98 [r30];
  D22():
    deopt 102 [];
  D24():
    deopt 110 [];
  D36():
    deopt 147 [r60];
  L69():
    goto L16(r30);
  L71():
    p9 = prom<V +>{
      current2 = ld current;
      current3 = force? current2;
      checkMissing(current3);
      return current3;
    };
    p10 = prom<V +>{
      __3 = ldf `@` in base;
      r33 = dyn __3(<sym current>, <sym target>);
      return r33;
    };
    r35 = dyn _fixPackageSlot1(p9, p10);
    check L72() else D23();
  L74():
    r37 = dyn new_env();
    check L75() else D25();
  L95():
    goto L22(r60);
  D23():
    deopt 105 [r35];
  D25():
    deopt 111 [r37];
  L72():
    st current = r35;
    goto L18();
  L75():
    st env = r37;
    _pkgMethodLabel = ldf `.pkgMethodLabel`;
    check L76() else D26();
  D26():
    deopt 114 [];
  L76():
    p11 = prom<V +>{
      current4 = ld current;
      current5 = force? current4;
      checkMissing(current5);
      return current5;
    };
    r39 = dyn _pkgMethodLabel(p11);
    check L77() else D27();
  D27():
    deopt 116 [r39];
  L77():
    st var = r39;
    sym4 = ldf nzchar;
    base4 = ldf nzchar in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L78() else L79();
  L19(r41):
    c27 = `as.logical`(r41);
    if c27 then L82() else L20();
  L78():
    var = ld var;
    check L80() else D28();
  L79():
    r40 = dyn base4(<sym var>);
    goto L19(r40);
  D28():
    deopt 120 [var];
  L20():
    goto L21(NULL);
  L21(r47):
    goto L22(r47);
  L80():
    var1 = force? var;
    checkMissing(var1);
    nzchar = ldf nzchar in base;
    r42 = dyn nzchar(var1);
    check L81() else D29();
  L82():
    assign = ldf assign;
    check L83() else D30();
  D29():
    deopt 123 [r42];
  D30():
    deopt 125 [];
  L81():
    goto L19(r42);
  L83():
    p12 = prom<V +>{
      var2 = ld var;
      var3 = force? var2;
      checkMissing(var3);
      return var3;
    };
    p13 = prom<V +>{
      current6 = ld current;
      current7 = force? current6;
      checkMissing(current7);
      return current7;
    };
    p14 = prom<V +>{
      env = ld env;
      env1 = force? env;
      checkMissing(env1);
      return env1;
    };
    r46 = dyn assign[, , envir](p12, p13, p14);
    check L84() else D31();
  D31():
    deopt 130 [r46];
  L84():
    goto L21(r46);
  }
}