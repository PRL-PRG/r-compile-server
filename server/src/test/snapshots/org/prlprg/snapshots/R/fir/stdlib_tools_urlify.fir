fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2938472522;
    st urlify = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2938472522(x, reserved, repeated) {
  (reg x:*, reg reserved:*, reg repeated:*) -+> V { var x:*, var reserved:*, reg reserved_isMissing:L, reg reserved_orDefault:*, var repeated:*, reg repeated_isMissing:L, reg repeated_orDefault:*, reg repeated1:*, reg repeated2:V, reg r:V, reg c:L, reg c2:V, reg grepl:cls, reg x1:*, reg x2:V, reg p:p(V +), reg r2:V, reg c3:L, reg c4:V, reg c6:L, reg gsub:cls, reg x3:*, reg x4:V, reg p1:p(V +), reg r4:V, reg unlist:cls, reg strsplit:cls, reg x5:*, reg x6:V, reg p2:p(V +), reg r6:V, reg p3:p(V +), reg r8:V, reg vapply:cls, reg chars:*, reg chars1:V, reg p4:p(V +), reg r10:cls, reg p5:p(V +), reg r12:V, reg sym:cls, reg base:cls, reg guard:L, reg r13:V, reg r14:V, reg reserved1:*, reg reserved2:V, reg c7:L, reg c8:L, reg paste:cls, reg reserved3:*, reg reserved4:V, reg p6:p(V +), reg r16:V, reg startsWith:cls, reg reserved5:*, reg reserved6:V, reg p7:p(V +), reg r18:V, reg c9:L, reg substring:cls, reg reserved7:*, reg reserved8:V, reg p8:p(V +), reg r20:V, reg r21:V, reg rawToChar:cls, reg setdiff:cls, reg charToRaw:cls, reg alldelims:*, reg alldelims1:V, reg p9:p(V +), reg r23:V, reg p10:p(V +), reg charToRaw1:cls, reg reserved9:*, reg reserved10:V, reg p11:p(V +), reg r26:V, reg p12:p(V +), reg r28:V, reg p13:p(V +), reg r30:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r31:V, reg r32:V, reg charToRaw2:cls, reg reserved11:*, reg reserved12:V, reg p14:p(V +), reg r34:V, reg charToRaw3:cls, reg r35:V, reg r36:V, reg any:cls, reg r37:V, reg reserved13:*, reg reserved14:V, reg r39:V, reg c10:L, reg alldelims2:*, reg alldelims3:V, reg paste1:cls, reg reserved15:*, reg reserved16:V, reg p15:p(V +), reg r41:V, reg paste2:cls, reg ifelse:cls, reg grepl1:cls, reg todo:*, reg todo1:V, reg p16:p(V +), reg chars2:*, reg chars3:V, reg p17:p(V +), reg r44:V, reg p18:p(V +), reg hex:*, reg hex1:V, reg p19:p(V +), reg chars4:*, reg chars5:V, reg p20:p(V +), reg r48:V, reg p21:p(V +), reg r50:V, reg escape:*, reg escape1:V, reg c11:L, reg gsub1:cls, reg x7:*, reg x8:V, reg p22:p(V +), reg r52:V, reg x9:*, reg x10:V |
    mkenv;
    st x = x;
    reserved_isMissing = missing.0(reserved);
    if reserved_isMissing then L0(FALSE) else L0(reserved);
  L0(reserved_orDefault):
    st reserved = reserved_orDefault;
    repeated_isMissing = missing.0(repeated);
    if repeated_isMissing then L1(FALSE) else L1(repeated);
  L1(repeated_orDefault):
    st repeated = repeated_orDefault;
    st alldelims = "][!$&'()*+,;=:/?@#";
    repeated1 = ld repeated;
    check L13() else D0();
  D0():
    deopt 3 [repeated1];
  L13():
    repeated2 = force? repeated1;
    checkMissing(repeated2);
    r = `!`(repeated2);
    c = `as.logical`(r);
    if c then L14() else L2(c);
  L2(c2):
    c6 = `as.logical`(c2);
    if c6 then L18() else L3();
  L14():
    grepl = ldf grepl;
    check L15() else D1();
  D1():
    deopt 7 [c];
  L3():
    unlist = ldf unlist;
    check L22() else D5();
  L15():
    p = prom<V +>{
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      return x2;
    };
    r2 = dyn grepl[, , useBytes]("%[[:xdigit:]]{2}", p, TRUE);
    check L16() else D2();
  L18():
    gsub = ldf gsub;
    check L19() else D3();
  D2():
    deopt 12 [c, r2];
  D3():
    deopt 15 [];
  D5():
    deopt 23 [];
  L16():
    c3 = `as.logical`(r2);
    c4 = `&&`(c, c3);
    goto L2(c4);
  L19():
    p1 = prom<V +>{
      x3 = ld x;
      x4 = force? x3;
      checkMissing(x4);
      return x4;
    };
    r4 = dyn gsub[, , , fixed]("&", "&amp;", p1, TRUE);
    check L20() else D4();
  L22():
    p3 = prom<V +>{
      strsplit = ldf strsplit;
      p2 = prom<V +>{
        x5 = ld x;
        x6 = force? x5;
        checkMissing(x6);
        return x6;
      };
      r6 = dyn strsplit(p2, "");
      return r6;
    };
    r8 = dyn unlist(p3);
    check L23() else D6();
  D4():
    deopt 21 [r4];
  D6():
    deopt 25 [r8];
  L20():
    popenv;
    return r4;
  L23():
    st chars = r8;
    vapply = ldf vapply;
    check L24() else D7();
  D7():
    deopt 28 [];
  L24():
    p4 = prom<V +>{
      chars = ld chars;
      chars1 = force? chars;
      checkMissing(chars1);
      return chars1;
    };
    p5 = prom<V +>{
      r10 = clos inner2501545716;
      return r10;
    };
    r12 = dyn vapply(p4, p5, "");
    check L25() else D8();
  D8():
    deopt 32 [r12];
  L25():
    st hex = r12;
    sym = ldf `is.character`;
    base = ldf `is.character` in base;
    guard = `==`.4(sym, base);
    if guard then L26() else L27();
  L4(r14):
    c8 = `as.logical`(r14);
    if c8 then L29() else L5();
  L26():
    reserved1 = ld reserved;
    check L28() else D9();
  L27():
    r13 = dyn base(<sym reserved>);
    goto L4(r13);
  D9():
    deopt 35 [reserved1];
  L5():
    reserved13 = ld reserved;
    check L48() else D23();
  L9():
    paste1 = ldf paste0;
    check L52() else D25();
  L28():
    reserved2 = force? reserved1;
    checkMissing(reserved2);
    c7 = `is.character`(reserved2);
    goto L4(c7);
  L29():
    paste = ldf paste;
    check L30() else D10();
  D10():
    deopt 39 [];
  D23():
    deopt 73 [reserved13];
  D25():
    deopt 89 [];
  L30():
    p6 = prom<V +>{
      reserved3 = ld reserved;
      reserved4 = force? reserved3;
      checkMissing(reserved4);
      return reserved4;
    };
    r16 = dyn paste[, collapse](p6, "");
    check L31() else D11();
  L48():
    reserved14 = force? reserved13;
    checkMissing(reserved14);
    r39 = `!`(reserved14);
    c10 = `as.logical`(r39);
    if c10 then L49() else L10();
  L52():
    p15 = prom<V +>{
      reserved15 = ld reserved;
      reserved16 = force? reserved15;
      checkMissing(reserved16);
      return reserved16;
    };
    r41 = dyn paste1("[^", p15, "ABCDEFGHIJKLMNOPQRSTUVWXYZ", "abcdefghijklmnopqrstuvwxyz0123456789._~-", "]");
    check L53() else D26();
  D11():
    deopt 43 [r16];
  D26():
    deopt 95 [r41];
  L10():
    st reserved = "";
    st escape = FALSE;
    goto L9();
  L31():
    st reserved = r16;
    startsWith = ldf startsWith;
    check L32() else D12();
  L49():
    alldelims2 = ld alldelims;
    check L50() else D24();
  L53():
    st todo = r41;
    paste2 = ldf paste;
    check L54() else D27();
  D12():
    deopt 46 [];
  D24():
    deopt 76 [alldelims2];
  D27():
    deopt 98 [];
  L32():
    p7 = prom<V +>{
      reserved5 = ld reserved;
      reserved6 = force? reserved5;
      checkMissing(reserved6);
      return reserved6;
    };
    r18 = dyn startsWith(p7, "^");
    check L33() else D13();
  L50():
    alldelims3 = force? alldelims2;
    checkMissing(alldelims3);
    st reserved = alldelims3;
    st escape = TRUE;
    goto L9();
  L54():
    p21 = prom<V +>{
      ifelse = ldf ifelse;
      p18 = prom<V +>{
        grepl1 = ldf grepl;
        p16 = prom<V +>{
          todo = ld todo;
          todo1 = force? todo;
          checkMissing(todo1);
          return todo1;
        };
        p17 = prom<V +>{
          chars2 = ld chars;
          chars3 = force? chars2;
          checkMissing(chars3);
          return chars3;
        };
        r44 = dyn grepl1(p16, p17);
        return r44;
      };
      p19 = prom<V +>{
        hex = ld hex;
        hex1 = force? hex;
        checkMissing(hex1);
        return hex1;
      };
      p20 = prom<V +>{
        chars4 = ld chars;
        chars5 = force? chars4;
        checkMissing(chars5);
        return chars5;
      };
      r48 = dyn ifelse(p18, p19, p20);
      return r48;
    };
    r50 = dyn paste2[, collapse](p21, "");
    check L55() else D28();
  D13():
    deopt 49 [r18];
  D28():
    deopt 102 [r50];
  L33():
    c9 = `as.logical`(r18);
    if c9 then L34() else L6();
  L55():
    st x = r50;
    escape = ld escape;
    check L56() else D29();
  D29():
    deopt 104 [escape];
  L6():
    rawToChar = ldf rawToChar;
    check L38() else D16();
  L7(r21):
    st reserved = r21;
    sym1 = ldf any;
    base1 = ldf any in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L40() else L41();
  L34():
    substring = ldf substring;
    check L35() else D14();
  L56():
    escape1 = force? escape;
    checkMissing(escape1);
    c11 = `as.logical`(escape1);
    if c11 then L57() else L11();
  D14():
    deopt 51 [];
  D16():
    deopt 56 [];
  L8(r32):
    st escape = r32;
    goto L9();
  L11():
    goto L12();
  L12():
    x9 = ld x;
    check L61() else D32();
  L35():
    p8 = prom<V +>{
      reserved7 = ld reserved;
      reserved8 = force? reserved7;
      checkMissing(reserved8);
      return reserved8;
    };
    r20 = dyn substring(p8, 2);
    check L36() else D15();
  L38():
    p13 = prom<V +>{
      setdiff = ldf setdiff;
      p10 = prom<V +>{
        charToRaw = ldf charToRaw;
        p9 = prom<V +>{
          alldelims = ld alldelims;
          alldelims1 = force? alldelims;
          checkMissing(alldelims1);
          return alldelims1;
        };
        r23 = dyn charToRaw(p9);
        return r23;
      };
      p12 = prom<V +>{
        charToRaw1 = ldf charToRaw;
        p11 = prom<V +>{
          reserved9 = ld reserved;
          reserved10 = force? reserved9;
          checkMissing(reserved10);
          return reserved10;
        };
        r26 = dyn charToRaw1(p11);
        return r26;
      };
      r28 = dyn setdiff(p10, p12);
      return r28;
    };
    r30 = dyn rawToChar(p13);
    check L39() else D17();
  L40():
    charToRaw2 = ldf charToRaw;
    check L42() else D18();
  L41():
    r31 = dyn base1(<lang `==`(charToRaw(reserved), charToRaw("&"))>);
    goto L8(r31);
  L57():
    gsub1 = ldf gsub;
    check L58() else D30();
  D15():
    deopt 54 [r20];
  D17():
    deopt 58 [r30];
  D18():
    deopt 63 [];
  D30():
    deopt 107 [];
  D32():
    deopt 117 [x9];
  L36():
    goto L7(r20);
  L39():
    goto L7(r30);
  L42():
    p14 = prom<V +>{
      reserved11 = ld reserved;
      reserved12 = force? reserved11;
      checkMissing(reserved12);
      return reserved12;
    };
    r34 = dyn charToRaw2(p14);
    check L43() else D19();
  L58():
    p22 = prom<V +>{
      x7 = ld x;
      x8 = force? x7;
      checkMissing(x8);
      return x8;
    };
    r52 = dyn gsub1[, , , fixed]("&", "&amp;", p22, TRUE);
    check L59() else D31();
  L61():
    x10 = force? x9;
    checkMissing(x10);
    popenv;
    return x10;
  D19():
    deopt 65 [r34];
  D31():
    deopt 113 [r52];
  L43():
    charToRaw3 = ldf charToRaw;
    check L44() else D20();
  L59():
    st x = r52;
    goto L12();
  D20():
    deopt 66 [r34];
  L44():
    r35 = dyn charToRaw3("&");
    check L45() else D21();
  D21():
    deopt 68 [r34, r35];
  L45():
    r36 = `==`(r34, r35);
    any = ldf any in base;
    r37 = dyn any(r36);
    check L46() else D22();
  D22():
    deopt 71 [r37];
  L46():
    goto L8(r37);
  }
}
fun inner2501545716(x) {
  (reg x:*) -+> V { var x:*, reg paste0:cls, reg toupper:cls, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg charToRaw:cls, reg x1:*, reg x2:V, reg p:p(V +), reg r3:V, reg as_character:cls, reg r4:V, reg p1:p(V +), reg r6:V, reg p2:p(V +), reg r8:V |
    mkenv;
    st x = x;
    paste0 = ldf paste0;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p2 = prom<V +>{
      toupper = ldf toupper;
      p1 = prom<V +>{
        sym = ldf `as.character`;
        base = ldf `as.character` in base;
        guard = `==`.4(sym, base);
        if guard then L1() else L2();
      L0(r1):
        return r1;
      L1():
        charToRaw = ldf charToRaw;
        p = prom<V +>{
          x1 = ld x;
          x2 = force? x1;
          checkMissing(x2);
          return x2;
        };
        r3 = dyn charToRaw(p);
        as_character = ldf `as.character` in base;
        r4 = dyn as_character(r3);
        goto L0(r4);
      L2():
        r = dyn base(<lang charToRaw(x)>);
        goto L0(r);
      };
      r6 = dyn toupper(p1);
      return r6;
    };
    r8 = dyn paste0[, , collapse]("%", p2, "");
    check L1() else D1();
  D1():
    deopt 6 [r8];
  L1():
    popenv;
    return r8;
  }
}