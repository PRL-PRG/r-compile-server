fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1746965132;
    st `print.summary.glm` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1746965132(x, digits, `symbolic.cor`, `signif.stars`, `show.residuals`, `...`) {
  (reg x:*, reg digits:*, reg symbolic_cor:*, reg signif_stars:*, reg show_residuals:*, reg ddd:dots) -+> V { var x:*, var digits:*, reg digits_isMissing:L, reg digits_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg getOption:cls, reg r2:V, reg r3:V, reg max:cls, reg r4:V, reg p:p(V +), var `symbolic.cor`:*, reg symbolic_cor_isMissing:L, reg symbolic_cor_orDefault:*, reg x1:*, reg x2:V, reg c:L, reg x4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r6:V, reg p1:p(V +), var `signif.stars`:*, reg signif_stars_isMissing:L, reg signif_stars_orDefault:*, reg getOption1:cls, reg r8:V, reg p2:p(V +), var `show.residuals`:*, reg show_residuals_isMissing:L, reg show_residuals_orDefault:*, var `...`:dots?, reg cat:cls, reg paste:cls, reg deparse:cls, reg x5:*, reg x6:V, reg c1:L, reg x8:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r10:V, reg p3:p(V +), reg r12:V, reg p4:p(V +), reg r14:V, reg p5:p(V +), reg r16:V, reg show_residuals1:*, reg show_residuals2:V, reg c2:L, reg cat1:cls, reg r17:V, reg x9:*, reg x10:V, reg c3:L, reg x12:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg r18:V, reg r19:V, reg c4:L, reg setNames:cls, reg quantile:cls, reg x13:*, reg x14:V, reg c5:L, reg x16:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg r20:V, reg p6:p(V +), reg r22:V, reg p7:p(V +), reg sym1:cls, reg base1:cls, reg guard1:L, reg r24:V, reg r25:V, reg c6:cls, reg r26:V, reg p8:p(V +), reg r28:V, reg l:*, reg c7:L, reg r30:V, reg l2:*, reg dr8:V, reg dc4:L, reg dx8:V, reg r32:V, reg dx9:V, reg r33:V, reg zapsmall:cls, reg x17:*, reg x18:V, reg c8:L, reg x20:V, reg dr10:V, reg dc5:L, reg dx10:V, reg dx11:V, reg r35:V, reg p9:p(V +), reg digits1:*, reg digits2:V, reg r37:V, reg p10:p(V +), reg r39:V, reg print_default:cls, reg xx:*, reg xx1:V, reg p11:p(V +), reg digits3:*, reg digits4:V, reg p12:p(V +), reg r42:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r44:V, reg r45:V, reg x21:*, reg x22:V, reg c9:L, reg x24:V, reg dr12:V, reg dc6:L, reg dx12:V, reg dx13:V, reg r46:V, reg length:cls, reg r47:V, reg r48:V, reg c10:L, reg cat2:cls, reg r49:V, reg _in_:cls, reg sym3:cls, reg base3:cls, reg guard3:L, reg r51:V, reg r52:V, reg x25:*, reg x26:V, reg names:cls, reg r53:V, reg p13:p(V +), reg r55:V, reg c11:L, reg x27:*, reg x28:V, reg c12:L, reg x30:V, reg dr14:V, reg dc7:L, reg dx14:V, reg dx15:V, reg __:cls, reg r56:V, reg dx16:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r57:V, reg r58:V, reg df:*, reg df1:V, reg c13:V, reg r59:V, reg c14:L, reg c16:V, reg df2:*, reg df3:V, reg c17:L, reg c19:L, reg df5:V, reg dr16:V, reg dc8:L, reg dx17:V, reg c21:L, reg dx18:V, reg __1:cls, reg r60:V, reg df6:*, reg df7:V, reg c22:L, reg c24:L, reg dx20:V, reg df9:V, reg dr18:V, reg dc9:L, reg dx22:V, reg c26:L, reg dx23:V, reg dx24:V, reg __2:cls, reg r61:V, reg r62:V, reg c27:L, reg c28:V, reg c30:L, reg cat3:cls, reg nsingular:*, reg nsingular1:V, reg p14:p(V +), reg r64:V, reg cat4:cls, reg r66:V, reg x31:*, reg x32:V, reg c31:L, reg x34:V, reg dr20:V, reg dc10:L, reg dx25:V, reg dx26:V, reg r67:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r68:V, reg r69:V, reg x35:*, reg x36:V, reg c32:L, reg x38:V, reg dr22:V, reg dc11:L, reg dx27:V, reg dx28:V, reg r70:V, reg c33:V, reg r71:V, reg c34:L, reg c36:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r72:V, reg c39:L, reg r73:V, reg aliased:*, reg aliased1:V, reg any:cls, reg r74:V, reg c40:L, reg c41:V, reg c43:L, reg sym7:cls, reg base7:cls, reg guard7:L, reg r75:V, reg r76:V, reg aliased2:*, reg aliased3:V, reg names1:cls, reg r77:V, reg matrix:cls, reg sym8:cls, reg base8:cls, reg guard8:L, reg r78:V, reg r79:V, reg aliased4:*, reg aliased5:V, reg length1:cls, reg r80:V, reg p15:p(V +), reg sym9:cls, reg base9:cls, reg guard9:L, reg r82:V, reg r83:V, reg cn:*, reg cn1:V, reg colnames:cls, reg coefs:*, reg coefs1:V, reg p16:p(V +), reg r85:V, reg list:cls, reg r86:V, reg p17:p(V +), reg r88:V, reg x39:*, reg x40:V, reg c44:L, reg x42:V, reg dr24:V, reg dc12:L, reg dx29:V, reg dx30:V, reg r89:V, reg l3:*, reg c45:L, reg dx32:V, reg l5:*, reg dr26:V, reg dc13:L, reg dx34:V, reg dx35:V, reg dx36:V, reg aliased6:*, reg aliased7:V, reg r90:V, reg ___:cls, reg r91:V, reg printCoefmat:cls, reg coefs2:*, reg coefs3:V, reg p18:p(V +), reg digits5:*, reg digits6:V, reg p19:p(V +), reg signif_stars1:*, reg signif_stars2:V, reg p20:p(V +), reg ddd1:dots?, reg r95:V, reg cat5:cls, reg x43:*, reg x44:V, reg c46:L, reg x46:V, reg dr28:V, reg dc14:L, reg dx38:V, reg dx39:V, reg r96:V, reg c47:L, reg dx41:V, reg dr30:V, reg dc15:L, reg dx42:V, reg dx43:V, reg r97:V, reg p21:p(V +), reg format:cls, reg x47:*, reg x48:V, reg c48:L, reg x50:V, reg dr32:V, reg dc16:L, reg dx44:V, reg dx45:V, reg r99:V, reg p22:p(V +), reg r101:V, reg p23:p(V +), reg apply:cls, reg cbind:cls, reg paste1:cls, reg format1:cls, reg sym10:cls, reg base10:cls, reg guard10:L, reg r103:V, reg r104:V, reg c49:cls, reg r105:V, reg p24:p(V +), reg r107:V, reg p25:p(V +), reg r109:V, reg p26:p(V +), reg format2:cls, reg unlist:cls, reg x51:*, reg x52:V, reg c50:L, reg x54:V, reg dr34:V, reg dc17:L, reg dx46:V, reg dx47:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r111:V, reg x57:V, reg r112:V, reg c51:cls, reg r113:V, reg __3:cls, reg r114:V, reg p27:p(V +), reg r116:V, reg p28:p(V +), reg sym12:cls, reg base12:cls, reg guard12:L, reg r118:V, reg r119:V, reg digits7:*, reg digits8:V, reg r120:V, reg max1:cls, reg r121:V, reg p29:p(V +), reg r123:V, reg p30:p(V +), reg format3:cls, reg unlist1:cls, reg x58:*, reg x59:V, reg c52:L, reg x61:V, reg dr36:V, reg dc18:L, reg dx48:V, reg dx49:V, reg sym13:cls, reg base13:cls, reg guard13:L, reg r125:V, reg x64:V, reg r126:V, reg c53:cls, reg r127:V, reg __4:cls, reg r128:V, reg p31:p(V +), reg r130:V, reg p32:p(V +), reg r132:V, reg p33:p(V +), reg r134:V, reg p34:p(V +), reg paste2:*, reg paste3:V, reg p35:p(V +), reg r137:V, reg p36:p(V +), reg r139:V, reg sym14:cls, reg base14:cls, reg guard14:L, reg r140:V, reg r141:V, reg naprint:cls, reg x65:*, reg x66:V, reg c54:L, reg x68:V, reg dr38:V, reg dc19:L, reg dx50:V, reg dx51:V, reg r142:V, reg p37:p(V +), reg r144:V, reg nzchar:cls, reg r145:V, reg c55:L, reg cat6:cls, reg mess:*, reg mess1:V, reg p38:p(V +), reg r147:V, reg cat7:cls, reg format4:cls, reg x69:*, reg x70:V, reg c56:L, reg x72:V, reg dr40:V, reg dc20:L, reg dx52:V, reg dx53:V, reg r149:V, reg p39:p(V +), reg sym15:cls, reg base15:cls, reg guard15:L, reg r151:V, reg r152:V, reg digits9:*, reg digits10:V, reg r153:V, reg max2:cls, reg r154:V, reg p40:p(V +), reg r156:V, reg p41:p(V +), reg x73:*, reg x74:V, reg c57:L, reg x76:V, reg dr42:V, reg dc21:L, reg dx54:V, reg dx55:V, reg r158:V, reg p42:p(V +), reg r160:V, reg x77:*, reg x78:V, reg c58:L, reg x80:V, reg dr44:V, reg dc22:L, reg dx56:V, reg dx57:V, reg r161:V, reg sym16:cls, reg base16:cls, reg guard16:L, reg r162:V, reg r163:V, reg correl:*, reg correl1:V, reg c59:V, reg r164:V, reg c60:L, reg NCOL:cls, reg correl2:*, reg correl3:V, reg p43:p(V +), reg r166:V, reg p44:*, reg p45:V, reg r167:V, reg c61:L, reg cat8:cls, reg r168:V, reg sym17:cls, reg base17:cls, reg guard17:L, reg r169:V, reg r170:V, reg symbolic_cor1:*, reg symbolic_cor2:V, reg c62:L, reg c63:L, reg c65:V, reg symbolic_cor3:*, reg symbolic_cor4:V, reg c66:L, reg c67:V, reg c69:L, reg print:cls, reg symnum:cls, reg correl4:*, reg correl5:V, reg p46:p(V +), reg r172:V, reg p47:p(V +), reg r174:V, reg r175:V, reg format5:cls, reg sym18:cls, reg base18:cls, reg guard18:L, reg r176:V, reg r177:V, reg round:cls, reg r178:V, reg p48:p(V +), reg digits11:*, reg digits12:V, reg p49:p(V +), reg r181:V, reg l6:*, reg c70:L, reg r183:S, reg l8:*, reg dr46:V, reg dc23:L, reg dx58:V, reg dx59:V, reg lower_tri:cls, reg correl6:*, reg correl7:V, reg p50:p(V +), reg r187:V, reg r188:V, reg ___1:cls, reg r189:V, reg print1:cls, reg correl8:*, reg correl9:V, reg c71:L, reg dr48:V, reg dc24:L, reg dx60:V, reg dx61:V, reg p51:*, reg p52:V, reg r190:V, reg __5:cls, reg r191:V, reg p53:p(V +), reg r193:V, reg r194:V, reg cat9:cls, reg r196:V, reg sym19:cls, reg base19:cls, reg guard19:L, reg r197:V, reg r198:V, reg x81:*, reg x82:V, reg invisible:cls, reg r199:V |
    mkenv;
    st x = x;
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
      r4 = dyn max(3, r3);
      goto L0(r4);
    L2():
      r = dyn base(3, <lang `-`(getOption("digits"), 3)>);
      goto L0(r);
    };
    goto L1(p);
  L1(digits_orDefault):
    st digits = digits_orDefault;
    symbolic_cor_isMissing = missing.0(symbolic_cor);
    if symbolic_cor_isMissing then L2() else L3(symbolic_cor);
  L2():
    p1 = prom<V +>{
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      c = `is.object`(x2);
      if c then L1() else L2(x2);
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("$", x2);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(x4):
      r6 = `$`(x4, <sym symbolic.cor>);
      goto L0(r6);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    goto L3(p1);
  L3(symbolic_cor_orDefault):
    st `symbolic.cor` = symbolic_cor_orDefault;
    signif_stars_isMissing = missing.0(signif_stars);
    if signif_stars_isMissing then L4() else L5(signif_stars);
  L4():
    p2 = prom<V +>{
      getOption1 = ldf getOption;
      r8 = dyn getOption1("show.signif.stars");
      return r8;
    };
    goto L5(p2);
  L5(signif_stars_orDefault):
    st `signif.stars` = signif_stars_orDefault;
    show_residuals_isMissing = missing.0(show_residuals);
    if show_residuals_isMissing then L6(FALSE) else L6(show_residuals);
  L6(show_residuals_orDefault):
    st `show.residuals` = show_residuals_orDefault;
    st `...` = ddd;
    cat = ldf cat;
    check L44() else D0();
  D0():
    deopt 1 [];
  L44():
    p5 = prom<V +>{
      paste = ldf paste;
      p4 = prom<V +>{
        deparse = ldf deparse;
        p3 = prom<V +>{
          x5 = ld x;
          x6 = force? x5;
          checkMissing(x6);
          c1 = `is.object`(x6);
          if c1 then L1() else L2(x6);
        L0(dx3):
          return dx3;
        L1():
          dr2 = tryDispatchBuiltin.1("$", x6);
          dc1 = getTryDispatchBuiltinDispatched(dr2);
          if dc1 then L3() else L2(dr2);
        L2(x8):
          r10 = `$`(x8, <sym call>);
          goto L0(r10);
        L3():
          dx2 = getTryDispatchBuiltinValue(dr2);
          goto L0(dx2);
        };
        r12 = dyn deparse(p3);
        return r12;
      };
      r14 = dyn paste[, sep, collapse](p4, "\n", "\n");
      return r14;
    };
    r16 = dyn cat[, , , sep]("\nCall:\n", p5, "\n", "");
    check L45() else D1();
  D1():
    deopt 7 [r16];
  L45():
    show_residuals1 = ld `show.residuals`;
    check L46() else D2();
  D2():
    deopt 8 [show_residuals1];
  L46():
    show_residuals2 = force? show_residuals1;
    checkMissing(show_residuals2);
    c2 = `as.logical`(show_residuals2);
    if c2 then L47() else L7();
  L7():
    goto L10();
  L10():
    sym2 = ldf length;
    base2 = ldf length in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L68() else L69();
  L47():
    cat1 = ldf cat;
    check L48() else D3();
  D3():
    deopt 11 [];
  L11(r45):
    r48 = `==`(r45, 0);
    c10 = `as.logical`(r48);
    if c10 then L76() else L12();
  L48():
    r17 = dyn cat1("\nDeviance Residuals: \n");
    check L49() else D4();
  L68():
    x21 = ld x;
    check L70() else D12();
  L69():
    r44 = dyn base2(<lang `$`(x, aliased)>);
    goto L11(r44);
  D4():
    deopt 13 [r17];
  D12():
    deopt 49 [x21];
  L12():
    _in_ = ldf `%in%`;
    check L80() else D16();
  L13():
    cat5 = ldf cat;
    check L144() else D38();
  L49():
    x9 = ld x;
    check L50() else D5();
  L70():
    x22 = force? x21;
    checkMissing(x22);
    c9 = `is.object`(x22);
    if c9 then L72() else L73(x22);
  L76():
    cat2 = ldf cat;
    check L77() else D14();
  D5():
    deopt 14 [x9];
  D14():
    deopt 57 [];
  D16():
    deopt 61 [];
  D38():
    deopt 161 [];
  L50():
    x10 = force? x9;
    checkMissing(x10);
    c3 = `is.object`(x10);
    if c3 then L52() else L53(x10);
  L71(dx13):
    length = ldf length in base;
    r47 = dyn length(dx13);
    check L75() else D13();
  L72():
    dr12 = tryDispatchBuiltin.1("$", x22);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L74() else L73(dr12);
  L73(x24):
    r46 = `$`(x24, <sym aliased>);
    goto L71(r46);
  L77():
    r49 = dyn cat2("\nNo Coefficients\n");
    check L78() else D15();
  L80():
    p13 = prom<V +>{
      sym3 = ldf names;
      base3 = ldf names in base;
      guard3 = `==`.4(sym3, base3);
      if guard3 then L1() else L2();
    L0(r52):
      return r52;
    L1():
      x25 = ld x;
      x26 = force? x25;
      checkMissing(x26);
      names = ldf names in base;
      r53 = dyn names(x26);
      goto L0(r53);
    L2():
      r51 = dyn base3(<sym x>);
      goto L0(r51);
    };
    r55 = dyn _in_("df", p13);
    check L81() else D17();
  L144():
    p21 = prom<V +>{
      x43 = ld x;
      x44 = force? x43;
      checkMissing(x44);
      c46 = `is.object`(x44);
      if c46 then L1() else L2(x44);
    L0(dx39):
      c47 = `is.object`(dx39);
      if c47 then L5() else L6(dx39);
    L1():
      dr28 = tryDispatchBuiltin.1("$", x44);
      dc14 = getTryDispatchBuiltinDispatched(dr28);
      if dc14 then L3() else L2(dr28);
    L2(x46):
      r96 = `$`(x46, <sym family>);
      goto L0(r96);
    L3():
      dx38 = getTryDispatchBuiltinValue(dr28);
      goto L0(dx38);
    L4(dx43):
      return dx43;
    L5():
      dr30 = tryDispatchBuiltin.1("$", dx39);
      dc15 = getTryDispatchBuiltinDispatched(dr30);
      if dc15 then L7() else L6(dr30);
    L6(dx41):
      r97 = `$`(dx41, <sym family>);
      goto L4(r97);
    L7():
      dx42 = getTryDispatchBuiltinValue(dr30);
      goto L4(dx42);
    };
    p23 = prom<V +>{
      format = ldf format;
      p22 = prom<V +>{
        x47 = ld x;
        x48 = force? x47;
        checkMissing(x48);
        c48 = `is.object`(x48);
        if c48 then L1() else L2(x48);
      L0(dx45):
        return dx45;
      L1():
        dr32 = tryDispatchBuiltin.1("$", x48);
        dc16 = getTryDispatchBuiltinDispatched(dr32);
        if dc16 then L3() else L2(dr32);
      L2(x50):
        r99 = `$`(x50, <sym dispersion>);
        goto L0(r99);
      L3():
        dx44 = getTryDispatchBuiltinValue(dr32);
        goto L0(dx44);
      };
      r101 = dyn format(p22);
      return r101;
    };
    p36 = prom<V +>{
      apply = ldf apply;
      p34 = prom<V +>{
        cbind = ldf cbind;
        p26 = prom<V +>{
          paste1 = ldf paste;
          p25 = prom<V +>{
            format1 = ldf format;
            p24 = prom<V +>{
              sym10 = ldf c;
              base10 = ldf c in base;
              guard10 = `==`.4(sym10, base10);
              if guard10 then L1() else L2();
            L0(r104):
              return r104;
            L1():
              c49 = ldf c in base;
              r105 = dyn c49("Null", "Residual");
              goto L0(r105);
            L2():
              r103 = dyn base10("Null", "Residual");
              goto L0(r103);
            };
            r107 = dyn format1[, justify](p24, "right");
            return r107;
          };
          r109 = dyn paste1(p25, "deviance:");
          return r109;
        };
        p30 = prom<V +>{
          format2 = ldf format;
          p28 = prom<V +>{
            unlist = ldf unlist;
            p27 = prom<V +>{
              x51 = ld x;
              x52 = force? x51;
              checkMissing(x52);
              c50 = `is.object`(x52);
              if c50 then L2() else L3(x52);
            L0(dx47):
              return dx47;
            L2():
              dr34 = tryDispatchBuiltin.1("[", x52);
              dc17 = getTryDispatchBuiltinDispatched(dr34);
              if dc17 then L4() else L3(dr34);
            L3(x54):
              sym11 = ldf c;
              base11 = ldf c in base;
              guard11 = `==`.4(sym11, base11);
              if guard11 then L5() else L6();
            L1(x57, r112):
              __3 = ldf `[` in base;
              r114 = dyn __3(x57, r112);
              goto L0(r114);
            L4():
              dx46 = getTryDispatchBuiltinValue(dr34);
              goto L0(dx46);
            L5():
              c51 = ldf c in base;
              r113 = dyn c51("null.deviance", "deviance");
              goto L1(x54, r113);
            L6():
              r111 = dyn base11("null.deviance", "deviance");
              goto L1(x54, r111);
            };
            r116 = dyn unlist(p27);
            return r116;
          };
          p29 = prom<V +>{
            sym12 = ldf max;
            base12 = ldf max in base;
            guard12 = `==`.4(sym12, base12);
            if guard12 then L1() else L2();
          L0(r119):
            return r119;
          L1():
            digits7 = ld digits;
            digits8 = force? digits7;
            checkMissing(digits8);
            r120 = `+`(digits8, 1);
            max1 = ldf max in base;
            r121 = dyn max1(5, r120);
            goto L0(r121);
          L2():
            r118 = dyn base12(5, <lang `+`(digits, 1)>);
            goto L0(r118);
          };
          r123 = dyn format2[, digits](p28, p29);
          return r123;
        };
        p33 = prom<V +>{
          format3 = ldf format;
          p32 = prom<V +>{
            unlist1 = ldf unlist;
            p31 = prom<V +>{
              x58 = ld x;
              x59 = force? x58;
              checkMissing(x59);
              c52 = `is.object`(x59);
              if c52 then L2() else L3(x59);
            L0(dx49):
              return dx49;
            L2():
              dr36 = tryDispatchBuiltin.1("[", x59);
              dc18 = getTryDispatchBuiltinDispatched(dr36);
              if dc18 then L4() else L3(dr36);
            L3(x61):
              sym13 = ldf c;
              base13 = ldf c in base;
              guard13 = `==`.4(sym13, base13);
              if guard13 then L5() else L6();
            L1(x64, r126):
              __4 = ldf `[` in base;
              r128 = dyn __4(x64, r126);
              goto L0(r128);
            L4():
              dx48 = getTryDispatchBuiltinValue(dr36);
              goto L0(dx48);
            L5():
              c53 = ldf c in base;
              r127 = dyn c53("df.null", "df.residual");
              goto L1(x61, r127);
            L6():
              r125 = dyn base13("df.null", "df.residual");
              goto L1(x61, r125);
            };
            r130 = dyn unlist1(p31);
            return r130;
          };
          r132 = dyn format3(p32);
          return r132;
        };
        r134 = dyn cbind(p26, p30, " on", p33, " degrees of freedom\n");
        return r134;
      };
      p35 = prom<V +>{
        paste2 = ld paste;
        paste3 = force? paste2;
        checkMissing(paste3);
        return paste3;
      };
      r137 = dyn apply[, , , collapse](p34, 1, p35, " ");
      return r137;
    };
    r139 = dyn cat5[, , , , , , sep]("\n(Dispersion parameter for ", p21, " family taken to be ", p23, ")\n\n", p36, "");
    check L145() else D39();
  D13():
    deopt 53 [r47];
  D15():
    deopt 59 [r49];
  D17():
    deopt 64 [r55];
  D39():
    deopt 170 [r139];
  L51(dx5):
    r19 = `>`(dx5, 5.0);
    c4 = `as.logical`(r19);
    if c4 then L55() else L8();
  L52():
    dr4 = tryDispatchBuiltin.1("$", x10);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L54() else L53(dr4);
  L53(x12):
    r18 = `$`(x12, <sym df.residual>);
    goto L51(r18);
  L74():
    dx12 = getTryDispatchBuiltinValue(dr12);
    goto L71(dx12);
  L75():
    goto L11(r47);
  L78():
    goto L13();
  L81():
    c11 = `as.logical`(r55);
    if c11 then L82() else L14();
  L145():
    sym14 = ldf nzchar;
    base14 = ldf nzchar in base;
    guard14 = `==`.4(sym14, base14);
    if guard14 then L146() else L147();
  L8():
    goto L9();
  L9():
    zapsmall = ldf zapsmall;
    check L63() else D8();
  L14():
    goto L16(NULL);
  L16(dx16):
    st df = dx16;
    sym4 = ldf `is.null`;
    base4 = ldf `is.null` in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L88() else L89();
  L30(r141):
    c55 = `as.logical`(r141);
    if c55 then L151() else L31();
  L54():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L51(dx4);
  L55():
    setNames = ldf setNames;
    check L56() else D6();
  L82():
    x27 = ld x;
    check L83() else D18();
  L146():
    naprint = ldf naprint;
    check L148() else D40();
  L147():
    r140 = dyn base14(<lang `<-`(mess, naprint(`$`(x, na.action)))>);
    goto L30(r140);
  D6():
    deopt 20 [];
  D8():
    deopt 30 [];
  D18():
    deopt 65 [x27];
  D40():
    deopt 174 [];
  L17(r58):
    r59 = `!`(r58);
    c14 = `as.logical`(r59);
    if c14 then L91() else L18(c14);
  L31():
    goto L32();
  L32():
    cat7 = ldf cat;
    check L155() else D45();
  L56():
    p7 = prom<V +>{
      quantile = ldf quantile;
      p6 = prom<V +>{
        x13 = ld x;
        x14 = force? x13;
        checkMissing(x14);
        c5 = `is.object`(x14);
        if c5 then L1() else L2(x14);
      L0(dx7):
        return dx7;
      L1():
        dr6 = tryDispatchBuiltin.1("$", x14);
        dc3 = getTryDispatchBuiltinDispatched(dr6);
        if dc3 then L3() else L2(dr6);
      L2(x16):
        r20 = `$`(x16, <sym deviance.resid>);
        goto L0(r20);
      L3():
        dx6 = getTryDispatchBuiltinValue(dr6);
        goto L0(dx6);
      };
      r22 = dyn quantile[, `na.rm`](p6, TRUE);
      return r22;
    };
    p8 = prom<V +>{
      sym1 = ldf c;
      base1 = ldf c in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r25):
      return r25;
    L1():
      c6 = ldf c in base;
      r26 = dyn c6("Min", "1Q", "Median", "3Q", "Max");
      goto L0(r26);
    L2():
      r24 = dyn base1("Min", "1Q", "Median", "3Q", "Max");
      goto L0(r24);
    };
    r28 = dyn setNames(p7, p8);
    check L57() else D7();
  L63():
    p9 = prom<V +>{
      x17 = ld x;
      x18 = force? x17;
      checkMissing(x18);
      c8 = `is.object`(x18);
      if c8 then L1() else L2(x18);
    L0(dx11):
      return dx11;
    L1():
      dr10 = tryDispatchBuiltin.1("$", x18);
      dc5 = getTryDispatchBuiltinDispatched(dr10);
      if dc5 then L3() else L2(dr10);
    L2(x20):
      r35 = `$`(x20, <sym deviance.resid>);
      goto L0(r35);
    L3():
      dx10 = getTryDispatchBuiltinValue(dr10);
      goto L0(dx10);
    };
    p10 = prom<V +>{
      digits1 = ld digits;
      digits2 = force? digits1;
      checkMissing(digits2);
      r37 = `+`(digits2, 1);
      return r37;
    };
    r39 = dyn zapsmall(p9, p10);
    check L64() else D9();
  L83():
    x28 = force? x27;
    checkMissing(x28);
    c12 = `is.object`(x28);
    if c12 then L84() else L85(x28);
  L88():
    df = ld df;
    check L90() else D19();
  L89():
    r57 = dyn base4(<sym df>);
    goto L17(r57);
  L148():
    p37 = prom<V +>{
      x65 = ld x;
      x66 = force? x65;
      checkMissing(x66);
      c54 = `is.object`(x66);
      if c54 then L1() else L2(x66);
    L0(dx51):
      return dx51;
    L1():
      dr38 = tryDispatchBuiltin.1("$", x66);
      dc19 = getTryDispatchBuiltinDispatched(dr38);
      if dc19 then L3() else L2(dr38);
    L2(x68):
      r142 = `$`(x68, <sym na.action>);
      goto L0(r142);
    L3():
      dx50 = getTryDispatchBuiltinValue(dr38);
      goto L0(dx50);
    };
    r144 = dyn naprint(p37);
    check L149() else D41();
  L151():
    cat6 = ldf cat;
    check L152() else D43();
  D7():
    deopt 23 [r28];
  D9():
    deopt 33 [r39];
  D19():
    deopt 74 [df];
  D41():
    deopt 176 [r144];
  D43():
    deopt 181 [];
  D45():
    deopt 191 [];
  L15(dx15):
    goto L16(dx15);
  L18(c16):
    c30 = `as.logical`(c16);
    if c30 then L101() else L21();
  L57():
    l = ld x;
    c7 = `is.object`(l);
    if c7 then L59() else L60(r28, l);
  L64():
    st xx = r39;
    print_default = ldf `print.default`;
    check L65() else D10();
  L84():
    dr14 = tryDispatchBuiltin.1("[[", x28);
    dc7 = getTryDispatchBuiltinDispatched(dr14);
    if dc7 then L86() else L85(dr14);
  L85(x30):
    __ = ldf `[[` in base;
    r56 = dyn __(x30, "df");
    goto L15(r56);
  L90():
    df1 = force? df;
    checkMissing(df1);
    c13 = `==`(df1, NULL);
    goto L17(c13);
  L91():
    df2 = ld df;
    check L92() else D20();
  L149():
    st mess = r144;
    nzchar = ldf nzchar in base;
    r145 = dyn nzchar(r144);
    check L150() else D42();
  L152():
    p38 = prom<V +>{
      mess = ld mess;
      mess1 = force? mess;
      checkMissing(mess1);
      return mess1;
    };
    r147 = dyn cat6[, , , sep]("  (", p38, ")\n", "");
    check L153() else D44();
  L155():
    p41 = prom<V +>{
      format4 = ldf format;
      p39 = prom<V +>{
        x69 = ld x;
        x70 = force? x69;
        checkMissing(x70);
        c56 = `is.object`(x70);
        if c56 then L1() else L2(x70);
      L0(dx53):
        return dx53;
      L1():
        dr40 = tryDispatchBuiltin.1("$", x70);
        dc20 = getTryDispatchBuiltinDispatched(dr40);
        if dc20 then L3() else L2(dr40);
      L2(x72):
        r149 = `$`(x72, <sym aic>);
        goto L0(r149);
      L3():
        dx52 = getTryDispatchBuiltinValue(dr40);
        goto L0(dx52);
      };
      p40 = prom<V +>{
        sym15 = ldf max;
        base15 = ldf max in base;
        guard15 = `==`.4(sym15, base15);
        if guard15 then L1() else L2();
      L0(r152):
        return r152;
      L1():
        digits9 = ld digits;
        digits10 = force? digits9;
        checkMissing(digits10);
        r153 = `+`(digits10, 1);
        max2 = ldf max in base;
        r154 = dyn max2(4, r153);
        goto L0(r154);
      L2():
        r151 = dyn base15(4, <lang `+`(digits, 1)>);
        goto L0(r151);
      };
      r156 = dyn format4[, digits](p39, p40);
      return r156;
    };
    p42 = prom<V +>{
      x73 = ld x;
      x74 = force? x73;
      checkMissing(x74);
      c57 = `is.object`(x74);
      if c57 then L1() else L2(x74);
    L0(dx55):
      return dx55;
    L1():
      dr42 = tryDispatchBuiltin.1("$", x74);
      dc21 = getTryDispatchBuiltinDispatched(dr42);
      if dc21 then L3() else L2(dr42);
    L2(x76):
      r158 = `$`(x76, <sym iter>);
      goto L0(r158);
    L3():
      dx54 = getTryDispatchBuiltinValue(dr42);
      goto L0(dx54);
    };
    r160 = dyn cat7[, , , , , , sep]("AIC: ", p41, "\n\n", "Number of Fisher Scoring iterations: ", p42, "\n", "");
    check L156() else D46();
  D10():
    deopt 36 [];
  D20():
    deopt 78 [c14, df2];
  D42():
    deopt 179 [r145];
  D44():
    deopt 187 [r147];
  D46():
    deopt 200 [r160];
  L21():
    cat4 = ldf cat;
    check L105() else D24();
  L22():
    x31 = ld x;
    check L107() else D26();
  L58(r32, dx9):
    st x = dx9;
    goto L9();
  L59():
    dr8 = tryDispatchBuiltin.0("$<-", l, r28);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L61() else L60(r28, dr8);
  L60(r30, l2):
    r33 = `$<-`(l2, <sym deviance.resid>, r28);
    goto L58(r30, r33);
  L65():
    p11 = prom<V +>{
      xx = ld xx;
      xx1 = force? xx;
      checkMissing(xx1);
      return xx1;
    };
    p12 = prom<V +>{
      digits3 = ld digits;
      digits4 = force? digits3;
      checkMissing(digits4);
      return digits4;
    };
    r42 = dyn print_default[, digits, `na.print`, `print.gap`](p11, p12, "", 2);
    check L66() else D11();
  L86():
    dx14 = getTryDispatchBuiltinValue(dr14);
    goto L15(dx14);
  L92():
    df3 = force? df2;
    checkMissing(df3);
    c17 = `is.object`(df3);
    if c17 then L93() else L94(c14, df3);
  L101():
    cat3 = ldf cat;
    check L102() else D22();
  L150():
    goto L30(r145);
  L153():
    goto L32();
  L156():
    x77 = ld x;
    check L157() else D47();
  D11():
    deopt 44 [r42];
  D22():
    deopt 91 [];
  D24():
    deopt 99 [];
  D26():
    deopt 102 [x31];
  D47():
    deopt 201 [x77];
  L19(c21, dx18):
    df6 = ld df;
    check L96() else D21();
  L61():
    dx8 = getTryDispatchBuiltinValue(dr8);
    goto L58(r28, dx8);
  L66():
    goto L10();
  L93():
    dr16 = tryDispatchBuiltin.1("[", df3);
    dc8 = getTryDispatchBuiltinDispatched(dr16);
    if dc8 then L95() else L94(c14, dr16);
  L94(c19, df5):
    __1 = ldf `[` in base;
    r60 = dyn __1(df5, 3);
    goto L19(c19, r60);
  L102():
    p14 = prom<V +>{
      nsingular = ld nsingular;
      nsingular1 = force? nsingular;
      checkMissing(nsingular1);
      return nsingular1;
    };
    r64 = dyn cat3[, , , sep]("\nCoefficients: (", p14, " not defined because of singularities)\n", "");
    check L103() else D23();
  L105():
    r66 = dyn cat4("\nCoefficients:\n");
    check L106() else D25();
  L107():
    x32 = force? x31;
    checkMissing(x32);
    c31 = `is.object`(x32);
    if c31 then L109() else L110(x32);
  L157():
    x78 = force? x77;
    checkMissing(x78);
    c58 = `is.object`(x78);
    if c58 then L159() else L160(x78);
  D21():
    deopt 82 [c21, dx18, df6];
  D23():
    deopt 97 [r64];
  D25():
    deopt 101 [r66];
  L95():
    dx17 = getTryDispatchBuiltinValue(dr16);
    goto L19(c14, dx17);
  L96():
    df7 = force? df6;
    checkMissing(df7);
    c22 = `is.object`(df7);
    if c22 then L97() else L98(c21, dx18, df7);
  L103():
    goto L22();
  L106():
    goto L22();
  L108(dx26):
    st coefs = dx26;
    sym5 = ldf `is.null`;
    base5 = ldf `is.null` in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L112() else L113();
  L109():
    dr20 = tryDispatchBuiltin.1("$", x32);
    dc10 = getTryDispatchBuiltinDispatched(dr20);
    if dc10 then L111() else L110(dr20);
  L110(x34):
    r67 = `$`(x34, <sym coefficients>);
    goto L108(r67);
  L158(dx57):
    st correl = dx57;
    sym16 = ldf `is.null`;
    base16 = ldf `is.null` in base;
    guard16 = `==`.4(sym16, base16);
    if guard16 then L162() else L163();
  L159():
    dr44 = tryDispatchBuiltin.1("$", x78);
    dc22 = getTryDispatchBuiltinDispatched(dr44);
    if dc22 then L161() else L160(dr44);
  L160(x80):
    r161 = `$`(x80, <sym correlation>);
    goto L158(r161);
  L20(c26, dx23, dx24):
    r62 = `-`(dx23, dx24);
    st nsingular = r62;
    c27 = `as.logical`(r62);
    c28 = `&&`(c26, c27);
    goto L18(c28);
  L23(r69):
    r71 = `!`(r69);
    c34 = `as.logical`(r71);
    if c34 then L119() else L24(c34);
  L33(r163):
    r164 = `!`(r163);
    c60 = `as.logical`(r164);
    if c60 then L165() else L34();
  L97():
    dr18 = tryDispatchBuiltin.1("[", df7);
    dc9 = getTryDispatchBuiltinDispatched(dr18);
    if dc9 then L99() else L98(c21, dx18, dr18);
  L98(c24, dx20, df9):
    __2 = ldf `[` in base;
    r61 = dyn __2(df9, 1);
    goto L20(c24, dx20, r61);
  L111():
    dx25 = getTryDispatchBuiltinValue(dr20);
    goto L108(dx25);
  L112():
    x35 = ld x;
    check L114() else D27();
  L113():
    r68 = dyn base5(<lang `<-`(aliased, `$`(x, aliased))>);
    goto L23(r68);
  L161():
    dx56 = getTryDispatchBuiltinValue(dr44);
    goto L158(dx56);
  L162():
    correl = ld correl;
    check L164() else D48();
  L163():
    r162 = dyn base16(<sym correl>);
    goto L33(r162);
  D27():
    deopt 107 [x35];
  D48():
    deopt 206 [correl];
  L24(c36):
    c43 = `as.logical`(c36);
    if c43 then L125() else L26();
  L34():
    goto L42();
  L42():
    cat9 = ldf cat;
    check L193() else D64();
  L99():
    dx22 = getTryDispatchBuiltinValue(dr18);
    goto L20(c21, dx18, dx22);
  L114():
    x36 = force? x35;
    checkMissing(x36);
    c32 = `is.object`(x36);
    if c32 then L116() else L117(x36);
  L119():
    sym6 = ldf any;
    base6 = ldf any in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L120() else L121();
  L164():
    correl1 = force? correl;
    checkMissing(correl1);
    c59 = `==`(correl1, NULL);
    goto L33(c59);
  L165():
    NCOL = ldf NCOL;
    check L166() else D49();
  D49():
    deopt 211 [];
  D64():
    deopt 264 [];
  L25(c39, r73):
    c40 = `as.logical`(r73);
    c41 = `&&`(c39, c40);
    goto L24(c41);
  L26():
    goto L29();
  L29():
    printCoefmat = ldf printCoefmat;
    check L142() else D36();
  L115(dx28):
    st aliased = dx28;
    c33 = `==`(dx28, NULL);
    goto L23(c33);
  L116():
    dr22 = tryDispatchBuiltin.1("$", x36);
    dc11 = getTryDispatchBuiltinDispatched(dr22);
    if dc11 then L118() else L117(dr22);
  L117(x38):
    r70 = `$`(x38, <sym aliased>);
    goto L115(r70);
  L120():
    aliased = ld aliased;
    check L122() else D28();
  L121():
    r72 = dyn base6(<sym aliased>);
    goto L25(c34, r72);
  L125():
    sym7 = ldf names;
    base7 = ldf names in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L126() else L127();
  L166():
    p43 = prom<V +>{
      correl2 = ld correl;
      correl3 = force? correl2;
      checkMissing(correl3);
      return correl3;
    };
    r166 = dyn NCOL(p43);
    check L167() else D50();
  L193():
    r196 = dyn cat9("\n");
    check L194() else D65();
  D28():
    deopt 115 [c34, aliased];
  D36():
    deopt 150 [];
  D50():
    deopt 213 [r166];
  D65():
    deopt 266 [r196];
  L27(r76):
    st cn = r76;
    matrix = ldf matrix;
    check L130() else D32();
  L118():
    dx27 = getTryDispatchBuiltinValue(dr22);
    goto L115(dx27);
  L122():
    aliased1 = force? aliased;
    checkMissing(aliased1);
    any = ldf any in base;
    r74 = dyn any(aliased1);
    check L123() else D29();
  L126():
    aliased2 = ld aliased;
    check L128() else D30();
  L127():
    r75 = dyn base7(<sym aliased>);
    goto L27(r75);
  L142():
    p18 = prom<V +>{
      coefs2 = ld coefs;
      coefs3 = force? coefs2;
      checkMissing(coefs3);
      return coefs3;
    };
    p19 = prom<V +>{
      digits5 = ld digits;
      digits6 = force? digits5;
      checkMissing(digits6);
      return digits6;
    };
    p20 = prom<V +>{
      signif_stars1 = ld `signif.stars`;
      signif_stars2 = force? signif_stars1;
      checkMissing(signif_stars2);
      return signif_stars2;
    };
    ddd1 = ld `...`;
    r95 = dyn printCoefmat[, digits, `signif.stars`, `na.print`, `...`](p18, p19, p20, "NA", ddd1);
    check L143() else D37();
  L167():
    st p = r166;
    p44 = ld p;
    check L168() else D51();
  L194():
    sym19 = ldf invisible;
    base19 = ldf invisible in base;
    guard19 = `==`.4(sym19, base19);
    if guard19 then L195() else L196();
  D29():
    deopt 118 [c34, r74];
  D30():
    deopt 122 [aliased2];
  D32():
    deopt 128 [];
  D37():
    deopt 159 [r95];
  D51():
    deopt 215 [p44];
  L43(r198):
    popenv;
    return r198;
  L123():
    goto L25(c34, r74);
  L128():
    aliased3 = force? aliased2;
    checkMissing(aliased3);
    names1 = ldf names in base;
    r77 = dyn names1(aliased3);
    check L129() else D31();
  L130():
    p15 = prom<V +>{
      sym8 = ldf length;
      base8 = ldf length in base;
      guard8 = `==`.4(sym8, base8);
      if guard8 then L1() else L2();
    L0(r79):
      return r79;
    L1():
      aliased4 = ld aliased;
      aliased5 = force? aliased4;
      checkMissing(aliased5);
      length1 = ldf length in base;
      r80 = dyn length1(aliased5);
      goto L0(r80);
    L2():
      r78 = dyn base8(<sym aliased>);
      goto L0(r78);
    };
    p17 = prom<V +>{
      sym9 = ldf list;
      base9 = ldf list in base;
      guard9 = `==`.4(sym9, base9);
      if guard9 then L1() else L2();
    L0(r83):
      return r83;
    L1():
      cn = ld cn;
      cn1 = force? cn;
      checkMissing(cn1);
      colnames = ldf colnames;
      p16 = prom<V +>{
        coefs = ld coefs;
        coefs1 = force? coefs;
        checkMissing(coefs1);
        return coefs1;
      };
      r85 = dyn colnames(p16);
      list = ldf list in base;
      r86 = dyn list(cn1, r85);
      goto L0(r86);
    L2():
      r82 = dyn base9(<sym cn>, <lang colnames(coefs)>);
      goto L0(r82);
    };
    r88 = dyn matrix[, , , dimnames](NA_LGL, p15, 4, p17);
    check L131() else D33();
  L143():
    goto L13();
  L168():
    p45 = force? p44;
    checkMissing(p45);
    r167 = `>`(p45, 1.0);
    c61 = `as.logical`(r167);
    if c61 then L169() else L35();
  L195():
    x81 = ld x;
    check L197() else D66();
  L196():
    r197 = dyn base19(<sym x>);
    goto L43(r197);
  D31():
    deopt 125 [r77];
  D33():
    deopt 134 [r88];
  D66():
    deopt 269 [x81];
  L35():
    goto L41(NULL);
  L41(r194):
    goto L42();
  L129():
    goto L27(r77);
  L131():
    st coefs = r88;
    x39 = ld x;
    check L132() else D34();
  L169():
    cat8 = ldf cat;
    check L170() else D52();
  L197():
    x82 = force? x81;
    checkMissing(x82);
    invisible = ldf invisible in base;
    r199 = dyn invisible(x82);
    check L198() else D67();
  D34():
    deopt 136 [x39];
  D52():
    deopt 220 [];
  D67():
    deopt 272 [r199];
  L132():
    x40 = force? x39;
    checkMissing(x40);
    c44 = `is.object`(x40);
    if c44 then L134() else L135(x40);
  L170():
    r168 = dyn cat8("\nCorrelation of Coefficients:\n");
    check L171() else D53();
  L198():
    goto L43(r199);
  D53():
    deopt 222 [r168];
  L133(dx30):
    l3 = ld coefs;
    c45 = `is.object`(l3);
    if c45 then L137() else L138(dx30, l3);
  L134():
    dr24 = tryDispatchBuiltin.1("$", x40);
    dc12 = getTryDispatchBuiltinDispatched(dr24);
    if dc12 then L136() else L135(dr24);
  L135(x42):
    r89 = `$`(x42, <sym coefficients>);
    goto L133(r89);
  L171():
    sym17 = ldf `is.logical`;
    base17 = ldf `is.logical` in base;
    guard17 = `==`.4(sym17, base17);
    if guard17 then L172() else L173();
  L28(dx35, dx36):
    st coefs = dx36;
    goto L29();
  L36(r170):
    c63 = `as.logical`(r170);
    if c63 then L175() else L37(c63);
  L136():
    dx29 = getTryDispatchBuiltinValue(dr24);
    goto L133(dx29);
  L137():
    dr26 = tryDispatchBuiltin.0("[<-", l3, dx30);
    dc13 = getTryDispatchBuiltinDispatched(dr26);
    if dc13 then L139() else L138(dx30, dr26);
  L138(dx32, l5):
    aliased6 = ld aliased;
    check L140() else D35();
  L172():
    symbolic_cor1 = ld `symbolic.cor`;
    check L174() else D54();
  L173():
    r169 = dyn base17(<sym symbolic.cor>);
    goto L36(r169);
  D35():
    deopt 140 [dx32, l5, dx30, aliased6];
  D54():
    deopt 224 [symbolic_cor1];
  L37(c65):
    c69 = `as.logical`(c65);
    if c69 then L178() else L38();
  L139():
    dx34 = getTryDispatchBuiltinValue(dr26);
    goto L28(dx30, dx34);
  L140():
    aliased7 = force? aliased6;
    checkMissing(aliased7);
    r90 = `!`(aliased7);
    ___ = ldf `[<-` in base;
    r91 = dyn ___(l3, r90, <missing>, dx30);
    goto L28(dx32, r91);
  L174():
    symbolic_cor2 = force? symbolic_cor1;
    checkMissing(symbolic_cor2);
    c62 = `is.logical`(symbolic_cor2);
    goto L36(c62);
  L175():
    symbolic_cor3 = ld `symbolic.cor`;
    check L176() else D55();
  D55():
    deopt 227 [c63, symbolic_cor3];
  L38():
    format5 = ldf format;
    check L182() else D58();
  L39(r175):
    goto L41(r175);
  L176():
    symbolic_cor4 = force? symbolic_cor3;
    checkMissing(symbolic_cor4);
    c66 = `as.logical`(symbolic_cor4);
    c67 = `&&`(c63, c66);
    goto L37(c67);
  L178():
    print = ldf print;
    check L179() else D56();
  D56():
    deopt 231 [];
  D58():
    deopt 235 [];
  L179():
    p47 = prom<V +>{
      symnum = ldf symnum;
      p46 = prom<V +>{
        correl4 = ld correl;
        correl5 = force? correl4;
        checkMissing(correl5);
        return correl5;
      };
      r172 = dyn symnum[, `abbr.colnames`](p46, NULL);
      return r172;
    };
    r174 = dyn print(p47);
    check L180() else D57();
  L182():
    p48 = prom<V +>{
      sym18 = ldf round;
      base18 = ldf round in base;
      guard18 = `==`.4(sym18, base18);
      if guard18 then L1() else L2();
    L0(r177):
      return r177;
    L1():
      round = ldf round in base;
      r178 = dyn round(<sym correl>, 2);
      goto L0(r178);
    L2():
      r176 = dyn base18(<sym correl>, 2);
      goto L0(r176);
    };
    p49 = prom<V +>{
      digits11 = ld digits;
      digits12 = force? digits11;
      checkMissing(digits12);
      return digits12;
    };
    r181 = dyn format5[, nsmall, digits](p48, 2, p49);
    check L183() else D59();
  D57():
    deopt 233 [r174];
  D59():
    deopt 241 [r181];
  L180():
    goto L39(r174);
  L183():
    st correl = r181;
    l6 = ld correl;
    c70 = `is.object`(l6);
    if c70 then L184() else L185("", l6);
  L40(dx59):
    st correl = dx59;
    print1 = ldf print;
    check L189() else D62();
  L184():
    dr46 = tryDispatchBuiltin.0("[<-", l6, "");
    dc23 = getTryDispatchBuiltinDispatched(dr46);
    if dc23 then L186() else L185("", dr46);
  L185(r183, l8):
    lower_tri = ldf `lower.tri`;
    check L187() else D60();
  D60():
    deopt 247 [r183, l8, ""];
  D62():
    deopt 254 [];
  L186():
    dx58 = getTryDispatchBuiltinValue(dr46);
    goto L40(dx58);
  L187():
    p50 = prom<V +>{
      correl6 = ld correl;
      correl7 = force? correl6;
      checkMissing(correl7);
      return correl7;
    };
    r187 = dyn lower_tri(p50);
    check L188() else D61();
  L189():
    p53 = prom<V +>{
      correl8 = ld correl;
      correl9 = force? correl8;
      checkMissing(correl9);
      c71 = `is.object`(correl9);
      if c71 then L1() else L2();
    L0(dx61):
      return dx61;
    L1():
      dr48 = tryDispatchBuiltin.1("[", correl9);
      dc24 = getTryDispatchBuiltinDispatched(dr48);
      if dc24 then L3() else L2();
    L2():
      p51 = ld p;
      p52 = force? p51;
      checkMissing(p52);
      r190 = `-`(<missing>, p52);
      __5 = ldf `[` in base;
      r191 = dyn __5(correl9, -1.0, r190, FALSE);
      goto L0(r191);
    L3():
      dx60 = getTryDispatchBuiltinValue(dr48);
      goto L0(dx60);
    };
    r193 = dyn print1[, quote](p53, FALSE);
    check L190() else D63();
  D61():
    deopt 249 [r183, l8, "", r187];
  D63():
    deopt 258 [r193];
  L188():
    r188 = `!`(r187);
    ___1 = ldf `[<-` in base;
    r189 = dyn ___1(l8, "", r188);
    goto L40(r189);
  L190():
    goto L39(r193);
  }
}