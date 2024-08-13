using System;
using System.Collections.Generic;
using System.ComponentModel.DataAnnotations;
namespace WebApplication10.Models;

public partial class User
{






        public int UserId { get; set; }
        public string Name { get; set; } = null!;
        public DateOnly? DateOfBirth { get; set; }
        public string Phone { get; set; } = null!;
    [Required]
    [DataType(DataType.EmailAddress)]
    [Display(Name = "Email")]
    public string Email { get; set; } = null!;
        public string Address { get; set; } = null!;


    [Display(Name = "Username")]
    public string Username { get; set; } = null!;

    [Required]
    [StringLength(32, MinimumLength = 8, ErrorMessage = "Password should be between 8 and 32 characters.")]
    [DataType(DataType.Password)]
    [Display(Name = "Password")]
    public string Password { get; set; } = null!;
        public string Branch { get; set; } = null!;
        public string AccountType { get; set; } = null!;
 














    //public int UserId { get; set; }

    //public string Name { get; set; } = null!;

    //public DateOnly? DateOfBirth { get; set; }

    //public string Phone { get; set; } = null!;

    //public string Email { get; set; } = null!;

    //public string Address { get; set; } = null!;

    //public string Username { get; set; } = null!;

    //public string Password { get; set; } = null!;

    //public string Branch { get; set; } = null!;

    //public string AccountType { get; set; } = null!;
}

