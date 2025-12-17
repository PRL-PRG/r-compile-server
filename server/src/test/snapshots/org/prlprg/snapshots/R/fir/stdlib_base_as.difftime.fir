fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner356975031;
    st `as.difftime` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner356975031(tim, format, units, tz) {
  (reg tim:*, reg format:*, reg units:*, reg tz:*) -+> V { var tim:*, var format:*, reg format_isMissing:L, reg format_orDefault:*, var units:*, reg units_isMissing:L, reg units_orDefault:*, var tz:*, reg tz_isMissing:L, reg tz_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg tim1:*, reg tim2:V, reg inherits:cls, reg r2:V, reg c:L, reg tim3:*, reg tim4:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r5:V, reg r6:V, reg tim5:*, reg tim6:V, reg c1:L, reg c2:L, reg difftime:cls, reg strptime:cls, reg tim7:*, reg tim8:V, reg p:p(V +), reg format1:*, reg format2:V, reg p1:p(V +), reg r9:V, reg p2:p(V +), reg strptime1:cls, reg r11:V, reg p3:p(V +), reg units1:*, reg units2:V, reg p4:p(V +), reg tz1:*, reg tz2:V, reg p5:p(V +), reg r15:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r16:V, reg r17:V, reg tim9:*, reg tim10:V, reg is_numeric:cls, reg r18:V, reg r19:V, reg c3:L, reg stop:cls, reg r20:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r22:V, reg r23:V, reg tim11:*, reg tim12:V, reg names:cls, reg r24:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r25:V, reg r26:V, reg tim13:*, reg tim14:V, reg as_double:cls, reg r27:V, reg nms:*, reg nms1:V, reg l:*, reg names__:cls, reg r28:V, reg units3:*, reg units4:V, reg r29:V, reg c4:L, reg stop1:cls, reg r30:V, reg _in_:cls, reg units5:*, reg units6:V, reg p6:p(V +), reg sym5:cls, reg base5:cls, reg guard5:L, reg r33:V, reg r34:V, reg c5:cls, reg r35:V, reg p7:p(V +), reg r37:V, reg r38:V, reg c6:L, reg stop2:cls, reg r39:V, reg _difftime:cls, reg tim15:*, reg tim16:V, reg p8:p(V +), reg units7:*, reg units8:V, reg p9:p(V +), reg r43:V |
    mkenv;
    st tim = tim;
    format_isMissing = missing.0(format);
    if format_isMissing then L0("%X") else L0(format);
  L0(format_orDefault):
    st format = format_orDefault;
    units_isMissing = missing.0(units);
    if units_isMissing then L1("auto") else L1(units);
  L1(units_orDefault):
    st units = units_orDefault;
    tz_isMissing = missing.0(tz);
    if tz_isMissing then L2("UTC") else L2(tz);
  L2(tz_orDefault):
    st tz = tz_orDefault;
    sym = ldf inherits;
    base = ldf inherits in base;
    guard = `==`.4(sym, base);
    if guard then L17() else L18();
  L3(r1):
    c = `as.logical`(r1);
    if c then L21() else L4();
  L17():
    tim1 = ld tim;
    check L19() else D0();
  L18():
    r = dyn base(<sym tim>, "difftime");
    goto L3(r);
  D0():
    deopt 2 [tim1];
  L4():
    sym1 = ldf `is.character`;
    base1 = ldf `is.character` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L25() else L26();
  L19():
    tim2 = force? tim1;
    checkMissing(tim2);
    inherits = ldf inherits in base;
    r2 = dyn inherits(tim2, "difftime", FALSE);
    check L20() else D1();
  L21():
    tim3 = ld tim;
    check L22() else D2();
  D1():
    deopt 7 [r2];
  D2():
    deopt 8 [tim3];
  L6(r6):
    c2 = `as.logical`(r6);
    if c2 then L28() else L7();
  L20():
    goto L3(r2);
  L22():
    tim4 = force? tim3;
    checkMissing(tim4);
    popenv;
    return tim4;
  L25():
    tim5 = ld tim;
    check L27() else D3();
  L26():
    r5 = dyn base1(<sym tim>);
    goto L6(r5);
  D3():
    deopt 14 [tim5];
  L7():
    sym2 = ldf `is.numeric`;
    base2 = ldf `is.numeric` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L32() else L33();
  L27():
    tim6 = force? tim5;
    checkMissing(tim6);
    c1 = `is.character`(tim6);
    goto L6(c1);
  L28():
    difftime = ldf difftime;
    check L29() else D4();
  D4():
    deopt 18 [];
  L8(r17):
    r19 = `!`(r17);
    c3 = `as.logical`(r19);
    if c3 then L36() else L9();
  L29():
    p2 = prom<V +>{
      strptime = ldf strptime;
      p = prom<V +>{
        tim7 = ld tim;
        tim8 = force? tim7;
        checkMissing(tim8);
        return tim8;
      };
      p1 = prom<V +>{
        format1 = ld format;
        format2 = force? format1;
        checkMissing(format2);
        return format2;
      };
      r9 = dyn strptime[, format](p, p1);
      return r9;
    };
    p3 = prom<V +>{
      strptime1 = ldf strptime;
      r11 = dyn strptime1[, format]("0:0:0", "%X");
      return r11;
    };
    p4 = prom<V +>{
      units1 = ld units;
      units2 = force? units1;
      checkMissing(units2);
      return units2;
    };
    p5 = prom<V +>{
      tz1 = ld tz;
      tz2 = force? tz1;
      checkMissing(tz2);
      return tz2;
    };
    r15 = dyn difftime[, , units, tz](p2, p3, p4, p5);
    check L30() else D5();
  L32():
    tim9 = ld tim;
    check L34() else D6();
  L33():
    r16 = dyn base2(<sym tim>);
    goto L8(r16);
  D5():
    deopt 25 [r15];
  D6():
    deopt 28 [tim9];
  L9():
    goto L10();
  L10():
    sym3 = ldf names;
    base3 = ldf names in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L40() else L41();
  L30():
    popenv;
    return r15;
  L34():
    tim10 = force? tim9;
    checkMissing(tim10);
    is_numeric = ldf `is.numeric` in base;
    r18 = dyn is_numeric(tim10);
    check L35() else D7();
  L36():
    stop = ldf stop;
    check L37() else D8();
  D7():
    deopt 31 [r18];
  D8():
    deopt 34 [];
  L11(r23):
    st nms = r23;
    sym4 = ldf `as.double`;
    base4 = ldf `as.double` in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L44() else L45();
  L35():
    goto L8(r18);
  L37():
    r20 = dyn stop("'tim' is not character or numeric");
    check L38() else D9();
  L40():
    tim11 = ld tim;
    check L42() else D10();
  L41():
    r22 = dyn base3(<sym tim>);
    goto L11(r22);
  D9():
    deopt 36 [r20];
  D10():
    deopt 41 [tim11];
  L12(r26):
    st tim = r26;
    nms = ld nms;
    check L48() else D14();
  L38():
    goto L10();
  L42():
    tim12 = force? tim11;
    checkMissing(tim12);
    names = ldf names in base;
    r24 = dyn names(tim12);
    check L43() else D11();
  L44():
    tim13 = ld tim;
    check L46() else D12();
  L45():
    r25 = dyn base4(<sym tim>);
    goto L12(r25);
  D11():
    deopt 44 [r24];
  D12():
    deopt 48 [tim13];
  D14():
    deopt 53 [nms];
  L43():
    goto L11(r24);
  L46():
    tim14 = force? tim13;
    checkMissing(tim14);
    as_double = ldf `as.double` in base;
    r27 = dyn as_double(tim14);
    check L47() else D13();
  L48():
    nms1 = force? nms;
    checkMissing(nms1);
    l = ld tim;
    names__ = ldf `names<-`;
    check L49() else D15();
  D13():
    deopt 51 [r27];
  D15():
    deopt 56 [nms1, l, nms1];
  L47():
    goto L12(r27);
  L49():
    r28 = dyn names__(l, NULL, nms1);
    check L50() else D16();
  D16():
    deopt 58 [nms1, r28];
  L50():
    st tim = r28;
    units3 = ld units;
    check L51() else D17();
  D17():
    deopt 60 [units3];
  L51():
    units4 = force? units3;
    checkMissing(units4);
    r29 = `==`(units4, "auto");
    c4 = `as.logical`(r29);
    if c4 then L52() else L13();
  L13():
    goto L14();
  L14():
    _in_ = ldf `%in%`;
    check L56() else D20();
  L52():
    stop1 = ldf stop;
    check L53() else D18();
  D18():
    deopt 65 [];
  D20():
    deopt 71 [];
  L53():
    r30 = dyn stop1("need explicit units for numeric conversion");
    check L54() else D19();
  L56():
    p6 = prom<V +>{
      units5 = ld units;
      units6 = force? units5;
      checkMissing(units6);
      return units6;
    };
    p7 = prom<V +>{
      sym5 = ldf c;
      base5 = ldf c in base;
      guard5 = `==`.4(sym5, base5);
      if guard5 then L1() else L2();
    L0(r34):
      return r34;
    L1():
      c5 = ldf c in base;
      r35 = dyn c5("secs", "mins", "hours", "days", "weeks");
      goto L0(r35);
    L2():
      r33 = dyn base5("secs", "mins", "hours", "days", "weeks");
      goto L0(r33);
    };
    r37 = dyn _in_(p6, p7);
    check L57() else D21();
  D19():
    deopt 67 [r30];
  D21():
    deopt 74 [r37];
  L54():
    goto L14();
  L57():
    r38 = `!`(r37);
    c6 = `as.logical`(r38);
    if c6 then L58() else L15();
  L15():
    goto L16();
  L16():
    _difftime = ldf `.difftime`;
    check L62() else D24();
  L58():
    stop2 = ldf stop;
    check L59() else D22();
  D22():
    deopt 77 [];
  D24():
    deopt 83 [];
  L59():
    r39 = dyn stop2("invalid units specified");
    check L60() else D23();
  L62():
    p8 = prom<V +>{
      tim15 = ld tim;
      tim16 = force? tim15;
      checkMissing(tim16);
      return tim16;
    };
    p9 = prom<V +>{
      units7 = ld units;
      units8 = force? units7;
      checkMissing(units8);
      return units8;
    };
    r43 = dyn _difftime[, units](p8, p9);
    check L63() else D25();
  D23():
    deopt 79 [r39];
  D25():
    deopt 87 [r43];
  L60():
    goto L16();
  L63():
    popenv;
    return r43;
  }
}