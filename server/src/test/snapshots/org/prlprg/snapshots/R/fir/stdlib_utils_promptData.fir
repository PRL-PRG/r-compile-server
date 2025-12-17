fun main() {
  () -+> V { reg r:cls, reg setwd:cls, reg tempdir:cls, reg r1:V, reg p:p(V +), reg r3:V, reg promptData:cls, reg sunspots:*, reg sunspots1:V, reg p1:p(V +), reg r5:V, reg unlink:cls, reg r6:V, reg setwd1:cls, reg oldwd:*, reg oldwd1:V, reg p2:p(V +), reg r8:V |
    mkenv;
    r = clos inner1822950587;
    st promptData = r;
    setwd = ldf setwd;
    check L0() else D0();
  D0():
    deopt 4 [];
  L0():
    p = prom<V +>{
      tempdir = ldf tempdir;
      r1 = dyn tempdir();
      return r1;
    };
    r3 = dyn setwd(p);
    check L1() else D1();
  D1():
    deopt 6 [r3];
  L1():
    st oldwd = r3;
    promptData = ldf promptData;
    check L2() else D2();
  D2():
    deopt 9 [];
  L2():
    p1 = prom<V +>{
      sunspots = ld sunspots;
      sunspots1 = force? sunspots;
      checkMissing(sunspots1);
      return sunspots1;
    };
    r5 = dyn promptData(p1);
    check L3() else D3();
  D3():
    deopt 11 [r5];
  L3():
    unlink = ldf unlink;
    check L4() else D4();
  D4():
    deopt 13 [];
  L4():
    r6 = dyn unlink("sunspots.Rd");
    check L5() else D5();
  D5():
    deopt 15 [r6];
  L5():
    setwd1 = ldf setwd;
    check L6() else D6();
  D6():
    deopt 17 [];
  L6():
    p2 = prom<V +>{
      oldwd = ld oldwd;
      oldwd1 = force? oldwd;
      checkMissing(oldwd1);
      return oldwd1;
    };
    r8 = dyn setwd1(p2);
    check L7() else D7();
  D7():
    deopt 19 [r8];
  L7():
    popenv;
    return r8;
  }
}
fun inner1822950587(object, filename, name) {
  (reg object:*, reg filename:*, reg name:*) -+> V { var object:*, var filename:*, reg filename_isMissing:L, reg filename_orDefault:*, var name:*, reg name_isMissing:L, reg name_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg missing:cls, reg r2:V, reg c:L, reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg r4:V, reg object1:*, reg object2:V, reg c1:L, reg c2:L, reg object3:*, reg object4:V, reg object5:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r5:V, reg r6:V, reg substitute:cls, reg r7:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r8:V, reg r9:V, reg name1:*, reg name2:V, reg c3:L, reg c4:L, reg sym4:cls, reg base4:cls, reg guard4:L, reg r10:V, reg r11:V, reg name3:*, reg name4:V, reg as_character:cls, reg r12:V, reg stop:cls, reg r13:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r14:V, reg r15:V, reg filename1:*, reg filename2:V, reg c5:V, reg c6:L, reg paste0:cls, reg name5:*, reg name6:V, reg p:p(V +), reg r17:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r19:V, reg r20:V, reg missing1:cls, reg r21:V, reg r22:V, reg c7:L, reg object7:*, reg object8:V, reg object9:V, reg get:cls, reg name7:*, reg name8:V, reg p1:p(V +), reg parent_frame:cls, reg r24:V, reg p2:p(V +), reg r26:V, reg is_data_frame:cls, reg x:*, reg x1:V, reg p3:p(V +), reg r28:V, reg c8:L, reg r29:cls, reg sym7:cls, reg base7:cls, reg guard7:L, reg r30:V, reg r31:V, reg paste1:cls, reg nrow:cls, reg x2:*, reg x3:V, reg p4:p(V +), reg r33:V, reg p5:p(V +), reg ifelse:cls, reg ncol:cls, reg x4:*, reg x5:V, reg p6:p(V +), reg r36:V, reg r37:V, reg p7:p(V +), reg paste2:cls, reg ncol1:cls, reg x6:*, reg x7:V, reg p8:p(V +), reg r40:V, reg p9:p(V +), reg r42:V, reg p10:p(V +), reg r44:V, reg p11:p(V +), reg r46:V, reg c9:cls, reg r47:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r48:V, reg r49:V, reg x8:*, reg x9:V, reg names:cls, reg r50:V, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c10:L, reg x10:V, reg x11:*, reg x12:V, reg c11:L, reg i6:I, reg x14:V, reg dr:V, reg dc:L, reg dx:V, reg i8:I, reg dx1:V, reg i9:*, reg i10:V, reg __:cls, reg r51:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r52:V, reg i13:I, reg r53:V, reg fmt:*, reg fmt1:V, reg paste3:cls, reg make_item_tag:cls, reg i14:*, reg i15:V, reg p12:p(V +), reg r55:V, reg p13:p(V +), reg sym10:cls, reg base10:cls, reg guard10:L, reg r57:V, reg r58:V, reg xi:*, reg xi1:V, reg inherits:cls, reg r59:V, reg c12:L, reg paste4:cls, reg data_class:cls, reg xi2:*, reg xi3:V, reg p14:p(V +), reg r61:V, reg p15:p(V +), reg paste5:cls, reg levels:cls, reg xi4:*, reg xi5:V, reg p16:p(V +), reg r64:V, reg p17:p(V +), reg r66:V, reg p18:p(V +), reg r68:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r69:V, reg r70:V, reg xi6:*, reg xi7:V, reg inherits1:cls, reg r71:V, reg c13:L, reg paste6:cls, reg paste7:cls, reg levels1:cls, reg xi8:*, reg xi9:V, reg p19:p(V +), reg r73:V, reg p20:p(V +), reg r75:V, reg p21:p(V +), reg r77:V, reg sym12:cls, reg base12:cls, reg guard12:L, reg r78:V, reg r79:V, reg xi10:*, reg xi11:V, reg is_vector:cls, reg r80:V, reg c14:L, reg paste8:cls, reg data_class1:cls, reg xi12:*, reg xi13:V, reg p22:p(V +), reg r82:V, reg p23:p(V +), reg r84:V, reg sym13:cls, reg base13:cls, reg guard13:L, reg r85:V, reg r86:V, reg xi14:*, reg xi15:V, reg is_matrix:cls, reg r87:V, reg c15:L, reg paste9:cls, reg ncol2:cls, reg xi16:*, reg xi17:V, reg p24:p(V +), reg r89:V, reg p25:p(V +), reg r91:V, reg paste10:cls, reg data_class2:cls, reg xi18:*, reg xi19:V, reg p26:p(V +), reg r93:V, reg p27:p(V +), reg r95:V, reg p28:p(V +), reg r97:V, reg c16:cls, reg r98:V, reg sym14:cls, reg base14:cls, reg guard14:L, reg r99:V, reg r100:V, reg fmt2:*, reg fmt3:V, reg c17:cls, reg r101:V, reg tempfile:cls, reg r103:V, reg sym15:cls, reg base15:cls, reg guard15:L, reg r104:V, reg on_exit:cls, reg r106:V, reg sink:cls, reg tf:*, reg tf1:V, reg p29:p(V +), reg r108:V, reg str:cls, reg object10:*, reg object11:V, reg p30:p(V +), reg r110:V, reg sink1:cls, reg r111:V, reg sym16:cls, reg base16:cls, reg guard16:L, reg r112:V, reg r113:V, reg scan:cls, reg tf2:*, reg tf3:V, reg p31:p(V +), reg getOption:cls, reg r115:V, reg r116:V, reg p32:p(V +), reg r118:V, reg c18:cls, reg r119:V, reg sym17:cls, reg base17:cls, reg guard17:L, reg r120:V, reg r121:V, reg paste11:cls, reg name9:*, reg name10:V, reg p33:p(V +), reg r123:V, reg paste12:cls, reg name11:*, reg name12:V, reg p34:p(V +), reg r125:V, reg sym18:cls, reg base18:cls, reg guard18:L, reg r126:V, reg r127:V, reg c19:cls, reg r128:V, reg sym19:cls, reg base19:cls, reg guard19:L, reg r129:V, reg r130:V, reg c20:cls, reg r131:V, reg paste13:cls, reg name13:*, reg name14:V, reg p35:p(V +), reg r133:V, reg fmt4:*, reg fmt5:V, reg sym20:cls, reg base20:cls, reg guard20:L, reg r134:V, reg r135:V, reg paste14:cls, reg r136:V, reg c21:cls, reg r137:V, reg sym21:cls, reg base21:cls, reg guard21:L, reg r138:V, reg r139:V, reg paste15:cls, reg r140:V, reg c22:cls, reg r141:V, reg sym22:cls, reg base22:cls, reg guard22:L, reg r142:V, reg r143:V, reg c23:cls, reg r144:V, reg sym23:cls, reg base23:cls, reg guard23:L, reg r145:V, reg r146:V, reg paste16:cls, reg name15:*, reg name16:V, reg p36:p(V +), reg r148:V, reg paste17:cls, reg name17:*, reg name18:V, reg p37:p(V +), reg name19:*, reg name20:V, reg p38:p(V +), reg r151:V, reg c24:cls, reg r152:V, reg list:cls, reg r153:V, reg sym24:cls, reg base24:cls, reg guard24:L, reg r154:V, reg r155:V, reg filename3:*, reg filename4:V, reg is_na:cls, reg r156:V, reg c25:L, reg Rdtxt:*, reg Rdtxt1:V, reg cat:cls, reg unlist:cls, reg Rdtxt2:*, reg Rdtxt3:V, reg p39:p(V +), reg r160:V, reg p40:p(V +), reg filename5:*, reg filename6:V, reg p41:p(V +), reg r163:V, reg message:cls, reg gettextf:cls, reg sQuote:cls, reg filename7:*, reg filename8:V, reg p42:p(V +), reg r165:V, reg p43:p(V +), reg r167:V, reg p44:p(V +), reg gettext:cls, reg r169:V, reg p45:p(V +), reg r171:V, reg sym25:cls, reg base25:cls, reg guard25:L, reg r172:V, reg r173:V, reg filename9:*, reg filename10:V, reg invisible:cls, reg r174:V |
    mkenv;
    st object = object;
    filename_isMissing = missing.0(filename);
    if filename_isMissing then L0(NULL) else L0(filename);
  L0(filename_orDefault):
    st filename = filename_orDefault;
    name_isMissing = missing.0(name);
    if name_isMissing then L1(NULL) else L1(name);
  L1(name_orDefault):
    st name = name_orDefault;
    sym = ldf missing;
    base = ldf missing in base;
    guard = `==`.4(sym, base);
    if guard then L40() else L41();
  L2(r1):
    c = `as.logical`(r1);
    if c then L42() else L3();
  L40():
    missing = ldf missing in base;
    r2 = dyn missing(<sym name>);
    goto L2(r2);
  L41():
    r = dyn base(<sym name>);
    goto L2(r);
  L3():
    goto L11();
  L11():
    sym5 = ldf `is.null`;
    base5 = ldf `is.null` in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L63() else L64();
  L42():
    sym1 = ldf `is.character`;
    base1 = ldf `is.character` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L43() else L44();
  L4(r4):
    c2 = `as.logical`(r4);
    if c2 then L46() else L5();
  L12(r15):
    c6 = `as.logical`(r15);
    if c6 then L66() else L13();
  L43():
    object1 = ld object;
    check L45() else D0();
  L44():
    r3 = dyn base1(<sym object>);
    goto L4(r3);
  L63():
    filename1 = ld filename;
    check L65() else D7();
  L64():
    r14 = dyn base5(<sym filename>);
    goto L12(r14);
  D0():
    deopt 4 [object1];
  D7():
    deopt 31 [filename1];
  L5():
    sym2 = ldf substitute;
    base2 = ldf substitute in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L49() else L50();
  L6(object5):
    st name = object5;
    goto L11();
  L13():
    goto L14();
  L14():
    sym6 = ldf missing;
    base6 = ldf missing in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L70() else L71();
  L45():
    object2 = force? object1;
    checkMissing(object2);
    c1 = `is.character`(object2);
    goto L4(c1);
  L46():
    object3 = ld object;
    check L47() else D1();
  L65():
    filename2 = force? filename1;
    checkMissing(filename2);
    c5 = `==`(filename2, NULL);
    goto L12(c5);
  L66():
    paste0 = ldf paste0;
    check L67() else D8();
  D1():
    deopt 7 [object3];
  D8():
    deopt 35 [];
  L7(r6):
    st name = r6;
    sym3 = ldf `is.name`;
    base3 = ldf `is.name` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L51() else L52();
  L15(r20):
    r22 = `!`(r20);
    c7 = `as.logical`(r22);
    if c7 then L72() else L16();
  L47():
    object4 = force? object3;
    checkMissing(object4);
    goto L6(object4);
  L49():
    substitute = ldf substitute in base;
    r7 = dyn substitute(<sym object>);
    goto L7(r7);
  L50():
    r5 = dyn base2(<sym object>);
    goto L7(r5);
  L67():
    p = prom<V +>{
      name5 = ld name;
      name6 = force? name5;
      checkMissing(name6);
      return name6;
    };
    r17 = dyn paste0(p, ".Rd");
    check L68() else D9();
  L70():
    missing1 = ldf missing in base;
    r21 = dyn missing1(<sym object>);
    goto L15(r21);
  L71():
    r19 = dyn base6(<sym object>);
    goto L15(r19);
  D9():
    deopt 38 [r17];
  L8(r9):
    c4 = `as.logical`(r9);
    if c4 then L54() else L9();
  L16():
    get = ldf get;
    check L75() else D11();
  L17(object9):
    st x = object9;
    is_data_frame = ldf `is.data.frame`;
    check L77() else D13();
  L51():
    name1 = ld name;
    check L53() else D2();
  L52():
    r8 = dyn base3(<sym name>);
    goto L8(r8);
  L68():
    st filename = r17;
    goto L14();
  L72():
    object7 = ld object;
    check L73() else D10();
  D2():
    deopt 14 [name1];
  D10():
    deopt 46 [object7];
  D11():
    deopt 49 [];
  D13():
    deopt 57 [];
  L9():
    stop = ldf stop;
    check L60() else D5();
  L53():
    name2 = force? name1;
    checkMissing(name2);
    c3 = `is.symbol`(name2);
    goto L8(c3);
  L54():
    sym4 = ldf `as.character`;
    base4 = ldf `as.character` in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L55() else L56();
  L73():
    object8 = force? object7;
    checkMissing(object8);
    goto L17(object8);
  L75():
    p1 = prom<V +>{
      name7 = ld name;
      name8 = force? name7;
      checkMissing(name8);
      return name8;
    };
    p2 = prom<V +>{
      parent_frame = ldf `parent.frame`;
      r24 = dyn parent_frame();
      return r24;
    };
    r26 = dyn get[, envir](p1, p2);
    check L76() else D12();
  L77():
    p3 = prom<V +>{
      x = ld x;
      x1 = force? x;
      checkMissing(x1);
      return x1;
    };
    r28 = dyn is_data_frame(p3);
    check L78() else D14();
  D5():
    deopt 24 [];
  D12():
    deopt 53 [r26];
  D14():
    deopt 59 [r28];
  L10(r11):
    goto L6(r11);
  L55():
    name3 = ld name;
    check L57() else D3();
  L56():
    r10 = dyn base4(<sym name>);
    goto L10(r10);
  L60():
    r13 = dyn stop("cannot determine a usable name");
    check L61() else D6();
  L76():
    st x = r26;
    goto L17(r26);
  L78():
    c8 = `as.logical`(r28);
    if c8 then L79() else L18();
  D3():
    deopt 19 [name3];
  D6():
    deopt 26 [r13];
  L18():
    tempfile = ldf tempfile;
    check L106() else D28();
  L26():
    sym17 = ldf list;
    base17 = ldf list in base;
    guard17 = `==`.4(sym17, base17);
    if guard17 then L121() else L122();
  L57():
    name4 = force? name3;
    checkMissing(name4);
    as_character = ldf `as.character` in base;
    r12 = dyn as_character(name4);
    check L58() else D4();
  L61():
    goto L6(r13);
  L79():
    r29 = clos inner1236783023;
    st make_item_tag = r29;
    sym7 = ldf c;
    base7 = ldf c in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L80() else L81();
  D4():
    deopt 22 [r12];
  D28():
    deopt 117 [];
  L19(r31):
    st fmt = r31;
    sym8 = ldf names;
    base8 = ldf names in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L85() else L86();
  L29(r121):
    st Rdtxt = r121;
    sym24 = ldf `is.na`;
    base24 = ldf `is.na` in base;
    guard24 = `==`.4(sym24, base24);
    if guard24 then L157() else L158();
  L58():
    goto L10(r12);
  L80():
    paste1 = ldf paste;
    check L82() else D15();
  L81():
    r30 = dyn base7("\\format{", <lang paste("  A data frame with", nrow(x), "observations on the following", ifelse(`==`(ncol(x), 1.0), "variable.", paste(ncol(x), "variables.")))>, "  \\describe{");
    goto L19(r30);
  L106():
    r103 = dyn tempfile();
    check L107() else D29();
  L121():
    paste11 = ldf paste0;
    check L123() else D39();
  L122():
    r120 = dyn base17[name, aliases, docType, title, description, usage, format, details, source, references, examples, keywords](<lang paste0("\\name{", name, "}")>, <lang paste0("\\alias{", name, "}")>, "\\docType{data}", <lang c("\\title{", "A Capitalized Title for the Data Set", "}")>, <lang c("\\description{", "%%  ~~ A concise (1-5 lines) description of the dataset. ~~", "}")>, <lang paste0("\\usage{data(\"", name, "\")}")>, <sym fmt>, <lang c("\\details{", paste("%%  ~~ If necessary, more details than the", "__description__ above ~~"), "}")>, <lang c("\\source{", paste("%%  ~~ reference to a publication or URL", "from which the data were obtained ~~"), "}")>, <lang c("\\references{", "%%  ~~ possibly secondary sources and usages ~~", "}")>, <lang c("\\examples{", paste0("data(", name, ")"), paste0("## maybe str(", name, ") ; plot(", name, ") ..."), "}")>, "\\keyword{datasets}");
    goto L29(r120);
  D15():
    deopt 67 [];
  D29():
    deopt 118 [r103];
  D39():
    deopt 154 [];
  L20(r49):
    s = toForSeq(r49);
    l = length(s);
    i = 0;
    goto L21(i);
  L36(r155):
    c25 = `as.logical`(r155);
    if c25 then L161() else L37();
  L82():
    p5 = prom<V +>{
      nrow = ldf nrow;
      p4 = prom<V +>{
        x2 = ld x;
        x3 = force? x2;
        checkMissing(x3);
        return x3;
      };
      r33 = dyn nrow(p4);
      return r33;
    };
    p11 = prom<V +>{
      ifelse = ldf ifelse;
      p7 = prom<V +>{
        ncol = ldf ncol;
        p6 = prom<V +>{
          x4 = ld x;
          x5 = force? x4;
          checkMissing(x5);
          return x5;
        };
        r36 = dyn ncol(p6);
        r37 = `==`(r36, 1.0);
        return r37;
      };
      p10 = prom<V +>{
        paste2 = ldf paste;
        p9 = prom<V +>{
          ncol1 = ldf ncol;
          p8 = prom<V +>{
            x6 = ld x;
            x7 = force? x6;
            checkMissing(x7);
            return x7;
          };
          r40 = dyn ncol1(p8);
          return r40;
        };
        r42 = dyn paste2(p9, "variables.");
        return r42;
      };
      r44 = dyn ifelse(p7, "variable.", p10);
      return r44;
    };
    r46 = dyn paste1("  A data frame with", p5, "observations on the following", p11);
    check L83() else D16();
  L85():
    x8 = ld x;
    check L87() else D18();
  L86():
    r48 = dyn base8(<sym x>);
    goto L20(r48);
  L107():
    st tf = r103;
    sym15 = ldf `on.exit`;
    base15 = ldf `on.exit` in base;
    guard15 = `==`.4(sym15, base15);
    if guard15 then L108() else L109();
  L123():
    p33 = prom<V +>{
      name9 = ld name;
      name10 = force? name9;
      checkMissing(name10);
      return name10;
    };
    r123 = dyn paste11("\\name{", p33, "}");
    check L124() else D40();
  L157():
    filename3 = ld filename;
    check L159() else D61();
  L158():
    r154 = dyn base24(<sym filename>);
    goto L36(r154);
  D16():
    deopt 72 [r46];
  D18():
    deopt 79 [x8];
  D40():
    deopt 158 [r123];
  D61():
    deopt 255 [filename3];
  L21(i1):
    i2 = `+`.1(i1, 1);
    c10 = `<`.1(l, i2);
    if c10 then L89() else L24();
  L27():
    sink = ldf sink;
    check L110() else D30();
  L37():
    cat = ldf cat;
    check L165() else D64();
  L83():
    c9 = ldf c in base;
    r47 = dyn c9("\\format{", r46, "  \\describe{");
    check L84() else D17();
  L87():
    x9 = force? x8;
    checkMissing(x9);
    names = ldf names in base;
    r50 = dyn names(x9);
    check L88() else D19();
  L108():
    on_exit = ldf `on.exit` in base;
    r106 = dyn on_exit(<lang unlink(tf)>);
    goto L27();
  L109():
    r104 = dyn base15(<lang unlink(tf)>);
    goto L27();
  L124():
    paste12 = ldf paste0;
    check L125() else D41();
  L159():
    filename4 = force? filename3;
    checkMissing(filename4);
    is_na = ldf `is.na` in base;
    r156 = dyn is_na(filename4);
    check L160() else D62();
  L161():
    Rdtxt = ld Rdtxt;
    check L162() else D63();
  D17():
    deopt 75 [r47];
  D19():
    deopt 82 [r50];
  D30():
    deopt 124 [];
  D41():
    deopt 161 [];
  D62():
    deopt 258 [r156];
  D63():
    deopt 259 [Rdtxt];
  D64():
    deopt 265 [];
  L24():
    x10 = `[[`(s, i2, NULL, TRUE);
    st i = x10;
    x11 = ld x;
    check L90() else D20();
  L84():
    goto L19(r47);
  L88():
    goto L20(r50);
  L89():
    sym14 = ldf c;
    base14 = ldf c in base;
    guard14 = `==`.4(sym14, base14);
    if guard14 then L101() else L102();
  L110():
    p29 = prom<V +>{
      tf = ld tf;
      tf1 = force? tf;
      checkMissing(tf1);
      return tf1;
    };
    r108 = dyn sink(p29);
    check L111() else D31();
  L125():
    p34 = prom<V +>{
      name11 = ld name;
      name12 = force? name11;
      checkMissing(name12);
      return name12;
    };
    r125 = dyn paste12("\\alias{", p34, "}");
    check L126() else D42();
  L160():
    goto L36(r156);
  L162():
    Rdtxt1 = force? Rdtxt;
    checkMissing(Rdtxt1);
    popenv;
    return Rdtxt1;
  L165():
    p40 = prom<V +>{
      unlist = ldf unlist;
      p39 = prom<V +>{
        Rdtxt2 = ld Rdtxt;
        Rdtxt3 = force? Rdtxt2;
        checkMissing(Rdtxt3);
        return Rdtxt3;
      };
      r160 = dyn unlist(p39);
      return r160;
    };
    p41 = prom<V +>{
      filename5 = ld filename;
      filename6 = force? filename5;
      checkMissing(filename6);
      return filename6;
    };
    r163 = dyn cat[, file, sep](p40, p41, "\n");
    check L166() else D65();
  D20():
    deopt 83 [i2, x11];
  D31():
    deopt 126 [r108];
  D42():
    deopt 165 [r125];
  D65():
    deopt 271 [r163];
  L25(r100):
    st fmt = r100;
    goto L26();
  L90():
    x12 = force? x11;
    checkMissing(x12);
    c11 = `is.object`(x12);
    if c11 then L91() else L92(i2, x12);
  L101():
    fmt2 = ld fmt;
    check L103() else D26();
  L102():
    r99 = dyn base14(<sym fmt>, "  }", "}");
    goto L25(r99);
  L111():
    str = ldf str;
    check L112() else D32();
  L126():
    sym18 = ldf c;
    base18 = ldf c in base;
    guard18 = `==`.4(sym18, base18);
    if guard18 then L127() else L128();
  L166():
    message = ldf message;
    check L167() else D66();
  D26():
    deopt 109 [fmt2];
  D32():
    deopt 128 [];
  D66():
    deopt 273 [];
  L22(i8, dx1):
    st xi = dx1;
    sym9 = ldf c;
    base9 = ldf c in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L95() else L96();
  L30(r127):
    sym19 = ldf c;
    base19 = ldf c in base;
    guard19 = `==`.4(sym19, base19);
    if guard19 then L130() else L131();
  L91():
    dr = tryDispatchBuiltin.1("[[", x12);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L93() else L92(i2, dr);
  L92(i6, x14):
    i9 = ld i;
    check L94() else D21();
  L103():
    fmt3 = force? fmt2;
    checkMissing(fmt3);
    c17 = ldf c in base;
    r101 = dyn c17(fmt3, "  }", "}");
    check L104() else D27();
  L112():
    p30 = prom<V +>{
      object10 = ld object;
      object11 = force? object10;
      checkMissing(object11);
      return object11;
    };
    r110 = dyn str(p30);
    check L113() else D33();
  L127():
    c19 = ldf c in base;
    r128 = dyn c19("\\title{", "A Capitalized Title for the Data Set", "}");
    check L129() else D43();
  L128():
    r126 = dyn base18("\\title{", "A Capitalized Title for the Data Set", "}");
    goto L30(r126);
  L167():
    p44 = prom<V +>{
      gettextf = ldf gettextf;
      p43 = prom<V +>{
        sQuote = ldf sQuote;
        p42 = prom<V +>{
          filename7 = ld filename;
          filename8 = force? filename7;
          checkMissing(filename8);
          return filename8;
        };
        r165 = dyn sQuote(p42);
        return r165;
      };
      r167 = dyn gettextf("Created file named %s.", p43);
      return r167;
    };
    p45 = prom<V +>{
      gettext = ldf gettext;
      r169 = dyn gettext("Edit the file and move it to the appropriate directory.");
      return r169;
    };
    r171 = dyn message[, , , domain](p44, "\n", p45, NA_LGL);
    check L168() else D67();
  D21():
    deopt 85 [i6, x14, i9];
  D27():
    deopt 114 [r101];
  D33():
    deopt 130 [r110];
  D43():
    deopt 175 [r128];
  D67():
    deopt 279 [r171];
  L23(i13, r53):
    st fmt = r53;
    goto L21(i13);
  L31(r130):
    paste13 = ldf paste0;
    check L133() else D45();
  L93():
    dx = getTryDispatchBuiltinValue(dr);
    goto L22(i2, dx);
  L94():
    i10 = force? i9;
    __ = ldf `[[` in base;
    r51 = dyn __(x14, i10);
    goto L22(i6, r51);
  L95():
    fmt = ld fmt;
    check L97() else D22();
  L96():
    r52 = dyn base9(<sym fmt>, <lang paste0("    \\item{", make_item_tag(i), "}{", if(inherits(xi, "ordered"), {
          paste("an", data.class(xi), "factor with levels", paste0("\\code{", levels(xi), "}", collapse=" < "), collapse=" ")
        }, if(inherits(xi, "factor"), {
            paste("a factor with levels", paste0("\\code{", levels(xi), "}", collapse=" "), collapse=" ")
          }, if(is.vector(xi), {
              paste("a", data.class(xi), "vector")
            }, if(is.matrix(xi), {
                paste("a matrix with", ncol(xi), "columns")
              }, {
                paste("a", data.class(xi))
              })))), "}")>);
    goto L23(i8, r52);
  L104():
    goto L25(r101);
  L113():
    sink1 = ldf sink;
    check L114() else D34();
  L129():
    goto L30(r128);
  L130():
    c20 = ldf c in base;
    r131 = dyn c20("\\description{", "%%  ~~ A concise (1-5 lines) description of the dataset. ~~", "}");
    check L132() else D44();
  L131():
    r129 = dyn base19("\\description{", "%%  ~~ A concise (1-5 lines) description of the dataset. ~~", "}");
    goto L31(r129);
  L168():
    sym25 = ldf invisible;
    base25 = ldf invisible in base;
    guard25 = `==`.4(sym25, base25);
    if guard25 then L169() else L170();
  D22():
    deopt 91 [i8, fmt];
  D34():
    deopt 132 [];
  D44():
    deopt 183 [r131];
  D45():
    deopt 186 [];
  L39(r173):
    popenv;
    return r173;
  L97():
    fmt1 = force? fmt;
    checkMissing(fmt1);
    paste3 = ldf paste0;
    check L98() else D23();
  L114():
    r111 = dyn sink1();
    check L115() else D35();
  L132():
    goto L31(r131);
  L133():
    p35 = prom<V +>{
      name13 = ld name;
      name14 = force? name13;
      checkMissing(name14);
      return name14;
    };
    r133 = dyn paste13("\\usage{data(\"", p35, "\")}");
    check L134() else D46();
  L169():
    filename9 = ld filename;
    check L171() else D68();
  L170():
    r172 = dyn base25(<sym filename>);
    goto L39(r172);
  D23():
    deopt 94 [i8];
  D35():
    deopt 133 [r111];
  D46():
    deopt 190 [r133];
  D68():
    deopt 282 [filename9];
  L98():
    p13 = prom<V +>{
      make_item_tag = ldf make_item_tag;
      p12 = prom<V +>{
        i14 = ld i;
        i15 = force? i14;
        checkMissing(i15);
        return i15;
      };
      r55 = dyn make_item_tag(p12);
      return r55;
    };
    p28 = prom<V +>{
      sym10 = ldf inherits;
      base10 = ldf inherits in base;
      guard10 = `==`.4(sym10, base10);
      if guard10 then L8() else L9();
    L0(r58):
      c12 = `as.logical`(r58);
      if c12 then L10() else L1();
    L8():
      xi = ld xi;
      xi1 = force? xi;
      checkMissing(xi1);
      inherits = ldf inherits in base;
      r59 = dyn inherits(xi1, "ordered", FALSE);
      goto L0(r59);
    L9():
      r57 = dyn base10(<sym xi>, "ordered");
      goto L0(r57);
    L1():
      sym11 = ldf inherits;
      base11 = ldf inherits in base;
      guard11 = `==`.4(sym11, base11);
      if guard11 then L12() else L13();
    L10():
      paste4 = ldf paste;
      p15 = prom<V +>{
        data_class = ldf `data.class`;
        p14 = prom<V +>{
          xi2 = ld xi;
          xi3 = force? xi2;
          checkMissing(xi3);
          return xi3;
        };
        r61 = dyn data_class(p14);
        return r61;
      };
      p18 = prom<V +>{
        paste5 = ldf paste0;
        p17 = prom<V +>{
          levels = ldf levels;
          p16 = prom<V +>{
            xi4 = ld xi;
            xi5 = force? xi4;
            checkMissing(xi5);
            return xi5;
          };
          r64 = dyn levels(p16);
          return r64;
        };
        r66 = dyn paste5[, , , collapse]("\\code{", p17, "}", " < ");
        return r66;
      };
      r68 = dyn paste4[, , , , collapse]("an", p15, "factor with levels", p18, " ");
      return r68;
    L2(r70):
      c13 = `as.logical`(r70);
      if c13 then L14() else L3();
    L12():
      xi6 = ld xi;
      xi7 = force? xi6;
      checkMissing(xi7);
      inherits1 = ldf inherits in base;
      r71 = dyn inherits1(xi7, "factor", FALSE);
      goto L2(r71);
    L13():
      r69 = dyn base11(<sym xi>, "factor");
      goto L2(r69);
    L3():
      sym12 = ldf `is.vector`;
      base12 = ldf `is.vector` in base;
      guard12 = `==`.4(sym12, base12);
      if guard12 then L16() else L17();
    L14():
      paste6 = ldf paste;
      p21 = prom<V +>{
        paste7 = ldf paste0;
        p20 = prom<V +>{
          levels1 = ldf levels;
          p19 = prom<V +>{
            xi8 = ld xi;
            xi9 = force? xi8;
            checkMissing(xi9);
            return xi9;
          };
          r73 = dyn levels1(p19);
          return r73;
        };
        r75 = dyn paste7[, , , collapse]("\\code{", p20, "}", " ");
        return r75;
      };
      r77 = dyn paste6[, , collapse]("a factor with levels", p21, " ");
      return r77;
    L4(r79):
      c14 = `as.logical`(r79);
      if c14 then L18() else L5();
    L16():
      xi10 = ld xi;
      xi11 = force? xi10;
      checkMissing(xi11);
      is_vector = ldf `is.vector` in base;
      r80 = dyn is_vector(xi11, "any");
      goto L4(r80);
    L17():
      r78 = dyn base12(<sym xi>);
      goto L4(r78);
    L5():
      sym13 = ldf `is.matrix`;
      base13 = ldf `is.matrix` in base;
      guard13 = `==`.4(sym13, base13);
      if guard13 then L20() else L21();
    L18():
      paste8 = ldf paste;
      p23 = prom<V +>{
        data_class1 = ldf `data.class`;
        p22 = prom<V +>{
          xi12 = ld xi;
          xi13 = force? xi12;
          checkMissing(xi13);
          return xi13;
        };
        r82 = dyn data_class1(p22);
        return r82;
      };
      r84 = dyn paste8("a", p23, "vector");
      return r84;
    L6(r86):
      c15 = `as.logical`(r86);
      if c15 then L22() else L7();
    L20():
      xi14 = ld xi;
      xi15 = force? xi14;
      checkMissing(xi15);
      is_matrix = ldf `is.matrix` in base;
      r87 = dyn is_matrix(xi15);
      goto L6(r87);
    L21():
      r85 = dyn base13(<sym xi>);
      goto L6(r85);
    L7():
      paste10 = ldf paste;
      p27 = prom<V +>{
        data_class2 = ldf `data.class`;
        p26 = prom<V +>{
          xi18 = ld xi;
          xi19 = force? xi18;
          checkMissing(xi19);
          return xi19;
        };
        r93 = dyn data_class2(p26);
        return r93;
      };
      r95 = dyn paste10("a", p27);
      return r95;
    L22():
      paste9 = ldf paste;
      p25 = prom<V +>{
        ncol2 = ldf ncol;
        p24 = prom<V +>{
          xi16 = ld xi;
          xi17 = force? xi16;
          checkMissing(xi17);
          return xi17;
        };
        r89 = dyn ncol2(p24);
        return r89;
      };
      r91 = dyn paste9("a matrix with", p25, "columns");
      return r91;
    };
    r97 = dyn paste3("    \\item{", p13, "}{", p28, "}");
    check L99() else D24();
  L115():
    sym16 = ldf c;
    base16 = ldf c in base;
    guard16 = `==`.4(sym16, base16);
    if guard16 then L116() else L117();
  L134():
    fmt4 = ld fmt;
    check L135() else D47();
  L171():
    filename10 = force? filename9;
    checkMissing(filename10);
    invisible = ldf invisible in base;
    r174 = dyn invisible(filename10);
    check L172() else D69();
  D24():
    deopt 100 [i8, r97];
  D47():
    deopt 192 [fmt4];
  D69():
    deopt 285 [r174];
  L28(r113):
    st fmt = r113;
    goto L26();
  L99():
    c16 = ldf c in base;
    r98 = dyn c16(fmt1, r97);
    check L100() else D25();
  L116():
    scan = ldf scan;
    check L118() else D36();
  L117():
    r112 = dyn base16("\\format{", "  The format is:", <lang scan(tf, "", quiet=`!`(getOption("verbose")), sep="\n")>, "}");
    goto L28(r112);
  L135():
    fmt5 = force? fmt4;
    checkMissing(fmt5);
    sym20 = ldf c;
    base20 = ldf c in base;
    guard20 = `==`.4(sym20, base20);
    if guard20 then L136() else L137();
  L172():
    goto L39(r174);
  D25():
    deopt 102 [i8, r98];
  D36():
    deopt 139 [];
  L32(r135):
    sym21 = ldf c;
    base21 = ldf c in base;
    guard21 = `==`.4(sym21, base21);
    if guard21 then L141() else L142();
  L100():
    goto L23(i8, r98);
  L118():
    p31 = prom<V +>{
      tf2 = ld tf;
      tf3 = force? tf2;
      checkMissing(tf3);
      return tf3;
    };
    p32 = prom<V +>{
      getOption = ldf getOption;
      r115 = dyn getOption("verbose");
      r116 = `!`(r115);
      return r116;
    };
    r118 = dyn scan[, , quiet, sep](p31, "", p32, "\n");
    check L119() else D37();
  L136():
    paste14 = ldf paste;
    check L138() else D48();
  L137():
    r134 = dyn base20("\\details{", <lang paste("%%  ~~ If necessary, more details than the", "__description__ above ~~")>, "}");
    goto L32(r134);
  D37():
    deopt 146 [r118];
  D48():
    deopt 199 [];
  L33(r139):
    sym22 = ldf c;
    base22 = ldf c in base;
    guard22 = `==`.4(sym22, base22);
    if guard22 then L146() else L147();
  L119():
    c18 = ldf c in base;
    r119 = dyn c18("\\format{", "  The format is:", r118, "}");
    check L120() else D38();
  L138():
    r136 = dyn paste14("%%  ~~ If necessary, more details than the", "__description__ above ~~");
    check L139() else D49();
  L141():
    paste15 = ldf paste;
    check L143() else D51();
  L142():
    r138 = dyn base21("\\source{", <lang paste("%%  ~~ reference to a publication or URL", "from which the data were obtained ~~")>, "}");
    goto L33(r138);
  D38():
    deopt 149 [r119];
  D49():
    deopt 202 [r136];
  D51():
    deopt 211 [];
  L34(r143):
    sym23 = ldf c;
    base23 = ldf c in base;
    guard23 = `==`.4(sym23, base23);
    if guard23 then L149() else L150();
  L120():
    goto L28(r119);
  L139():
    c21 = ldf c in base;
    r137 = dyn c21("\\details{", r136, "}");
    check L140() else D50();
  L143():
    r140 = dyn paste15("%%  ~~ reference to a publication or URL", "from which the data were obtained ~~");
    check L144() else D52();
  L146():
    c23 = ldf c in base;
    r144 = dyn c23("\\references{", "%%  ~~ possibly secondary sources and usages ~~", "}");
    check L148() else D54();
  L147():
    r142 = dyn base22("\\references{", "%%  ~~ possibly secondary sources and usages ~~", "}");
    goto L34(r142);
  D50():
    deopt 205 [r137];
  D52():
    deopt 214 [r140];
  D54():
    deopt 225 [r144];
  L35(r146):
    list = ldf list in base;
    r153 = dyn list(r123, r125, "\\docType{data}", r127, r130, r133, fmt5, r135, r139, r143, r146, "\\keyword{datasets}");
    check L156() else D60();
  L140():
    goto L32(r137);
  L144():
    c22 = ldf c in base;
    r141 = dyn c22("\\source{", r140, "}");
    check L145() else D53();
  L148():
    goto L34(r144);
  L149():
    paste16 = ldf paste0;
    check L151() else D55();
  L150():
    r145 = dyn base23("\\examples{", <lang paste0("data(", name, ")")>, <lang paste0("## maybe str(", name, ") ; plot(", name, ") ...")>, "}");
    goto L35(r145);
  D53():
    deopt 217 [r141];
  D55():
    deopt 231 [];
  D60():
    deopt 251 [r153];
  L145():
    goto L33(r141);
  L151():
    p36 = prom<V +>{
      name15 = ld name;
      name16 = force? name15;
      checkMissing(name16);
      return name16;
    };
    r148 = dyn paste16("data(", p36, ")");
    check L152() else D56();
  L156():
    goto L29(r153);
  D56():
    deopt 235 [r148];
  L152():
    paste17 = ldf paste0;
    check L153() else D57();
  D57():
    deopt 237 [];
  L153():
    p37 = prom<V +>{
      name17 = ld name;
      name18 = force? name17;
      checkMissing(name18);
      return name18;
    };
    p38 = prom<V +>{
      name19 = ld name;
      name20 = force? name19;
      checkMissing(name20);
      return name20;
    };
    r151 = dyn paste17("## maybe str(", p37, ") ; plot(", p38, ") ...");
    check L154() else D58();
  D58():
    deopt 243 [r151];
  L154():
    c24 = ldf c in base;
    r152 = dyn c24("\\examples{", r148, r151, "}");
    check L155() else D59();
  D59():
    deopt 246 [r152];
  L155():
    goto L35(r152);
  }
}
fun inner1236783023(s) {
  (reg s:*) -+> V { var s:*, reg grepl:cls, reg s1:*, reg s2:V, reg p:p(V +), reg r1:V, reg c:L, reg paste0:cls, reg s3:*, reg s4:V, reg p1:p(V +), reg r3:V, reg paste1:cls, reg gsub:cls, reg s5:*, reg s6:V, reg p2:p(V +), reg r5:V, reg p3:p(V +), reg r7:V |
    mkenv;
    st s = s;
    grepl = ldf grepl;
    check L1() else D0();
  D0():
    deopt 1 [];
  L1():
    p = prom<V +>{
      s1 = ld s;
      s2 = force? s1;
      checkMissing(s2);
      return s2;
    };
    r1 = dyn grepl("^([[:alpha:]]|[.][[:alpha:]._])[[:alnum:]._]*$", p);
    check L2() else D1();
  D1():
    deopt 4 [r1];
  L2():
    c = `as.logical`(r1);
    if c then L3() else L0();
  L0():
    paste1 = ldf paste0;
    check L7() else D4();
  L3():
    paste0 = ldf paste0;
    check L4() else D2();
  D2():
    deopt 6 [];
  D4():
    deopt 12 [];
  L4():
    p1 = prom<V +>{
      s3 = ld s;
      s4 = force? s3;
      checkMissing(s4);
      return s4;
    };
    r3 = dyn paste0("\\code{", p1, "}");
    check L5() else D3();
  L7():
    p3 = prom<V +>{
      gsub = ldf gsub;
      p2 = prom<V +>{
        s5 = ld s;
        s6 = force? s5;
        checkMissing(s6);
        return s6;
      };
      r5 = dyn gsub("([%{}])", "\\\\\\1", p2);
      return r5;
    };
    r7 = dyn paste1("\\samp{", p3, "}");
    check L8() else D5();
  D3():
    deopt 10 [r3];
  D5():
    deopt 16 [r7];
  L5():
    popenv;
    return r3;
  L8():
    popenv;
    return r7;
  }
}