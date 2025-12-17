fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner227375237;
    st `.reportSuperclassConflicts` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner227375237(className, ext, where) {
  (reg className:*, reg ext:*, reg where:*) -+> V { var className:*, var ext:*, var where:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg ext1:*, reg ext2:V, reg names:cls, reg r2:V, reg character:cls, reg r3:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r4:V, reg r5:V, reg ext3:*, reg ext4:V, reg r6:I, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c:L, reg x:V, reg what:*, reg what1:V, reg c1:L, reg i6:I, reg what3:V, reg dr:V, reg dc:L, reg dx:V, reg i8:I, reg dx1:V, reg i9:*, reg i10:V, reg __:cls, reg r7:V, reg packageSlot:cls, reg ext5:*, reg ext6:V, reg c2:L, reg ext8:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg i11:*, reg i12:V, reg __1:cls, reg r8:V, reg p:p(V +), reg r10:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r11:V, reg i15:I, reg r12:V, reg __2:cls, reg r13:V, reg identical:cls, reg r14:V, reg c3:L, reg i17:I, reg c5:V, reg isClass:cls, reg by:*, reg by1:V, reg p1:p(V +), reg wherei:*, reg wherei1:V, reg p2:p(V +), reg r17:V, reg c6:L, reg c7:V, reg c9:L, reg getClassDef:cls, reg by2:*, reg by3:V, reg p3:p(V +), reg wherei2:*, reg wherei3:V, reg p4:p(V +), reg r20:V, reg __3:cls, reg r21:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r22:V, reg i23:I, reg r23:V, reg exti:*, reg exti1:V, reg attr:cls, reg r24:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r25:V, reg i26:I, reg r26:V, reg coni:*, reg coni1:V, reg length:cls, reg r27:V, reg r28:V, reg c10:L, reg warning:cls, reg gettextf:cls, reg _dQ:cls, reg className1:*, reg className2:V, reg p5:p(V +), reg r30:V, reg p6:p(V +), reg _dQ1:cls, reg by4:*, reg by5:V, reg p7:p(V +), reg r33:V, reg p8:p(V +), reg paste:cls, reg _dQ2:cls, reg coni2:*, reg coni3:V, reg p9:p(V +), reg r36:V, reg p10:p(V +), reg r38:V, reg p11:p(V +), reg r40:V, reg p12:p(V +), reg r42:V, reg unique:cls, reg sym5:cls, reg base5:cls, reg guard5:L, reg r43:V, reg r44:V, reg conflicts:*, reg conflicts1:V, reg coni4:*, reg coni5:V, reg c11:cls, reg r45:V, reg p13:p(V +), reg r47:V, reg i29:I, reg r48:V, reg i30:I, reg sym6:cls, reg base6:cls, reg guard6:L, reg r50:V, reg r51:V, reg ext9:*, reg ext10:V, reg attr1:cls, reg r52:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r53:V, reg r54:V, reg newconflicts:*, reg newconflicts1:V, reg length1:cls, reg r55:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r58:V, reg r59:V, reg r60:V, reg conflicts2:*, reg conflicts3:V, reg length2:cls, reg r61:V, reg r62:V, reg c12:L, reg warning1:cls, reg gettextf1:cls, reg _dQ3:cls, reg className3:*, reg className4:V, reg p14:p(V +), reg r64:V, reg p15:p(V +), reg paste1:cls, reg _dQ4:cls, reg setdiff:cls, reg newconflicts2:*, reg newconflicts3:V, reg p16:p(V +), reg conflicts4:*, reg conflicts5:V, reg p17:p(V +), reg r68:V, reg p18:p(V +), reg r70:V, reg p19:p(V +), reg r72:V, reg p20:p(V +), reg r74:V, reg p21:p(V +), reg r76:V |
    mkenv;
    st className = className;
    st ext = ext;
    st where = where;
    sym = ldf names;
    base = ldf names in base;
    guard = `==`.4(sym, base);
    if guard then L17() else L18();
  L0(r1):
    st what = r1;
    character = ldf character;
    check L21() else D2();
  L17():
    ext1 = ld ext;
    check L19() else D0();
  L18():
    r = dyn base(<sym ext>);
    goto L0(r);
  D0():
    deopt 2 [ext1];
  D2():
    deopt 8 [];
  L19():
    ext2 = force? ext1;
    checkMissing(ext2);
    names = ldf names in base;
    r2 = dyn names(ext2);
    check L20() else D1();
  L21():
    r3 = dyn character();
    check L22() else D3();
  D1():
    deopt 5 [r2];
  D3():
    deopt 9 [r3];
  L20():
    goto L0(r2);
  L22():
    st conflicts = r3;
    sym1 = ldf seq_along;
    base1 = ldf seq_along in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L23() else L24();
  L1(r5):
    s = toForSeq(r5);
    l = length(s);
    i = 0;
    goto L2(i);
  L23():
    ext3 = ld ext;
    check L25() else D4();
  L24():
    r4 = dyn base1(<sym ext>);
    goto L1(r4);
  D4():
    deopt 12 [ext3];
  L2(i1):
    i2 = `+`.1(i1, 1);
    c = `<`.1(l, i2);
    if c then L26() else L12();
  L25():
    ext4 = force? ext3;
    checkMissing(ext4);
    r6 = seq_along(ext4);
    goto L1(r6);
  L12():
    x = `[[`(s, i2, NULL, TRUE);
    st i = x;
    what = ld what;
    check L27() else D5();
  L26():
    sym6 = ldf attr;
    base6 = ldf attr in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L59() else L60();
  D5():
    deopt 15 [i2, what];
  L13(r51):
    st newconflicts = r51;
    sym7 = ldf length;
    base7 = ldf length in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L63() else L64();
  L27():
    what1 = force? what;
    checkMissing(what1);
    c1 = `is.object`(what1);
    if c1 then L28() else L29(i2, what1);
  L59():
    ext9 = ld ext;
    check L61() else D22();
  L60():
    r50 = dyn base6(<sym ext>, "conflicts");
    goto L13(r50);
  D22():
    deopt 95 [ext9];
  L3(i8, dx1):
    st by = dx1;
    packageSlot = ldf packageSlot;
    check L32() else D7();
  L14(r54):
    sym8 = ldf length;
    base8 = ldf length in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L67() else L68();
  L28():
    dr = tryDispatchBuiltin.1("[[", what1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L30() else L29(i2, dr);
  L29(i6, what3):
    i9 = ld i;
    check L31() else D6();
  L61():
    ext10 = force? ext9;
    checkMissing(ext10);
    attr1 = ldf attr in base;
    r52 = dyn attr1(ext10, "conflicts");
    check L62() else D23();
  L63():
    newconflicts = ld newconflicts;
    check L65() else D24();
  L64():
    r53 = dyn base7(<sym newconflicts>);
    goto L14(r53);
  D6():
    deopt 17 [i6, what3, i9];
  D7():
    deopt 22 [i8];
  D23():
    deopt 99 [r52];
  D24():
    deopt 103 [newconflicts];
  L15(r59, r60):
    r62 = `>`(r59, r60);
    c12 = `as.logical`(r62);
    if c12 then L71() else L16();
  L30():
    dx = getTryDispatchBuiltinValue(dr);
    goto L3(i2, dx);
  L31():
    i10 = force? i9;
    __ = ldf `[[` in base;
    r7 = dyn __(what3, i10);
    goto L3(i6, r7);
  L32():
    p = prom<V +>{
      ext5 = ld ext;
      ext6 = force? ext5;
      checkMissing(ext6);
      c2 = `is.object`(ext6);
      if c2 then L1() else L2(ext6);
    L0(dx3):
      return dx3;
    L1():
      dr2 = tryDispatchBuiltin.1("[[", ext6);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L3() else L2(dr2);
    L2(ext8):
      i11 = ld i;
      i12 = force? i11;
      __1 = ldf `[[` in base;
      r8 = dyn __1(ext8, i12);
      goto L0(r8);
    L3():
      dx2 = getTryDispatchBuiltinValue(dr2);
      goto L0(dx2);
    };
    r10 = dyn packageSlot(p);
    check L33() else D8();
  L62():
    goto L13(r52);
  L65():
    newconflicts1 = force? newconflicts;
    checkMissing(newconflicts1);
    length1 = ldf length in base;
    r55 = dyn length1(newconflicts1);
    check L66() else D25();
  L67():
    conflicts2 = ld conflicts;
    check L69() else D26();
  L68():
    r58 = dyn base8(<sym conflicts>);
    goto L15(r54, r58);
  D8():
    deopt 24 [i8, r10];
  D25():
    deopt 106 [r55];
  D26():
    deopt 108 [r54, conflicts2];
  L16():
    invisible.0();
    popenv;
    return NULL;
  L33():
    st wherei = r10;
    sym2 = ldf identical;
    base2 = ldf identical in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L34() else L35();
  L66():
    goto L14(r55);
  L69():
    conflicts3 = force? conflicts2;
    checkMissing(conflicts3);
    length2 = ldf length in base;
    r61 = dyn length2(conflicts3);
    check L70() else D27();
  L71():
    warning1 = ldf warning;
    check L72() else D28();
  D27():
    deopt 111 [r54, r61];
  D28():
    deopt 114 [];
  L4(i15, r12):
    c3 = `as.logical`(r12);
    if c3 then L37() else L5(i15, c3);
  L34():
    __2 = ldf `@` in base;
    r13 = dyn __2(<lang `[[`(ext, i)>, <sym distance>);
    identical = ldf identical in base;
    r14 = dyn identical(r13, 1.0, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
    check L36() else D9();
  L35():
    r11 = dyn base2(<lang `@`(`[[`(ext, i), distance)>, 1.0);
    goto L4(i8, r11);
  L70():
    goto L15(r54, r61);
  L72():
    p21 = prom<V +>{
      gettextf1 = ldf gettextf;
      p15 = prom<V +>{
        _dQ3 = ldf `.dQ`;
        p14 = prom<V +>{
          className3 = ld className;
          className4 = force? className3;
          checkMissing(className4);
          return className4;
        };
        r64 = dyn _dQ3(p14);
        return r64;
      };
      p20 = prom<V +>{
        paste1 = ldf paste;
        p19 = prom<V +>{
          _dQ4 = ldf `.dQ`;
          p18 = prom<V +>{
            setdiff = ldf setdiff;
            p16 = prom<V +>{
              newconflicts2 = ld newconflicts;
              newconflicts3 = force? newconflicts2;
              checkMissing(newconflicts3);
              return newconflicts3;
            };
            p17 = prom<V +>{
              conflicts4 = ld conflicts;
              conflicts5 = force? conflicts4;
              checkMissing(conflicts5);
              return conflicts5;
            };
            r68 = dyn setdiff(p16, p17);
            return r68;
          };
          r70 = dyn _dQ4(p18);
          return r70;
        };
        r72 = dyn paste1[, collapse](p19, ", ");
        return r72;
      };
      r74 = dyn gettextf1("unable to find a consistent ordering of superclasses for class %s: order chosen is inconsistent with the superclasses of %s", p15, p20);
      return r74;
    };
    r76 = dyn warning1[, `call.`, domain](p21, FALSE, NA_LGL);
    check L73() else D29();
  D9():
    deopt 39 [i8, r14];
  D29():
    deopt 120 [r76];
  L5(i17, c5):
    c9 = `as.logical`(c5);
    if c9 then L41() else L6();
  L36():
    goto L4(i8, r14);
  L37():
    isClass = ldf isClass;
    check L38() else D10();
  L73():
    popenv;
    return r76;
  D10():
    deopt 41 [i15, c3];
  L6():
    goto L11(i17);
  L11(i30):
    goto L2(i30);
  L38():
    p1 = prom<V +>{
      by = ld by;
      by1 = force? by;
      checkMissing(by1);
      return by1;
    };
    p2 = prom<V +>{
      wherei = ld wherei;
      wherei1 = force? wherei;
      checkMissing(wherei1);
      return wherei1;
    };
    r17 = dyn isClass[, where](p1, p2);
    check L39() else D11();
  L41():
    getClassDef = ldf getClassDef;
    check L42() else D12();
  D11():
    deopt 45 [i15, c3, r17];
  D12():
    deopt 48 [i17];
  L39():
    c6 = `as.logical`(r17);
    c7 = `&&`(c3, c6);
    goto L5(i15, c7);
  L42():
    p3 = prom<V +>{
      by2 = ld by;
      by3 = force? by2;
      checkMissing(by3);
      return by3;
    };
    p4 = prom<V +>{
      wherei2 = ld wherei;
      wherei3 = force? wherei2;
      checkMissing(wherei3);
      return wherei3;
    };
    r20 = dyn getClassDef[, package](p3, p4);
    check L43() else D13();
  D13():
    deopt 52 [i17, r20];
  L43():
    st byDef = r20;
    __3 = ldf `@` in base;
    r21 = dyn __3(<sym byDef>, <sym contains>);
    st exti = r21;
    sym3 = ldf attr;
    base3 = ldf attr in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L44() else L45();
  L7(i23, r23):
    st coni = r23;
    sym4 = ldf length;
    base4 = ldf length in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L48() else L49();
  L44():
    exti = ld exti;
    check L46() else D14();
  L45():
    r22 = dyn base3(<sym exti>, "conflicts");
    goto L7(i17, r22);
  D14():
    deopt 59 [i17, exti];
  L8(i26, r26):
    r28 = `>`(r26, 0.0);
    c10 = `as.logical`(r28);
    if c10 then L52() else L9();
  L46():
    exti1 = force? exti;
    checkMissing(exti1);
    attr = ldf attr in base;
    r24 = dyn attr(exti1, "conflicts");
    check L47() else D15();
  L48():
    coni = ld coni;
    check L50() else D16();
  L49():
    r25 = dyn base4(<sym coni>);
    goto L8(i23, r25);
  D15():
    deopt 63 [i17, r24];
  D16():
    deopt 67 [i23, coni];
  L9():
    goto L10(i26, NULL);
  L10(i29, r48):
    goto L11(i29);
  L47():
    goto L7(i17, r24);
  L50():
    coni1 = force? coni;
    checkMissing(coni1);
    length = ldf length in base;
    r27 = dyn length(coni1);
    check L51() else D17();
  L52():
    warning = ldf warning;
    check L53() else D18();
  D17():
    deopt 70 [i23, r27];
  D18():
    deopt 74 [i26];
  L51():
    goto L8(i23, r27);
  L53():
    p12 = prom<V +>{
      gettextf = ldf gettextf;
      p6 = prom<V +>{
        _dQ = ldf `.dQ`;
        p5 = prom<V +>{
          className1 = ld className;
          className2 = force? className1;
          checkMissing(className2);
          return className2;
        };
        r30 = dyn _dQ(p5);
        return r30;
      };
      p8 = prom<V +>{
        _dQ1 = ldf `.dQ`;
        p7 = prom<V +>{
          by4 = ld by;
          by5 = force? by4;
          checkMissing(by5);
          return by5;
        };
        r33 = dyn _dQ1(p7);
        return r33;
      };
      p11 = prom<V +>{
        paste = ldf paste;
        p10 = prom<V +>{
          _dQ2 = ldf `.dQ`;
          p9 = prom<V +>{
            coni2 = ld coni;
            coni3 = force? coni2;
            checkMissing(coni3);
            return coni3;
          };
          r36 = dyn _dQ2(p9);
          return r36;
        };
        r38 = dyn paste[, collapse](p10, ", ");
        return r38;
      };
      r40 = dyn gettextf("class %s is inheriting an inconsistent superclass structure from class %s, inconsistent with %s", p6, p8, p11);
      return r40;
    };
    r42 = dyn warning[, `call.`, domain](p12, FALSE, NA_LGL);
    check L54() else D19();
  D19():
    deopt 80 [i26, r42];
  L54():
    unique = ldf unique;
    check L55() else D20();
  D20():
    deopt 82 [i26];
  L55():
    p13 = prom<V +>{
      sym5 = ldf c;
      base5 = ldf c in base;
      guard5 = `==`.4(sym5, base5);
      if guard5 then L1() else L2();
    L0(r44):
      return r44;
    L1():
      conflicts = ld conflicts;
      conflicts1 = force? conflicts;
      checkMissing(conflicts1);
      coni4 = ld coni;
      coni5 = force? coni4;
      checkMissing(coni5);
      c11 = ldf c in base;
      r45 = dyn c11(conflicts1, coni5);
      goto L0(r45);
    L2():
      r43 = dyn base5(<sym conflicts>, <sym coni>);
      goto L0(r43);
    };
    r47 = dyn unique(p13);
    check L56() else D21();
  D21():
    deopt 84 [i26, r47];
  L56():
    st conflicts = r47;
    goto L10(i26, r47);
  }
}