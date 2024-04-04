#include <linux/module.h>
#define INCLUDE_VERMAGIC
#include <linux/build-salt.h>
#include <linux/elfnote-lto.h>
#include <linux/export-internal.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

BUILD_SALT;
BUILD_LTO_INFO;

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif


static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x587f22d7, "devmap_managed_key" },
	{ 0x8d412927, "usb_alloc_urb" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0xe381584c, "usb_free_urb" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0xa38602cd, "drain_workqueue" },
	{ 0x39b4d9ae, "vmalloc_to_page" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x5b56860c, "vm_munmap" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xf61aa075, "usb_register_driver" },
	{ 0x37a0cba, "kfree" },
	{ 0xf2b182c4, "__put_devmap_managed_page_refs" },
	{ 0xa3c2810b, "vm_mmap" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xe2964344, "__wake_up" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xde48a8a1, "usb_find_interface" },
	{ 0x92997ed8, "_printk" },
	{ 0x1000e51, "schedule" },
	{ 0x5f3d61e3, "get_user_pages" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x5a6d7c11, "__free_pages" },
	{ 0x40a9b349, "vzalloc" },
	{ 0xe95070ae, "usb_submit_urb" },
	{ 0x7051667, "find_vma" },
	{ 0xbcb36fe4, "hugetlb_optimize_vmemmap_key" },
	{ 0x951b8031, "vm_insert_page" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x2364c85a, "tasklet_init" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xb8b74c02, "vm_map_ram" },
	{ 0x1d1dae16, "usb_control_msg" },
	{ 0x1d1a6865, "usb_register_dev" },
	{ 0x9d2ab8ac, "__tasklet_schedule" },
	{ 0x72a72620, "usb_set_interface" },
	{ 0xf1e046cc, "panic" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x77d0e34a, "usb_deregister" },
	{ 0x26601e5b, "current_task" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x668b19a1, "down_read" },
	{ 0x89dc5c2d, "pv_ops" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x999e8297, "vfree" },
	{ 0x998647cc, "alloc_pages" },
	{ 0xc61e9ae9, "__folio_put" },
	{ 0x1be57918, "usb_deregister_dev" },
	{ 0x29d03972, "usb_kill_urb" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0x6c31f89, "usb_init_urb" },
	{ 0xdcf9792a, "kmalloc_trace" },
	{ 0x3fd2571, "vm_unmap_ram" },
	{ 0x53b954a2, "up_read" },
	{ 0xf888ca21, "sg_init_table" },
	{ 0xf9a482f9, "msleep" },
	{ 0xe2c17b5d, "__SCT__might_resched" },
	{ 0x4c12d3f3, "kmalloc_caches" },
	{ 0x6093f1a5, "module_layout" },
};

MODULE_INFO(depends, "usbcore");

MODULE_ALIAS("usb:v1D5Cp2000d*dc*dsc*dp*ic*isc02ip*in*");
