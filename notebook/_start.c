void _start(undefined8 main_function,undefined8 _start,undefined8 param_3)

{
  undefined8 unaff_retaddr;
  undefined auStack_8 [8];
  
  __libc_start_main(main,unaff_retaddr,&stack0x00000008,__libc_csu_init,__libc_csu_fini,param_3,
                    auStack_8);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}