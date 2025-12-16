fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos `inner-1489449974`;
    st substring = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun `inner-1489449974`(text, first, last) {
  (reg text:*, reg first:*, reg last:*) -+> V { var text:*, var first:*, var last:*, reg last_isMissing:L, reg last_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg text1:*, reg text2:V, reg c:L, reg r2:V, reg c1:L, reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg r4:V, reg text3:*, reg text4:V, reg as_character:cls, reg r5:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r7:V, reg r8:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r9:V, reg r10:V, reg text5:*, reg text6:V, reg length:cls, reg r11:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r12:V, reg r13:V, reg first1:*, reg first2:V, reg length1:cls, reg r14:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r15:V, reg r16:V, reg last1:*, reg last2:V, reg length2:cls, reg r17:V, reg max:cls, reg r18:V, reg lt:*, reg lt1:V, reg c2:L, reg c4:V, reg lt2:*, reg lt3:V, reg n:*, reg n1:V, reg r19:V, reg c5:L, reg c6:V, reg c8:L, reg sym6:cls, reg base6:cls, reg guard6:L, reg r20:V, reg r21:V, reg text7:*, reg text8:V, reg n2:*, reg n3:V, reg rep_len:cls, reg r22:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r24:V, reg r25:V, reg text9:*, reg text10:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r26:V, reg r27:V, reg first3:*, reg first4:V, reg as_integer:cls, reg r28:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r29:V, reg r30:V, reg last3:*, reg last4:V, reg as_integer1:cls, reg r31:V, reg substr:cls, reg r32:V |
    mkenv;
    st text = text;
    st first = first;
    last_isMissing = missing.0(last);
    if last_isMissing then L0(1000000) else L0(last);
  L0(last_orDefault):
    st last = last_orDefault;
    sym = ldf `is.character`;
    base = ldf `is.character` in base;
    guard = `==`.4(sym, base);
    if guard then L16() else L17();
  L1(r1):
    r2 = `!`(r1);
    c1 = `as.logical`(r2);
    if c1 then L19() else L2();
  L16():
    text1 = ld text;
    check L18() else D0();
  L17():
    r = dyn base(<sym text>);
    goto L1(r);
  D0():
    deopt 1 [text1];
  L2():
    goto L4();
  L4():
    sym2 = ldf max;
    base2 = ldf max in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L25() else L26();
  L18():
    text2 = force? text1;
    checkMissing(text2);
    c = `is.character`(text2);
    goto L1(c);
  L19():
    sym1 = ldf `as.character`;
    base1 = ldf `as.character` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L20() else L21();
  L3(r4):
    st text = r4;
    goto L4();
  L5(r8):
    st n = r8;
    lt = ld lt;
    check L40() else D10();
  L20():
    text3 = ld text;
    check L22() else D1();
  L21():
    r3 = dyn base1(<sym text>);
    goto L3(r3);
  L25():
    sym3 = ldf length;
    base3 = ldf length in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L27() else L28();
  L26():
    r7 = dyn base2(<lang `<-`(lt, length(text))>, <lang length(first)>, <lang length(last)>);
    goto L5(r7);
  D1():
    deopt 7 [text3];
  D10():
    deopt 38 [lt];
  L6(r10):
    st lt = r10;
    sym4 = ldf length;
    base4 = ldf length in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L31() else L32();
  L22():
    text4 = force? text3;
    checkMissing(text4);
    as_character = ldf `as.character` in base;
    r5 = dyn as_character(text4);
    check L23() else D2();
  L27():
    text5 = ld text;
    check L29() else D3();
  L28():
    r9 = dyn base3(<sym text>);
    goto L6(r9);
  L40():
    lt1 = force? lt;
    checkMissing(lt1);
    c2 = `as.logical`(lt1);
    if c2 then L41() else L9(c2);
  D2():
    deopt 10 [r5];
  D3():
    deopt 18 [text5];
  L7(r13):
    sym5 = ldf length;
    base5 = ldf length in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L35() else L36();
  L9(c4):
    c8 = `as.logical`(c4);
    if c8 then L45() else L10();
  L23():
    goto L3(r5);
  L29():
    text6 = force? text5;
    checkMissing(text6);
    length = ldf length in base;
    r11 = dyn length(text6);
    check L30() else D4();
  L31():
    first1 = ld first;
    check L33() else D5();
  L32():
    r12 = dyn base4(<sym first>);
    goto L7(r12);
  L41():
    lt2 = ld lt;
    check L42() else D11();
  D4():
    deopt 21 [r11];
  D5():
    deopt 25 [first1];
  D11():
    deopt 40 [c2, lt2];
  L8(r16):
    max = ldf max in base;
    r18 = dyn max(r10, r13, r16);
    check L39() else D9();
  L10():
    goto L12();
  L12():
    sym7 = ldf `.Internal`;
    base7 = ldf `.Internal` in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L52() else L53();
  L30():
    goto L6(r11);
  L33():
    first2 = force? first1;
    checkMissing(first2);
    length1 = ldf length in base;
    r14 = dyn length1(first2);
    check L34() else D6();
  L35():
    last1 = ld last;
    check L37() else D7();
  L36():
    r15 = dyn base5(<sym last>);
    goto L8(r15);
  L42():
    lt3 = force? lt2;
    checkMissing(lt3);
    n = ld n;
    check L43() else D12();
  L45():
    sym6 = ldf rep_len;
    base6 = ldf rep_len in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L46() else L47();
  D6():
    deopt 28 [r14];
  D7():
    deopt 31 [last1];
  D9():
    deopt 36 [r18];
  D12():
    deopt 41 [c2, lt3, n];
  L11(r21):
    st text = r21;
    goto L12();
  L13(r25):
    popenv;
    return r25;
  L34():
    goto L7(r14);
  L37():
    last2 = force? last1;
    checkMissing(last2);
    length2 = ldf length in base;
    r17 = dyn length2(last2);
    check L38() else D8();
  L39():
    goto L5(r18);
  L43():
    n1 = force? n;
    checkMissing(n1);
    r19 = `<`(lt3, n1);
    c5 = `as.logical`(r19);
    c6 = `&&`(c2, c5);
    goto L9(c6);
  L46():
    text7 = ld text;
    check L48() else D13();
  L47():
    r20 = dyn base6[, `length.out`](<sym text>, <sym n>);
    goto L11(r20);
  L52():
    text9 = ld text;
    check L54() else D16();
  L53():
    r24 = dyn base7(<lang substr(text, as.integer(first), as.integer(last))>);
    goto L13(r24);
  D8():
    deopt 34 [r17];
  D13():
    deopt 47 [text7];
  D16():
    deopt 58 [text9];
  L38():
    goto L8(r17);
  L48():
    text8 = force? text7;
    checkMissing(text8);
    n2 = ld n;
    check L49() else D14();
  L54():
    text10 = force? text9;
    checkMissing(text10);
    sym8 = ldf `as.integer`;
    base8 = ldf `as.integer` in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L55() else L56();
  D14():
    deopt 49 [n2];
  L14(r27):
    sym9 = ldf `as.integer`;
    base9 = ldf `as.integer` in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L59() else L60();
  L49():
    n3 = force? n2;
    checkMissing(n3);
    rep_len = ldf rep_len in base;
    r22 = dyn rep_len(text8, n3);
    check L50() else D15();
  L55():
    first3 = ld first;
    check L57() else D17();
  L56():
    r26 = dyn base8(<sym first>);
    goto L14(r26);
  D15():
    deopt 52 [r22];
  D17():
    deopt 62 [first3];
  L15(r30):
    substr = ldf substr in base;
    r32 = dyn substr(text10, r27, r30);
    check L63() else D21();
  L50():
    goto L11(r22);
  L57():
    first4 = force? first3;
    checkMissing(first4);
    as_integer = ldf `as.integer` in base;
    r28 = dyn as_integer(first4);
    check L58() else D18();
  L59():
    last3 = ld last;
    check L61() else D19();
  L60():
    r29 = dyn base9(<sym last>);
    goto L15(r29);
  D18():
    deopt 65 [r28];
  D19():
    deopt 68 [last3];
  D21():
    deopt 73 [r32];
  L58():
    goto L14(r28);
  L61():
    last4 = force? last3;
    checkMissing(last4);
    as_integer1 = ldf `as.integer` in base;
    r31 = dyn as_integer1(last4);
    check L62() else D20();
  L63():
    goto L13(r32);
  D20():
    deopt 71 [r31];
  L62():
    goto L15(r31);
  }
}