fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2243798041;
    st `str.logLik` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2243798041(object, digits, `vec.len`, `...`) {
  (reg object:*, reg digits:*, reg vec_len:*, reg ddd:dots) -+> V { var object:*, var digits:*, reg digits_isMissing:L, reg digits_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg getOption:cls, reg r2:V, reg r3:V, reg max:cls, reg r4:V, reg p:p(V +), var `vec.len`:*, reg vec_len_isMissing:L, reg vec_len_orDefault:*, reg getOption1:cls, reg r6:V, reg c:L, reg r8:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r9:V, reg p1:p(V +), var `...`:dots?, reg sym1:cls, reg base1:cls, reg guard1:L, reg r11:V, reg r12:V, reg object1:*, reg object2:V, reg oldClass:cls, reg r13:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r14:V, reg r15:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r16:V, reg r17:V, reg object3:*, reg object4:V, reg c1:cls, reg r18:V, reg length:cls, reg r19:V, reg len:*, reg len1:V, reg vec_len1:*, reg vec_len2:V, reg r20:V, reg cat:cls, reg sym4:cls, reg base4:cls, reg guard4:L, reg r21:V, reg r22:V, reg cl:*, reg cl1:V, reg length1:cls, reg r23:V, reg r24:V, reg c2:L, reg p2:p(V +), reg paste:cls, reg cl2:*, reg cl3:V, reg p3:p(V +), reg r27:V, reg p4:p(V +), reg paste1:cls, reg format:cls, reg co:*, reg co1:V, reg c3:L, reg co3:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r29:V, reg co6:V, reg r30:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r31:V, reg co9:V, reg r32:V, reg len2:*, reg len3:V, reg vec_len3:*, reg vec_len4:V, reg min:cls, reg r33:V, reg r34:I, reg __:cls, reg r35:V, reg p5:p(V +), reg digits1:*, reg digits2:V, reg p6:p(V +), reg r38:V, reg p7:p(V +), reg r40:V, reg p8:p(V +), reg cutl:*, reg cutl1:V, reg c4:L, reg p9:p(V +), reg format1:cls, reg sym7:cls, reg base7:cls, reg guard7:L, reg r43:V, reg r44:V, reg object5:*, reg object6:V, reg attr:cls, reg r45:V, reg p10:p(V +), reg r47:V, reg p11:p(V +), reg r49:V |
    mkenv;
    st object = object;
    digits_isMissing = missing.0(digits);
    if digits_isMissing then L0() else L1(digits);
  L0():
    p = prom<V +>{
      sym = ldf max;
      base = ldf max in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r1):
      return r1;
    L1():
      getOption = ldf getOption;
      r2 = dyn getOption("digits");
      r3 = `-`(r2, 3);
      max = ldf max in base;
      r4 = dyn max(2, r3);
      goto L0(r4);
    L2():
      r = dyn base(2, <lang `-`(getOption("digits"), 3)>);
      goto L0(r);
    };
    goto L1(p);
  L1(digits_orDefault):
    st digits = digits_orDefault;
    vec_len_isMissing = missing.0(vec_len);
    if vec_len_isMissing then L2() else L3(vec_len);
  L2():
    p1 = prom<V +>{
      getOption1 = ldf getOption;
      r6 = dyn getOption1("str");
      c = `is.object`(r6);
      if c then L1() else L2(r6);
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("$", r6);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(r8):
      r9 = `$`(r8, <sym vec.len>);
      goto L0(r9);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    goto L3(p1);
  L3(vec_len_orDefault):
    st `vec.len` = vec_len_orDefault;
    st `...` = ddd;
    sym1 = ldf oldClass;
    base1 = ldf oldClass in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L7() else L8();
  L4(r12):
    st cl = r12;
    sym2 = ldf length;
    base2 = ldf length in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L11() else L12();
  L7():
    object1 = ld object;
    check L9() else D0();
  L8():
    r11 = dyn base1(<sym object>);
    goto L4(r11);
  D0():
    deopt 2 [object1];
  L5(r15):
    st len = r15;
    len = ld len;
    check L18() else D5();
  L9():
    object2 = force? object1;
    checkMissing(object2);
    oldClass = ldf oldClass in base;
    r13 = dyn oldClass(object2);
    check L10() else D1();
  L11():
    sym3 = ldf c;
    base3 = ldf c in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L13() else L14();
  L12():
    r14 = dyn base2(<lang `<-`(co, c(object))>);
    goto L5(r14);
  D1():
    deopt 5 [r13];
  D5():
    deopt 19 [len];
  L6(r17):
    st co = r17;
    length = ldf length in base;
    r19 = dyn length(r17);
    check L17() else D4();
  L10():
    goto L4(r13);
  L13():
    object3 = ld object;
    check L15() else D2();
  L14():
    r16 = dyn base3(<sym object>);
    goto L6(r16);
  L18():
    len1 = force? len;
    checkMissing(len1);
    vec_len1 = ld `vec.len`;
    check L19() else D6();
  D2():
    deopt 11 [object3];
  D4():
    deopt 17 [r19];
  D6():
    deopt 20 [len1, vec_len1];
  L15():
    object4 = force? object3;
    checkMissing(object4);
    c1 = ldf c in base;
    r18 = dyn c1(object4);
    check L16() else D3();
  L17():
    goto L5(r19);
  L19():
    vec_len2 = force? vec_len1;
    checkMissing(vec_len2);
    r20 = `>`(len1, vec_len2);
    st cutl = r20;
    cat = ldf cat;
    check L20() else D7();
  D3():
    deopt 14 [r18];
  D7():
    deopt 25 [];
  L16():
    goto L6(r18);
  L20():
    p2 = prom<V +>{
      sym4 = ldf length;
      base4 = ldf length in base;
      guard4 = `==`.4(sym4, base4);
      if guard4 then L2() else L3();
    L0(r22):
      r24 = `>`(r22, 1);
      c2 = `as.logical`(r24);
      if c2 then L4() else L1();
    L2():
      cl = ld cl;
      cl1 = force? cl;
      checkMissing(cl1);
      length1 = ldf length in base;
      r23 = dyn length1(cl1);
      goto L0(r23);
    L3():
      r21 = dyn base4(<sym cl>);
      goto L0(r21);
    L1():
      invisible.0();
      return NULL;
    L4():
      return "es";
    };
    p4 = prom<V +>{
      paste = ldf paste;
      p3 = prom<V +>{
        cl2 = ld cl;
        cl3 = force? cl2;
        checkMissing(cl3);
        return cl3;
      };
      r27 = dyn paste[, collapse](p3, "', '");
      return r27;
    };
    p8 = prom<V +>{
      paste1 = ldf paste;
      p7 = prom<V +>{
        format = ldf format;
        p5 = prom<V +>{
          co = ld co;
          co1 = force? co;
          checkMissing(co1);
          c3 = `is.object`(co1);
          if c3 then L3() else L4(co1);
        L0(dx3):
          return dx3;
        L3():
          dr2 = tryDispatchBuiltin.1("[", co1);
          dc1 = getTryDispatchBuiltinDispatched(dr2);
          if dc1 then L5() else L4(dr2);
        L4(co3):
          sym5 = ldf seq_len;
          base5 = ldf seq_len in base;
          guard5 = `==`.4(sym5, base5);
          if guard5 then L6() else L7();
        L1(co6, r30):
          __ = ldf `[` in base;
          r35 = dyn __(co6, r30);
          goto L0(r35);
        L5():
          dx2 = getTryDispatchBuiltinValue(dr2);
          goto L0(dx2);
        L6():
          sym6 = ldf min;
          base6 = ldf min in base;
          guard6 = `==`.4(sym6, base6);
          if guard6 then L8() else L9();
        L7():
          r29 = dyn base5(<lang min(len, vec.len)>);
          goto L1(co3, r29);
        L2(co9, r32):
          r34 = seq_len(r32);
          goto L1(co9, r34);
        L8():
          len2 = ld len;
          len3 = force? len2;
          checkMissing(len3);
          vec_len3 = ld `vec.len`;
          vec_len4 = force? vec_len3;
          checkMissing(vec_len4);
          min = ldf min in base;
          r33 = dyn min(len3, vec_len4);
          goto L2(co3, r33);
        L9():
          r31 = dyn base6(<sym len>, <sym vec.len>);
          goto L2(co3, r31);
        };
        p6 = prom<V +>{
          digits1 = ld digits;
          digits2 = force? digits1;
          checkMissing(digits2);
          return digits2;
        };
        r38 = dyn format[, digits](p5, p6);
        return r38;
      };
      r40 = dyn paste1[, collapse](p7, ", ");
      return r40;
    };
    p9 = prom<V +>{
      cutl = ld cutl;
      cutl1 = force? cutl;
      checkMissing(cutl1);
      c4 = `as.logical`(cutl1);
      if c4 then L1() else L0();
    L0():
      invisible.0();
      return NULL;
    L1():
      return ", ...";
    };
    p11 = prom<V +>{
      format1 = ldf format;
      p10 = prom<V +>{
        sym7 = ldf attr;
        base7 = ldf attr in base;
        guard7 = `==`.4(sym7, base7);
        if guard7 then L1() else L2();
      L0(r44):
        return r44;
      L1():
        object5 = ld object;
        object6 = force? object5;
        checkMissing(object6);
        attr = ldf attr in base;
        r45 = dyn attr(object6, "df");
        goto L0(r45);
      L2():
        r43 = dyn base7(<sym object>, "df");
        goto L0(r43);
      };
      r47 = dyn format1(p10);
      return r47;
    };
    r49 = dyn cat[, , , , , , , , , , sep]("Class", p2, " '", p4, "' : ", p8, p9, " (df=", p11, ")\n", "");
    check L21() else D8();
  D8():
    deopt 38 [r49];
  L21():
    popenv;
    return r49;
  }
}