using System;
using System.Collections.Generic;

namespace WebApplication10.Models;


    public partial class Admin
    {
        public int AdminId { get; set; }

        public string Name { get; set; } = null!;

        public string Phone { get; set; } = null!;

        public string Email { get; set; } = null!;

        public string Username { get; set; } = null!;

        public string Password { get; set; } = null!;

        public virtual ICollection<AdminRole> AdminRoles { get; set; } = new List<AdminRole>();
    }
