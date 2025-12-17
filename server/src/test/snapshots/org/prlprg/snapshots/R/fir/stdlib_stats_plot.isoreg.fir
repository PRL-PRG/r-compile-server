fun main() {
  () -+> V { reg r:cls, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg require:cls, reg graphics:*, reg graphics1:V, reg p:p(V +), reg r4:V, reg __:cls, reg r5:V, reg r6:cls, reg isoreg:*, reg isoreg1:V, reg p1:p(V +), reg r8:V, reg plot:cls, reg y3:*, reg y4:V, reg p2:p(V +), reg r10:V, reg lines:cls, reg ir3:*, reg ir4:V, reg p3:p(V +), reg r12:V, reg plot1:cls, reg isoreg2:cls, reg p4:p(V +), reg sym1:cls, reg base1:cls, reg guard1:L, reg r14:V, reg r15:V, reg c:cls, reg r16:V, reg p5:p(V +), reg r18:V, reg p6:p(V +), reg r20:V, reg plot2:cls, reg ir5:*, reg ir6:V, reg p7:p(V +), reg r22:V, reg plot3:cls, reg isoreg3:cls, reg y5:*, reg y6:V, reg r23:V, reg p8:p(V +), reg r25:V, reg p9:p(V +), reg r27:V, reg plot4:cls, reg ir7:*, reg ir8:V, reg p10:p(V +), reg r29:V, reg plot5:cls, reg isoreg4:cls, reg sample:cls, reg r30:V, reg p11:p(V +), reg y7:*, reg y8:V, reg p12:p(V +), reg r33:V, reg p13:p(V +), reg r35:V, reg plot6:cls, reg isoreg5:cls, reg sample1:cls, reg r36:V, reg p14:p(V +), reg y9:*, reg y10:V, reg p15:p(V +), reg r39:V, reg p16:p(V +), reg r41:V, reg plot7:cls, reg isoreg6:cls, reg sample2:cls, reg r42:V, reg p17:p(V +), reg sample3:cls, reg r44:V, reg p18:p(V +), reg r46:V, reg p19:p(V +), reg r48:V |
    mkenv;
    r = clos inner3875786046;
    st `plot.isoreg` = r;
    sym = ldf require;
    base = ldf require in base;
    guard = `==`.4(sym, base);
    if guard then L1() else L2();
  L0():
    __ = ldf `::`;
    check L5() else D2();
  L1():
    require = ldf require;
    check L3() else D0();
  L2():
    r1 = dyn base(<sym graphics>);
    goto L0();
  D0():
    deopt 5 [];
  D2():
    deopt 9 [];
  L3():
    p = prom<V +>{
      graphics = ld graphics;
      graphics1 = force? graphics;
      checkMissing(graphics1);
      return graphics1;
    };
    r4 = dyn require(p);
    check L4() else D1();
  L5():
    r5 = dyn __("utils", "example");
    check L6() else D3();
  D1():
    deopt 7 [r4];
  D3():
    deopt 12 [r5];
  L4():
    goto L0();
  L6():
    checkFun.0(r5);
    r6 = r5 as cls;
    p1 = prom<V +>{
      isoreg = ld isoreg;
      isoreg1 = force? isoreg;
      checkMissing(isoreg1);
      return isoreg1;
    };
    r8 = dyn r6(p1);
    check L7() else D4();
  D4():
    deopt 15 [r8];
  L7():
    plot = ldf plot;
    check L8() else D5();
  D5():
    deopt 17 [];
  L8():
    p2 = prom<V +>{
      y3 = ld y3;
      y4 = force? y3;
      checkMissing(y4);
      return y4;
    };
    r10 = dyn plot[, main](p2, "simple plot(.)  +  lines(<isoreg>)");
    check L9() else D6();
  D6():
    deopt 21 [r10];
  L9():
    lines = ldf lines;
    check L10() else D7();
  D7():
    deopt 23 [];
  L10():
    p3 = prom<V +>{
      ir3 = ld ir3;
      ir4 = force? ir3;
      checkMissing(ir4);
      return ir4;
    };
    r12 = dyn lines(p3);
    check L11() else D8();
  D8():
    deopt 25 [r12];
  L11():
    plot1 = ldf plot;
    check L12() else D9();
  D9():
    deopt 27 [];
  L12():
    p6 = prom<V +>{
      isoreg2 = ldf isoreg;
      p4 = prom<V +>{
        return <real 2.0, 4.0, 8.0, 16.0, 32.0, 64.0, 128.0, 256.0, 512.0>;
      };
      p5 = prom<V +>{
        sym1 = ldf c;
        base1 = ldf c in base;
        guard1 = `==`.4(sym1, base1);
        if guard1 then L1() else L2();
      L0(r15):
        return r15;
      L1():
        c = ldf c in base;
        r16 = dyn c(1.0, 0.0, 4.0, 3.0, 3.0, 5.0, 4.0, 2.0, 0.0);
        goto L0(r16);
      L2():
        r14 = dyn base1(1.0, 0.0, 4.0, 3.0, 3.0, 5.0, 4.0, 2.0, 0.0);
        goto L0(r14);
      };
      r18 = dyn isoreg2(p4, p5);
      return r18;
    };
    r20 = dyn plot1[, `plot.type`, log](p6, "row", "x");
    check L13() else D10();
  D10():
    deopt 33 [r20];
  L13():
    plot2 = ldf plot;
    check L14() else D11();
  D11():
    deopt 35 [];
  L14():
    p7 = prom<V +>{
      ir5 = ld ir3;
      ir6 = force? ir5;
      checkMissing(ir6);
      return ir6;
    };
    r22 = dyn plot2[, `plot.type`, ylab](p7, "row", "y3");
    check L15() else D12();
  D12():
    deopt 41 [r22];
  L15():
    plot3 = ldf plot;
    check L16() else D13();
  D13():
    deopt 43 [];
  L16():
    p9 = prom<V +>{
      isoreg3 = ldf isoreg;
      p8 = prom<V +>{
        y5 = ld y3;
        y6 = force? y5;
        checkMissing(y6);
        r23 = `-`(y6, 4.0);
        return r23;
      };
      r25 = dyn isoreg3(p8);
      return r25;
    };
    r27 = dyn plot3[, `plot.type`, ylab](p9, "r", "y3 - 4");
    check L17() else D14();
  D14():
    deopt 49 [r27];
  L17():
    plot4 = ldf plot;
    check L18() else D15();
  D15():
    deopt 51 [];
  L18():
    p10 = prom<V +>{
      ir7 = ld ir4;
      ir8 = force? ir7;
      checkMissing(ir8);
      return ir8;
    };
    r29 = dyn plot4[, `plot.type`, ylab, xlab](p10, "ro", "y4", "x = 1:n");
    check L19() else D16();
  D16():
    deopt 59 [r29];
  L19():
    plot5 = ldf plot;
    check L20() else D17();
  D17():
    deopt 61 [];
  L20():
    p13 = prom<V +>{
      isoreg4 = ldf isoreg;
      p11 = prom<V +>{
        sample = ldf sample;
        r30 = dyn sample(9.0);
        return r30;
      };
      p12 = prom<V +>{
        y7 = ld y3;
        y8 = force? y7;
        checkMissing(y8);
        return y8;
      };
      r33 = dyn isoreg4(p11, p12);
      return r33;
    };
    r35 = dyn plot5[, `plot.type`](p13, "row");
    check L21() else D18();
  D18():
    deopt 65 [r35];
  L21():
    plot6 = ldf plot;
    check L22() else D19();
  D19():
    deopt 67 [];
  L22():
    p16 = prom<V +>{
      isoreg5 = ldf isoreg;
      p14 = prom<V +>{
        sample1 = ldf sample;
        r36 = dyn sample1(9.0);
        return r36;
      };
      p15 = prom<V +>{
        y9 = ld y3;
        y10 = force? y9;
        checkMissing(y10);
        return y10;
      };
      r39 = dyn isoreg5(p14, p15);
      return r39;
    };
    r41 = dyn plot6[, `plot.type`](p16, "col.wise");
    check L23() else D20();
  D20():
    deopt 71 [r41];
  L23():
    plot7 = ldf plot;
    check L24() else D21();
  D21():
    deopt 73 [];
  L24():
    p19 = prom<V +>{
      isoreg6 = ldf isoreg;
      p17 = prom<V +>{
        sample2 = ldf sample;
        r42 = dyn sample2(10.0);
        return r42;
      };
      p18 = prom<V +>{
        sample3 = ldf sample;
        r44 = dyn sample3[, replace](10.0, TRUE);
        return r44;
      };
      r46 = dyn isoreg6(p17, p18);
      st ir = r46;
      invisible.0();
      return r46;
    };
    r48 = dyn plot7[, `plot.type`](p19, "r");
    check L25() else D22();
  D22():
    deopt 77 [r48];
  L25():
    popenv;
    return r48;
  }
}
fun inner3875786046(x, `plot.type`, main, main2, xlab, ylab, `par.fit`, mar, mgp, grid, `...`) {
  (reg x:*, reg plot_type:*, reg main:*, reg main2:*, reg xlab:*, reg ylab:*, reg par_fit:*, reg mar:*, reg mgp:*, reg grid:*, reg ddd:dots) -+> V { var x:*, var `plot.type`:*, reg plot_type_isMissing:L, reg plot_type_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg c:cls, reg r2:V, reg p:p(V +), var main:*, reg main_isMissing:L, reg main_orDefault:*, reg paste:cls, reg deparse:cls, reg x1:*, reg x2:V, reg c1:L, reg x4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r4:V, reg p1:p(V +), reg r6:V, reg p2:p(V +), reg r8:V, reg p3:p(V +), var main2:*, reg main2_isMissing:L, reg main2_orDefault:*, var xlab:*, reg xlab_isMissing:L, reg xlab_orDefault:*, var ylab:*, reg ylab_isMissing:L, reg ylab_orDefault:*, var `par.fit`:*, reg par_fit_isMissing:L, reg par_fit_orDefault:*, reg sym1:cls, reg base1:cls, reg guard1:L, reg r10:V, reg r11:V, reg list:cls, reg r12:V, reg p4:p(V +), var mar:*, reg mar_isMissing:L, reg mar_orDefault:*, reg both:*, reg both1:V, reg c2:L, reg sym2:cls, reg base2:cls, reg guard2:L, reg r16:V, reg r17:R, reg r18:V, reg c3:cls, reg r19:V, reg r20:V, reg par:cls, reg r21:V, reg p5:p(V +), var mgp:*, reg mgp_isMissing:L, reg mgp_orDefault:*, reg both2:*, reg both3:V, reg c4:L, reg sym3:cls, reg base3:cls, reg guard3:L, reg r23:V, reg r24:V, reg c5:cls, reg r25:V, reg par1:cls, reg r26:V, reg p6:p(V +), var grid:*, reg grid_isMissing:L, reg grid_orDefault:*, reg sym4:cls, reg base4:cls, reg guard4:L, reg r28:V, reg r29:V, reg x5:*, reg x6:V, reg c6:L, reg x8:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r30:V, reg length:cls, reg r31:V, reg r32:V, reg p7:p(V +), var `...`:dots?, reg match_arg:cls, reg plot_type1:*, reg plot_type2:V, reg p8:p(V +), reg r35:V, reg plot_type3:*, reg plot_type4:V, reg r36:V, reg both4:*, reg both5:V, reg c7:L, reg plot_type5:*, reg plot_type6:V, reg r37:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r38:V, reg r39:V, reg main3:*, reg main4:V, reg c8:V, reg r40:V, reg c9:L, reg par2:cls, reg col_wise:*, reg col_wise1:V, reg c10:L, reg p9:p(V +), reg sym6:cls, reg base6:cls, reg guard6:L, reg r43:V, reg r44:V, reg main_wid:*, reg main_wid1:V, reg c11:cls, reg r45:V, reg p10:p(V +), reg mar1:*, reg mar2:V, reg p11:p(V +), reg mgp1:*, reg mgp2:V, reg p12:p(V +), reg r49:V, reg par3:cls, reg mar3:*, reg mar4:V, reg p13:p(V +), reg mgp3:*, reg mgp4:V, reg p14:p(V +), reg r53:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r54:V, reg on_exit:cls, reg r56:V, reg x9:*, reg x10:V, reg c12:L, reg x12:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg r57:V, reg c13:L, reg x13:*, reg x14:V, reg c14:L, reg x16:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg r58:V, reg dx8:V, reg x17:*, reg x18:V, reg c15:L, reg x20:V, reg dr8:V, reg dc4:L, reg dx9:V, reg dx10:V, reg r59:V, reg c16:L, reg dx12:V, reg dr10:V, reg dc5:L, reg dx13:V, reg x21:*, reg x22:V, reg c17:L, reg dx15:V, reg x24:V, reg dr12:V, reg dc6:L, reg dx17:V, reg dx18:V, reg dx19:V, reg r60:V, reg __:cls, reg r61:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r62:V, reg r63:V, reg xx:*, reg xx1:V, reg c18:L, reg xx3:V, reg dr14:V, reg dc7:L, reg dx20:V, reg dx21:V, reg __1:cls, reg r64:V, reg mean:cls, reg diff:cls, reg xx4:*, reg xx5:V, reg p15:p(V +), reg r66:V, reg p16:p(V +), reg r68:V, reg r69:V, reg xx6:*, reg xx7:V, reg c19:cls, reg r70:V, reg x25:*, reg x26:V, reg c20:L, reg x28:V, reg dr16:V, reg dc8:L, reg dx22:V, reg dx23:V, reg r71:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r72:V, reg r73:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r74:V, reg r75:V, reg x29:*, reg x30:V, reg c21:L, reg x32:V, reg dr18:V, reg dc9:L, reg dx24:V, reg dx25:V, reg r76:V, reg c22:cls, reg r77:V, reg cumsum:cls, reg r78:V, reg dev_hold:cls, reg r79:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r80:V, reg on_exit1:cls, reg r82:V, reg plot:cls, reg x33:*, reg x34:V, reg p17:p(V +), reg sym12:cls, reg base12:cls, reg guard12:L, reg r84:V, reg r85:V, reg x35:*, reg x36:V, reg c23:L, reg x38:V, reg dr20:V, reg dc10:L, reg dx26:V, reg dx27:V, reg r86:V, reg c24:L, reg x39:*, reg x40:V, reg c25:L, reg x42:V, reg dr22:V, reg dc11:L, reg dx28:V, reg dx29:V, reg r87:V, reg dx30:V, reg x43:*, reg x44:V, reg c26:L, reg x46:V, reg dr24:V, reg dc12:L, reg dx31:V, reg dx32:V, reg r88:V, reg c27:L, reg dx34:V, reg dr26:V, reg dc13:L, reg dx35:V, reg x47:*, reg x48:V, reg c28:L, reg dx37:V, reg x50:V, reg dr28:V, reg dc14:L, reg dx39:V, reg dx40:V, reg dx41:V, reg r89:V, reg __2:cls, reg r90:V, reg c29:cls, reg r91:V, reg p18:p(V +), reg ddd1:dots?, reg xlab1:*, reg xlab2:V, reg p19:p(V +), reg ylab1:*, reg ylab2:V, reg p20:p(V +), reg both6:*, reg both7:V, reg r95:V, reg c30:L, reg main5:*, reg main6:V, reg p21:p(V +), reg r97:V, reg lines:cls, reg xx8:*, reg xx9:V, reg p22:p(V +), reg x51:*, reg x52:V, reg c31:L, reg x54:V, reg dr30:V, reg dc15:L, reg dx42:V, reg dx43:V, reg r99:V, reg p23:p(V +), reg par_fit1:*, reg par_fit2:V, reg c32:L, reg par_fit4:V, reg dr32:V, reg dc16:L, reg dx44:V, reg dx45:V, reg r101:V, reg p24:p(V +), reg par_fit5:*, reg par_fit6:V, reg c33:L, reg par_fit8:V, reg dr34:V, reg dc17:L, reg dx46:V, reg dx47:V, reg r103:V, reg p25:p(V +), reg r105:V, reg points:cls, reg xx10:*, reg xx11:V, reg c34:L, reg xx13:V, reg dr36:V, reg dc18:L, reg dx48:V, reg dx49:V, reg x55:*, reg x56:V, reg c35:L, reg xx15:V, reg x58:V, reg dr38:V, reg dc19:L, reg dx50:V, reg xx17:V, reg dx51:V, reg r106:V, reg __3:cls, reg r107:V, reg p26:p(V +), reg x59:*, reg x60:V, reg c36:L, reg x62:V, reg dr40:V, reg dc20:L, reg dx52:V, reg dx53:V, reg r109:V, reg c37:L, reg dx55:V, reg dr42:V, reg dc21:L, reg dx56:V, reg dx57:V, reg x63:*, reg x64:V, reg c38:L, reg dx59:V, reg x66:V, reg dr44:V, reg dc22:L, reg dx61:V, reg dx62:V, reg dx63:V, reg r110:V, reg __4:cls, reg r111:V, reg p27:p(V +), reg par_fit9:*, reg par_fit10:V, reg c39:L, reg par_fit12:V, reg dr46:V, reg dc23:L, reg dx64:V, reg dx65:V, reg r113:V, reg p28:p(V +), reg par_fit13:*, reg par_fit14:V, reg c40:L, reg par_fit16:V, reg dr48:V, reg dc24:L, reg dx66:V, reg dx67:V, reg r115:V, reg p29:p(V +), reg par_fit17:*, reg par_fit18:V, reg c41:L, reg par_fit20:V, reg dr50:V, reg dc25:L, reg dx68:V, reg dx69:V, reg r117:V, reg p30:p(V +), reg r119:V, reg grid1:*, reg grid2:V, reg c42:L, reg grid3:cls, reg r120:V, reg both8:*, reg both9:V, reg c43:L, reg plot1:cls, reg x67:*, reg x68:V, reg p31:p(V +), reg cy:*, reg cy1:V, reg p32:p(V +), reg xlab3:*, reg xlab4:V, reg p33:p(V +), reg paste1:cls, reg ylab3:*, reg ylab4:V, reg p34:p(V +), reg r126:V, reg p35:p(V +), reg sym13:cls, reg base13:cls, reg guard13:L, reg r128:V, reg r129:V, reg cy2:*, reg cy3:V, reg cf:*, reg cf1:V, reg range:cls, reg r130:V, reg p36:p(V +), reg ddd2:dots?, reg r132:V, reg x69:*, reg x70:V, reg c44:L, reg r134:I, reg x72:V, reg dr52:V, reg dc26:L, reg dx70:V, reg r136:I, reg dx71:V, reg r137:V, reg r138:V, reg lines1:cls, reg x73:*, reg x74:V, reg p37:p(V +), reg cf2:*, reg cf3:V, reg p38:p(V +), reg par_fit21:*, reg par_fit22:V, reg c45:L, reg par_fit24:V, reg dr54:V, reg dc27:L, reg dx72:V, reg dx73:V, reg r141:V, reg p39:p(V +), reg par_fit25:*, reg par_fit26:V, reg c46:L, reg par_fit28:V, reg dr56:V, reg dc28:L, reg dx74:V, reg dx75:V, reg r143:V, reg p40:p(V +), reg r145:V, reg points1:cls, reg x75:*, reg x76:V, reg c47:L, reg x78:V, reg dr58:V, reg dc29:L, reg dx76:V, reg dx77:V, reg i:*, reg i1:V, reg __5:cls, reg r146:V, reg p41:p(V +), reg cy4:*, reg cy5:V, reg c48:L, reg cy7:V, reg dr60:V, reg dc30:L, reg dx78:V, reg dx79:V, reg i2:*, reg i3:V, reg __6:cls, reg r148:V, reg p42:p(V +), reg par_fit29:*, reg par_fit30:V, reg c49:L, reg par_fit32:V, reg dr62:V, reg dc31:L, reg dx80:V, reg dx81:V, reg r150:V, reg p43:p(V +), reg par_fit33:*, reg par_fit34:V, reg c50:L, reg par_fit36:V, reg dr64:V, reg dc32:L, reg dx82:V, reg dx83:V, reg r152:V, reg p44:p(V +), reg par_fit37:*, reg par_fit38:V, reg c51:L, reg par_fit40:V, reg dr66:V, reg dc33:L, reg dx84:V, reg dx85:V, reg r154:V, reg p45:p(V +), reg r156:V, reg grid4:*, reg grid5:V, reg c52:L, reg formals:cls, reg r157:V, reg abline:cls, reg x79:*, reg x80:V, reg c53:L, reg x82:V, reg dr68:V, reg dc34:L, reg dx86:V, reg dx87:V, reg i4:*, reg i5:V, reg __7:cls, reg r158:V, reg p46:p(V +), reg Agrid:*, reg Agrid1:V, reg c54:L, reg Agrid3:V, reg dr70:V, reg dc35:L, reg dx88:V, reg dx89:V, reg r160:V, reg p47:p(V +), reg Agrid4:*, reg Agrid5:V, reg c55:L, reg Agrid7:V, reg dr72:V, reg dc36:L, reg dx90:V, reg dx91:V, reg r162:V, reg p48:p(V +), reg col_wise2:*, reg col_wise3:V, reg r164:V, reg p49:p(V +), reg r166:V, reg points2:cls, reg x83:*, reg x84:V, reg c56:L, reg x86:V, reg dr74:V, reg dc37:L, reg dx92:V, reg dx93:V, reg __8:cls, reg r168:V, reg p50:p(V +), reg cy8:*, reg cy9:V, reg c57:L, reg cy11:V, reg dr76:V, reg dc38:L, reg dx94:V, reg dx95:V, reg __9:cls, reg r170:V, reg p51:p(V +), reg r172:V, reg sym14:cls, reg base14:cls, reg guard14:L, reg r173:V, reg r174:V, reg main7:*, reg main8:V, reg c58:V, reg r175:V, reg c59:L, reg mtext:cls, reg main9:*, reg main10:V, reg p52:p(V +), reg par4:cls, reg r177:V, reg p53:p(V +), reg par5:cls, reg r179:V, reg p54:p(V +), reg par6:cls, reg r181:V, reg p55:p(V +), reg r183:V, reg sym15:cls, reg base15:cls, reg guard15:L, reg r185:V, reg r186:V, reg main11:*, reg main12:V, reg c60:V, reg r187:V, reg c61:L, reg mtext1:cls, reg main13:*, reg main14:V, reg p56:p(V +), reg par7:cls, reg r189:V, reg p57:p(V +), reg par8:cls, reg r191:V, reg p58:p(V +), reg par9:cls, reg r193:V, reg p59:p(V +), reg r195:V, reg r196:V, reg sym16:cls, reg base16:cls, reg guard16:L, reg r198:V, reg r199:V, reg invisible:cls, reg r200:V |
    mkenv;
    st x = x;
    plot_type_isMissing = missing.0(plot_type);
    if plot_type_isMissing then L0() else L1(plot_type);
  L0():
    p = prom<V +>{
      sym = ldf c;
      base = ldf c in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r1):
      return r1;
    L1():
      c = ldf c in base;
      r2 = dyn c("single", "row.wise", "col.wise");
      goto L0(r2);
    L2():
      r = dyn base("single", "row.wise", "col.wise");
      goto L0(r);
    };
    goto L1(p);
  L1(plot_type_orDefault):
    st `plot.type` = plot_type_orDefault;
    main_isMissing = missing.0(main);
    if main_isMissing then L2() else L3(main);
  L2():
    p3 = prom<V +>{
      paste = ldf paste;
      p2 = prom<V +>{
        deparse = ldf deparse;
        p1 = prom<V +>{
          x1 = ld x;
          x2 = force? x1;
          checkMissing(x2);
          c1 = `is.object`(x2);
          if c1 then L1() else L2(x2);
        L0(dx1):
          return dx1;
        L1():
          dr = tryDispatchBuiltin.1("$", x2);
          dc = getTryDispatchBuiltinDispatched(dr);
          if dc then L3() else L2(dr);
        L2(x4):
          r4 = `$`(x4, <sym call>);
          goto L0(r4);
        L3():
          dx = getTryDispatchBuiltinValue(dr);
          goto L0(dx);
        };
        r6 = dyn deparse(p1);
        return r6;
      };
      r8 = dyn paste("Isotonic regression", p2);
      return r8;
    };
    goto L3(p3);
  L3(main_orDefault):
    st main = main_orDefault;
    main2_isMissing = missing.0(main2);
    if main2_isMissing then L4("Cumulative Data and Convex Minorant") else L4(main2);
  L4(main2_orDefault):
    st main2 = main2_orDefault;
    xlab_isMissing = missing.0(xlab);
    if xlab_isMissing then L5("x0") else L5(xlab);
  L5(xlab_orDefault):
    st xlab = xlab_orDefault;
    ylab_isMissing = missing.0(ylab);
    if ylab_isMissing then L6("x$y") else L6(ylab);
  L6(ylab_orDefault):
    st ylab = ylab_orDefault;
    par_fit_isMissing = missing.0(par_fit);
    if par_fit_isMissing then L7() else L8(par_fit);
  L7():
    p4 = prom<V +>{
      sym1 = ldf list;
      base1 = ldf list in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r11):
      return r11;
    L1():
      list = ldf list in base;
      r12 = dyn list("red", 1.5, 13.0, 1.5);
      goto L0(r12);
    L2():
      r10 = dyn base1[col, cex, pch, lwd]("red", 1.5, 13.0, 1.5);
      goto L0(r10);
    };
    goto L8(p4);
  L8(par_fit_orDefault):
    st `par.fit` = par_fit_orDefault;
    mar_isMissing = missing.0(mar);
    if mar_isMissing then L9() else L10(mar);
  L9():
    p5 = prom<V +>{
      both = ld both;
      both1 = force? both;
      checkMissing(both1);
      c2 = `as.logical`(both1);
      if c2 then L2() else L0();
    L0():
      par = ldf par;
      r21 = dyn par("mar");
      return r21;
    L2():
      sym2 = ldf c;
      base2 = ldf c in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L3() else L4();
    L1(r17, r18):
      r20 = `+`(r17, r18);
      return r20;
    L3():
      c3 = ldf c in base;
      r19 = dyn c3(3.5, 2.5, 1.0, 1.0);
      goto L1(0.1, r19);
    L4():
      r16 = dyn base2(3.5, 2.5, 1.0, 1.0);
      goto L1(0.1, r16);
    };
    goto L10(p5);
  L10(mar_orDefault):
    st mar = mar_orDefault;
    mgp_isMissing = missing.0(mgp);
    if mgp_isMissing then L11() else L12(mgp);
  L11():
    p6 = prom<V +>{
      both2 = ld both;
      both3 = force? both2;
      checkMissing(both3);
      c4 = `as.logical`(both3);
      if c4 then L2() else L0();
    L0():
      par1 = ldf par;
      r26 = dyn par1("mgp");
      return r26;
    L2():
      sym3 = ldf c;
      base3 = ldf c in base;
      guard3 = `==`.4(sym3, base3);
      if guard3 then L3() else L4();
    L1(r24):
      return r24;
    L3():
      c5 = ldf c in base;
      r25 = dyn c5(1.6, 0.7, 0.0);
      goto L1(r25);
    L4():
      r23 = dyn base3(1.6, 0.7, 0.0);
      goto L1(r23);
    };
    goto L12(p6);
  L12(mgp_orDefault):
    st mgp = mgp_orDefault;
    grid_isMissing = missing.0(grid);
    if grid_isMissing then L13() else L14(grid);
  L13():
    p7 = prom<V +>{
      sym4 = ldf length;
      base4 = ldf length in base;
      guard4 = `==`.4(sym4, base4);
      if guard4 then L1() else L2();
    L0(r29):
      r32 = `<`(r29, 12);
      return r32;
    L1():
      x5 = ld x;
      x6 = force? x5;
      checkMissing(x6);
      c6 = `is.object`(x6);
      if c6 then L4() else L5(x6);
    L2():
      r28 = dyn base4(<lang `$`(x, x)>);
      goto L0(r28);
    L3(dx3):
      length = ldf length in base;
      r31 = dyn length(dx3);
      goto L0(r31);
    L4():
      dr2 = tryDispatchBuiltin.1("$", x6);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L6() else L5(dr2);
    L5(x8):
      r30 = `$`(x8, <sym x>);
      goto L3(r30);
    L6():
      dx2 = getTryDispatchBuiltinValue(dr2);
      goto L3(dx2);
    };
    goto L14(p7);
  L14(grid_orDefault):
    st grid = grid_orDefault;
    st `...` = ddd;
    match_arg = ldf `match.arg`;
    check L41() else D0();
  D0():
    deopt 1 [];
  L41():
    p8 = prom<V +>{
      plot_type1 = ld `plot.type`;
      plot_type2 = force? plot_type1;
      checkMissing(plot_type2);
      return plot_type2;
    };
    r35 = dyn match_arg(p8);
    check L42() else D1();
  D1():
    deopt 3 [r35];
  L42():
    st `plot.type` = r35;
    plot_type3 = ld `plot.type`;
    check L43() else D2();
  D2():
    deopt 5 [plot_type3];
  L43():
    plot_type4 = force? plot_type3;
    checkMissing(plot_type4);
    r36 = `!=`(plot_type4, "single");
    st both = r36;
    both4 = ld both;
    check L44() else D3();
  D3():
    deopt 10 [both4];
  L44():
    both5 = force? both4;
    checkMissing(both5);
    c7 = `as.logical`(both5);
    if c7 then L45() else L15();
  L15():
    par3 = ldf par;
    check L55() else D8();
  L19():
    sym7 = ldf `on.exit`;
    base7 = ldf `on.exit` in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L57() else L58();
  L45():
    plot_type5 = ld `plot.type`;
    check L46() else D4();
  D4():
    deopt 12 [plot_type5];
  D8():
    deopt 40 [];
  L20():
    x9 = ld x;
    check L59() else D10();
  L46():
    plot_type6 = force? plot_type5;
    checkMissing(plot_type6);
    r37 = `==`(plot_type6, "col.wise");
    st `col.wise` = r37;
    sym5 = ldf `is.null`;
    base5 = ldf `is.null` in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L47() else L48();
  L55():
    p13 = prom<V +>{
      mar3 = ld mar;
      mar4 = force? mar3;
      checkMissing(mar4);
      return mar4;
    };
    p14 = prom<V +>{
      mgp3 = ld mgp;
      mgp4 = force? mgp3;
      checkMissing(mgp4);
      return mgp4;
    };
    r53 = dyn par3[mar, mgp](p13, p14);
    check L56() else D9();
  L57():
    on_exit = ldf `on.exit` in base;
    r56 = dyn on_exit(<lang par(op)>);
    goto L20();
  L58():
    r54 = dyn base7(<lang par(op)>);
    goto L20();
  D9():
    deopt 45 [r53];
  D10():
    deopt 50 [x9];
  L16(r39):
    r40 = `!`(r39);
    c9 = `as.logical`(r40);
    if c9 then L50() else L17();
  L47():
    main3 = ld main;
    check L49() else D5();
  L48():
    r38 = dyn base5(<sym main>);
    goto L16(r38);
  L56():
    st op = r53;
    goto L19();
  L59():
    x10 = force? x9;
    checkMissing(x10);
    c12 = `is.object`(x10);
    if c12 then L61() else L62(x10);
  D5():
    deopt 18 [main3];
  L17():
    goto L18();
  L18():
    par2 = ldf par;
    check L52() else D6();
  L49():
    main4 = force? main3;
    checkMissing(main4);
    c8 = `==`(main4, NULL);
    goto L16(c8);
  L50():
    st `main.wid` = 2.0;
    goto L18();
  L60(dx5):
    c13 = `as.logical`(dx5);
    if c13 then L64() else L21();
  L61():
    dr4 = tryDispatchBuiltin.1("$", x10);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L63() else L62(dr4);
  L62(x12):
    r57 = `$`(x12, <sym isOrd>);
    goto L60(r57);
  D6():
    deopt 28 [];
  L21():
    x17 = ld x;
    check L71() else D12();
  L22(dx8):
    st xx = dx8;
    sym8 = ldf c;
    base8 = ldf c in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L84() else L85();
  L52():
    p9 = prom<V +>{
      col_wise = ld `col.wise`;
      col_wise1 = force? col_wise;
      checkMissing(col_wise1);
      c10 = `as.logical`(col_wise1);
      if c10 then L1() else L0();
    L0():
      return <int 2, 1>;
    L1():
      return <int 1, 2>;
    };
    p10 = prom<V +>{
      sym6 = ldf c;
      base6 = ldf c in base;
      guard6 = `==`.4(sym6, base6);
      if guard6 then L1() else L2();
    L0(r44):
      return r44;
    L1():
      main_wid = ld `main.wid`;
      main_wid1 = force? main_wid;
      checkMissing(main_wid1);
      c11 = ldf c in base;
      r45 = dyn c11(0.0, 0.0, main_wid1, 0.0);
      goto L0(r45);
    L2():
      r43 = dyn base6(0.0, 0.0, <sym main.wid>, 0.0);
      goto L0(r43);
    };
    p11 = prom<V +>{
      mar1 = ld mar;
      mar2 = force? mar1;
      checkMissing(mar2);
      return mar2;
    };
    p12 = prom<V +>{
      mgp1 = ld mgp;
      mgp2 = force? mgp1;
      checkMissing(mgp2);
      return mgp2;
    };
    r49 = dyn par2[mfcol, oma, mar, mgp](p9, p10, p11, p12);
    check L53() else D7();
  L63():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L60(dx4);
  L64():
    x13 = ld x;
    check L65() else D11();
  D7():
    deopt 37 [r49];
  D11():
    deopt 53 [x13];
  D12():
    deopt 56 [x17];
  L23(r63):
    st x0 = r63;
    x25 = ld x;
    check L94() else D19();
  L53():
    st op = r49;
    goto L19();
  L65():
    x14 = force? x13;
    checkMissing(x14);
    c14 = `is.object`(x14);
    if c14 then L67() else L68(x14);
  L71():
    x18 = force? x17;
    checkMissing(x18);
    c15 = `is.object`(x18);
    if c15 then L73() else L74(x18);
  L84():
    xx = ld xx;
    check L86() else D14();
  L85():
    r62 = dyn base8(<lang `-`(`[`(xx, 1), mean(diff(xx)))>, <sym xx>);
    goto L23(r62);
  D14():
    deopt 66 [xx];
  D19():
    deopt 80 [x25];
  L66(dx7):
    goto L22(dx7);
  L67():
    dr6 = tryDispatchBuiltin.1("$", x14);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L69() else L68(dr6);
  L68(x16):
    r58 = `$`(x16, <sym x>);
    goto L66(r58);
  L72(dx10):
    c16 = `is.object`(dx10);
    if c16 then L76() else L77(dx10);
  L73():
    dr8 = tryDispatchBuiltin.1("$", x18);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L75() else L74(dr8);
  L74(x20):
    r59 = `$`(x20, <sym x>);
    goto L72(r59);
  L86():
    xx1 = force? xx;
    checkMissing(xx1);
    c18 = `is.object`(xx1);
    if c18 then L87() else L88(xx1);
  L94():
    x26 = force? x25;
    checkMissing(x26);
    c20 = `is.object`(x26);
    if c20 then L96() else L97(x26);
  L24(dx21):
    mean = ldf mean;
    check L90() else D15();
  L69():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L66(dx6);
  L75():
    dx9 = getTryDispatchBuiltinValue(dr8);
    goto L72(dx9);
  L76():
    dr10 = tryDispatchBuiltin.1("[", dx10);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L78() else L77(dr10);
  L77(dx12):
    x21 = ld x;
    check L79() else D13();
  L87():
    dr14 = tryDispatchBuiltin.1("[", xx1);
    dc7 = getTryDispatchBuiltinDispatched(dr14);
    if dc7 then L89() else L88(dr14);
  L88(xx3):
    __1 = ldf `[` in base;
    r64 = dyn __1(xx3, 1);
    goto L24(r64);
  L95(dx23):
    st cy = dx23;
    sym9 = ldf cumsum;
    base9 = ldf cumsum in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L99() else L100();
  L96():
    dr16 = tryDispatchBuiltin.1("$", x26);
    dc8 = getTryDispatchBuiltinDispatched(dr16);
    if dc8 then L98() else L97(dr16);
  L97(x28):
    r71 = `$`(x28, <sym yc>);
    goto L95(r71);
  D13():
    deopt 59 [dx12, x21];
  D15():
    deopt 71 [dx21];
  L25(r73):
    st cf = r73;
    dev_hold = ldf `dev.hold`;
    check L110() else D23();
  L78():
    dx13 = getTryDispatchBuiltinValue(dr10);
    goto L22(dx13);
  L79():
    x22 = force? x21;
    checkMissing(x22);
    c17 = `is.object`(x22);
    if c17 then L81() else L82(dx12, x22);
  L89():
    dx20 = getTryDispatchBuiltinValue(dr14);
    goto L24(dx20);
  L90():
    p16 = prom<V +>{
      diff = ldf diff;
      p15 = prom<V +>{
        xx4 = ld xx;
        xx5 = force? xx4;
        checkMissing(xx5);
        return xx5;
      };
      r66 = dyn diff(p15);
      return r66;
    };
    r68 = dyn mean(p16);
    check L91() else D16();
  L98():
    dx22 = getTryDispatchBuiltinValue(dr16);
    goto L95(dx22);
  L99():
    sym10 = ldf c;
    base10 = ldf c in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L101() else L102();
  L100():
    r72 = dyn base9(<lang c(0.0, `$`(x, yf))>);
    goto L25(r72);
  D16():
    deopt 73 [dx21, r68];
  D23():
    deopt 98 [];
  L26(r75):
    cumsum = ldf cumsum in base;
    r78 = dyn cumsum(r75);
    check L109() else D22();
  L80(dx18, dx19):
    __ = ldf `[` in base;
    r61 = dyn __(dx18, dx19);
    goto L22(r61);
  L81():
    dr12 = tryDispatchBuiltin.1("$", x22);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L83() else L82(dx12, dr12);
  L82(dx15, x24):
    r60 = `$`(x24, <sym ord>);
    goto L80(dx15, r60);
  L91():
    r69 = `-`(dx21, r68);
    xx6 = ld xx;
    check L92() else D17();
  L101():
    x29 = ld x;
    check L103() else D20();
  L102():
    r74 = dyn base10(0.0, <lang `$`(x, yf)>);
    goto L26(r74);
  L110():
    r79 = dyn dev_hold();
    check L111() else D24();
  D17():
    deopt 75 [xx6];
  D20():
    deopt 89 [x29];
  D22():
    deopt 95 [r78];
  D24():
    deopt 99 [r79];
  L83():
    dx17 = getTryDispatchBuiltinValue(dr12);
    goto L80(dx12, dx17);
  L92():
    xx7 = force? xx6;
    checkMissing(xx7);
    c19 = ldf c in base;
    r70 = dyn c19(r69, xx7);
    check L93() else D18();
  L103():
    x30 = force? x29;
    checkMissing(x30);
    c21 = `is.object`(x30);
    if c21 then L105() else L106(x30);
  L109():
    goto L25(r78);
  L111():
    sym11 = ldf `on.exit`;
    base11 = ldf `on.exit` in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L112() else L113();
  D18():
    deopt 78 [r70];
  L27():
    plot = ldf plot;
    check L114() else D25();
  L93():
    goto L23(r70);
  L104(dx25):
    c22 = ldf c in base;
    r77 = dyn c22(0.0, dx25);
    check L108() else D21();
  L105():
    dr18 = tryDispatchBuiltin.1("$", x30);
    dc9 = getTryDispatchBuiltinDispatched(dr18);
    if dc9 then L107() else L106(dr18);
  L106(x32):
    r76 = `$`(x32, <sym yf>);
    goto L104(r76);
  L112():
    on_exit1 = ldf `on.exit` in base;
    r82 = dyn on_exit1(<lang dev.flush()>);
    goto L27();
  L113():
    r80 = dyn base11(<lang dev.flush()>);
    goto L27();
  D21():
    deopt 93 [r77];
  D25():
    deopt 104 [];
  L107():
    dx24 = getTryDispatchBuiltinValue(dr18);
    goto L104(dx24);
  L108():
    goto L26(r77);
  L114():
    p17 = prom<V +>{
      x33 = ld x0;
      x34 = force? x33;
      checkMissing(x34);
      return x34;
    };
    p18 = prom<V +>{
      sym12 = ldf c;
      base12 = ldf c in base;
      guard12 = `==`.4(sym12, base12);
      if guard12 then L3() else L4();
    L0(r85):
      return r85;
    L3():
      x35 = ld x;
      x36 = force? x35;
      checkMissing(x36);
      c23 = `is.object`(x36);
      if c23 then L6() else L7(x36);
    L4():
      r84 = dyn base12(NA_LGL, <lang if(`$`(x, isOrd), `$`(x, y), `[`(`$`(x, y), `$`(x, ord)))>);
      goto L0(r84);
    L5(dx27):
      c24 = `as.logical`(dx27);
      if c24 then L9() else L1();
    L6():
      dr20 = tryDispatchBuiltin.1("$", x36);
      dc10 = getTryDispatchBuiltinDispatched(dr20);
      if dc10 then L8() else L7(dr20);
    L7(x38):
      r86 = `$`(x38, <sym isOrd>);
      goto L5(r86);
    L1():
      x43 = ld x;
      x44 = force? x43;
      checkMissing(x44);
      c26 = `is.object`(x44);
      if c26 then L16() else L17(x44);
    L2(dx30):
      c29 = ldf c in base;
      r91 = dyn c29(NA_LGL, dx30);
      goto L0(r91);
    L8():
      dx26 = getTryDispatchBuiltinValue(dr20);
      goto L5(dx26);
    L9():
      x39 = ld x;
      x40 = force? x39;
      checkMissing(x40);
      c25 = `is.object`(x40);
      if c25 then L11() else L12(x40);
    L10(dx29):
      goto L2(dx29);
    L11():
      dr22 = tryDispatchBuiltin.1("$", x40);
      dc11 = getTryDispatchBuiltinDispatched(dr22);
      if dc11 then L13() else L12(dr22);
    L12(x42):
      r87 = `$`(x42, <sym y>);
      goto L10(r87);
    L15(dx32):
      c27 = `is.object`(dx32);
      if c27 then L19() else L20(dx32);
    L16():
      dr24 = tryDispatchBuiltin.1("$", x44);
      dc12 = getTryDispatchBuiltinDispatched(dr24);
      if dc12 then L18() else L17(dr24);
    L17(x46):
      r88 = `$`(x46, <sym y>);
      goto L15(r88);
    L13():
      dx28 = getTryDispatchBuiltinValue(dr22);
      goto L10(dx28);
    L18():
      dx31 = getTryDispatchBuiltinValue(dr24);
      goto L15(dx31);
    L19():
      dr26 = tryDispatchBuiltin.1("[", dx32);
      dc13 = getTryDispatchBuiltinDispatched(dr26);
      if dc13 then L21() else L20(dr26);
    L20(dx34):
      x47 = ld x;
      x48 = force? x47;
      checkMissing(x48);
      c28 = `is.object`(x48);
      if c28 then L23() else L24(dx34, x48);
    L21():
      dx35 = getTryDispatchBuiltinValue(dr26);
      goto L2(dx35);
    L22(dx40, dx41):
      __2 = ldf `[` in base;
      r90 = dyn __2(dx40, dx41);
      goto L2(r90);
    L23():
      dr28 = tryDispatchBuiltin.1("$", x48);
      dc14 = getTryDispatchBuiltinDispatched(dr28);
      if dc14 then L25() else L24(dx34, dr28);
    L24(dx37, x50):
      r89 = `$`(x50, <sym ord>);
      goto L22(dx37, r89);
    L25():
      dx39 = getTryDispatchBuiltinValue(dr28);
      goto L22(dx34, dx39);
    };
    ddd1 = ld `...`;
    p19 = prom<V +>{
      xlab1 = ld xlab;
      xlab2 = force? xlab1;
      checkMissing(xlab2);
      return xlab2;
    };
    p20 = prom<V +>{
      ylab1 = ld ylab;
      ylab2 = force? ylab1;
      checkMissing(ylab2);
      return ylab2;
    };
    p21 = prom<V +>{
      both6 = ld both;
      both7 = force? both6;
      checkMissing(both7);
      r95 = `!`(both7);
      c30 = `as.logical`(r95);
      if c30 then L1() else L0();
    L0():
      invisible.0();
      return NULL;
    L1():
      main5 = ld main;
      main6 = force? main5;
      checkMissing(main6);
      return main6;
    };
    r97 = dyn plot[, , `...`, xlab, ylab, main](p17, p18, ddd1, p19, p20, p21);
    check L115() else D26();
  D26():
    deopt 114 [r97];
  L115():
    lines = ldf lines;
    check L116() else D27();
  D27():
    deopt 116 [];
  L116():
    p22 = prom<V +>{
      xx8 = ld xx;
      xx9 = force? xx8;
      checkMissing(xx9);
      return xx9;
    };
    p23 = prom<V +>{
      x51 = ld x;
      x52 = force? x51;
      checkMissing(x52);
      c31 = `is.object`(x52);
      if c31 then L1() else L2(x52);
    L0(dx43):
      return dx43;
    L1():
      dr30 = tryDispatchBuiltin.1("$", x52);
      dc15 = getTryDispatchBuiltinDispatched(dr30);
      if dc15 then L3() else L2(dr30);
    L2(x54):
      r99 = `$`(x54, <sym yf>);
      goto L0(r99);
    L3():
      dx42 = getTryDispatchBuiltinValue(dr30);
      goto L0(dx42);
    };
    p24 = prom<V +>{
      par_fit1 = ld `par.fit`;
      par_fit2 = force? par_fit1;
      checkMissing(par_fit2);
      c32 = `is.object`(par_fit2);
      if c32 then L1() else L2(par_fit2);
    L0(dx45):
      return dx45;
    L1():
      dr32 = tryDispatchBuiltin.1("$", par_fit2);
      dc16 = getTryDispatchBuiltinDispatched(dr32);
      if dc16 then L3() else L2(dr32);
    L2(par_fit4):
      r101 = `$`(par_fit4, <sym col>);
      goto L0(r101);
    L3():
      dx44 = getTryDispatchBuiltinValue(dr32);
      goto L0(dx44);
    };
    p25 = prom<V +>{
      par_fit5 = ld `par.fit`;
      par_fit6 = force? par_fit5;
      checkMissing(par_fit6);
      c33 = `is.object`(par_fit6);
      if c33 then L1() else L2(par_fit6);
    L0(dx47):
      return dx47;
    L1():
      dr34 = tryDispatchBuiltin.1("$", par_fit6);
      dc17 = getTryDispatchBuiltinDispatched(dr34);
      if dc17 then L3() else L2(dr34);
    L2(par_fit8):
      r103 = `$`(par_fit8, <sym lwd>);
      goto L0(r103);
    L3():
      dx46 = getTryDispatchBuiltinValue(dr34);
      goto L0(dx46);
    };
    r105 = dyn lines[, , col, lwd, type](p22, p23, p24, p25, "S");
    check L117() else D28();
  D28():
    deopt 125 [r105];
  L117():
    points = ldf points;
    check L118() else D29();
  D29():
    deopt 127 [];
  L118():
    p26 = prom<V +>{
      xx10 = ld xx;
      xx11 = force? xx10;
      checkMissing(xx11);
      c34 = `is.object`(xx11);
      if c34 then L1() else L2(xx11);
    L0(dx49):
      return dx49;
    L1():
      dr36 = tryDispatchBuiltin.1("[", xx11);
      dc18 = getTryDispatchBuiltinDispatched(dr36);
      if dc18 then L3() else L2(dr36);
    L2(xx13):
      x55 = ld x;
      x56 = force? x55;
      checkMissing(x56);
      c35 = `is.object`(x56);
      if c35 then L5() else L6(xx13, x56);
    L3():
      dx48 = getTryDispatchBuiltinValue(dr36);
      goto L0(dx48);
    L4(xx17, dx51):
      __3 = ldf `[` in base;
      r107 = dyn __3(xx17, dx51);
      goto L0(r107);
    L5():
      dr38 = tryDispatchBuiltin.1("$", x56);
      dc19 = getTryDispatchBuiltinDispatched(dr38);
      if dc19 then L7() else L6(xx13, dr38);
    L6(xx15, x58):
      r106 = `$`(x58, <sym iKnots>);
      goto L4(xx15, r106);
    L7():
      dx50 = getTryDispatchBuiltinValue(dr38);
      goto L4(xx13, dx50);
    };
    p27 = prom<V +>{
      x59 = ld x;
      x60 = force? x59;
      checkMissing(x60);
      c36 = `is.object`(x60);
      if c36 then L2() else L3(x60);
    L1(dx53):
      c37 = `is.object`(dx53);
      if c37 then L5() else L6(dx53);
    L2():
      dr40 = tryDispatchBuiltin.1("$", x60);
      dc20 = getTryDispatchBuiltinDispatched(dr40);
      if dc20 then L4() else L3(dr40);
    L3(x62):
      r109 = `$`(x62, <sym yf>);
      goto L1(r109);
    L0(dx57):
      return dx57;
    L4():
      dx52 = getTryDispatchBuiltinValue(dr40);
      goto L1(dx52);
    L5():
      dr42 = tryDispatchBuiltin.1("[", dx53);
      dc21 = getTryDispatchBuiltinDispatched(dr42);
      if dc21 then L7() else L6(dr42);
    L6(dx55):
      x63 = ld x;
      x64 = force? x63;
      checkMissing(x64);
      c38 = `is.object`(x64);
      if c38 then L9() else L10(dx55, x64);
    L7():
      dx56 = getTryDispatchBuiltinValue(dr42);
      goto L0(dx56);
    L8(dx62, dx63):
      __4 = ldf `[` in base;
      r111 = dyn __4(dx62, dx63);
      goto L0(r111);
    L9():
      dr44 = tryDispatchBuiltin.1("$", x64);
      dc22 = getTryDispatchBuiltinDispatched(dr44);
      if dc22 then L11() else L10(dx55, dr44);
    L10(dx59, x66):
      r110 = `$`(x66, <sym iKnots>);
      goto L8(dx59, r110);
    L11():
      dx61 = getTryDispatchBuiltinValue(dr44);
      goto L8(dx55, dx61);
    };
    p28 = prom<V +>{
      par_fit9 = ld `par.fit`;
      par_fit10 = force? par_fit9;
      checkMissing(par_fit10);
      c39 = `is.object`(par_fit10);
      if c39 then L1() else L2(par_fit10);
    L0(dx65):
      return dx65;
    L1():
      dr46 = tryDispatchBuiltin.1("$", par_fit10);
      dc23 = getTryDispatchBuiltinDispatched(dr46);
      if dc23 then L3() else L2(dr46);
    L2(par_fit12):
      r113 = `$`(par_fit12, <sym col>);
      goto L0(r113);
    L3():
      dx64 = getTryDispatchBuiltinValue(dr46);
      goto L0(dx64);
    };
    p29 = prom<V +>{
      par_fit13 = ld `par.fit`;
      par_fit14 = force? par_fit13;
      checkMissing(par_fit14);
      c40 = `is.object`(par_fit14);
      if c40 then L1() else L2(par_fit14);
    L0(dx67):
      return dx67;
    L1():
      dr48 = tryDispatchBuiltin.1("$", par_fit14);
      dc24 = getTryDispatchBuiltinDispatched(dr48);
      if dc24 then L3() else L2(dr48);
    L2(par_fit16):
      r115 = `$`(par_fit16, <sym cex>);
      goto L0(r115);
    L3():
      dx66 = getTryDispatchBuiltinValue(dr48);
      goto L0(dx66);
    };
    p30 = prom<V +>{
      par_fit17 = ld `par.fit`;
      par_fit18 = force? par_fit17;
      checkMissing(par_fit18);
      c41 = `is.object`(par_fit18);
      if c41 then L1() else L2(par_fit18);
    L0(dx69):
      return dx69;
    L1():
      dr50 = tryDispatchBuiltin.1("$", par_fit18);
      dc25 = getTryDispatchBuiltinDispatched(dr50);
      if dc25 then L3() else L2(dr50);
    L2(par_fit20):
      r117 = `$`(par_fit20, <sym pch>);
      goto L0(r117);
    L3():
      dx68 = getTryDispatchBuiltinValue(dr50);
      goto L0(dx68);
    };
    r119 = dyn points[, , col, cex, pch](p26, p27, p28, p29, p30);
    check L119() else D30();
  D30():
    deopt 136 [r119];
  L119():
    grid1 = ld grid;
    check L120() else D31();
  D31():
    deopt 137 [grid1];
  L120():
    grid2 = force? grid1;
    checkMissing(grid2);
    c42 = `as.logical`(grid2);
    if c42 then L121() else L28();
  L28():
    goto L29();
  L29():
    both8 = ld both;
    check L125() else D34();
  L121():
    grid3 = ldf grid;
    check L122() else D32();
  D32():
    deopt 140 [];
  D34():
    deopt 144 [both8];
  L122():
    r120 = dyn grid3();
    check L123() else D33();
  L125():
    both9 = force? both8;
    checkMissing(both9);
    c43 = `as.logical`(both9);
    if c43 then L126() else L30();
  D33():
    deopt 141 [r120];
  L30():
    goto L39();
  L39():
    sym16 = ldf invisible;
    base16 = ldf invisible in base;
    guard16 = `==`.4(sym16, base16);
    if guard16 then L162() else L163();
  L123():
    goto L29();
  L126():
    plot1 = ldf plot;
    check L127() else D35();
  D35():
    deopt 147 [];
  L40(r199):
    popenv;
    return r199;
  L127():
    p31 = prom<V +>{
      x67 = ld x0;
      x68 = force? x67;
      checkMissing(x68);
      return x68;
    };
    p32 = prom<V +>{
      cy = ld cy;
      cy1 = force? cy;
      checkMissing(cy1);
      return cy1;
    };
    p33 = prom<V +>{
      xlab3 = ld xlab;
      xlab4 = force? xlab3;
      checkMissing(xlab4);
      return xlab4;
    };
    p35 = prom<V +>{
      paste1 = ldf paste0;
      p34 = prom<V +>{
        ylab3 = ld ylab;
        ylab4 = force? ylab3;
        checkMissing(ylab4);
        return ylab4;
      };
      r126 = dyn paste1("cumsum(", p34, ")");
      return r126;
    };
    p36 = prom<V +>{
      sym13 = ldf range;
      base13 = ldf range in base;
      guard13 = `==`.4(sym13, base13);
      if guard13 then L1() else L2();
    L0(r129):
      return r129;
    L1():
      cy2 = ld cy;
      cy3 = force? cy2;
      checkMissing(cy3);
      cf = ld cf;
      cf1 = force? cf;
      checkMissing(cf1);
      range = ldf range in base;
      r130 = dyn range(cy3, cf1);
      goto L0(r130);
    L2():
      r128 = dyn base13(<sym cy>, <sym cf>);
      goto L0(r128);
    };
    ddd2 = ld `...`;
    r132 = dyn plot1[, , type, xlab, ylab, ylim, `...`](p31, p32, "n", p33, p35, p36, ddd2);
    check L128() else D36();
  L162():
    invisible = ldf invisible in base;
    r200 = dyn invisible();
    check L164() else D55();
  L163():
    r198 = dyn base16();
    goto L40(r198);
  D36():
    deopt 159 [r132];
  D55():
    deopt 254 [r200];
  L128():
    x69 = ld x;
    check L129() else D37();
  L164():
    goto L40(r200);
  D37():
    deopt 161 [1, x69];
  L129():
    x70 = force? x69;
    checkMissing(x70);
    c44 = `is.object`(x70);
    if c44 then L131() else L132(1, x70);
  L130(r136, dx71):
    r138 = `+`(r136, dx71);
    st i = r138;
    lines1 = ldf lines;
    check L134() else D38();
  L131():
    dr52 = tryDispatchBuiltin.1("$", x70);
    dc26 = getTryDispatchBuiltinDispatched(dr52);
    if dc26 then L133() else L132(1, dr52);
  L132(r134, x72):
    r137 = `$`(x72, <sym iKnots>);
    goto L130(r134, r137);
  D38():
    deopt 167 [];
  L133():
    dx70 = getTryDispatchBuiltinValue(dr52);
    goto L130(1, dx70);
  L134():
    p37 = prom<V +>{
      x73 = ld x0;
      x74 = force? x73;
      checkMissing(x74);
      return x74;
    };
    p38 = prom<V +>{
      cf2 = ld cf;
      cf3 = force? cf2;
      checkMissing(cf3);
      return cf3;
    };
    p39 = prom<V +>{
      par_fit21 = ld `par.fit`;
      par_fit22 = force? par_fit21;
      checkMissing(par_fit22);
      c45 = `is.object`(par_fit22);
      if c45 then L1() else L2(par_fit22);
    L0(dx73):
      return dx73;
    L1():
      dr54 = tryDispatchBuiltin.1("$", par_fit22);
      dc27 = getTryDispatchBuiltinDispatched(dr54);
      if dc27 then L3() else L2(dr54);
    L2(par_fit24):
      r141 = `$`(par_fit24, <sym col>);
      goto L0(r141);
    L3():
      dx72 = getTryDispatchBuiltinValue(dr54);
      goto L0(dx72);
    };
    p40 = prom<V +>{
      par_fit25 = ld `par.fit`;
      par_fit26 = force? par_fit25;
      checkMissing(par_fit26);
      c46 = `is.object`(par_fit26);
      if c46 then L1() else L2(par_fit26);
    L0(dx75):
      return dx75;
    L1():
      dr56 = tryDispatchBuiltin.1("$", par_fit26);
      dc28 = getTryDispatchBuiltinDispatched(dr56);
      if dc28 then L3() else L2(dr56);
    L2(par_fit28):
      r143 = `$`(par_fit28, <sym lwd>);
      goto L0(r143);
    L3():
      dx74 = getTryDispatchBuiltinValue(dr56);
      goto L0(dx74);
    };
    r145 = dyn lines1[, , col, lwd](p37, p38, p39, p40);
    check L135() else D39();
  D39():
    deopt 174 [r145];
  L135():
    points1 = ldf points;
    check L136() else D40();
  D40():
    deopt 176 [];
  L136():
    p41 = prom<V +>{
      x75 = ld x0;
      x76 = force? x75;
      checkMissing(x76);
      c47 = `is.object`(x76);
      if c47 then L1() else L2(x76);
    L0(dx77):
      return dx77;
    L1():
      dr58 = tryDispatchBuiltin.1("[", x76);
      dc29 = getTryDispatchBuiltinDispatched(dr58);
      if dc29 then L3() else L2(dr58);
    L2(x78):
      i = ld i;
      i1 = force? i;
      __5 = ldf `[` in base;
      r146 = dyn __5(x78, i1);
      goto L0(r146);
    L3():
      dx76 = getTryDispatchBuiltinValue(dr58);
      goto L0(dx76);
    };
    p42 = prom<V +>{
      cy4 = ld cy;
      cy5 = force? cy4;
      checkMissing(cy5);
      c48 = `is.object`(cy5);
      if c48 then L1() else L2(cy5);
    L0(dx79):
      return dx79;
    L1():
      dr60 = tryDispatchBuiltin.1("[", cy5);
      dc30 = getTryDispatchBuiltinDispatched(dr60);
      if dc30 then L3() else L2(dr60);
    L2(cy7):
      i2 = ld i;
      i3 = force? i2;
      __6 = ldf `[` in base;
      r148 = dyn __6(cy7, i3);
      goto L0(r148);
    L3():
      dx78 = getTryDispatchBuiltinValue(dr60);
      goto L0(dx78);
    };
    p43 = prom<V +>{
      par_fit29 = ld `par.fit`;
      par_fit30 = force? par_fit29;
      checkMissing(par_fit30);
      c49 = `is.object`(par_fit30);
      if c49 then L1() else L2(par_fit30);
    L0(dx81):
      return dx81;
    L1():
      dr62 = tryDispatchBuiltin.1("$", par_fit30);
      dc31 = getTryDispatchBuiltinDispatched(dr62);
      if dc31 then L3() else L2(dr62);
    L2(par_fit32):
      r150 = `$`(par_fit32, <sym col>);
      goto L0(r150);
    L3():
      dx80 = getTryDispatchBuiltinValue(dr62);
      goto L0(dx80);
    };
    p44 = prom<V +>{
      par_fit33 = ld `par.fit`;
      par_fit34 = force? par_fit33;
      checkMissing(par_fit34);
      c50 = `is.object`(par_fit34);
      if c50 then L1() else L2(par_fit34);
    L0(dx83):
      return dx83;
    L1():
      dr64 = tryDispatchBuiltin.1("$", par_fit34);
      dc32 = getTryDispatchBuiltinDispatched(dr64);
      if dc32 then L3() else L2(dr64);
    L2(par_fit36):
      r152 = `$`(par_fit36, <sym cex>);
      goto L0(r152);
    L3():
      dx82 = getTryDispatchBuiltinValue(dr64);
      goto L0(dx82);
    };
    p45 = prom<V +>{
      par_fit37 = ld `par.fit`;
      par_fit38 = force? par_fit37;
      checkMissing(par_fit38);
      c51 = `is.object`(par_fit38);
      if c51 then L1() else L2(par_fit38);
    L0(dx85):
      return dx85;
    L1():
      dr66 = tryDispatchBuiltin.1("$", par_fit38);
      dc33 = getTryDispatchBuiltinDispatched(dr66);
      if dc33 then L3() else L2(dr66);
    L2(par_fit40):
      r154 = `$`(par_fit40, <sym pch>);
      goto L0(r154);
    L3():
      dx84 = getTryDispatchBuiltinValue(dr66);
      goto L0(dx84);
    };
    r156 = dyn points1[, , col, cex, pch](p41, p42, p43, p44, p45);
    check L137() else D41();
  D41():
    deopt 185 [r156];
  L137():
    grid4 = ld grid;
    check L138() else D42();
  D42():
    deopt 186 [grid4];
  L138():
    grid5 = force? grid4;
    checkMissing(grid5);
    c52 = `as.logical`(grid5);
    if c52 then L139() else L31();
  L31():
    goto L32();
  L32():
    points2 = ldf points;
    check L145() else D47();
  L139():
    formals = ldf formals;
    check L140() else D43();
  D43():
    deopt 189 [];
  D47():
    deopt 207 [];
  L140():
    r157 = dyn formals("grid");
    check L141() else D44();
  L145():
    p50 = prom<V +>{
      x83 = ld x0;
      x84 = force? x83;
      checkMissing(x84);
      c56 = `is.object`(x84);
      if c56 then L1() else L2(x84);
    L0(dx93):
      return dx93;
    L1():
      dr74 = tryDispatchBuiltin.1("[", x84);
      dc37 = getTryDispatchBuiltinDispatched(dr74);
      if dc37 then L3() else L2(dr74);
    L2(x86):
      __8 = ldf `[` in base;
      r168 = dyn __8(x86, -1);
      goto L0(r168);
    L3():
      dx92 = getTryDispatchBuiltinValue(dr74);
      goto L0(dx92);
    };
    p51 = prom<V +>{
      cy8 = ld cy;
      cy9 = force? cy8;
      checkMissing(cy9);
      c57 = `is.object`(cy9);
      if c57 then L1() else L2(cy9);
    L0(dx95):
      return dx95;
    L1():
      dr76 = tryDispatchBuiltin.1("[", cy9);
      dc38 = getTryDispatchBuiltinDispatched(dr76);
      if dc38 then L3() else L2(dr76);
    L2(cy11):
      __9 = ldf `[` in base;
      r170 = dyn __9(cy11, -1);
      goto L0(r170);
    L3():
      dx94 = getTryDispatchBuiltinValue(dr76);
      goto L0(dx94);
    };
    r172 = dyn points2(p50, p51);
    check L146() else D48();
  D44():
    deopt 191 [r157];
  D48():
    deopt 210 [r172];
  L141():
    st Agrid = r157;
    abline = ldf abline;
    check L142() else D45();
  L146():
    sym14 = ldf `is.null`;
    base14 = ldf `is.null` in base;
    guard14 = `==`.4(sym14, base14);
    if guard14 then L147() else L148();
  D45():
    deopt 194 [];
  L33(r174):
    r175 = `!`(r174);
    c59 = `as.logical`(r175);
    if c59 then L150() else L34();
  L142():
    p46 = prom<V +>{
      x79 = ld x0;
      x80 = force? x79;
      checkMissing(x80);
      c53 = `is.object`(x80);
      if c53 then L1() else L2(x80);
    L0(dx87):
      return dx87;
    L1():
      dr68 = tryDispatchBuiltin.1("[", x80);
      dc34 = getTryDispatchBuiltinDispatched(dr68);
      if dc34 then L3() else L2(dr68);
    L2(x82):
      i4 = ld i;
      i5 = force? i4;
      __7 = ldf `[` in base;
      r158 = dyn __7(x82, i5);
      goto L0(r158);
    L3():
      dx86 = getTryDispatchBuiltinValue(dr68);
      goto L0(dx86);
    };
    p47 = prom<V +>{
      Agrid = ld Agrid;
      Agrid1 = force? Agrid;
      checkMissing(Agrid1);
      c54 = `is.object`(Agrid1);
      if c54 then L1() else L2(Agrid1);
    L0(dx89):
      return dx89;
    L1():
      dr70 = tryDispatchBuiltin.1("$", Agrid1);
      dc35 = getTryDispatchBuiltinDispatched(dr70);
      if dc35 then L3() else L2(dr70);
    L2(Agrid3):
      r160 = `$`(Agrid3, <sym col>);
      goto L0(r160);
    L3():
      dx88 = getTryDispatchBuiltinValue(dr70);
      goto L0(dx88);
    };
    p48 = prom<V +>{
      Agrid4 = ld Agrid;
      Agrid5 = force? Agrid4;
      checkMissing(Agrid5);
      c55 = `is.object`(Agrid5);
      if c55 then L1() else L2(Agrid5);
    L0(dx91):
      return dx91;
    L1():
      dr72 = tryDispatchBuiltin.1("$", Agrid5);
      dc36 = getTryDispatchBuiltinDispatched(dr72);
      if dc36 then L3() else L2(dr72);
    L2(Agrid7):
      r162 = `$`(Agrid7, <sym lty>);
      goto L0(r162);
    L3():
      dx90 = getTryDispatchBuiltinValue(dr72);
      goto L0(dx90);
    };
    p49 = prom<V +>{
      col_wise2 = ld `col.wise`;
      col_wise3 = force? col_wise2;
      checkMissing(col_wise3);
      r164 = `!`(col_wise3);
      return r164;
    };
    r166 = dyn abline[v, col, lty, xpd](p46, p47, p48, p49);
    check L143() else D46();
  L147():
    main7 = ld main2;
    check L149() else D49();
  L148():
    r173 = dyn base14(<sym main2>);
    goto L33(r173);
  D46():
    deopt 203 [r166];
  D49():
    deopt 212 [main7];
  L34():
    goto L35();
  L35():
    sym15 = ldf `is.null`;
    base15 = ldf `is.null` in base;
    guard15 = `==`.4(sym15, base15);
    if guard15 then L154() else L155();
  L143():
    goto L32();
  L149():
    main8 = force? main7;
    checkMissing(main8);
    c58 = `==`(main8, NULL);
    goto L33(c58);
  L150():
    mtext = ldf mtext;
    check L151() else D50();
  D50():
    deopt 217 [];
  L36(r186):
    r187 = `!`(r186);
    c61 = `as.logical`(r187);
    if c61 then L157() else L37();
  L151():
    p52 = prom<V +>{
      main9 = ld main2;
      main10 = force? main9;
      checkMissing(main10);
      return main10;
    };
    p53 = prom<V +>{
      par4 = ldf par;
      r177 = dyn par4("cex.main");
      return r177;
    };
    p54 = prom<V +>{
      par5 = ldf par;
      r179 = dyn par5("col.main");
      return r179;
    };
    p55 = prom<V +>{
      par6 = ldf par;
      r181 = dyn par6("font.main");
      return r181;
    };
    r183 = dyn mtext[, cex, col, font](p52, p53, p54, p55);
    check L152() else D51();
  L154():
    main11 = ld main;
    check L156() else D52();
  L155():
    r185 = dyn base15(<sym main>);
    goto L36(r185);
  D51():
    deopt 225 [r183];
  D52():
    deopt 229 [main11];
  L37():
    goto L38(NULL);
  L38(r196):
    goto L39();
  L152():
    goto L35();
  L156():
    main12 = force? main11;
    checkMissing(main12);
    c60 = `==`(main12, NULL);
    goto L36(c60);
  L157():
    mtext1 = ldf mtext;
    check L158() else D53();
  D53():
    deopt 234 [];
  L158():
    p56 = prom<V +>{
      main13 = ld main;
      main14 = force? main13;
      checkMissing(main14);
      return main14;
    };
    p57 = prom<V +>{
      par7 = ldf par;
      r189 = dyn par7("cex.main");
      return r189;
    };
    p58 = prom<V +>{
      par8 = ldf par;
      r191 = dyn par8("col.main");
      return r191;
    };
    p59 = prom<V +>{
      par9 = ldf par;
      r193 = dyn par9("font.main");
      return r193;
    };
    r195 = dyn mtext1[, side, outer, cex, col, font](p56, 3.0, TRUE, p57, p58, p59);
    check L159() else D54();
  D54():
    deopt 246 [r195];
  L159():
    goto L38(r195);
  }
}